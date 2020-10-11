using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Routing : MonoBehaviour
{
    public Transform itemsParent;
    public GameObject inventoryUI;
    public GameObject inventoryDetailsUI;
    public GameObject mapUI;
    public GameObject mapDetailsUI;
    public GameObject clueUI;
    public GameObject clueDetailsUI;
    public GameObject settingsUI;
    public GameObject settingsDetailsUI;
    public GameObject NavBar;
    public GameObject player;
    public GameObject rightPanel;
    public GameObject leftPanel;


    // Start is called before the first frame update
    void Start ()
    {
        //InventoryUI inventory;

        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
        NavBar.SetActive(false);
        mapUI.SetActive(false);
        mapDetailsUI.SetActive(false);
        clueUI.SetActive(false);
        clueDetailsUI.SetActive(false);
        settingsUI.SetActive(false);
        settingsDetailsUI.SetActive(false);
        rightPanel.SetActive(false);
        leftPanel.SetActive(false);


    }

    // Update is called once per frame
    void Update ()
    {
        if (Input.GetButtonDown("Inventory"))
        {
            //if (!inventoryUI.activeSelf)
            
                disableMCS();
            
            inventoryUI.SetActive(!inventoryUI.activeSelf);
            inventoryDetailsUI.SetActive(!inventoryDetailsUI.activeSelf);
            openPanel();

        }

        if (Input.GetButtonDown("Map"))
        {
            //if (!mapUI.activeSelf)
            //{
                disableICS();
            //}

            mapUI.SetActive(!mapUI.activeSelf);
            mapDetailsUI.SetActive(!mapDetailsUI.activeSelf);
            openPanel();

        }

        if (Input.GetButtonDown("Clue"))
        {
            //if (!clueUI.activeSelf)
            //{
                disableIMS();
            //}
            clueUI.SetActive(!clueUI.activeSelf);
            clueDetailsUI.SetActive(!clueDetailsUI.activeSelf);
            openPanel();
        }

        if (Input.GetButtonDown("Settings"))
        {
            //if (!settingsUI.activeSelf)
            //{
                disableIMC();
            //}
            
            settingsUI.SetActive(!settingsUI.activeSelf);
            settingsDetailsUI.SetActive(!settingsDetailsUI.activeSelf);
            openPanel();
        }

    }

    void enableMouseLook ()
    {
        player.GetComponent<MouseLook>().enabled = true;
    }


    void disableMouseLook ()
    {
        player.GetComponent<MouseLook>().enabled = false;
    }

    void openPanel ()
    {
        rightPanel.SetActive(!rightPanel.activeSelf);
        leftPanel.SetActive(!leftPanel.activeSelf);
        NavBar.SetActive(!NavBar.activeSelf);
        player.GetComponent<MouseLook>().enabled = !player.GetComponent<MouseLook>().enabled;
        if (player.GetComponent<MouseLook>().enabled)
        {
            player.GetComponent<MouseLook>().LockMouse();
        }
        else
        {
            player.GetComponent<MouseLook>().UnlockMouse();
        }
    }

    void disableMCS ()
    {
        mapUI.SetActive(false);
        mapDetailsUI.SetActive(false);
        clueUI.SetActive(false);
        clueDetailsUI.SetActive(false);
        settingsUI.SetActive(false);
        settingsDetailsUI.SetActive(false);
    }

    void disableICS ()
    {
        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
        clueUI.SetActive(false);
        clueDetailsUI.SetActive(false);
        settingsUI.SetActive(false);
        settingsDetailsUI.SetActive(false);
    }

    void disableIMS ()
    {
        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
        mapUI.SetActive(false);
        mapDetailsUI.SetActive(false);
        settingsUI.SetActive(false);
        settingsDetailsUI.SetActive(false);
    }

    void disableIMC ()
    {
        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
        mapUI.SetActive(false);
        mapDetailsUI.SetActive(false);
        clueUI.SetActive(false);
        clueDetailsUI.SetActive(false);
    }
}
