
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//寻路要引入的命名空间
using UnityEngine.AI;

public class Chase : MonoBehaviour
{
    //通过寻路要去找到的  目标物体
    public Transform target;
    //寻路组件
    private NavMeshAgent agent;

    private void Start()
    {
        target = GameObject.FindGameObjectWithTag("First Person Player").transform;
    }

    // Use this for initialization
    void Update()
    {
        //获取寻路物体上的NavMeshAgent组件
        agent = GetComponent<NavMeshAgent>();
        //通过SetDestination方法(网格路径计算)实现自动寻路
        agent.SetDestination(target.position);
    }
}