using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RiddleDemo : Riddle
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
    }

    public override int Interact(int interactCode)
    {
        Debug.Log("Interacted with riddleDemo.");
        if(interactCode == 1)
        {
            return 1;
            // return base.Interact(interactCode);
        }
        else
            return 0;
    }
}
