using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseLook : MonoBehaviourPun
{

    public float mouseSensitivity = 100f;

    public Transform playerBody;

    float rotationX = 0f;
    float rotationY = 0f;

    private int solo = 1;

    public float tmp = 1.0f;
    Quaternion originalRotation;

    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        originalRotation = transform.localRotation;
    }

    // Update is called once per frame
    void Update()
    {

        if(solo == 1 || photonView.IsMine)
        {
            ProcessInput();
        }
        
    }

    void ProcessInput()
    {
        rotationX += Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
        rotationY += Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        rotationY =  Mathf.Clamp (rotationY, -90f , 90f);
        
        Quaternion xQuaternion = Quaternion.AngleAxis (rotationX, Vector3.up);
        Quaternion yQuaternion = Quaternion.AngleAxis (rotationY, Vector3.left);
        
        transform.localRotation = originalRotation * xQuaternion * yQuaternion;
    }

    public void UnlockMouse ()
    {
        Cursor.lockState = CursorLockMode.Confined;
    }

    public void LockMouse ()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }
}
