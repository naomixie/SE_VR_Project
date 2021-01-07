using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseLook : MonoBehaviourPun
{

    public float mouseSensitivity = 100f;

    public Transform playerBody;

    float xRotation = 0f;

    private int solo = 1;

    public float tmp = 1.0f;

    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
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
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        // Debug.Log(mouseY);
        xRotation -= mouseY;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f);

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
        playerBody.Rotate(Vector3.up * tmp);
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
