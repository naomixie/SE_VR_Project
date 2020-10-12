using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FpsManager : MonoBehaviour
{
    public GameObject player;
    private Inspection inspection;
    public Canvas canvas;
    public GameObject inventorySlot;
    void Start()
    {
        inspection = player.GetComponentInChildren<Inspection>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Inspect(GameObject raycastedGameObject)
    {
        inspection.Inspect(raycastedGameObject);
    }

    public void Disable()
    {
        canvas.enabled = false;
        inventorySlot.SetActive(false);
        inspection.enabled = false;
    }
}