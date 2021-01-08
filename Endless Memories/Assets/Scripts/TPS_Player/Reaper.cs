using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Reaper : MonoBehaviourPun
{
    private int throwStage = 0;
    private int dropStage = 0;

    public PvpTpsManager pvpTpsManager;

    public CharacterController controller;
    public float speed = 12f;


    // Start is called before the first frame update
    void Start()
    {
        pvpTpsManager = GameObject.FindGameObjectWithTag("TPS Manager").GetComponent<PvpTpsManager>();
    }

    // Update is called once per frame
    void Update()
    {
        // Debug.Log(photonView.owner);
        if (photonView.IsMine)
        {
            ProcessInput();
        }    
    }

    private void ProcessInput()
    {
        if(Input.GetMouseButtonDown(1))
        {
            if(throwStage == 1 && dropStage == 0)
            {
                DoThrow();
                pvpTpsManager.Throw(0);
            }

            if(throwStage == 0 && dropStage == 1)
            {
                DoDrop();
                pvpTpsManager.Drop(0);
            }
        }


        float x = Input.GetAxis("Horizontal") + Input.GetAxis("TouchPadHorizontialLeft");
        float z = Input.GetAxis("Vertical") -Input.GetAxis("TouchPadVerticalLeft");
        Vector3 move = transform.right * x + transform.forward * z;
        controller.Move(move * speed * Time.deltaTime);

        if(Input.GetKeyDown("Space"))
        {
            controller.Move(transform.up * speed * Time.deltaTime);
        }

        if(Input.GetKeyDown("Shift"))
        {
            controller.Move(-transform.up * speed * Time.deltaTime);
        }
    }

    public void Drop()
    {
        if (throwStage == 1)
            pvpTpsManager.Throw(0);

        if (dropStage == 0)
            dropStage = 1;
        else
            dropStage = 0;
        pvpTpsManager.Drop(dropStage);
    }

    public void Throw()
    {
        if (dropStage == 1)
            pvpTpsManager.Drop(0);

        if (throwStage == 0)
            throwStage = 1;
        else
            throwStage = 0;

        pvpTpsManager.Throw(throwStage);
    }

    public void PrepareDrop()
    {
        Debug.Log("Prepare drop.");
        dropStage = 1;
    }

    public void CancelDrop()
    {
        Debug.Log("Cancel drop.");
        dropStage = 0;
    }

    public void PrepareThrow()
    {
        Debug.Log("Prepare throw.");
        throwStage = 1;
    }

    public void CancelThrow()
    {
        Debug.Log("Cancel throw.");
        throwStage = 0;
    }
    private void DoThrow()
    {
        Debug.Log("Throwing");
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if(Physics.Raycast(ray, out hit))
        {
            pvpTpsManager.pvpTpsDataManager.noiceFlag = !pvpTpsManager.pvpTpsDataManager.noiceFlag;
            pvpTpsManager.pvpTpsDataManager.noticePosition = hit.point;
        }
    }

    private void DoDrop()
    {
        Debug.Log("Dropping");
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if(Physics.Raycast(ray, out hit))
        {
            pvpTpsManager.pvpTpsDataManager.dropFlag = !pvpTpsManager.pvpTpsDataManager.dropFlag;
            pvpTpsManager.pvpTpsDataManager.dropPosition = hit.point;
        }
    }
}