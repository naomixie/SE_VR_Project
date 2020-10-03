using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableT : MonoBehaviour
    {
    public float radius = 3f;

    bool isFocus = false;
    bool des = false;
    Transform player;

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
            Debug.Log("In InteractableT interact");
            // Destroy(gameObject);
            // This method is meant to be override, code inside this function could be repeated before every time this function is overidden
        }

    public void OnFocused (Transform playerTransform)
        {
        Debug.Log("In Onfucused");
        isFocus=true;
        player=playerTransform;
        // Interact();
        }



    public void DestroyGameObject ()
        {
        des=true;
        }

    private void OnDrawGizmosSelected ()
        {
        Gizmos.color=Color.yellow;
        Gizmos.DrawWireSphere(transform.position, radius);
        }
    }