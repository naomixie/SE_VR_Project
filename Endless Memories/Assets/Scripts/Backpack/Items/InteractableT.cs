﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableT : MonoBehaviour
    {
    public float radius = 3f;

    bool isFocus = false;
    bool des = false;
    Transform player;

    // For riddle interaction purposes
    public RiddleBrain riddleBrain;
    public Riddle riddle;
    public int interactCode;

    private void Start() {
        //riddleBrain = GameObject.FindGameObjectWithTag("RiddleBrain").GetComponent<RiddleBrain>();    
    }

    void Update ()
    {
        /*
        if (des)
            {
            Debug.Log("destroying "+ gameObject.name);
            Destroy(gameObject);
            }
        */
        // Debug.Log("InteractableT update()");
        //if (isFocus)
        //{
        //// This is not required because radius is checked from the Raycast component
        ////float distance = Vector3.Distance(player.position, transform.position);
        ////if (distance<=radius)
        ////    {
        ////    Debug.Log("INTERACT");
        ////    }
            
        //Interact();

        //}
    }

    public virtual void Interact ()
        {
            //Debug.Log("In InteractableT interact");
        }


    private void OnDrawGizmosSelected ()
        {
        Gizmos.color=Color.yellow;
        Gizmos.DrawWireSphere(transform.position, radius);
        }
    }