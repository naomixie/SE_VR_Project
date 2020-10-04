using Cinemachine;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpawner : MonoBehaviour
{
    [SerializeField] private GameObject fpsPrefab = null;
    [SerializeField] private GameObject tpsPrefab = null;
    [SerializeField] private CinemachineVirtualCamera fpsCamera = null;
    [SerializeField] private CinemachineFreeLook tpsCamera = null;

    private int playerMode;
    private bool synced = false;

    public GameObject fpsPlayer = null;
    public GameObject tpsPlayer = null;


    private void Start()
    {
        // var player = PhotonNetwork.Instantiate(playerPrefab.name, Vector3.zero, Quaternion.identity);
        // vrCamera.Follow = player.transform;
        // vrCamera.LookAt = player.transform;

        playerMode = PlayerPrefs.GetInt("mode");
        if (playerMode == 1)
        {
            fpsPlayer = PhotonNetwork.Instantiate(fpsPrefab.name, Vector3.zero, Quaternion.identity);
        }
        else
        {
            tpsPlayer = PhotonNetwork.Instantiate(tpsPrefab.name, Vector3.zero, Quaternion.identity);
        }
    }

    private void Update()
    {
        if(!synced)
        {
            if(playerMode == 1)
            {

            }
            else
            {

            }
        }
    }
}
