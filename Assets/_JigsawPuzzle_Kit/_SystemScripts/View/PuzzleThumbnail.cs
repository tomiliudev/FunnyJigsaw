using Cysharp.Threading.Tasks;
using UniRx;
using UnityEngine.SceneManagement;

public class PuzzleThumbnail : ButtonBase
{
    string _puzzleName;
    public string PuzzleName { get { return _puzzleName; } set { _puzzleName = value; } }

    private void Start()
    {
        _onButton = OnPuzzleThumbnailClick;
    }

    private void OnPuzzleThumbnailClick(Unit _)
    {
        LoadSceneWithData("Puzzle_Classic_Smooth_TimeAttack", new TimeAttackGameController.InitData(PuzzleName)).Forget();
    }

    async UniTaskVoid LoadSceneWithData(string sceneName, ControllerBase.BaseInitData initData)
    {
        var asyncOperation = SceneManager.LoadSceneAsync(sceneName);
        await asyncOperation;

        var sence = SceneManager.GetSceneByName(sceneName);

        foreach (var root in sence.GetRootGameObjects())
        {
            ControllerBase con = root.GetComponent<ControllerBase>();
            
            if (con != null)
            {
                con.Initialize(initData);
            }
        }
    }
}
