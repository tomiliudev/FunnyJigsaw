using UniRx;
using UnityEngine.SceneManagement;

public sealed class ClassicFamilyAndFriendButton : ButtonBase
{
    // Start is called before the first frame update
    void Start()
    {
        _onButton = OnClassicFamilyAndFriendButton;
    }

    void OnClassicFamilyAndFriendButton(Unit _)
    {
        SceneManager.LoadScene("Puzzle_Classic_Smooth_Family_And_Friend");
    }
}
