using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class FpsManager : MonoBehaviourPun
{
    public GameObject chaser;
    public GameObject player;
    private Inspection inspection;
    public Canvas canvas;
    public GameObject inventorySlot;
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Inspect(GameObject raycastedGameObject)
    {
        inspection.Inspect(raycastedGameObject);
    }

    public void Init(GameObject fpsPlayer)
    {
        player = fpsPlayer;
        inspection = player.GetComponentInChildren<Inspection>();
        chaser = GameObject.FindGameObjectWithTag("Chaser");   
    }

    public void Disable()
    {
        // TODO: Canvas and InventorySlot need to be tidied up
        canvas.enabled = false;
        inventorySlot.SetActive(false);
        inspection.enabled = false;
        chaser.GetComponent<Chase>().enabled = false;

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
}