using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour
// , IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler

{
    public InventoryUI inventoryUI;
    public Image icon;
    public Button removeButton;
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
        removeButton.interactable = true;
        newItem.gameObject.SetActive(false);
        Debug.Log("adding item " + item.name + " at slot ");
        Debug.Log(item == null);
    }

    public void ClearSlot ()
    {
        item = null;
        icon.sprite = null;
        icon.enabled = false;
        removeButton.interactable = false;
    }

    

    public void OnRemoveButton ()
    {
        Inventory.instance.Remove(item);
    }

    //public void UseItem ()
    //{
    //    if (!item)
    //    {
    //        item.Use();
    //    }
    //}



// public void OnPointerClick (PointerEventData eventData)
    public void PointerClick ()
    {
        if (item == null)
        {
            return;
        }
        // Debug.Log("InventorySlot OnPointerClick" + eventData.ToString());
        inventoryUI.OnSlotSelected(this);
    }

// public void OnPointerEnter (PointerEventData eventData)
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

// public void OnPointerExit (PointerEventData eventData)
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
