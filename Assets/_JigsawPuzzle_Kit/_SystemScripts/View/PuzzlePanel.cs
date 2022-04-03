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

    public void SetBestTime(string puzzleName)
    {
        string key = $"{puzzleName}_bestTime";
        float elapsedTime = PlayerPrefsUtility.Load(key, 0f);
        _bestTime.text = string.Format("Best Time:{0}", GameUtility.SecondsToTimeString(elapsedTime));
    }
}
