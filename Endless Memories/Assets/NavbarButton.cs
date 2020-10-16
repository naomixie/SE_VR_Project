using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NavbarButton : MonoBehaviour
{
    public int slot;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (gameObject.GetComponentInParent<Routing>().currPanel == Routing.curPanel.inventory && slot == 1)
        {
            GetComponent<Toggle>().Select();
        }
        if (gameObject.GetComponentInParent<Routing>().currPanel == Routing.curPanel.map && slot == 2)
        {
            GetComponent<Toggle>().Select();
        }
        if (gameObject.GetComponentInParent<Routing>().currPanel == Routing.curPanel.clue && slot == 3)
        {
            GetComponent<Toggle>().Select();
        }
        if (gameObject.GetComponentInParent<Routing>().currPanel == Routing.curPanel.settings && slot == 4)
        {
            GetComponent<Toggle>().Select();
        }

    }
}
