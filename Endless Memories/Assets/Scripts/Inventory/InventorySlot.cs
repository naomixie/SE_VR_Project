using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour


{
    public InventoryUI inventoryUI;
    public Image icon;
    public Image Background;

    public Item item;

    private void Start ()
    {
    }

    public void AddItem (Item newItem)
    {
        item = newItem;
        icon.sprite = item.icon;
        icon.enabled = true;
        newItem.gameObject.SetActive(false);
        Debug.Log("adding item " + item.name + " at slot ");
        Debug.Log(item == null);
    }

    public void ClearSlot ()
    {
        item = null;
        icon.sprite = null;
        icon.enabled = false;
    }

    //public void UseItem ()
    //{
    //    if (!item)
    //    {
    //        item.Use();
    //    }
    //}

    public void PointerClick ()
    {
        if (item == null)
        {
            return;
        }
        inventoryUI.OnSlotSelected(this);
    }

    public void PointerEnter ()
    {
        //Debug.Log("Item: " + item.name);
        if (item == null)
        {
            Debug.Log("Item is null.");
            return;
        }
        //Debug.Log("InventorySlot OnPointerEnter" + eventData.ToString());
        inventoryUI.OnSlotEnter(this);
    }

    public void PointerExit ()
    {
        if (item == null)
        {
            return;
        }
        //Debug.Log("InventorySlot OnPointerExit" + eventData.ToString());
        inventoryUI.OnSlotExit(this);
    }
}
