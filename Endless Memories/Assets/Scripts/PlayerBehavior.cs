using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PlayerBehavior : MonoBehaviour
{
    private Raycast raycast;
    private GameObject interactableButtonGroups;
    private int interactableButtonCount = 0;
    private Camera fpsCam;
    public InteractableT focus;

    // Start is called before the first frame update
    void Start()
    {
        fpsCam = Camera.main;
        raycast = GetComponent<Raycast>();
    }

    // Update is called once per frame
    void Update()
    {
        // TODO: Change to VR controller
        // Destroys Item
        if (EventSystem.current.IsPointerOverGameObject())
            return;

        if (Input.GetKeyDown("r"))
        {
            DestroyObject(raycast.GetRaycastedObject());
        }

        if (Input.GetKeyDown("q"))
            {
            Destroy(raycast.GetRaycastedObject());
            }

        // Collects Item
        if (Input.GetKeyDown("e"))
        {
            //TODO: add Tag identification for different types of interactable objects
            //CollectObject(raycast.GetRaycastedObject());
            //CollectObject(raycast.GetInteractableRaycastedObject());
            Debug.Log("Pressed e");
            if (raycast.GetInteractableRaycastedObject()!=null)
                {
                Debug.Log("In != null");
                //SetFocus(raycast.GetInteractableRaycastedObject().GetComponent<InteractableT>());
                raycast.GetInteractableRaycastedObject().GetComponent<InteractableT>().Interact();
                }
            }
    }

    public void DestroyObject(GameObject raycastedObject)
    {
        Debug.Log("I have interacted with an object!");

        /*
        interactableButtonGroups=fpsCam.transform.GetChild(0).transform.GetChild(0).gameObject;
        interactableButtonCount=interactableButtonGroups.transform.childCount;

        InteractableButton interactableButton;
        GameObject attachedObject;
        for (int i = 0 ; i<interactableButtonCount ; i++)
            {
            interactableButton=interactableButtonGroups.transform.GetChild(i).gameObject.GetComponent<InteractableButton>();
            attachedObject=interactableButton.GetGameObject();
            if (attachedObject==raycastedObject)
                {
                interactableButton.Detach();
                Destroy(raycastedObject);
                break;
                }
            }
        */

        raycastedObject.GetComponent<InteractableInRange>().DestroyGameObject();
    }


    //public void CollectObject (GameObject interactableRaycastedObject)
    //    {
    //    // this should be an interactableRaycastedObject

    //    }

    public void CollectObject (InteractableT interactableRaycastedObject)
        {
        // this should be an interactableRaycastedObject
        interactableRaycastedObject.DestroyGameObject();
        }

    void SetFocus (InteractableT newFocus)
        {
        focus=newFocus;
        focus.OnFocused(transform);
        }

    void RemoveFocus ()
        {
        focus=null;
        //focus.OnDefocused();
        }







    }
