using UniRx;
using UnityEngine;

public sealed class NextPuzzleButton : ButtonBase
{
    [SerializeField] PuzzleClassicModel _model;

    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnNextPuzzleButton;
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
