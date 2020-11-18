using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

[RequireComponent(typeof(Image))]
public class TabButton : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    public TabGroup tabGroup;

    public Image background;

    public void OnPointerClick (PointerEventData eventData)
    {
        //Debug.Log("TabButton OnPointerClick" + eventData.ToString());
        tabGroup.OnTabSelected(this);
    }

    public void OnPointerEnter (PointerEventData eventData)
    {
        //Debug.Log("TabButton OnPointerEnter" + eventData.ToString());
        tabGroup.OnTabEnter(this);
    }

    public void OnPointerExit (PointerEventData eventData)
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
