using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RiddleManager : MonoBehaviour
{
    // Start is called before the first frame update
    
    public string riddleManagerName = "RiddleManager";

    // 谜题状态
    public Dictionary<string, int> riddleDictionary = new Dictionary<string, int>();
    [SerializeField] private Riddle[] riddles;
    [SerializeField] private bool cleared = false;

    [SerializeField] private Transform riddleParent;

    void Start()
    {
        // 遍历 Riddle总类的 Prefab
        // 添加 Prefab 中所有的 Riddle 脚本
        //      AddRiddle(riddle)
        riddleParent = gameObject.transform.GetChild(0);
        riddles = riddleParent.GetComponentsInChildren<Riddle>();
        foreach (var tmp in riddles)
        {
            AddRiddle(tmp);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(!cleared)
        {
            ClearedRiddle();
        }
    }

    void AddRiddle(Riddle riddle)
    {
        Debug.Log("RiddleManager " + gameObject.name + " adding riddle: " + riddle.riddleName);
        riddleDictionary.Add(riddle.riddleName, riddle.riddleStatus);
    }


    // Active the actual riddles stored in the manager
    public Riddle FindRiddle(string riddleName)
    {
        foreach (var tmp in riddles)
        {
            if(tmp.riddleName == riddleName)
                return tmp;
        }
        return null;
    }

    public void ActiveRiddle(string riddleName, int interactCode)
    {
        Riddle riddle = FindRiddle(riddleName);
        int interactResult = riddle.Interact(interactCode);
        Debug.Log("InteractResult " + interactResult);
        if(interactResult == 1)
        {
            // Solved one riddle
            Debug.Log("Removing riddle");
            Debug.Log(riddleDictionary.Remove(riddleName));
        }else{
            // Riddle remains unsolved, or not interactable, or wrong
        }
    }
    
    public bool ClearedRiddle()
    {
        // Debug.Log(riddleDictionary.Count);

        if(riddleDictionary.Count == 0)
        {
            Debug.Log("Cleared All Riddles.");
            cleared = true;
        }else{
            // Debug.Log("Remain riddles uncleared.");
        }
        return cleared;
    }

    public bool IsCleared()
    {
        return cleared;
    }
}
