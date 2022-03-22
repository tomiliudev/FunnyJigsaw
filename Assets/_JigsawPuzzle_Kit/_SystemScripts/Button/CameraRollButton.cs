using System;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class CameraRollButton : MonoBehaviour
{
    Button _cameraRollButton;
    // Start is called before the first frame update
    void Start()
    {
        _cameraRollButton = GetComponent<Button>();

        _cameraRollButton.OnClickAsObservable()
            .ThrottleFirst(TimeSpan.FromSeconds(1f))
            .Subscribe(
                OnCameraRollButton
            )
            .AddTo(this);
    }

    private void OnCameraRollButton(Unit _)
    {
        Debug.Log("_cameraRollButtonがクリックされた！");
    }
}
