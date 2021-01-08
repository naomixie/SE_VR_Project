using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WhitePaperCrane : Item
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override void Interact()
    {
        // base.Interact(); don't pickup

        MainMenu.GameClear();
    }
}
