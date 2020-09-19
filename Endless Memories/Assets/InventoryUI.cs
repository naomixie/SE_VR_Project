using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class InventoryUI : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        InventoryUI inventory;

        void Start ()
            {
            inventory = Inventory.instance;
            inventory.onItemChangedCallback+=UpdateUI;
            }

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void UodateUI ()
        {
        Debug.Log("UPDATING UI");
        }
}
