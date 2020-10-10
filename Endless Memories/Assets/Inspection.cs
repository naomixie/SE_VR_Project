using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inspection : MonoBehaviour
{
    [SerializeField] private GameObject player;
    [SerializeField] private Raycast raycast;
    [SerializeField] private MouseLook mouseLook;
    [SerializeField] private PlayerMovement playerMovement;
    [SerializeField] private Transform inspectionObjectTransform;
    [SerializeField] private bool inspect = false;

    private Vector3 posLastFrame;

    public Camera uiCamera;
    public Canvas fpsCanvas;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("First Person Player");
        raycast = player.GetComponentInChildren<Raycast>();
        mouseLook = player.GetComponentInChildren<MouseLook>();
        playerMovement = player.GetComponentInChildren<PlayerMovement>();
    }

    // Update is called once per frame
    void Update()
    {
        if(inspect)
        {

            if (Input.GetMouseButtonDown(0))
                posLastFrame = Input.mousePosition;

            if (Input.GetMouseButton(0))
            {
                var delta = Input.mousePosition - posLastFrame;
                posLastFrame = Input.mousePosition;

                var axis = Quaternion.AngleAxis(-90f, Vector3.forward) * delta;
                inspectionObjectTransform.rotation = Quaternion.AngleAxis(delta.magnitude * 0.1f, axis) * inspectionObjectTransform.rotation;
            }

            if (Input.GetKeyDown("v"))
            {
                Inspect(null);
            }
        }
    }

    public void Inspect(GameObject raycastedObject)
    {
        Debug.Log("Inspect");

        var inspectionTransform = transform;

        if (!inspect && raycastedObject != null)
        {
            Cursor.lockState = CursorLockMode.Confined;

            inspect = true;
            fpsCanvas.GetComponent<RawImage>().enabled = true;
            mouseLook.enabled = false;
            playerMovement.enabled = false;
            raycast.CrosshairHide();

            // Instantiating object
            inspectionObjectTransform = Instantiate(raycastedObject.transform, new Vector3(inspectionTransform.position.x, inspectionTransform.position.y, inspectionTransform.position.z), Quaternion.identity);
            inspectionObjectTransform.gameObject.layer = 5;

            // Disabling rigidbody
            var rb = inspectionObjectTransform.GetComponent<Rigidbody>();
            rb.isKinematic = true;
            rb.detectCollisions = false;

            // Setting parent
            inspectionObjectTransform.transform.parent = inspectionTransform;
        }
        else
        {
            Cursor.lockState = CursorLockMode.Locked;

            inspect = false;
            fpsCanvas.GetComponent<RawImage>().enabled = false;
            mouseLook.enabled = true;
            playerMovement.enabled = true;
            raycast.CrosshairShow();

            if(raycastedObject == null)
            {
                Destroy(inspectionObjectTransform.gameObject);
            }
        }
        
    }
}
