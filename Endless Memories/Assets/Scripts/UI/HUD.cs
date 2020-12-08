using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour
{
    public GameObject inventoryUI;
    public GameObject inventoryDetailsUI;
    public GameObject mapUI;
    public GameObject mapDetailsUI;
    //public GameObject escUI;
    //public GameObject escDetailsUI;
    //public GameObject settingsUI;
    //public GameObject settingsDetailsUI;
    public GameObject NavBar;
    public GameObject player;
    public GameObject rightPanel;
    public GameObject leftPanel;
    public TabGroup tabGroup;
    public TabButton inventoryButton;
    public TabButton mapButton;
    public InventoryUI scriptInventoryUI;


    bool isOpen;
    public enum curPanel {inventory,map,settings,pause,esc};
    public curPanel currPanel;


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
                isOpen = true;
                openPanel();
                tabGroup.OnTabSelected(inventoryButton);

            }
            else
            {
                // a Panel is already open
                if (tabGroup.selectedTab == inventoryButton)
                {
                    // close panel if same 
                    closePanel();
                    isOpen = false;
                    closeInventoryPanel();
                }
                else
                {
                    tabGroup.OnTabSelected(inventoryButton);
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
                openPanel();
                tabGroup.OnTabSelected(mapButton);
            }
            else
            {
                // a Panel is already open
                if (tabGroup.selectedTab == mapButton)
                {
                    // close panel if same 
                    closePanel();
                    isOpen = false;
                    closeMapPanel();
                }
                else
                {
                    tabGroup.OnTabSelected(mapButton);
                }
            }

            //show();
        }
        if (Input.GetButtonDown("Esc"))
        {
            // NoPanels are active
            if (!isOpen)
            {
                //isOpen = true;
                //openPanel();
                //openEscPanel();
            }
            else
            {
                // a Panel is already open
                CloseAll();
            }

            //show();
        }

        if (Input.GetKeyDown(KeyCode.P))
        {
            // NoPanels are active
            if (!isOpen)
            {
                isOpen = true;
                // openPanel();
                // openPausePanel();
                Debug.Log("您按下了P键");
                Time.timeScale = 0;
            }
            else
            {
                // a Panel is already open
                if (currPanel == curPanel.pause)
                {
                    // close panel if same 
                    //closePanel();
                    isOpen = false;
                   // closePausePanel();
                }
                else
                {
                    /*  closeCluePanel();
                      closeMapPanel();
                      closeInventoryPanel();
                      //closeSettingsPanel();
                      openPausePanel();
                    */
                    isOpen = false;
                    Debug.Log("您按下了P键");
                    Time.timeScale = 1;
                }
            }

            //show();
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

    public void openPanel ()
    {
        rightPanel.SetActive(true);
        leftPanel.SetActive(true);
        NavBar.SetActive(true);
        disableMouseLook();
    }

    public void closePanel ()
    {
        isOpen = false;
        rightPanel.SetActive(false);
        leftPanel.SetActive(false);
        NavBar.SetActive(false);
        enableMouseLook();
    }

    public void openInventoryPanel ()
    {
        currPanel = curPanel.inventory;
        inventoryUI.SetActive(true);
        inventoryDetailsUI.SetActive(true);
    }

    public void openMapPanel ()
    {
        currPanel = curPanel.map;
        mapUI.SetActive(true);
        mapDetailsUI.SetActive(true);
    }

    //public void openSettingsPanel ()
    //{
    //    currPanel = curPanel.settings;
    //    settingsUI.SetActive(true);
    //    settingsDetailsUI.SetActive(true);
    //} 

    public void openPausePanel ()
    {
        currPanel = curPanel.pause;
        //settingsUI.SetActive(true);
        //settingsDetailsUI.SetActive(true);
    }

    //public void openEscPanel ()
    //{
    //    currPanel = curPanel.esc;
    //    escUI.SetActive(true);
    //    escDetailsUI.SetActive(true);
    //}

    public void closeInventoryPanel ()
    {
        inventoryUI.SetActive(false);
        inventoryDetailsUI.SetActive(false);
    }

    public void closeMapPanel ()
    {
        mapUI.SetActive(false);
        mapDetailsUI.SetActive(false);
    }

    //public void closeSettingsPanel ()
    //{
    //    settingsUI.SetActive(false);
    //    settingsDetailsUI.SetActive(false);
    //}

    public void closePausePanel ()
    {
        //settingsUI.SetActive(false);
        //settingsDetailsUI.SetActive(false);
    }

    //public void closeEscPanel ()
    //{
    //    escUI.SetActive(false);
    //    escDetailsUI.SetActive(false);
    //}

    void show ()
    {
        print("inventoryUI: " + inventoryUI.activeSelf +"\n");
        print("inventoryDetailsUI: " + inventoryDetailsUI.activeSelf +"\n");
        print("mapUI: " + mapUI.activeSelf +"\n");
        print("mapDetailsUI: " + mapDetailsUI.activeSelf +"\n");
        //print("clueUI: " + clueUI.activeSelf +"\n");
        //print("clueDetailsUI: " + clueDetailsUI.activeSelf +"\n");
        //print("escUI: " + escUI.activeSelf + "\n");
        //print("escDetailsUI: " + escDetailsUI.activeSelf + "\n");
        //print("settingsUI: " + settingsUI.activeSelf +"\n");
        //print("settingsDetailsUI: " + settingsDetailsUI.activeSelf +"\n");
        print("rightPanel: " + rightPanel.activeSelf +"\n");
        print("leftPanel: " + leftPanel.activeSelf + "\n");
    }

    public void CloseAll ()
    {
        closeInventoryPanel();
        closeMapPanel();
        //closeSettingsPanel();
        closePanel();
        scriptInventoryUI.selectedSlot = null;
        scriptInventoryUI.ResetSlots();

    }
}
