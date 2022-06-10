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

    private InterstitialAd interstitial;
    public InterstitialAd Interstitial => interstitial;

    void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        CreateAndLoadRewardedAd();

        RequestInterstitial();
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
        this.bannerView.OnAdLoaded += this.HandleOnBannerAdLoaded;
        // Called when an ad request failed to load.
        this.bannerView.OnAdFailedToLoad += this.HandleOnBannerAdFailedToLoad;
        // Called when an ad is clicked.
        this.bannerView.OnAdOpening += this.HandleOnBannerAdOpened;
        // Called when the user returned from the app after an ad click.
        this.bannerView.OnAdClosed += this.HandleOnBannerAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);
    }

    public void HandleOnBannerAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
    }

    public void HandleOnBannerAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {

    }

    public void HandleOnBannerAdOpened(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpened event received");
    }

    public void HandleOnBannerAdClosed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdClosed event received");
    }


    // ---------------↓↓　インタースティシャル　↓↓-------------------

    public void RequestInterstitial()
    {
        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(GameConfig.GetInterstitialAdUnitId());

        // Called when an ad request has successfully loaded.
        this.interstitial.OnAdLoaded += HandleOnInterstitialAdLoaded;
        // Called when an ad request failed to load.
        this.interstitial.OnAdFailedToLoad += HandleOnInterstitialAdFailedToLoad;
        // Called when an ad is shown.
        this.interstitial.OnAdOpening += HandleOnInterstitialAdOpening;
        // Called when the ad is closed.
        this.interstitial.OnAdClosed += HandleOnInterstitialAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);
    }

    public void HandleOnInterstitialAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
        Time.timeScale = 0f;
    }

    public void HandleOnInterstitialAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        Time.timeScale = 1f;
    }

    public void HandleOnInterstitialAdOpening(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpening event received");
        Time.timeScale = 0f;

        SetupMusicPlayer();
        _musicPlayer.Stop();
    }

    public void HandleOnInterstitialAdClosed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdClosed event received");
        if (interstitial != null)
        {
            interstitial.Destroy();
            interstitial = null;
        }
        
        RequestInterstitial();
        Time.timeScale = 1f;

        SetupMusicPlayer();
        _musicPlayer.Play();
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
