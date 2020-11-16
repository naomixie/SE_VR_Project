using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour
    //,IPointerClickHandler,IPointerEnterHandler,IPointerExitHandler
{
    public InventoryUI inventoryUI;
    public Image icon;
    public Button removeButton;
    //public GameObject combineButton;
    //public GameObject useButton;
    //public AnimationClip animationClip;

    Item item;

    private void Start ()
    {
        //combineButton.SetActive(false);
        //useButton.SetActive(false);
    }

    public void AddItem (Item newItem)
    {
        item = newItem;
        icon.sprite = item.icon;
        icon.enabled = true;
        removeButton.interactable = true;
    }

    public void ClearSlot ()
    {
        item = null;
        icon.sprite = null;
        icon.enabled = false;
        removeButton.interactable = false;
    }

    //public void OnPointerClick (PointerEventData eventData)
    //{
    //    inventoryUI.OnSlotSelected(this);
    //}

    //public void OnPointerEnter (PointerEventData eventData)
    //{
    //    inventoryUI.OnSlotEnter(this);
    //}

    //public void OnPointerExit (PointerEventData eventData)
    //{
    //    inventoryUI.OnSlotExit(this);
    //}

    public void OnRemoveButton ()
    {
        Inventory.instance.Remove(item);
    }

    public void UseItem ()
    {
        if (!item)
        {
            item.Use();
        }
    }
}
