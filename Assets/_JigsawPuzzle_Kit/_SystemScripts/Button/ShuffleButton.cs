using UniRx;
using UnityEngine;

public sealed class ShuffleButton : ButtonBase
{
    PuzzleController _puzzleCon;

    void Start()
    {
        _onButton = OnShuffle;
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