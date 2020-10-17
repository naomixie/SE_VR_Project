using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RiddleManager : MonoBehaviour
{
    // Start is called before the first frame update
    
    
    // 谜题状态
    public Dictionary<string, int> riddles = new Dictionary<string, int>();

    void Start()
    {
        // 遍历 Riddle总类的 Prefab
        // 添加 Prefab 中所有的 Riddle 脚本
        //      AddRiddle(riddle)
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void AddRiddle(Riddle riddle)
    {
        riddles.Add(riddle.riddleName, riddle.riddleStatus);
    }

    void RiddleInteract(string riddleName, int interactCode)
    {
        
        Debug.Log("Interacted with " + riddleName);
        switch(riddleName)
        {
            case "Riddle1":
            break;
            case "Riddle2":
            break;
            default:
            break;
        }
    }
}
