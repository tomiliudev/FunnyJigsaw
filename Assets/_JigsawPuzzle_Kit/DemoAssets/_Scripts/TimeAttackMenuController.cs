using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public sealed class TimeAttackMenuController : MonoBehaviour
{
    [SerializeField] GameObject _puzzleParts;
    [SerializeField] Transform parent;

    List<string> _clearedPuzzles = new List<string>();

    // Start is called before the first frame update
    void Start()
    {
        PuzzlePartsView puzzlePartsView = new PuzzlePartsView();
        _clearedPuzzles = PlayerPrefsUtility.LoadList<string>(GameConfig.ClearedPuzzlesKey);
        _clearedPuzzles.ToObservable()
            .Select(puzzleName => (count:_clearedPuzzles.IndexOf(puzzleName) + 1, puzzleName))
            .Subscribe(
                x => {
                    if (x.count == 1 || x.count % 4 == 1)
                    {
                        var puzzleParts = Instantiate(_puzzleParts, parent, false);
                        puzzlePartsView = puzzleParts.GetComponent<PuzzlePartsView>();
                    }
                    puzzlePartsView.SetPuzzlePanelInfo(x.puzzleName);
                }
            ).AddTo(this);
    }
}
