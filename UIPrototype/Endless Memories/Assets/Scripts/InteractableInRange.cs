using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InteractableInRange : MonoBehaviour
    {
    public bool inRange;
    public Image uiButton;

    private void Start ()
        {
        inRange=false;
        }

    private void Update ()
        {
        }

    public void DestroyGameObject ()
        {
        Destroy(uiButton.gameObject);
        Destroy(gameObject);
        }
    }
