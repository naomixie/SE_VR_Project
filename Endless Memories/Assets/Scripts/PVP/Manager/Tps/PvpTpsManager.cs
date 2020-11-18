using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;


// Description:
// This class manages TPS initialization including:
// (1) PhotonViewOwnerships
// (2) Disabling components for FPS player
// (3) Data transfer and synchronization
// (4) Sending signals for actions made by TPS player 
public class PvpTpsManager : MonoBehaviourPun
{
    [SerializeField] private GameObject chaser;
    [SerializeField] private PvpManager pvpManager;


    // Disable components for FPS player
    [SerializeField] private GameObject fpsPlayer;


    // Control Canvas for TPS player
    public PvpTpsUiManager pvpTpsUiManager;

    // Send signals including: Making Loud Noise, Repositioning Ghost, Score Update
    public PvpTpsDataManager pvpTpsDataManager;

    void Start()
    {
        chaser = GameObject.FindGameObjectWithTag("Chaser");
        pvpManager = GameObject.FindGameObjectWithTag("PVP Manager").GetComponent<PvpManager>();
        pvpTpsDataManager = gameObject.GetComponent<PvpTpsDataManager>();
    }

    // Update is called once per frame
    void Update()
    {
    }

    // Initialize PhotonView Ownership and UiManager
    public void Init(GameObject fps, GameObject tpsPlayer)
    {
        // Transfer ownership if current view is FPS's view, transfer to TPS
        if(photonView.Owner == null || !photonView.Owner.Equals(tpsPlayer.GetPhotonView().Owner))
        {
            photonView.TransferOwnership(tpsPlayer.GetPhotonView().Owner);
        }

        fpsPlayer = fps;

        pvpTpsUiManager.tpsPlayer = tpsPlayer;
        pvpTpsUiManager.InitButtonListenr();
    }

    // Disabling components for FPS player
    public void Disable()
    {
        fpsPlayer.GetComponent<Surviver>().DisableFromOther();
    }
}