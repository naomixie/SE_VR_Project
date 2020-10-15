using Cinemachine;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PvpPlayerSpawner : MonoBehaviourPun
{
    [SerializeField] private GameObject fpsPrefab = null;
    [SerializeField] private GameObject tpsPrefab = null;
    [SerializeField] private CinemachineVirtualCamera fpsCamera = null;
    [SerializeField] private CinemachineFreeLook tpsCamera = null;

    [SerializeField] private int playerMode;
    private bool synced = false;

    public GameObject fpsPlayer = null;
    public GameObject tpsPlayer = null;

    public PvpFpsManager fpsManager;
    public PvpTpsManager tpsManager;

    public Transform tpsSpawnPoint;

    public Transform fpsSpawnPoint;

    public GameObject FPSCanvas;


    private void Start()
    {
        // var player = PhotonNetwork.Instantiate(playerPrefab.name, Vector3.zero, Quaternion.identity);
        // vrCamera.Follow = player.transform;
        // vrCamera.LookAt = player.transform;

        playerMode = PlayerPrefs.GetInt("mode");
        if (playerMode == 1)
        {
            Debug.Log("fx " + fpsSpawnPoint.position.x);
            Debug.Log("fy " + fpsSpawnPoint.position.y);
            Debug.Log("fz " + fpsSpawnPoint.position.z);
            fpsPlayer = PhotonNetwork.Instantiate(fpsPrefab.name, new Vector3(fpsSpawnPoint.position.x, fpsSpawnPoint.position.y, fpsSpawnPoint.position.z), Quaternion.identity);
            fpsCamera = fpsPlayer.GetComponentInChildren<CinemachineVirtualCamera>();
        }
        else
        {
            Debug.Log("tx " + tpsSpawnPoint.position.x);
            Debug.Log("ty " + tpsSpawnPoint.position.y);
            Debug.Log("tz " + tpsSpawnPoint.position.z);
            tpsPlayer = PhotonNetwork.Instantiate(tpsPrefab.name, new Vector3(tpsSpawnPoint.position.x, tpsSpawnPoint.position.y, tpsSpawnPoint.position.z), Quaternion.identity);
            tpsCamera = tpsPlayer.GetComponentInChildren<CinemachineFreeLook>();
        }
    }

    private void Update()
    {
        if(!synced)
        {
            if(playerMode == 1)
            {
                // Fps Player settings

                var tps = GameObject.FindGameObjectWithTag("Third Person Player");

                if (tps == null) return;

                // Setting cameras
                // Fps
                fpsCamera.enabled = true;

                // Tps
                tpsCamera = tps.GetComponentInChildren<CinemachineFreeLook>();
                tpsCamera.enabled = false;
                tpsManager.Init(tps);
                tpsManager.Disable();
                FPSCanvas.GetComponent<Routing>().SetPlayer(fpsPlayer);
                
            }
            else
            {
                // Tps Player settings

                var fps = GameObject.FindGameObjectWithTag("First Person Player");
                
                if (fps == null) return;

                // Setting cameras
                // Fps
                fpsCamera = fps.GetComponentInChildren<CinemachineVirtualCamera>();
                fpsCamera.enabled = false;
                fpsManager.Init(fps);
                fpsManager.Disable();
                

                // Tps
                tpsCamera.enabled = true;
                tpsCamera.LookAt = fps.transform;
            }
            synced = !synced;
        }
    }
}
