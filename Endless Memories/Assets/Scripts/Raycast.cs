using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Raycast : MonoBehaviour
{
    private GameObject raycastedObject;
    private Camera fpsCam;
    private bool interactable;

    [SerializeField] private int rayLength = 10;
    [SerializeField] private LayerMask layerMaskInteract;

    [SerializeField] private Image uiCrosshair;

    private void Start()
    {
        fpsCam = Camera.main;
    }

    private void Update()
    {
        RaycastHit hit;
        Vector3 forward = fpsCam.transform.forward;

        // Debug.Log(forward);
        if(Physics.Raycast(fpsCam.transform.position, forward, out hit, rayLength, layerMaskInteract.value))
        {
            if(hit.collider.CompareTag("InteractableObj"))
            {
                raycastedObject = hit.collider.gameObject;

                // Crosshair red
                CrosshairActive();
                
                // TODO: Change to VR controller
                if (Input.GetKeyDown("e"))
                {
                    Debug.Log("I have interacted with an object!");
                    raycastedObject.SetActive(false);   // Make it disappear
                }

            }
            else
            {
                // Crosshair normal
                CrosshairNormal();
            }
        }
        else
        {
            CrosshairNormal();
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
}
