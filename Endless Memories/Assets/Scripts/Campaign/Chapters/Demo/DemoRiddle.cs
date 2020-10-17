using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DemoRiddle : Riddle
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override int RiddleDetail()
    {
        Debug.Log("Interacted with RiddleDetail");
        return 1;
    }
}
