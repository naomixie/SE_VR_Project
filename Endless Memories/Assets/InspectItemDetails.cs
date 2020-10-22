using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Inspect Item", menuName = "Inventory/Inspect Item")]
public class InspectItemDetails : ScriptableObject
{
    new public string name = "New Inspectable Item Details";
    public string description;

}
