using UniRx;
using UnityEngine.SceneManagement;

public sealed class ClassicBackButton : ButtonBase
{
    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnClassicBackButton;
    }

    void OnClassicBackButton(Unit _)
    {
        SceneManager.LoadScene("MainMenu");
    }
}
