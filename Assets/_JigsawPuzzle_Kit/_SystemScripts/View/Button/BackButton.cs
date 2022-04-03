using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class BackButton : ButtonBase
{
    [SerializeField] string _senceName;

    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnBackButton;
    }

    void OnBackButton(Unit _)
    {
        SceneManager.LoadScene(_senceName);
    }
}
