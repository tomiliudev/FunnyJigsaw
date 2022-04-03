using System.Collections.Generic;
using UniRx;
using UnityEngine;

public sealed class PuzzlePartsView : MonoBehaviour
{
    [SerializeField] List<GameObject> puzzlePanelList;

    public void SetPuzzlePanelInfo(string puzzleName)
    {
        puzzlePanelList.ToObservable()
            .Where(x => !x.activeSelf)
            .Take(1)
            .Subscribe(
                x =>
                {
                    var sprite = Resources.Load<Sprite>($"MySon/{puzzleName}");
                    var puzzlePanel = x.GetComponent<PuzzlePanel>();
                    puzzlePanel.SetPuzzleThumbnailImage(sprite);
                    puzzlePanel.SetPuzzleName(puzzleName);
                    puzzlePanel.SetBestTime(puzzleName);
                    x.SetActive(true);
                }
            )
            .AddTo(this);
    }
}
