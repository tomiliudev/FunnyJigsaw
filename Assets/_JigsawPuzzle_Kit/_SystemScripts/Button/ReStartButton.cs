using UniRx;

public sealed class ReStartButton : ButtonBase
{
    void Start()
    {
        _onButton = OnReStartButton;
    }

    void OnReStartButton(Unit _)
    {
        _gameController.RestartPuzzle();
        transform.parent.parent.gameObject.SetActive(false);
    }
}
