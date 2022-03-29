using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

public sealed class MenuButton : ButtonBase
{
    void Start()
    {
        _onButton = OnMenuButton;
    }

    void OnMenuButton(Unit _)
    {
        _gameController.Pause();
    }
}
