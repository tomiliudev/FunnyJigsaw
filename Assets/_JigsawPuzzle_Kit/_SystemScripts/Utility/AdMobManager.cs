using System;
using Cysharp.Threading.Tasks;
using GoogleMobileAds.Api;
using UnityEngine;

public sealed class AdMobManager : SingletonMonoBehaviour<AdMobManager>
{
    private AudioSource _musicPlayer;
    private SimpleDialog _dialog;
    private int _addHintCount = 3;
    private PuzzleClassicModel _model;

    private RewardedAd rewardedAd;
    public RewardedAd RewardedAd => rewardedAd;

    private BannerView bannerView;
    public BannerView BannerView => bannerView;

    void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        CreateAndLoadRewardedAd();
    }

    // ---------------↓↓　リワード　↓↓-------------------

    private void CreateAndLoadRewardedAd()
    {
        // rewardedAdは使い捨てのため、広告表示の度に再生成する必要がある
        rewardedAd = new RewardedAd(GameConfig.GetRewardAdUnitId());

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
        CreateAndLoadRewardedAd();

        SetupMusicPlayer();
        _musicPlayer.Play();

        Time.timeScale = 1f;
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        Debug.Log("HandleRewardedAdClosed");
        CreateAndLoadRewardedAd();

        SetupMusicPlayer();
        _musicPlayer.Play();

        ShowDialogAsync().Forget();

        Time.timeScale = 1f;
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        Debug.Log("HandleUserEarnedReward");
        string type = args.Type;
        double amount = args.Amount;

        int hintCount = GameUtility.GetHintCount();
        PlayerPrefsUtility.Save(GameConfig.HintCountKey, hintCount + _addHintCount);

        SetupModel();
        if(_model != null) _model.UpdateRemainingHint(hintCount + _addHintCount);
    }


    // ---------------↓↓　バナー　↓↓-------------------

    public void RequestBanner()
    {
        this.bannerView = new BannerView(GameConfig.GetBannerAdUnitId(), AdSize.Banner, AdPosition.Top);

        // Called when an ad request has successfully loaded.
        this.bannerView.OnAdLoaded += this.HandleOnAdLoaded;
        // Called when an ad request failed to load.
        this.bannerView.OnAdFailedToLoad += this.HandleOnAdFailedToLoad;
        // Called when an ad is clicked.
        this.bannerView.OnAdOpening += this.HandleOnAdOpened;
        // Called when the user returned from the app after an ad click.
        this.bannerView.OnAdClosed += this.HandleOnAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);
    }

    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {

    }

    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpened event received");
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdClosed event received");
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

    private void SetupModel()
    {
        if (_model != null) return;
        _model = FindObjectOfType<PuzzleClassicModel>();
    }
}
