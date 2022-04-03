using System.Collections;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public sealed class TimeAttackGameController : GameController
{
    [SerializeField] Text _bestTime;

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
        var puzzle = Resources.Load<PuzzleController>($"Prefabs/MySon/Puzzle_{puzzleName}_5x5");
        base.puzzle = Instantiate(puzzle);

        string key = $"{puzzleName}_bestTime";
        float elapsedTime = PlayerPrefsUtility.Load(key, 0f);
        _bestTime.text = GameUtility.SecondsToTimeString(elapsedTime);

        base.OnEnable();
    }

    IEnumerator WaitUntilInitDataNotNull()
    {
        yield return new WaitUntil(()=> initData != null);
    }
}
