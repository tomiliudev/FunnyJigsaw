using System.Collections.Generic;
using UniRx;
using UnityEngine;

public sealed class TimeAttackMenuController : MainMenu
{
    [SerializeField] GameObject _puzzleParts;
    [SerializeField] Transform parent;

    List<string> _clearedPuzzles = new List<string>();

    // Start is called before the first frame update
    protected void Start()
    {
        base.Start();

        PuzzlePartsView puzzlePartsView = null;
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

                    int idx = 0;
                    if (x.count <= 4)
                    {
                        idx = x.count - 1;
                    }
                    else
                    {
                        idx = x.count % 4 == 0 ? 4 - 1 : x.count % 4 - 1;
                    }

                    puzzlePartsView.SetPuzzlePanelInfo(idx, x.puzzleName);
                }
            ).AddTo(this);
    }
}
