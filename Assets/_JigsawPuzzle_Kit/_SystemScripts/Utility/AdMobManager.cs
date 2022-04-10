using System;
using Cysharp.Threading.Tasks;
using GoogleMobileAds.Api;
using UnityEngine;

public sealed class AdMobManager : SingletonMonoBehaviour<AdMobManager>
{
    private AudioSource _musicPlayer;
    private SimpleDialog _dialog;
    private int _addHintCount = 3;

    private RewardedAd rewardedAd;
    public RewardedAd RewardedAd => rewardedAd;

#if UNITY_ANDROID
            string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IPHONE
    string adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
            string adUnitId = "unexpected_platform";
#endif


    void Start()
    {
        CreateAndLoadRewardedAd();
    }

    private void CreateAndLoadRewardedAd()
    {
        // rewardedAdは使い捨てのため、広告表示の度に再生成する必要がある
        rewardedAd = new RewardedAd(adUnitId);

        // Called when an ad request has successfully loaded.
        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;

        // Called when an ad request failed to load.
        this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;

        // Called when an ad is shown.
        this.rewardedAd.OnAdOpening += HandleRewardedAdOpening;

        // Called when an ad request failed to show.
        this.rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;

        // Called when the user should be rewarded for interacting with the ad.
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;

        // Called when the ad is closed.
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;


        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }


    public void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        Debug.Log("HandleRewardedAdLoaded");
    }

    public void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        Debug.Log("HandleRewardedAdFailedToLoad");
    }

    public void HandleRewardedAdOpening(object sender, EventArgs args)
    {
        Debug.Log("HandleRewardedAdOpening");
        Time.timeScale = 0f;

        SetupMusicPlayer();
        _musicPlayer.Stop();
    }

    public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
    {
        Debug.Log("HandleRewardedAdFailedToShow");
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        Debug.Log("HandleRewardedAdClosed");
        CreateAndLoadRewardedAd();

        SetupMusicPlayer();
        _musicPlayer.Play();

        ShowDialogAsync().Forget();
    }

    private async UniTaskVoid ShowDialogAsync()
    {
        SetupDialog();
        await _dialog.ShowDialogWithData(new SimpleDialog.DialogMessage()
        {
            text = $"おめでとうございます！\nヒントの数が{_addHintCount}増えました！",
            delay = 5,
            characterId = 0
        });
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        Debug.Log("HandleUserEarnedReward");
        string type = args.Type;
        double amount = args.Amount;

        int hintCount = GameUtility.GetHintCount();
        PlayerPrefsUtility.Save(GameConfig.HintCountKey, hintCount + _addHintCount);
    }

    private void SetupMusicPlayer()
    {
        if (_musicPlayer != null) return;
        var controller = FindObjectOfType<ControllerBase>();
        _musicPlayer = controller.musicPlayer;
    }

    private void SetupDialog()
    {
        if (_dialog != null) return;
        var controller = FindObjectOfType<ControllerBase>();
        _dialog = controller._dialog;
    }
}
