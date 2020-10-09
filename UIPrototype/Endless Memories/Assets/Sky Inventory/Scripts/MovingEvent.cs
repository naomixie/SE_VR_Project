using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MovingEvent : MonoBehaviour {

	private ElementalInventory inventory;

	void Start () {
		if (transform.tag == "Cell") {
			GetComponent<Button> ().onClick.AddListener (delegate{moveHere();});
		} else {
			GetComponent<Button> ().onClick.AddListener (delegate{moveItem();});
		}
	}

	public void moveItem () {
		if (inventory == null) {
			inventory = FindObjectOfType (typeof(ElementalInventory)) as ElementalInventory;
		}
		inventory.moveItemLinkFirst (transform);
	}

	public void moveHere () {
		if (inventory == null) {
			inventory = FindObjectOfType (typeof(ElementalInventory)) as ElementalInventory;
		}
		inventory.moveItemLinkSecond (transform);
	}

}
