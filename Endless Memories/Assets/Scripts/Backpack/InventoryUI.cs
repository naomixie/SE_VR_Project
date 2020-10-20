using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using System.Diagnostics;
using UnityEngine;

public class InventoryUI : MonoBehaviour
{
    public Transform itemsParent;

    Inventory inventory;

    public InventorySlot[] slots;

    //public InventorySlot selectedSlot;

    //public AnimationClip slotIde;
    //public AnimationClip slotHover;
    //public AnimationClip slotActive;

    // Start is called before the first frame update
    void Start()
    {
        //InventoryUI inventory;

        inventory = Inventory.instance;
        inventory.onItemChangedCallback += UpdateUI;
        slots = itemsParent.GetComponentsInChildren<InventorySlot>();


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

    //public void OnSlotEnter (InventorySlot slot)
    //{
    //    ResetSlots();
    //    if (selectedSlot == null || selectedSlot != slot)
    //    {
    //        slot.animationClip = slotHover;
    //    }
    //}


    //public void OnSlotExit (InventorySlot slot)
    //{
    //    ResetSlots();
    //}

    //public void OnSlotSelected (InventorySlot slot)
    //{
    //    selectedSlot = slot;
    //    ResetSlots();
    //    slot.animationClip = slotActive;
    //    int index = slot.transform.GetSiblingIndex();
    //    for (int i = 0 ; i < slots.Length ; i++)
    //    {
    //        if (i == index)
    //        {
    //            slot.useButton.SetActive(true);
    //            slot.combineButton.SetActive(true);
    //        }
    //        else
    //        {
    //            slots[i].combineButton.SetActive(false);
    //            slots[i].useButton.SetActive(false);
    //        }
    //    }
    //}

    //public void ResetSlots ()
    //{
    //    foreach (InventorySlot slot in slots)
    //    {
    //        if (selectedSlot != null && slot == selectedSlot)
    //        {
    //            continue;
    //        }
    //        slot.animationClip = slotIde;
    //    }
    //}


}
