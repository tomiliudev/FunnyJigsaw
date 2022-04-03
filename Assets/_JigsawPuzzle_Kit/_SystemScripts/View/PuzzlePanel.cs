using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public sealed class PuzzlePanel : MonoBehaviour
{
    [SerializeField] PuzzleThumbnail _puzzleThumbnail;
    [SerializeField] Text _bestTime;

    public void SetPuzzleName(string puzzleName)
    {
        _puzzleThumbnail.PuzzleName = puzzleName;
    }

    public void SetPuzzleThumbnailImage(Sprite sprite)
    {
        _puzzleThumbnail.GetComponent<Image>().sprite = sprite;
    }

    public void SetBestTime(float bestTimeSec)
    {
        _bestTime.text = "";
    }
}
