//-----------------------------------------------------------------------------------------------------	
// Script controls whole gameplay, UI and all sounds
//-----------------------------------------------------------------------------------------------------	
using System;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using UniRx;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public enum GameMode
{
	classic,
	timeAttack
}

[AddComponentMenu("Scripts/Jigsaw Puzzle/Game Controller")]
public class GameController : ControllerBase
{
	public Camera gameCamera;

	[SerializeField] GameMode _gameMode = GameMode.classic;

	// パズルのリスト
	[SerializeField] List<PuzzleController> puzzleList;
	public PuzzleController puzzle;

	[SerializeField] PuzzleClassicModel _model;

	// パズルの数
	public int PuzzleCount => puzzleList.Count;

	public bool findByTag = false;

    // Automatically align puzzle/camera with screen corners to fit puzzle with max filling
    public ScreenAnchor fitToScreenAnchor = ScreenAnchor.None;
    // Automatically align puzzle/background with camera center
    public bool alignWithCamera = false;             

    // Background (assembled puzzle preview)
    public Renderer background;
	/*public bool adjustBackground = true;*/
	public float backgroundTransparency = 0.1f;

	// Game UI
	public GameObject pauseUI;
	public GameObject winUI;
	public GameObject loseUI;
	public GameObject addHintUI;
	public Text hintCounterUI;
	public Text timerCounterUI;
	public Text piecesLeftUI;
	public Text elapsedTimeUI;
	public Toggle musicToggleUI;
	public Toggle soundToggleUI;
	[SerializeField] GameObject _inGameUI;

	// Music-related
	public AudioClip musicMain;
	public AudioClip musicWin;
	public AudioClip musicLose;

	// Sound-related
	public AudioClip soundGrab;
	public AudioClip soundDrop;
	public AudioClip soundAssemble;

	// Game rules
	public float timer;					// Time limit for level
	public int hintLimit = -1;			// Hints limit for level
	public bool invertRules = false;    // Allows to invert basic rules - i.e. player should decompose  the images

	// SimpleDialog
	[SerializeField] SimpleDialog.DialogMessage[] dialogMessages;

	// Important internal variables - please don't change them blindly
	CameraController cameraScript;
	float startTime = 0f;
	float _time;
	protected float remainingTime, elapsedTime;
	bool gameFinished = false;
	Color backgroundColor;
	static Vector3 oldPointerPosition;

	AdMobManager _admobManager;

	void LoadPuzzle(int idx)
    {
		if (puzzle != null)
        {
            DestroyImmediate(puzzle.gameObject);
            puzzle = null;
        }

		_model.UpdateCurrentPuzzleIdx(idx);
		puzzle = Instantiate(puzzleList[idx]);

        var foundObject = GameObject.FindGameObjectWithTag("Puzzle_Background");
        if (foundObject)
        {
			background = foundObject.GetComponent<Renderer>();
			backgroundColor = background.material.color;
		}
    }

	private async UniTaskVoid Start()
    {
        if (_gameMode == GameMode.classic)
        {
			_admobManager = FindObjectOfType<AdMobManager>();

			_model.CurrentPuzzleIdx
			.SkipLatestValueOnSubscribe()// Subscribe時のOnNextをSkip
			.Subscribe(
				idx =>
				{
					LoadPuzzle(idx);
					RestartPuzzle();

					if (_admobManager.Interstitial.IsLoaded())
					{
						int rand = UnityEngine.Random.Range(0, 100);
						if(rand >= 50) _admobManager.Interstitial.Show();
					}
				})
			.AddTo(this);

			_model.RemainingHint
				.Subscribe(
					remainingHint =>
                    {
						if(hintCounterUI) hintCounterUI.text = remainingHint.ToString();
					}
				)
				.AddTo(this);
		}

		if(dialogMessages != null && dialogMessages.Count() > 0)
        {
			foreach (SimpleDialog.DialogMessage message in dialogMessages)
            {
				await _dialog.ShowDialogWithData(message);
			}
		}
    }


    //=====================================================================================================
    // Initialize
    protected void OnEnable () 
	{
         // Prepare Camera
        if (!gameCamera) 
			gameCamera = Camera.main;
		
		gameCamera.orthographic = true;
		cameraScript = gameCamera.GetComponent<CameraController>();

		// Prepare AudioSources for soundPlayer and musicPlayer
		if (!soundPlayer   &&   (soundGrab  ||  soundDrop  ||  soundAssemble))
			soundPlayer = gameObject.AddComponent<AudioSource>();
		
		if (!musicPlayer   &&   (musicMain  ||  musicWin  ||  musicLose)) 
			musicPlayer = gameObject.AddComponent<AudioSource>();

		if (_gameMode == GameMode.classic)
		{
			// パズルをロードする
			int idx = 0;

			List<string> clearedPuzzles = PlayerPrefsUtility.LoadList<string>(GameConfig.ClearedPuzzlesKey);
			clearedPuzzles = clearedPuzzles.Select(x => $"Puzzle_{x}_5x5").ToList();
			var notClearedPuzzles = puzzleList.Select(x => x.name).Except(clearedPuzzles);
            if (notClearedPuzzles.Count() > 0)
            {
				// すべてクリア済みではないのであれば、一番先頭の未クリアのパズルを参照する
				var notClearedPuzzle = puzzleList.First(x => x.name == notClearedPuzzles.ElementAt(0));
				idx = puzzleList.IndexOf(notClearedPuzzle);
			}
            else
            {
				// すべてクリア済みの場合はシャッフルする
				puzzleList = puzzleList.OrderBy(x => Guid.NewGuid()).ToList();
			}

			LoadPuzzle(idx);
        }

		RestartPuzzle();

		// Load saved data
		Load ();
		LoadAudioActivity();

        PlayMusic (musicMain, true); 

		// Prepare UI (disable all redudant at start)   
		if (winUI) 
			winUI.SetActive(false);
		
		if (loseUI)
			loseUI.SetActive(false);
		
		if (pauseUI) 
			pauseUI.SetActive(false);

		if (timerCounterUI) timerCounterUI.gameObject.SetActive(timer > 0);
		if (_gameMode == GameMode.timeAttack)
        {
			startTime = Time.time;
		}

		Cursor.lockState = CursorLockMode.Confined;

        if (!puzzle)
        {
            this.enabled = false;
            return;
        }

        // Initiate puzzle and prepare background
        if (StartPuzzle(puzzle))
        {
            puzzle.SetPiecesActive(true);
            PrepareBackground(background);
        }

        // Align with Camera if needed
        if (alignWithCamera)
            puzzle.AlignWithCameraCenter(gameCamera, (puzzle.anchoring == PuzzleAnchor.Center), true);

        // Align with screen corners
        if (fitToScreenAnchor != ScreenAnchor.None)
        {
            puzzle.FitToScreen(gameCamera, fitToScreenAnchor);
            cameraScript.ReInit();
        }
    }

	//-----------------------------------------------------------------------------------------------------	
	// Main game cycle
	void Update () 
	{
		if (Input.GetKeyUp(KeyCode.Escape)) Pause ();
		
		_inGameUI.SetActive(!gameFinished && !_dialog.IsDialogActive);

		if (puzzle  &&  Time.timeScale > 0  &&  !gameFinished)
		{
			// Process puzzle and react on it state
            switch (puzzle.ProcessPuzzle (
                                            GetPointerPosition(gameCamera),
                                            Input.GetMouseButton(0)  &&  
											(!cameraScript || !cameraScript.IsCameraMoved())  
											&&  ((puzzle.GetCurrentPiece()==null 
											&& !EventSystem.current.IsPointerOverGameObject())  
											||  puzzle.GetCurrentPiece() != null),
                                            GetRotationDirection()
                                          ) )
			{
				case PuzzleState.None:
					;
					break;

				case PuzzleState.DragPiece:
					PlaySound(soundGrab);
					break;

				case PuzzleState.ReturnPiece:
					PlaySound(soundAssemble);
					break;

				case PuzzleState.DropPiece:
					PlaySound(soundDrop);
                    break;

				// Hide all pieces and finish game - if whole puzzle Assembled 	
				case PuzzleState.PuzzleAssembled:
					DoWin();
					break;	
			}

            if (_gameMode == GameMode.classic)
            {
				ProcessTimer();
            }
            else
            {
				if (elapsedTimeUI) elapsedTimeUI.text = GetElapsedTime(ReturnElapsedTime());
			}
		}
		// Show background (assembled puzzle) if gameFinished
		else if (gameFinished  &&  (!loseUI  ||  (loseUI && !loseUI.activeSelf)))
        {
			if (!invertRules) ShowBackground();
		}

        // Control Camera   
        if (cameraScript && puzzle)
        {
			// if (puzzle.GetCurrentPiece() == null)  cameraScript.ManualUpdate();
			cameraScript.enabled = (puzzle.GetCurrentPiece() == null);
		}
           
		if (piecesLeftUI) piecesLeftUI.text = puzzle.remainingPieces.ToString() + " / " + puzzle.pieces.Length.ToString();
	}

	protected virtual void DoWin()
    {
		// クリアしたパズル名を取得する
		string clearedPuzzleName = background.name.Replace("_background", "");

		if (_gameMode == GameMode.classic)
        {
			// クリアしたパズルを記録する
			List<string> clearedPuzzles = PlayerPrefsUtility.LoadList<string>(GameConfig.ClearedPuzzlesKey);
			if (!clearedPuzzles.Contains(clearedPuzzleName))
			{
				clearedPuzzles.Add(clearedPuzzleName);
				PlayerPrefsUtility.SaveList(GameConfig.ClearedPuzzlesKey, clearedPuzzles);
			}

			_dialog.ShowDialog("やった！次も頑張ろう！", 0, false);
		}

        if (background && !invertRules)
		{
			puzzle.SetPiecesActive(false);
		}

		if (winUI)
		{
			winUI.SetActive(true);
		}
		
		PlayMusic(musicWin, false);
		gameFinished = true;
	}

	//-----------------------------------------------------------------------------------------------------
	protected float ReturnElapsedTime()
    {
		elapsedTime = Mathf.Abs(Time.time - startTime);
		return elapsedTime;
	}

	protected string GetElapsedTime(float _elapsedTime)
	{
		return GameUtility.SecondsToTimeString(_elapsedTime);
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Get current pointer(mouse or single touch) position  
	static Vector3 GetPointerPosition (Camera _camera) 
	{
		Vector3 pointerPosition = oldPointerPosition;

        // For mobile/desktop
        if (Input.touchCount > 0)  
           pointerPosition = oldPointerPosition = _camera.ScreenToWorldPoint(Input.GetTouch(0).position);
          else
           pointerPosition = oldPointerPosition = _camera.ScreenToWorldPoint(Input.mousePosition);


        return pointerPosition;
	}

    //-----------------------------------------------------------------------------------------------------	 
    // Get current rotation basing on mouse or touches
    float GetRotationDirection () 
	{
        float rotation = 0;

         // For Desktop - just set rotation to "clockwise" (don't change the permanent speed)
		#if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WEBPLAYER || UNITY_WEBGL
			if (Input.GetMouseButton(1))
                rotation = 1;
        #else // For mobile - calculate angle changing between touches and use it.
        if(puzzle.gradualRotation)
		   foreach(Touch touch in Input.touches) 
		   {
			 if (touch.tapCount == 2) 
				  rotation = 1;	
		   } 
		  else
			if (Input.touchCount > 1)  
				{
						// If there are two touches on the device... Store both touches.
						Touch touchZero = Input.GetTouch (0);
						Touch touchOne 	= Input.GetTouch (1);

						// Find the angle between positions.
						float currentAngle = Vector2.SignedAngle(touchZero.position, touchOne.position); 
						float previousAngle = Vector2.SignedAngle(touchZero.position - touchZero.deltaPosition, touchOne.position - touchOne.deltaPosition);

						rotation = currentAngle - previousAngle;
				}
                 //Alternative (sign/direction based):  // rotation = (int)Mathf.Sign(Vector2.SignedAngle(Vector2.up, Input.GetTouch(1).position-Input.GetTouch(0).position));
        #endif

        return rotation;
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Switch puzzle and background to another
	public void SwitchPuzzle (PuzzleController _puzzle, Renderer _background = null)
	{
		if (_puzzle  &&  _puzzle != puzzle) 
			StartPuzzle (_puzzle);
		
		if (_background  &&  _background != background) 
			PrepareBackground (_background);
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Prepare puzzle and Decompose it if needed
	public bool StartPuzzle (PuzzleController _puzzle)
	{
		if (!_puzzle) 
			_puzzle = gameObject.GetComponent<PuzzleController>();
		
		if (!_puzzle) 
		{
			Debug.LogWarning("<b>PuzzleKit::GameController:</b> <i>PuzzleController</i> should be assigned to <i>puzzle</i> property - please check " + gameObject.name, gameObject);  
			return false;
		}


        if (puzzle.pieces == null || puzzle.pieces.Length == 0)
            puzzle.Prepare();


        if (puzzle  &&  puzzle != _puzzle) 
			puzzle.gameObject.SetActive(false);

        puzzle = _puzzle;
		puzzle.gameObject.SetActive(true); 


		if (!PlayerPrefs.HasKey (puzzle.name + "_Positions")  ||  !puzzle.enablePositionSaving)
			if (!invertRules) 
				puzzle.DecomposePuzzle (); 
			else
				puzzle.NonrandomPuzzle ();


		puzzle.invertedRules = invertRules;

		gameFinished = false;

		return true;
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Show background (assembled puzzle)
	void ShowBackground () 
	{
		if (background  &&  backgroundColor.a < 1) 
		{
			backgroundColor.a = Mathf.Lerp (backgroundColor.a, 1.0f, Time.deltaTime); 
			background.material.color = backgroundColor;
		}
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Prepare background (assembled puzzle)
	void PrepareBackground (Renderer _background = null) 
	{
        // Try to get BG from first puzzle child        
        if (!_background && puzzle)
        {
            Transform tmp = puzzle.thisTransform.GetChild(0);
            if (!_background && puzzle && tmp.tag == "Puzzle_Background")
                _background = tmp.GetComponent<Renderer>();
        }

        
        // Adjust background
        if (_background)
        {
           if (background)
                background.gameObject.SetActive(false);

            background = _background;
            background.gameObject.SetActive(true);

            backgroundColor = background.material.color;

            if (backgroundTransparency < 1.0f)
            {
                backgroundColor.a = backgroundTransparency;
                background.material.color = backgroundColor;
            }

           /* if (adjustBackground)
                AdjustBackground(); */

        }
		else 
			background = null;

	}

    //-----------------------------------------------------------------------------------------------------	
    // Automatically align camera with background
    public void AlignCameraWithBackground(float _sizeTuner = 0)
    {
        if (!cameraScript)   return;


        cameraScript.enabled = false;

        if (gameCamera.aspect > 1)
            gameCamera.orthographicSize = background.bounds.size.x / (gameCamera.aspect * 2) + _sizeTuner;
        else
            gameCamera.orthographicSize = background.bounds.size.x - gameCamera.aspect + _sizeTuner;

        cameraScript.ReturnCamera();
        cameraScript.SetInitialZoom(gameCamera.orthographicSize);
        cameraScript.enabled = true;
    }

    //-----------------------------------------------------------------------------------------------------	
    // Adjust background to puzzle
    public void AdjustBackground () 
	{
		if (background  /*&&  background.transform.parent != puzzle.transform*/)  
		{
            background.transform.parent = puzzle.transform;
            background.transform.SetAsFirstSibling();
            background.transform.localPosition = new Vector3(0, 0, 0.2f);


            // Try to adjust background size according to puzzle bounds
            if (background as SpriteRenderer)
			{
				// Temporarily reset Puzzle rotation 
				Quaternion tmpRotation = puzzle.transform.rotation;
				puzzle.transform.localRotation = Quaternion.identity;

				// Reset background transform
				background.transform.localRotation = Quaternion.identity;	
				background.transform.localScale = Vector3.one;


                // Calculate background scale  to make it the same size as puzzle
                background.transform.localScale = new Vector3(puzzle.puzzleBounds.size.x/background.bounds.size.x, puzzle.puzzleBounds.size.y/background.bounds.size.y, background.transform.localScale.z);	
				
                // Aligned background position
				//background.transform.position = new Vector3(puzzle.puzzleBounds.min.x, puzzle.puzzleBounds.max.y, background.transform.position.z);

                // Shift background if it's origin not in LeftTop corner 		 			 	
                if (Mathf.Abs(background.bounds.min.x - puzzle.puzzleBounds.min.x) > 1  ||  Mathf.Abs(background.bounds.max.y - puzzle.puzzleBounds.max.y) > 1)
					background.transform.localPosition = new Vector3(background.transform.localPosition.x - background.bounds.extents.x,  background.transform.localPosition.y + background.bounds.extents.y,  background.transform.localPosition.z);
                               
                // Return proprer puzzle rotation
                puzzle.transform.localRotation = tmpRotation;
			}

		}

	}

    //-----------------------------------------------------------------------------------------------------	 
    // Show Hint and update remainingHints
    public void ShowHint () 
	{
        if (gameFinished) return;

		int remainingHints = _model.RemainingHint.Value;
		if (remainingHints <= 0)
        {
			SwitchOnHintUi();
			return;
        }

		remainingHints--;
		_model.UpdateRemainingHint(remainingHints);
		PlayerPrefsUtility.Save(GameConfig.HintCountKey, remainingHints);

		puzzle.ReturnPiece (-1);
		
		if (soundPlayer  &&  soundPlayer.enabled) 
			soundPlayer.PlayOneShot(soundAssemble);
	}

	public void SwitchOnHintUi()
    {
		if (addHintUI != null) addHintUI.SetActive(true);
		Time.timeScale = 0f;
	}

	public void SwitchOffHintUi()
    {
		if (addHintUI != null) addHintUI.SetActive(false);
		Time.timeScale = 1f;
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Process Timer
	void ProcessTimer () 
	{
		if (timer > 0 && gameFinished == false)
        {
			if (_dialog.IsDialogActive)
            {
				return;
            }

			_time += Time.deltaTime;

			if (timer < _time)
			{ // Lose game if time is out
				PlayMusic(musicLose, false);

				if (loseUI)
				{
					loseUI.SetActive(true);
				}

				_dialog.ShowDialog("ざんねん！また頑張ろう！", 1, true);

				gameFinished = true;
			}
			else
			{
				if (timerCounterUI)
				{
					float minutes_tmp = (int)(Mathf.Abs(_time - timer) / 60);
					float seconds_tmp = (int)(Mathf.Abs(_time - timer) % 60);

					seconds_tmp = (seconds_tmp == 60) ? 0 : seconds_tmp;

					timerCounterUI.text = minutes_tmp.ToString() + ":" + seconds_tmp.ToString("00");
				}
			}
		}
    }

	//-----------------------------------------------------------------------------------------------------	 
	// Pause game and show pauseUI
	public void Pause () 
	{
        if (Time.timeScale > 0 )
		{
			Time.timeScale = 0;
            Cursor.lockState = CursorLockMode.None;
            if (pauseUI) 
				pauseUI.SetActive(true);
		}
		else  
		{
			Time.timeScale = 1;
            Cursor.lockState = CursorLockMode.Confined;
            if (pauseUI) 
				pauseUI.SetActive(false);
		}
	}


    //-----------------------------------------------------------------------------------------------------	 
    // Reset current puzzle
    public void ResetPuzzle()
    {
        if (puzzle == null)
            return;

        Time.timeScale = 0;

        puzzle.ResetProgress(puzzle.name);

		_time = 0f;

        PlayerPrefs.SetFloat(puzzle.name + "_timer", timer);

        puzzle.DecomposePuzzle();      

        Time.timeScale = 1.0f;
    }


	//-----------------------------------------------------------------------------------------------------	 
	// Restart current puzzle
	public void RestartPuzzle()
	{
		if (puzzle != null)
		{
			PlayerPrefs.SetString(puzzle.name, "");
			PlayerPrefs.DeleteKey(puzzle.name + "_Positions");
		}

		if (background && !invertRules)
		{
			puzzle.SetPiecesActive(true);

			if (backgroundTransparency < 1.0f)
			{
				backgroundColor.a = backgroundTransparency;
				background.material.color = backgroundColor;
			}
		}

		_dialog.SwitchDialog(false);

		if (winUI)
        {
			winUI.SetActive(false);
		}

		PlayMusic(musicMain, true);
		gameFinished = false;

        if (_gameMode == GameMode.timeAttack)
        {
			startTime = Time.time;
			elapsedTime = 0f;
        }

		ResetPuzzle();
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Restart current level
	public void Restart () 
	{
		Time.timeScale = 1.0f;

		if (puzzle != null) 
		{
			PlayerPrefs.SetString (puzzle.name, "");
			PlayerPrefs.DeleteKey (puzzle.name + "_Positions");
			PlayerPrefs.SetFloat (puzzle.name + "_timer", timer);
		}

		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex);

	}

	//-----------------------------------------------------------------------------------------------------	 
	// Load custom level
	public void LoadLevel (int _levelId) 
	{
		Time.timeScale = 1.0f;
		SceneManager.LoadScene (_levelId);

	}

	//-----------------------------------------------------------------------------------------------------	
	// Load MusicPlayer and SoundPlayer Activity 
	void LoadAudioActivity () 
	{
		if (PlayerPrefs.HasKey("MusicPlayer")  &&  musicPlayer)  
		{
			musicPlayer.enabled = PlayerPrefs.GetInt("MusicPlayer") > 0 ? true : false;
			if (musicToggleUI) 
				musicToggleUI.isOn = musicPlayer.enabled;
		}


		if (PlayerPrefs.HasKey("SoundPlayer")  &&  soundPlayer)  
		{
			soundPlayer.enabled = PlayerPrefs.GetInt("SoundPlayer") > 0 ? true : false;
			if (soundToggleUI) 
				soundToggleUI.isOn = soundPlayer.enabled;
		}

	}

	//-----------------------------------------------------------------------------------------------------	
	// Quit the Application
	public void QuitApplication()
	{
		Application.Quit();
	}

	//-----------------------------------------------------------------------------------------------------	
	// Enable/disable music 
	void SetMusicActive (bool _enabled) 
	{
		if (musicPlayer) 
		{
			musicPlayer.enabled = _enabled;
			if (musicToggleUI)  
				musicToggleUI.isOn = _enabled;
			
			PlayerPrefs.SetInt("MusicPlayer", _enabled ? 1 : 0);
			PlayMusic (musicMain, true);
		}

	}

	//-----------------------------------------------------------------------------------------------------	 
	// Enable/disable sounds 
	void SetSoundActive (bool _enabled) 
	{
		if (soundPlayer) 
		{
			soundPlayer.enabled = _enabled;
			if (soundToggleUI)
				soundToggleUI.isOn = _enabled;
			
			PlayerPrefs.SetInt("SoundPlayer", _enabled ? 1 : 0);
		}
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Change and Play music clip
	public void PlayMusic (AudioClip _music, bool _loop) 
	{
		if (musicPlayer  &&  musicPlayer.enabled  &&  _music)
		{
			musicPlayer.loop = _loop;
			musicPlayer.clip = _music;
			musicPlayer.Play();
		}
	}

	public void PlayMusic (AudioClip _music) 
	{
		if (musicPlayer  &&  musicPlayer.enabled  &&  _music)
		{
			musicPlayer.clip = _music;
			musicPlayer.Play();
		}
	}

	//-----------------------------------------------------------------------------------------------------	 
	// Play sound clip once
	public void PlaySound (AudioClip _sound) 
	{
		if (soundPlayer  &&  soundPlayer.enabled  &&  _sound) 
			soundPlayer.PlayOneShot(_sound);

	}	  

	//-----------------------------------------------------------------------------------------------------	
	// Save progress (Assembled pieces)
	public void Save ()
	{
		if (puzzle != null) 
		{
			Debug.Log($"puzzle.name = {puzzle.name}");
			puzzle.SaveProgress (puzzle.name);
			PlayerPrefs.SetFloat (puzzle.name + "_timer", timer - elapsedTime);
		}
	}

	//-----------------------------------------------------------------------------------------------------	
	// Load puzzle (Assembled pieces)
	public void Load ()
	{
		if (!puzzle) return;

		_model.UpdateRemainingHint(GameUtility.GetHintCount());

		remainingTime = timer;

		if (_gameMode == GameMode.classic)
        {
			puzzle.LoadProgress(puzzle.name);

			if (PlayerPrefs.HasKey(puzzle.name + "_timer"))
			{
				remainingTime = PlayerPrefs.GetFloat(puzzle.name + "_timer");
			}
		}
	}

	//-----------------------------------------------------------------------------------------------------	
	// Save progress if player closes the application
	public void OnApplicationQuit() 
	{
        if (_gameMode == GameMode.classic)
        {
			Save();
			PlayerPrefs.Save();
		}
	}

	//-----------------------------------------------------------------------------------------------------
}