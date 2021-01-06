using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour
{
    public GameObject inventoryUI;
    public GameObject inventoryDetailsUI;
    public GameObject player;
    public InventoryUI scriptInventoryUI;


    bool isOpen;


    void Start ()
    {
        CloseAll();
    }

    void Update ()
    {
        if (Input.GetButtonDown("Inventory"))
        {
            // NoPanels are active
            if (!isOpen)
            {
                openAll();
            }
            else
            {
                CloseAll();
            }
        }

    }

    public void SetPlayer(GameObject fpsPlayer)
    {
        int childCount = fpsPlayer.transform.childCount;
        for(int i = 0; i < childCount; i++)
        {
            var child = fpsPlayer.transform.GetChild(i);
            if(child.name == "FPS Camera")
            {
                player = child.gameObject;
            }
        }
        
    }

    void enableMouseLook ()
    {
        player.GetComponent<MouseLook>().enabled = true;
        player.GetComponent<MouseLook>().LockMouse();
    }


    void disableMouseLook ()
    {
        player.GetComponent<MouseLook>().enabled = false;
        player.GetComponent<MouseLook>().UnlockMouse();
    }

    public void openInventoryPanel ()
    {
        inventoryUI.SetActive(true);
        inventoryDetailsUI.SetActive(true);
    }

    public void closeInventoryPanel ()
    {
        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
    }
    void show ()
    {
        print("inventoryUI: " + inventoryUI.activeSelf +"\n");
        print("inventoryDetailsUI: " + inventoryDetailsUI.activeSelf +"\n");
    }

    public void openAll ()
    {
        isOpen = true;
        openInventoryPanel();
    }

    public void CloseAll ()
    {
        isOpen = false;
        closeInventoryPanel();
        scriptInventoryUI.selectedSlot = null;
        scriptInventoryUI.ResetSlots();
    }
}
