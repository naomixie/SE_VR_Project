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
}
