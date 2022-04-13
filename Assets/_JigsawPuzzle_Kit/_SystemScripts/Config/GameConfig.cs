public enum DialogId
{
    welcomeDialog
}

public sealed class GameConfig
{
    public readonly static string ClearedPuzzlesKey = "ClearedPuzzles";
    public readonly static string WelcomeDialogKey = DialogId.welcomeDialog.ToString();
    public readonly static string HintCountKey = "HintCount";

    public static string GetRewardAdUnitId()
    {
#if UNITY_ANDROID
            string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
            string adUnitId = "unexpected_platform";
#endif
        return adUnitId;
    }

    public static string GetBannerAdUnitId()
    {
#if UNITY_ANDROID
            string adUnitId = "ca-app-pub-3940256099942544/6300978111";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/2934735716";
#else
            string adUnitId = "unexpected_platform";
#endif
        return adUnitId;
    }

    public static string GetInterstitialAdUnitId()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-3940256099942544/1033173712";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
#else
        string adUnitId = "unexpected_platform";
#endif
        return adUnitId;
    }
}
