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
        var puzzle = GameObject.FindGameObjectWithTag("Puzzle_Main");
        if (puzzle)
        {
            _puzzleCon = puzzle.GetComponent<PuzzleController>();
        }

        _shuffleButton = GetComponent<Button>();
        _shuffleButton.OnClickAsObservable()
            .ThrottleFirst(TimeSpan.FromSeconds(0.5f))
            .Subscribe(OnShuffle)
            .AddTo(this);
    }

    void OnShuffle(Unit _)
    {
        _puzzleCon?.ShufflePuzzle();
    }
}