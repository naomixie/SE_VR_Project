﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    private Inspection inspection;
    public Canvas canvas;
    public GameObject inventorySlot;

    void Start()
    {
        inspection = GetComponentInChildren<Inspection>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Inspect(GameObject raycastedGameObject)
    {
        inspection.Inspect(raycastedGameObject);
    }

    public void Disable()
    {

    }
}