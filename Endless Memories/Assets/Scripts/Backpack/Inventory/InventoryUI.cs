using System.Collections;
using System.Collections.Generic;
using System.Linq;
//using System.Diagnostics;
using UnityEngine;
using UnityEngine.UI;


public class InventoryUI : MonoBehaviour
{
    public static InventoryUI instance;
    
    public Image detailsImage;
    public Text detailsText;

    public InventorySlot[] slots;

    public InventorySlot selectedSlot;

    public Sprite slotIdle;
    public Sprite slotHover;
    public Sprite slotActive;

    private void Awake()
    {
        instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
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

    public void OnSlotEnter (InventorySlot slot)
    {
        ResetSlots();
        if (selectedSlot == null || selectedSlot != slot)
        {
            //Debug.Log("Hovering slot");
            slot.Background.sprite = slotHover;
        }
    }


    public void OnSlotExit (InventorySlot slot)
    {
        ResetSlots();
    }

    public void OnSlotSelected (InventorySlot slot)
    {
        selectedSlot = slot;
        ResetSlots();
        slot.Background.sprite = slotActive;
        int index = slot.transform.GetSiblingIndex();
        
    }

    public void ResetSlots ()
    {
        foreach (InventorySlot slot in slots)
        {
            if (selectedSlot != null && slot == selectedSlot)
            {
                continue;
            }
            slot.Background.sprite = slotIdle;
        }
    }

    public void Update ()
    {
        if (gameObject.activeSelf && selectedSlot!= null && Input.GetKeyDown(KeyCode.W))
        {
            // Use item only when object is chosen
            selectedSlot.item.Use();
        }

        if (selectedSlot != null)
        {
            detailsImage.sprite = selectedSlot.item.detailImage;
            detailsText.text = selectedSlot.item.description;
        }
    }


}
