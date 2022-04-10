using UniRx;

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
