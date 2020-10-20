using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableT : MonoBehaviour
    {
    public float radius = 3f;


    //void Update ()
    //{
        
    //}

    public virtual void Interact ()
        {
            Debug.Log("In InteractableT interact");
        }


    private void OnDrawGizmosSelected ()
        {
        Gizmos.color=Color.yellow;
        Gizmos.DrawWireSphere(transform.position, radius);
        }
    }