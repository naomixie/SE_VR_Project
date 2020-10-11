using System.Collections;
using System.Collections.Generic;
//using System.Diagnostics;
using UnityEngine;

public class InventoryUI : MonoBehaviour
{
    public Transform itemsParent;

    Inventory inventory;

    InventorySlot[] slots;

    // Start is called before the first frame update
    void Start()
    {
        //InventoryUI inventory;

        inventory = Inventory.instance;
        inventory.onItemChangedCallback += UpdateUI;
        slots = itemsParent.GetComponentsInChildren<InventorySlot>();


    }

    // Update is called once per frame
    void Update()
    {
        //UpdateUI();

    }

    void UpdateUI ()
    {
        for (int i = 0 ; i < slots.Length ; i++)
        {
            if (i < inventory.items.Count)
            {
                slots[i].AddItem(inventory.items[i]);
            }
            else
            {
                slots[i].ClearSlot();
            }
        }

    }

}
