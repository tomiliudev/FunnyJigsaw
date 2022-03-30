using System.Collections;
using Cysharp.Threading.Tasks;
using UnityEngine;

public sealed class TimeAttackGameController : GameController
{
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
        var puzzle = Resources.Load<PuzzleController>($"Prefabs/MySon/Puzzle_{initData.puzzleName}_5x5");
        base.puzzle = Instantiate(puzzle);
        base.OnEnable();
    }

    IEnumerator WaitUntilInitDataNotNull()
    {
        yield return new WaitUntil(()=> initData != null);
    }
}
