using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllerBase : MonoBehaviour
{
    public AudioSource musicPlayer;
    public AudioSource soundPlayer;
    public SimpleDialog _dialog;

    public class BaseInitData
    {

    }

    public virtual void Initialize(BaseInitData initData)
    {

    }
}
