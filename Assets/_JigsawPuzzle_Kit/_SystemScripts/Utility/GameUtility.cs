using UnityEngine;

public sealed class GameUtility : MonoBehaviour
{
	public static string SecondsToTimeString(float _seconds)
	{
		float minutes_tmp = (int)(_seconds / 60);
		float hours_tmp = (int)(minutes_tmp / 60);
		minutes_tmp = (int)(minutes_tmp % 60);
		float seconds_tmp = (int)(_seconds % 60);
		seconds_tmp = (seconds_tmp == 60) ? 0 : seconds_tmp;

		return hours_tmp.ToString() + ":" + minutes_tmp.ToString() + ":" + seconds_tmp.ToString("00");
	}

	public static int GetHintCount()
    {
		return PlayerPrefsUtility.Load(GameConfig.HintCountKey, 3);
	}
}
