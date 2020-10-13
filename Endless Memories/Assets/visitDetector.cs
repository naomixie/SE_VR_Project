using System;
using System.CodeDom;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * Need the attached GameObject has one of Collider component whose "is Trigger" is true.
 * 
 * Invoke visitEvent once when Player entered the collision area.
 */
public class visitDetector : MonoBehaviour
{
    private const String playerName = "First Person Player";
    private Action visitEvent = null;
    private Boolean inArea = false;

    void OnTriggerEnter(Collider collider)
    {
        //setVisitEvent(() => Debug.Log("Test Event")); //usage
        if (collider.name.Equals(playerName))
        {
            inArea = true;
            if (visitEvent != null)
            {
                visitEvent.Invoke();
                visitEvent = null;
            }
        }
    }
    public void setVisitEvent(Action visitEvent)
    {
        this.visitEvent = visitEvent;
    }
    void OnTriggerExit(Collider collider)
    {
        if (collider.name.Equals(playerName))
        {
            inArea = false;
        }
    }

    public Boolean isPlayerInArea()
    {
        return inArea;
    }
}
