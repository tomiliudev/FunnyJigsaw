using UniRx;
using UnityEngine.SceneManagement;

public sealed class ClassicMySonButton : ButtonBase
{
    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnClassicMySonButton;
    }

    void OnClassicMySonButton(Unit _)
    {
        SceneManager.LoadScene("Puzzle_Classic_Smooth_MySon");
    }
}
