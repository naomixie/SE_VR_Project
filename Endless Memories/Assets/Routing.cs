using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
    bool isOpen;
    public enum curPanel {inventory,map,clue,settings};
    public curPanel currPanel;


    // Start is called before the first frame update
    void Start ()
    {
        CloseAll();

    }

    // Update is called once per frame
    void Update ()
    {
        if (Input.GetButtonDown("Inventory"))
        {
            // NoPanels are active
            if (!isOpen)
            {
                isOpen = true;
                currPanel = curPanel.inventory;
                openPanel();
                openInventoryPanel();
            }
            else
            {
                // a Panel is already open
                if (currPanel == curPanel.inventory)
                {
                    // close panel if same 
                    closePanel();
                    isOpen = false;
                    closeInventoryPanel();
                }
                else
                {
                    currPanel = curPanel.inventory;
                    closeCluePanel();
                    closeMapPanel();
                    closeSettingsPanel();
                    openInventoryPanel();

                }
            }
            
            //show();
        }

        if (Input.GetButtonDown("Map"))
        {
            // NoPanels are active
            if (!isOpen)
            {
                isOpen = true;
                currPanel = curPanel.map;
                openPanel();
                openMapPanel();
            }
            else
            {
                // a Panel is already open
                if (currPanel == curPanel.map)
                {
                    // close panel if same 
                    closePanel();
                    isOpen = false;
                    closeMapPanel();
                }
                else
                {
                    currPanel = curPanel.map;
                    closeCluePanel();
                    closeInventoryPanel();
                    closeSettingsPanel();
                    openMapPanel();

                }
            }

            //show();
        }

        if (Input.GetButtonDown("Clue"))
        {
            // NoPanels are active
            if (!isOpen)
            {
                isOpen = true;
                currPanel = curPanel.clue;
                openPanel();
                openCluePanel();
            }
            else
            {
                // a Panel is already open
                if (currPanel == curPanel.clue)
                {
                    // close panel if same 
                    closePanel();
                    isOpen = false;
                    closeCluePanel();
                }
                else
                {
                    currPanel = curPanel.clue;
                    closeInventoryPanel();
                    closeMapPanel();
                    closeSettingsPanel();
                    openCluePanel();

                }
            }

            //show();
        }

        if (Input.GetButtonDown("Settings"))
        {
            // NoPanels are active
            if (!isOpen)
            {
                isOpen = true;
                currPanel = curPanel.settings;
                openPanel();
                openSettingsPanel();
            }
            else
            {
                // a Panel is already open
                if (currPanel == curPanel.settings)
                {
                    // close panel if same 
                    closePanel();
                    isOpen = false;
                    closeSettingsPanel();
                }
                else
                {
                    currPanel = curPanel.settings;
                    closeCluePanel();
                    closeMapPanel();
                    closeInventoryPanel();
                    openSettingsPanel();

                }
            }

            //show();
        }
        if (Input.GetButtonDown("Esc") && isOpen)
        {
            CloseAll();
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
        rightPanel.SetActive(true);
        leftPanel.SetActive(true);
        NavBar.SetActive(true);
        player.GetComponent<MouseLook>().enabled = false;
        player.GetComponent<MouseLook>().UnlockMouse();
        
    }

    void closePanel ()
    {
        rightPanel.SetActive(false);
        leftPanel.SetActive(false);
        NavBar.SetActive(false);
        player.GetComponent<MouseLook>().enabled = true;
        player.GetComponent<MouseLook>().LockMouse();
    }

    void openInventoryPanel ()
    {
        inventoryUI.SetActive(true);
        inventoryDetailsUI.SetActive(true);
    }

    void openMapPanel ()
    {
        mapUI.SetActive(true);
        mapDetailsUI.SetActive(true);
    }

    void openCluePanel ()
    {
        clueUI.SetActive(true);
        clueDetailsUI.SetActive(true);
    }

    void openSettingsPanel ()
    {
        settingsUI.SetActive(true);
        settingsDetailsUI.SetActive(true);
    }

    void closeInventoryPanel ()
    {
        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
    }

    void closeMapPanel ()
    {
        mapUI.SetActive(false);
        mapDetailsUI.SetActive(false);
    }

    void closeCluePanel ()
    {
        clueUI.SetActive(false);
        clueDetailsUI.SetActive(false);
    }

    void closeSettingsPanel ()
    {
        settingsUI.SetActive(false);
        settingsDetailsUI.SetActive(false);
    }


    void show ()
    {
        print("inventoryUI: " + inventoryUI.activeSelf +"\n");
        print("inventoryDetailsUI: " + inventoryDetailsUI.activeSelf +"\n");
        print("mapUI: " + mapUI.activeSelf +"\n");
        print("mapDetailsUI: " + mapDetailsUI.activeSelf +"\n");
        print("clueUI: " + clueUI.activeSelf +"\n");
        print("clueDetailsUI: " + clueDetailsUI.activeSelf +"\n");
        print("settingsUI: " + settingsUI.activeSelf +"\n");
        print("settingsDetailsUI: " + settingsDetailsUI.activeSelf +"\n");
        print("rightPanel: " + rightPanel.activeSelf +"\n");
        print("leftPanel: " + leftPanel.activeSelf + "\n");
    }

    public void CloseAll ()
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
        isOpen = false;

    }
}
