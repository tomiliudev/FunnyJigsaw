using System.Collections;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public sealed class TimeAttackGameController : GameController
{
    [SerializeField] Text _bestTime;
    [SerializeField] Text _winBestTime;
    [SerializeField] Text _winElapsedTime;

    public sealed class InitData : BaseInitData
    {
        public string puzzleName;
        public InitData(string puzzleName)
        {
            this.puzzleName = puzzleName;
        }
    }

    InitData initData;
    public override void Initialize(BaseInitData initBaseData)
    {
        initData = initBaseData as InitData;
    }

    protected async UniTaskVoid OnEnable()
    {
        await WaitUntilInitDataNotNull().ToUniTask();

        string puzzleName = initData.puzzleName;
        var puzzle = Resources.Load<PuzzleController>($"Prefabs/Puzzles/Puzzle_{puzzleName}_5x5");
        base.puzzle = Instantiate(puzzle);

        _bestTime.text = GameUtility.SecondsToTimeString(GetBestTime());

        base.OnEnable();
    }

    IEnumerator WaitUntilInitDataNotNull()
    {
        yield return new WaitUntil(()=> initData != null);
    }

    protected override void DoWin()
    {
        string key = $"{initData.puzzleName}_bestTime";
        float bestTime = PlayerPrefsUtility.Load(key, 0f);
        float elapsedTime = ReturnElapsedTime();

        _winBestTime.text = string.Format("Best Time:{0}", GameUtility.SecondsToTimeString(GetBestTime()));
        _winElapsedTime.text = string.Format("Elapsed Time:{0}", GetElapsedTime(elapsedTime));

        if (bestTime <= 0 || elapsedTime < bestTime)
        {
            _dialog.ShowDialog("やった！ベストタイムが更新されました！", 0, false);
        }
        else
        {
            _dialog.ShowDialog("ベストタイムが更新されるように頑張ろう！", 0, false);
        }

        if (
            // 初めてクリアした場合
            bestTime <= 0f
            // ベストタイム更新した場合
            || elapsedTime < bestTime)
        {
            PlayerPrefsUtility.Save(key, elapsedTime);
            _bestTime.text = GameUtility.SecondsToTimeString(GetBestTime());
        }

        base.DoWin();
    }

    private float GetBestTime()
    {
        string key = $"{initData.puzzleName}_bestTime";
        return PlayerPrefsUtility.Load(key, 0f);
    }
}
