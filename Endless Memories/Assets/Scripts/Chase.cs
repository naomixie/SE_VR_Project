
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
    //stun when used teleport
    private const int STUN_FRAMES = 300;
    private int lestStunFrame;

    private void Start()
    {
        target = GameObject.FindGameObjectWithTag("First Person Player").transform;
        //获取寻路物体上的NavMeshAgent组件, 通过SetDestination方法(网格路径计算)实现自动寻路
        agent = GetComponent<NavMeshAgent>();
    }

    // Use this for initialization
    void Update()
    {
        if (lestStunFrame > 0)
        {
            --lestStunFrame;
            agent.isStopped = true;
        }
        else
        {
            agent.isStopped = false;
            //Need always updates latest position
            agent.SetDestination(target.position);
        }
    }
    public void teleport(Vector3 position)
    {
        agent.Warp(position);
        lestStunFrame = STUN_FRAMES;
    }
    /**
     *  teleport to the object which tag is GhostTeleportSpot and name ends with specific strings
     *  teleport("1FC"); //usage
     */
    public void teleport(string ghostTeleportSpotNameSuffix)
    {
        foreach(GameObject gameObject in GameObject.FindGameObjectsWithTag("GhostTeleportSpot"))
        {
            if (gameObject.name.EndsWith(ghostTeleportSpotNameSuffix))
            {
                teleport(gameObject.transform.position);
                break;
            }
        }
    }
    public void teleportRandomSpot()
    {
        GameObject[] gameObjects = GameObject.FindGameObjectsWithTag("GhostTeleportSpot");
        if (gameObjects.Length == 0)
            return;
        int targetId = Random.Range(0, gameObjects.Length - 1);
        teleport(gameObjects[targetId].transform.position);
    }
}