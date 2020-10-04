using Cinemachine;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpawner : MonoBehaviour
{
    [SerializeField] private GameObject playerPrefab = null;
    [SerializeField] private CinemachineFreeLook tpsCamera = null;
    [SerializeField] private CinemachineVirtualCamera vrCamera = null;

    private void Start()
    {
        // var player = PhotonNetwork.Instantiate(playerPrefab.name, Vector3.zero, Quaternion.identity);
        vrCamera.Follow = player.transform;
        vrCamera.LookAt = player.transform;
    }
}
