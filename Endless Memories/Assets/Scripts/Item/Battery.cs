using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Battery : PickUpItem
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public override void Use()
    {
        base.Use();
        GameObject raycastedObject = Surviver.instance.RaycastedObject();
        if (raycastedObject != null)
        {
            if (raycastedObject.name.Equals("alpinist"))
            {
                Debug.Log("battery: I found alpinist!");
            }
            else
            {
                Debug.Log("battery: I found " + raycastedObject.name);
            }
        }
    }
    public override void Interact()
    {
        base.Interact();
    }


}
