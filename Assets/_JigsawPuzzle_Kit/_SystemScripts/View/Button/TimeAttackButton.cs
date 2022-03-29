using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class TimeAttackButton : ButtonBase
{
    void Start()
    {
        _onButton = OnTimeAttackButton;
    }

    void OnTimeAttackButton(Unit _)
    {
        SceneManager.LoadScene("TimeAttackMenu");
    }
}
