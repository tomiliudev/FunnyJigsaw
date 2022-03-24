using UniRx;
using UnityEngine;

public sealed class PuzzleClassicModel : MonoBehaviour
{
    IntReactiveProperty _currentPuzzleIdx = new IntReactiveProperty(0);
    public IReadOnlyReactiveProperty<int> CurrentPuzzleIdx => _currentPuzzleIdx;

    public void UpdateCurrentPuzzleIdx(int idx)
    {
        _currentPuzzleIdx.Value = idx;
    }
}
