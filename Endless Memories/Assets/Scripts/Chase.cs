
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//寻路要引入的命名空间
using UnityEngine.AI;
using UnityEngine.SceneManagement;

public class Chase : MonoBehaviour
{
    public static Chase instance;
    //通过寻路要去找到的  目标物体
    private GameObject target;
    //寻路组件
    private NavMeshAgent agent;
    //stun when used teleport
    private const int STUN_FRAMES = 300;
    private int lestStunFrame;
	
	//for partrol
	private int restedFrame;
	
	private string[] SPOTS_SUFFIX = {"+X", "-X", "+Z", "-Z"};

    public bool doKill = false;

    void Awake()
    {
        instance = this;
    }
    void Start()
    {
        target = GameObject.FindGameObjectWithTag("First Person Player");
        //获取寻路物体上的NavMeshAgent组件, 通过SetDestination方法(网格路径计算)实现自动寻路
        agent = GetComponent<NavMeshAgent>();
    }

    // Use this for initialization
    void Update()
    {
        if (lestStunFrame > 0) //stun happens when actioned teleport
        {
            --lestStunFrame;
            agent.isStopped = true;
        }
        else
        {
            agent.isStopped = false;
			//detect sound (sound source invoke noticeSound method)
			//detect target in vision
			Vector3 direction = target.transform.position - (transform.position + transform.up/2);
			float angleDiff = Vector3.Angle(direction, transform.forward);
			//Debug.Log("angleDiff: " + angleDiff);
			if (angleDiff < 0.5 * 30)
			{
				RaycastHit hit;
				if (Physics.Raycast(transform.position + transform.up/2, direction.normalized, out hit))
				{
					if (hit.collider.gameObject == target)
					{
						restedFrame = 0;
						agent.SetDestination(target.transform.position);
					}
				}
			}
			//if touch player we should jump to gameover scene
			if (Vector3.Distance(target.transform.position, transform.position) < 0.3 && doKill)
			{
				MouseLook mouseLook = GameObject.Find("First Person Player/FPS Camera").GetComponent<MouseLook>();
				mouseLook.enabled = false;
				mouseLook.UnlockMouse();
				SceneManager.LoadScene("Scene_Gameover");
			}
			//patrol specified spots in stage
			//Debug.Log("destToTarget: " + Vector3.Distance(agent.destination, transform.position) + ", restFrame" + restedFrame);
			if (agent.destination == null || Vector3.Distance(agent.destination, transform.position) < 1)
			{
				if(++restedFrame > 1000)
				{
					restedFrame = 0;
					patrolRandomSpot();
				}
			}
        }
    }
	public void noticeSound(int soundLevel, Vector3 position)
	{
		if(Vector3.Distance(position, transform.position) < 10*soundLevel) {
			restedFrame = 0;
			move(position);
		}
	}
	private void patrolRandomSpot()
    {
		int targetFloor = Random.Range(1, 3);
		string targetDest = SPOTS_SUFFIX[Random.Range(0, 4)];
		string suffix = targetFloor + "F" + targetDest;
		foreach(GameObject gameObject in GameObject.FindGameObjectsWithTag("GhostPatrolSpot"))
        {
            if (gameObject.name.EndsWith(suffix))
            {
                move(gameObject.transform.position);
                break;
            }
        }
    }
	public void move(Vector3 position)
	{
        agent.SetDestination(position);
	}
    public void teleport(Vector3 position)
    {
        agent.Warp(position);
        lestStunFrame = STUN_FRAMES;
    }
    /**
     *  teleport to the object which tag is "GhostTeleportSpot" and name ends with specific strings
     *  teleport("1F-X"); //usage
     */
    public void teleport(string ghostTeleportSpotNameSuffix)
    {
        foreach(GameObject gameObject in GameObject.FindGameObjectsWithTag("GhostPatrolSpot"))
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