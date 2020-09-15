using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ObjectType { Script = 1, Env = 2 };


public class InteractableObject : MonoBehaviour
{
    public ObjectType objectType;
    public bool combine;

    public bool inRange;

    private void Start()
    {
        combine = false;
        objectType = ObjectType.Script;
        inRange = false;
    }

    private void Update()
    {
     
    }
}
