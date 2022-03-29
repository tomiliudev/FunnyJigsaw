using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;
using System;

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
                    x.SetActive(true);
                }
            )
            .AddTo(this);
    }
}
