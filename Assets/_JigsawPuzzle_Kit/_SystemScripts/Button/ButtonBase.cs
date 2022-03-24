using System;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class ButtonBase : MonoBehaviour
{
    protected GameController _gameController;
    protected Button _button;
    protected Action<Unit> _onButton;

    private void Awake()
    {
        var mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        _gameController = mainCamera.GetComponent<GameController>();

        _button = GetComponent<Button>();
        _button.OnClickAsObservable()
            .ThrottleFirst(TimeSpan.FromSeconds(0.5f), Scheduler.MainThreadIgnoreTimeScale)
            .Subscribe(_ => _onButton?.Invoke(_))
            .AddTo(this);
    }
}
