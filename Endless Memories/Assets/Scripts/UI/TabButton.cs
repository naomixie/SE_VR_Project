using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

[RequireComponent(typeof(Image))]
public class TabButton : MonoBehaviour
{
    public TabGroup tabGroup;

    public Image background;

    public void OPointerClick ()
    {
        //Debug.Log("TabButton OnPointerClick" + eventData.ToString());
        tabGroup.OnTabSelected(this);
    }

    public void OPointerEnter ()
    {
        //Debug.Log("TabButton OnPointerEnter" + eventData.ToString());
        tabGroup.OnTabEnter(this);
    }

    public void OPointerExit ()
    {
        //Debug.Log("TabButton OnPointerExit" + eventData.ToString());
        tabGroup.OnTabExit(this);
    }

    private void Start ()
    {
        background = GetComponent<Image>();
        tabGroup.Subscribe(this);
    }

}
