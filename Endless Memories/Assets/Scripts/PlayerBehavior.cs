using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PlayerBehavior : MonoBehaviourPun
{
    private Raycast raycast;
    private GameObject interactableButtonGroups;
    private int interactableButtonCount = 0;
    private Camera fpsCam;
    public InteractableT focus;

    private PlayerController playerController;

    private int solo = 1;

    // Start is called before the first frame update
    void Start()
    {
        fpsCam = Camera.main;
        raycast = GetComponent<Raycast>();
        playerController = GetComponent<PlayerController>();
    }

    // Update is called once per frame
    void Update()
    {
        if (solo == 1 || photonView.IsMine)
        {
            // Debug.Log("Waiting for input");
            ProcessInput();
        }

    }

    private void ProcessInput()
    {
        // TODO: Change to VR controller
        // Destroys Item
        if (EventSystem.current.IsPointerOverGameObject())
            return;

        //if (Input.GetKeyDown("r"))
        //{
        //    Debug.Log("Pressed r");
        //    DestroyObject(raycast.GetInteractableRaycastedObject());
        //}

        //if (Input.GetKeyDown("q"))
        //{
        //    Debug.Log("Pressed q");
        //    Destroy(raycast.GetInteractableRaycastedObject());
        //}

        // Collects Item or Inspects Item(Pop out dialogue)
        if (Input.GetKeyDown("e") || Input.GetKeyDown("f"))
        {
            //TODO: add Tag identification for different types of interactable objects
            Debug.Log("Pressed e or f");
            if (raycast.GetInteractableRaycastedObject() != null)
            {
                Debug.Log("In != null");
                raycast.GetInteractableRaycastedObject().GetComponent<InteractableT>().Interact();
            }
        }

        
        if (Input.GetKeyDown("v"))
        {
            Debug.Log("Pressed v");
            Inspect(raycast.GetRaycastedObject());
        }
    }

    //public void DestroyObject(GameObject raycastedObject)
    //{
    //    Debug.Log("I have interacted with an object!");

    //    /*
    //    interactableButtonGroups=fpsCam.transform.GetChild(0).transform.GetChild(0).gameObject;
    //    interactableButtonCount=interactableButtonGroups.transform.childCount;

    //    InteractableButton interactableButton;
    //    GameObject attachedObject;
    //    for (int i = 0 ; i<interactableButtonCount ; i++)
    //        {
    //        interactableButton=interactableButtonGroups.transform.GetChild(i).gameObject.GetComponent<InteractableButton>();
    //        attachedObject=interactableButton.GetGameObject();
    //        if (attachedObject==raycastedObject)
    //            {
    //            interactableButton.Detach();
    //            Destroy(raycastedObject);
    //            break;
    //            }
    //        }
    //    */

    //    raycastedObject.GetComponent<InteractableInRange>().DestroyGameObject();
    //}

    public void Inspect(GameObject raycastedObject)
    {
        playerController.Inspect(raycastedObject);
    }


}
