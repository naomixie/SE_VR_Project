using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUpItem : InteractableT
{
    public Item item;   

    public override void Interact ()
    {
        //Executes all the code from the base interaction function located inside InteractableT
        base.Interact();
        //After this would be code exclusive to PickUpItem
        Debug.Log("In PickupItem Interact");
        PickUp();
    }

    public void PickUp ()
    {
        Debug.Log("In PickupItem Pickup");
        Debug.Log("Picking up "+item.name);
        if (Inventory.instance.Add(item))
        {
            Destroy(gameObject);
        }


    }

}
