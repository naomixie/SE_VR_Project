using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InteractableButton : MonoBehaviour
{
    [SerializeField]
    public GameObject targetObject;

    private Transform targetTransform;

    private RectTransform rectTransform;
    private Image image;

    private Camera fpsCam;

    public float distance;

    void Start()
    {
        fpsCam = Camera.main;
    }

    /*
    private void Awake()
    {
        targetTransform = targetObject.transform;
        rectTransform = GetComponent<RectTransform>();
        image = GetComponent<Image>();
    }
    */

    public void Initialize (GameObject initializedObject)
        {
        targetObject=initializedObject;
        targetTransform=targetObject.transform;
        rectTransform=GetComponent<RectTransform>();
        image=GetComponent<Image>();

        targetObject.GetComponent<InteractableInRange>().uiButton= GetComponent<Image>();
        }

    void Update()
    {
        // 2D Coordinate on the screen
        // var screenPoint = fpsCam.WorldToScreenPoint(targetTransform.position);
        // rectTransform.position = screenPoint;
        //if (targetObject == null)
        //    return;
        // Coordinate in worldspace
        rectTransform.position = targetTransform.position;

        // 3D Coordinate for viewportPoint
        var viewportPoint = fpsCam.WorldToViewportPoint(targetTransform.position);
        var distanceFromCenter = Vector2.Distance(viewportPoint, Vector2.one * 0.5f);
        var distanceInWorld = Vector3.Distance(fpsCam.transform.position, targetTransform.position);
        bool inRange = distanceInWorld < distance;

        var show = distanceFromCenter < 0.2f && inRange;

        GetComponent<Image>().enabled = show;
    }

    

    public GameObject GetGameObject()
    {
        return targetObject;
    }

    public void Detach()
    {
        // Make the button disappear
        gameObject.SetActive(false);

        // Make the attached object disappear
        this.targetObject = null;
        Destroy(targetObject);
    }

    public float radius = 3f;

    private void OnDrawGizmosSelected ()
        {
        Gizmos.color=Color.yellow;
        Gizmos.DrawWireSphere(transform.position, radius);
        }
    }
