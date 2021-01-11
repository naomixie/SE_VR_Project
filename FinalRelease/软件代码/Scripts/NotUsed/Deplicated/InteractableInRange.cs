using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// [Deplicated]
// Pop up interact options, when focus on a interactable object.
// -> We simplified interaction to just one operation, so these code are not used.

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
