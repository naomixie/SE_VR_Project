using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Riddle : MonoBehaviour
{
    // Start is called before the first frame update
    public string riddleName = "Riddle";
    
    // 谜题种类：顺序执行，乱序执行
    public int riddleType = 1;

    // 所有谜题的状态数值从 1 开始，即 第一关
    // 部分谜题将只包含 “完成”/“未完成”
    // 部分谜题将包含其他谜题
    public int riddleStatus = 1;

    // public RiddleManager riddleManager;

    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public virtual int Interact(int interactCode)
    {
        // 把所有的谜题详情写在该类的子类中
        // 返回成功与否
        //      具体的触发事件写在子类的Interact函数中
        Debug.Log("Interacted with riddle.");
        return 1;
    }
}
