using UniRx;
using UnityEngine.SceneManagement;

public sealed class ClassicButton : ButtonBase
{
    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnClassicButton;
    }

    void OnClassicButton(Unit _)
    {
        SceneManager.LoadScene("ClassicMenu");
    }
}
