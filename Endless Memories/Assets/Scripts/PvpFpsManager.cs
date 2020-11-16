using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Photon.Pun;

public class PvpFpsManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public GameObject player;
    public Canvas tpsCanvas;

    public PvpManager pvpManager;

    public int fScore;

    // Start is called before the first frame update
    void Start()
    {
        pvpManager = GameObject.FindGameObjectWithTag("PVP Manager").GetComponent<PvpManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Init(GameObject fpsPlayer, GameObject tpsPlayer)
    {
        Debug.Log(photonView.Owner);
        Debug.Log(tpsPlayer.GetPhotonView().Owner);

        // Transfer ownership if current view is VR's view, transfer to Reaper
        if(photonView.Owner == null || !photonView.Owner.Equals(tpsPlayer.GetPhotonView().Owner))
        {
            photonView.TransferOwnership(fpsPlayer.GetPhotonView().Owner);
        }

        player = fpsPlayer;
        Disable();
        
    }

    public void Disable()
    {
        tpsCanvas.enabled = false;
    }

    public void Score(int score)
    {
        this.fScore = score; 
        // if(pvpManager.photonView.Owner.Equals(photonView.Owner))
        // {
        //     pvpManager.FScore(add);
        // }
        // else
        // {
        //     Photon.Realtime.Player player = pvpManager.photonView.Owner;
        //     pvpManager.photonView.TransferOwnership(photonView.Owner);
        //     pvpManager.FScore(add);
        //     pvpManager.photonView.TransferOwnership(player);
        // }

    }    

    #region IPunObservable implementation
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(fScore);
            // We own this player: send the others our data
            // stream.SendNext(pvpTimeCount);
            // stream.SendNext(pvpTimeIsRunning);
            // stream.SendNext(prepareTimeCount);
            // stream.SendNext(prepareTimeIsRunning);
        }
        else
        {
            this.fScore = (int)stream.ReceiveNext();
            // Network player, receive data
            // this.pvpTimeCount = (int)stream.ReceiveNext();
            // this.pvpTimeIsRunning = (bool)stream.ReceiveNext();
            // this.prepareTimeCount = (int)stream.ReceiveNext();
            // this.prepareTimeIsRunning = (bool)stream.ReceiveNext();
        }
    }
    #endregion
}
