using System.Collections.Generic;
using UnityEngine;

public sealed class PuzzlePartsView : MonoBehaviour
{
    [SerializeField] List<GameObject> puzzlePanelList;

    public void SetPuzzlePanelInfo(int idx, string puzzleName)
    {
        var x = puzzlePanelList[idx];
        var sprite = Resources.Load<Sprite>($"MySon/{puzzleName}");
        var puzzlePanel = x.GetComponent<PuzzlePanel>();
        puzzlePanel.SetPuzzleThumbnailImage(sprite);
        puzzlePanel.SetPuzzleName(puzzleName);
        puzzlePanel.SetBestTime(puzzleName);
    }
}
