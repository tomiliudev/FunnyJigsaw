using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;
using System;

public class NextPuzzleButton : MonoBehaviour
{
    [SerializeField] PuzzleClassicModel _model;
    Button _nextPuzzleButton;

    GameController _gameController;

    // Start is called before the first frame update
    void Start()
    {
        var mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        _gameController = mainCamera.GetComponent<GameController>();

        _nextPuzzleButton = GetComponent<Button>();
        _nextPuzzleButton.OnClickAsObservable()
            .ThrottleFirst(TimeSpan.FromSeconds(0.5f))
            .Subscribe(OnNextPuzzleButton)
            .AddTo(this);
    }

    void OnNextPuzzleButton(Unit _)
    {
        int puzzleCount = _gameController.PuzzleCount;
        int currentPuzzleIdx = _model.CurrentPuzzleIdx.Value;
        currentPuzzleIdx++;
        if (currentPuzzleIdx > puzzleCount - 1)
        {
            currentPuzzleIdx = 0;
        }

        _model.UpdateCurrentPuzzleIdx(currentPuzzleIdx);
    }
}
