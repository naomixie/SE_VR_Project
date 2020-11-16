using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUpItem : Item
{
    public override void Interact ()
    {
        //Executes all the code from the base interaction function located inside InteractableT
        base.Interact();
        //After this would be code exclusive to PickUpItem
        if (Inventory.instance.Add(this))
        {
            Destroy(gameObject);
        }
    }
}
