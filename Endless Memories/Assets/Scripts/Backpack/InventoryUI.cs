using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using System.Diagnostics;
using UnityEngine;

public class InventoryUI : MonoBehaviour
{
    public static InventoryUI instance;

    public InventorySlot[] slots;

    //public InventorySlot selectedSlot;

    //public AnimationClip slotIde;
    //public AnimationClip slotHover;
    //public AnimationClip slotActive;

    private void Awake()
    {
        instance = this;
    }

    public void UpdateUI ()
    {
        for (int i = 0 ; i < slots.Length; i++)
        {
            if (i < Inventory.instance.items.Count)
            {
                slots[i].AddItem(Inventory.instance.items[i]);
                Debug.Log("added item " + Inventory.instance.items[i].name + " at " + i);
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
