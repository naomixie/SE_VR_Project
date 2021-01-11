using UnityEngine;

public class Item : InteractableT
{
    new public string name = "New Item";
    public Sprite icon = null;
    public bool isDefaultItem = false;
    public string description;
    public Sprite detailImage = null;

    public virtual void Use ()
    {
        Debug.Log("Using " + name);
    }
    public override void Interact()
    {
        //Executes all the code from the base interaction function located inside InteractableT
        base.Interact();
        //After this would be code exclusive to Item
        if (Inventory.instance.Add(this))
        {
            //Destroy(gameObject);
            Destroy(GetComponent<Rigidbody>());
            Destroy(GetComponent<BoxCollider>());
            Destroy(GetComponent<MeshRenderer>());
        }
    }
}
