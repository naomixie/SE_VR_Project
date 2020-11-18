using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    #region Singleton

    public int space = 20;

    public static Inventory instance;

    void Awake ()
    {
        if (instance!=null)
        {
            Debug.LogWarning("More than one instance of Inventory!");
            return;
        }
        instance=this;
        
    }

    #endregion


    public List<Item> items = new List<Item>();

    public bool Add (Item item)
    {
        if (!item.isDefaultItem && items.Count < space)
        {
            items.Add(item);
            InventoryUI.instance.UpdateUI();
            return true;
        }
        return false;
    }

    public void Remove (Item item)
    {
        items.Remove(item);
        InventoryUI.instance.UpdateUI();
    }



    // Update is called once per frame
    //void Update()
    //{
        
    //}
}
