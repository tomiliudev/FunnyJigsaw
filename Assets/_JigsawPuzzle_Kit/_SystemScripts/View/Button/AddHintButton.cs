using UniRx;

public sealed class AddHintButton : ButtonBase
{
    AdMobManager _admobManager;
    void Start()
    {
        _onButton = OnAddHintButton;
        _admobManager = FindObjectOfType<AdMobManager>();
    }

    void OnAddHintButton(Unit _)
    {
        if (_admobManager.RewardedAd.IsLoaded())
        {
            _admobManager.RewardedAd.Show();
        }
    }
}
