using System;
using UniRx;
using UnityEngine;

public sealed class TimeAttackMaskButton : ButtonBase
{
    [SerializeField] GameObject _lockText;

    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnTimeAttackMaskButton;
    }

    void OnTimeAttackMaskButton(Unit _)
    {
        _lockText.SetActive(true);
        Observable.Timer(TimeSpan.FromSeconds(2f))
            .Subscribe(_ => _lockText.SetActive(false))
            .AddTo(this);
    }
}
