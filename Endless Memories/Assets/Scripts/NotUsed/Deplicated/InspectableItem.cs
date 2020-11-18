using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class InspectableItem : InteractableT
{
    public InspectItemDetails item;

    public override void Interact ()
    {
        base.Interact();
        Debug.Log("In Inspectable Item interact.");
        ShowDescription();
    }

    public void ShowDescription ()
    {
        //TODO 把信息显示在对话框内
        Debug.Log(item.description);
    }
}
