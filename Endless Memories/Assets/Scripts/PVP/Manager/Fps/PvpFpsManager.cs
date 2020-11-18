using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Photon.Pun;

// Description:
// This class manages FPS initialization including:
// (1) PhotonViewOwnerships
// (2) Disabling components for TPS player
// (3) Data transfer and synchronization
// (4) Sending signals for actions made by FPS player 
public class PvpFpsManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public GameObject fpsPlayer;
    public Canvas tpsCanvas;

    public PvpManager pvpManager;
    public int fScore;

    public PvpFpsUiManager pvpFpsUiManager;

    void Start()
    {
        pvpManager = GameObject.FindGameObjectWithTag("PVP Manager").GetComponent<PvpManager>();
        pvpFpsUiManager = gameObject.GetComponent<PvpFpsUiManager>();
    }

    void Update()
    {
    }

    // Initialize PhotonView Ownership and UiManager
    public void Init(GameObject tpsPlayer, GameObject fps)
    {
        // Transfer ownership if current view is VR's view, transfer to Reaper
        if(photonView.Owner == null || !photonView.Owner.Equals(tpsPlayer.GetPhotonView().Owner))
        {
            photonView.TransferOwnership(fps.GetPhotonView().Owner);
        }

        fpsPlayer = fps;
        Enable();
        Disable();
    }

    public void Enable()
    {
        pvpFpsUiManager.Init();
    }

    // Disabling components for FPS player
    public void Disable()
    {
        tpsCanvas.gameObject.SetActive(false);
    }

    // Data synchronization for Photon
    #region IPunObservable implementation
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(fScore);
        }
        else
        {
            this.fScore = (int)stream.ReceiveNext();
            // Network player, receive data
        }
    }
    #endregion
}
