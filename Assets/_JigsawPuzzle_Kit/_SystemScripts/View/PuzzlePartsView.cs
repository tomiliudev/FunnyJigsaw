using System.Collections.Generic;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public sealed class PuzzlePartsView : MonoBehaviour
{
    [SerializeField] List<GameObject> puzzleImageList;

    public void SetPuzzleImage(string puzzleName)
    {
        puzzleImageList.ToObservable()
            .Where(x => !x.activeSelf)
            .Take(1)
            .Subscribe(
                x =>
                {
                    var sprite = Resources.Load<Sprite>($"MySon/{puzzleName}");
                    x.GetComponent<Image>().sprite = sprite;
                    x.GetComponent<PuzzleThumbnail>().PuzzleName = puzzleName;
                    x.SetActive(true);
                }
            )
            .AddTo(this);
    }
}
