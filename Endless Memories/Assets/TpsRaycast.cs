using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TpsRaycast : MonoBehaviour
{
    Ray ray;
    RaycastHit hit;
    
    void Start()
    {
        Cursor.lockState = CursorLockMode.Confined;
    }

    void Update()
    {
        // Debug.Log(Camera.main);
        if(Cursor.lockState == CursorLockMode.Locked)
            Cursor.lockState = CursorLockMode.Confined;
        ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if(Physics.Raycast(ray, out hit))
        {
            // print(hit.collider.name);
            // print(hit.point);
        }
    }

    void OnMouseOver()
    {
        // print (gameObject.name);
    }
}
