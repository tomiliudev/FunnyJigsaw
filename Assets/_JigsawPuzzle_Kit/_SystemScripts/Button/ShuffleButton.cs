using System;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public sealed class ShuffleButton : MonoBehaviour
{
    PuzzleController _puzzleCon;
    Button _shuffleButton;

    void Start()
    {
        _shuffleButton = GetComponent<Button>();
        _shuffleButton.OnClickAsObservable()
            .ThrottleFirst(TimeSpan.FromSeconds(0.5f))
            .Subscribe(OnShuffle)
            .AddTo(this);
    }

    void OnShuffle(Unit _)
    {
        GetPuzzleController();
        _puzzleCon?.ShufflePuzzle();
    }

    void GetPuzzleController()
    {
        if (_puzzleCon) return;
        var puzzle = GameObject.FindGameObjectWithTag("Puzzle_Main");
        if (puzzle)
        {
            _puzzleCon = puzzle.GetComponent<PuzzleController>();
        }
    }
}