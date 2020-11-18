using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Reaper : MonoBehaviourPun
{
    private int throwStage = 0;
    private int dropStage = 0;

    public PvpTpsManager pvpTpsManager;

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
        if(Input.GetMouseButtonDown(0))
        {
            if(throwStage == 1 && dropStage == 0)
            {
                DoThrow();
                CancelThrow();
            }

            if(throwStage == 0 && dropStage == 1)
            {
                DoDrop();
                CancelDrop();
            }
        }
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
            Debug.Log(hit.point);
            Debug.Log(hit.collider.name);

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
            Debug.Log(hit.point);
            Debug.Log(hit.collider.name);

            pvpTpsManager.pvpTpsDataManager.dropFlag = !pvpTpsManager.pvpTpsDataManager.dropFlag;
            pvpTpsManager.pvpTpsDataManager.dropPosition = hit.point;
        }
    }
}