using UnityEngine;

public class Item : InteractableT
{
    new public string name = "New Item";
    public Sprite icon = null;
    public bool isDefaultItem = false;
    public string description;
    public Sprite detailImage = null;

    public override void Interact()
    {
        //Executes all the code from the base interaction function located inside InteractableT
        base.Interact();
        //After this would be code exclusive to PickUpItem
        if (Inventory.instance.Add(this))
        {
            Destroy(gameObject);
        }
    }
    public virtual void Use ()
    {
        Debug.Log("Using " + name);
    }
}
