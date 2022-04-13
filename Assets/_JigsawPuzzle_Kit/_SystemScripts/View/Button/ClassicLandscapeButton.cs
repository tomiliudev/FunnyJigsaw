using UniRx;
using UnityEngine.SceneManagement;

public sealed class ClassicLandscapeButton : ButtonBase
{
    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnClassicLandscape;
    }

    void OnClassicLandscape(Unit _)
    {
        SceneManager.LoadScene("Puzzle_Classic_Smooth_Landscape");
    }
}
