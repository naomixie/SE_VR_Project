using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBehavior : MonoBehaviour
{
    private Raycast raycast;
    private GameObject interactableButtonGroups;
    private int interactableButtonCount = 0;
    private Camera fpsCam;

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
        if (Input.GetMouseButtonDown(0))
        {
            DestroyObject(raycast.GetRaycastedObject());
        }

        // Collects Item
        if (Input.GetKeyDown("e"))
        {
            CollectObject(raycast.GetRaycastedObject());
        }


    }

    public void DestroyObject(GameObject raycastedObject)
    {
        Debug.Log("I have interacted with an object!");

        interactableButtonGroups = fpsCam.transform.GetChild(0).transform.GetChild(0).gameObject;
        interactableButtonCount = interactableButtonGroups.transform.childCount;

        InteractableButton interactableButton;
        GameObject attachedObject;
        for (int i = 0; i < interactableButtonCount; i++)
        {
            interactableButton = interactableButtonGroups.transform.GetChild(i).gameObject.GetComponent<InteractableButton>();
            attachedObject = interactableButton.GetGameObject();
            if (attachedObject == raycastedObject)
            {
                interactableButton.Detach();
                break;
            }
        }
    }

    public virtual void CollectObject (GameObject raycastedObject)
        {

        //This method is meant to be overwritten
        Debug.Log("Interacting with "+raycastedObject.name);
        }





}
