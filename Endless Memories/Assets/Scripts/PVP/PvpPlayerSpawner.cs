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

    // public PvpFpsManager fpsManagerPrefab;
    // public PvpTpsManager tpsManagerPrefab;

    public PvpFpsManager fpsManager;
    public PvpTpsManager tpsManager;

    public Transform tpsSpawnPoint;

    public Transform fpsSpawnPoint;

    public GameObject fpsCanvas;


    private void Start()
    {
        playerMode = PlayerPrefs.GetInt("mode");
        if (playerMode == 1)
        {
            fpsPlayer = PhotonNetwork.Instantiate(fpsPrefab.name, new Vector3(fpsSpawnPoint.position.x, fpsSpawnPoint.position.y, fpsSpawnPoint.position.z), Quaternion.identity);
            fpsCamera = fpsPlayer.GetComponentInChildren<CinemachineVirtualCamera>();
        }
        else
        {
            tpsPlayer = PhotonNetwork.Instantiate(tpsPrefab.name, new Vector3(tpsSpawnPoint.position.x, tpsSpawnPoint.position.y, tpsSpawnPoint.position.z), Quaternion.identity);
            tpsCamera = tpsPlayer.GetComponentInChildren<CinemachineFreeLook>();
        }
    }

    private void Update()
    {
        if(fpsManager != null && tpsManager != null && fpsCanvas != null)
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
                    tpsCamera.gameObject.SetActive(false);

                    fpsManager.Init(tps, fpsPlayer);
                    fpsManager.Disable();
                    fpsCanvas.GetComponent<Routing>().SetPlayer(fpsPlayer);
                    
                }
                else
                {
                    // Tps Player settings

                    var fps = GameObject.FindGameObjectWithTag("First Person Player");
                    
                    if (fps == null) return;


                    // Setting cameras
                    // Fps
                    fpsCamera = fps.GetComponentInChildren<CinemachineVirtualCamera>();
                    fpsCamera.gameObject.SetActive(false);

                    tpsManager.Init(fps, tpsPlayer);
                    tpsManager.Disable();
                    

                    // Tps
                    tpsCamera.enabled = true;
                    tpsCamera.LookAt = fps.transform;
                }
                synced = !synced;
            }
        }else{
            tpsManager = GameObject.FindGameObjectWithTag("TPS Manager").GetComponent<PvpTpsManager>();
            fpsManager = GameObject.FindGameObjectWithTag("FPS Manager").GetComponent<PvpFpsManager>();
            fpsCanvas = GameObject.FindGameObjectWithTag("FPS Canvas");
        }
    }
}
