using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PvpTpsDataManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public int tScore;
    public bool noiceFlag = false;
    public Vector3 noticePosition;
    public bool dropFlag = false;
    public Vector3 dropPosition;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

        // Data synchronization for Photon
    #region IPunObservable implementation
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(tScore);
            stream.SendNext(noiceFlag);
            stream.SendNext(noticePosition);
            stream.SendNext(dropFlag);
            stream.SendNext(dropPosition);
        }
        else
        {
            // Network player, receive data
            this.tScore = (int)stream.ReceiveNext();
            this.noiceFlag = (bool)stream.ReceiveNext();
            this.noticePosition = (Vector3)stream.ReceiveNext();
            this.dropFlag = (bool)stream.ReceiveNext();
            this.dropPosition = (Vector3)stream.ReceiveNext();
        }
    }
    #endregion
}
