using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WorldSpaceInteract : MonoBehaviour
{
    [SerializeField]
    private Transform targetTransform;

    private RectTransform rectTransform;
    private Image image;

    private Camera fpsCam;

    public float distance = 3f;


    void Start()
    {
        fpsCam = Camera.main;
    }

    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
        image = GetComponent<Image>();
    }


    void Update()
    {
        // 2D Coordinate on the screen
        // var screenPoint = fpsCam.WorldToScreenPoint(targetTransform.position);
        // rectTransform.position = screenPoint;

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
}
