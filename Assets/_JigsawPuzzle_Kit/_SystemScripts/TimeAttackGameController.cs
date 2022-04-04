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

        _bestTime.text = GetBestTimeStr(puzzleName);

        base.OnEnable();
    }

    IEnumerator WaitUntilInitDataNotNull()
    {
        yield return new WaitUntil(()=> initData != null);
    }

    protected override void DoWin()
    {
        base.DoWin();
        _winBestTime.text = string.Format("Best Time:{0}", GetBestTimeStr(initData.puzzleName));
        _winElapsedTime.text = string.Format("Elapsed Time:{0}", GetElapsedTime());
    }

    private string GetBestTimeStr(string puzzleName)
    {
        string key = $"{puzzleName}_bestTime";
        float bestTime = PlayerPrefsUtility.Load(key, 0f);
        return GameUtility.SecondsToTimeString(bestTime);
    }
}
