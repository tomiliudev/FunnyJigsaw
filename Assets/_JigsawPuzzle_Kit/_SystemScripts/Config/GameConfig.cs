public enum DialogId
{
    welcomeDialog
}

public sealed class GameConfig
{
    public readonly static string ClearedPuzzlesKey = "ClearedPuzzles";
    public readonly static string WelcomeDialogKey = DialogId.welcomeDialog.ToString();
}
