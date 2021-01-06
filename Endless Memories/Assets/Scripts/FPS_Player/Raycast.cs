using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Raycast : MonoBehaviour
{
    public GameObject raycastedObject;
    public Transform raycastedObjectTransform;
    private bool interactable;

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
        // fpsCam = Camera.main;
        // playerBehavior = GetComponent<PlayerBehavior>();
        interactableButtonGroups = GameObject.Find("Interactable Buttons");
    }

    private void Update()
    {
        RaycastHit hit;
        Vector3 forward = base.transform.forward;

        if (Physics.Raycast(base.transform.position, forward, out hit, rayLength, layerMaskInteract.value))
        {
            if (hit.collider.CompareTag("InteractableObject"))
            {
                // Debug.Log("Hit an Interactable Object!");
                raycastedObject = hit.collider.gameObject;
                raycastedObjectTransform = hit.collider.gameObject.GetComponent<Transform>();
                interactableRaycastedObject = hit.collider.gameObject.GetComponent<InteractableT>();
                
                CrosshairActive();
            }
            else
            {
                raycastedObject = null;
                raycastedObjectTransform = null;
                interactableRaycastedObject = null;
                CrosshairNormal();
            }
        }
        else
        {
            CrosshairNormal();
        }

        // [TMP]
        // Pop up interact options, when focus on a interactable object.
        // -> We simplified interaction to just one operation, so these code are not used.
        /*
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
        */
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

    public void CrosshairHide()
    {
        this.uiCrosshair.enabled = false;
    }

    public void CrosshairShow()
    {
        this.uiCrosshair.enabled = true;
    }

    public GameObject GetRaycastedObject()
    {
        return raycastedObject;
    }

    public Transform GetRaycastedObjectTransform()
    {
        return raycastedObjectTransform;
    }

    public InteractableT GetInteractableRaycastedObject ()
    {
        //Debug.Log(interactableRaycastedObject.name);
        if (interactableRaycastedObject != null)
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
