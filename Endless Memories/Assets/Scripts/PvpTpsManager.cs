using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class PvpTpsManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public GameObject chaser;
    public GameObject player;
    private Inspection inspection;
    public Canvas fpsCanvas;
    public GameObject inventorySlot;

    public PvpManager pvpManager;
    public int tScore;

    void Start()
    {
        chaser = GameObject.FindGameObjectWithTag("Chaser");
        pvpManager = GameObject.FindGameObjectWithTag("PVP Manager").GetComponent<PvpManager>();
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void Inspect(GameObject raycastedGameObject)
    {
        inspection.Inspect(raycastedGameObject);
    }

    public void Init(GameObject tpsPlayer, GameObject fpsPlayer)
    {
        Debug.Log(photonView.Owner);
        Debug.Log(fpsPlayer.GetPhotonView().Owner);

        // Transfer ownership if current view is Reaper's view, transfer to VR
        if(photonView.Owner == null || !photonView.Owner.Equals(fpsPlayer.GetPhotonView().Owner))
        {
            photonView.TransferOwnership(tpsPlayer.GetPhotonView().Owner);
        }
        // photonView.TransferOwnership(photonView.ViewID);

        player = tpsPlayer;
        inspection = player.GetComponentInChildren<Inspection>();
        // chaser = GameObject.FindGameObjectWithTag("Chaser");
        // photonView.TransferOwnership();
    }

    public void Disable()
    {
        // TODO: Canvas and InventorySlot need to be tidied up
        fpsCanvas.enabled = false;
        inventorySlot.SetActive(false);
        inspection.enabled = false;
        // chaser.GetComponent<Chase>().enabled = false;

        MonoBehaviour[] comps = player.GetComponents<MonoBehaviour>();
        foreach(MonoBehaviour c in comps)
        {
            Debug.Log(c.name);
            c.enabled = false;
        }

        MonoBehaviour[] childComps = player.GetComponentsInChildren<MonoBehaviour>();
        foreach(MonoBehaviour c in childComps)
        {
            Debug.Log(c.name);
            c.enabled = false;
        }

        player.GetComponent<PhotonTransformView>().enabled = true;
    }

    public void Score(int score)
    {
        this.tScore = score;
    }

    #region IPunObservable implementation
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(tScore);
        }
        else
        {
            // Network player, receive data
            this.tScore = (int)stream.ReceiveNext();
        }
    }
    #endregion
}