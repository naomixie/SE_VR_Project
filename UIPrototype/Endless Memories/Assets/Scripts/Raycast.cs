using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Raycast : MonoBehaviour
{
    private GameObject raycastedObject;
    // private Camera fpsCam;
    private CinemachineVirtualCamera fpsCam;
    private bool interactable;

    private int solo = 1;

    private GameObject interactableButtonGroups;
    private InteractableT interactableRaycastedObject;

    // Gizmos
    public float radius = 8f;
    public Transform uiInteractable;


    [SerializeField] private int rayLength = 10;
    [SerializeField] private LayerMask layerMaskInteract;
    //private LayerMask layerMaskInteract = ~(1);

    [SerializeField] private Image uiCrosshair;

    private void Start()
    {
        fpsCam = GetComponentInChildren<CinemachineVirtualCamera>();
        // fpsCam = Camera.main;
        // playerBehavior = GetComponent<PlayerBehavior>();
        interactableButtonGroups = GameObject.Find("Interactable Buttons");
    }

    private void Update()
    {
        RaycastHit hit;
        Vector3 forward = fpsCam.transform.forward;

        if (Physics.Raycast(fpsCam.transform.position, forward, out hit, rayLength, layerMaskInteract.value))
        {
            if (hit.collider.CompareTag("InteractableObject"))
            {
                // Debug.Log("Hit an Interactable Object!");
                raycastedObject = hit.collider.gameObject;
                //if (raycastedObject.name=="InteractableT")
                //    {
                    
                //    }
                interactableRaycastedObject = hit.collider.gameObject.GetComponent<InteractableT>();
                
                CrosshairActive();
            }
            else
            {
                CrosshairNormal();
            }
        }
        else
        {
            CrosshairNormal();
        }

        // Selecting objects within range
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, radius);
        foreach (var hitCollider in hitColliders)
        {
            GameObject hitObject = hitCollider.gameObject;
            if (hitObject.GetComponent<InteractableInRange>() != null)
            {
                // Debug.Log("Instantiating");
                if(!hitObject.GetComponent<InteractableInRange>().inRange)
                {
                    hitObject.GetComponent<InteractableInRange>().inRange = true;
                    var uiButton = Instantiate(uiInteractable, interactableButtonGroups.transform.position, interactableButtonGroups.transform.rotation);
                    uiButton.transform.parent = interactableButtonGroups.transform;
                    uiButton.GetComponent<InteractableButton>().Initialize(hitObject);
                }
            }
        }
    }

    void CrosshairActive()
    {
        if (!interactable)
        {
            uiCrosshair.color = Color.red;
        }
        interactable = true;
    }

    void CrosshairNormal()
    {
        if (interactable)
        {
            uiCrosshair.color = Color.white;
        }
        interactable = false;
    }

    public GameObject GetRaycastedObject()
    {
        return raycastedObject;
    }

    public InteractableT GetInteractableRaycastedObject ()
        {
        //Debug.Log(interactableRaycastedObject.name);
        if (interactableRaycastedObject!=null)
            {
            return interactableRaycastedObject;
            }
        return null;
        }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
