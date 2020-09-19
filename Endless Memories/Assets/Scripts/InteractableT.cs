//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class InteractableT : MonoBehaviour
    {
    public float radius = 3f;

    bool isFocus = false;
    Transform player;

    //void Update ()
    //    {
    //    if (isFocus)
    //        {
    //        float distance = Vector3.Distance(player.position, transform.position);
    //        if (distance<=radius)
    //            {
    //            }
    //        }
    //    }

    private void OnDrawGizmosSelected ()
        {
        Gizmos.color=Color.yellow;
        Gizmos.DrawWireSphere(transform.position, radius);
        }
    }