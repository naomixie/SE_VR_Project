using UnityEngine;
using System.Collections;

public class VisualMover : MonoBehaviour {

	void Update () {
		transform.localPosition = (new Vector3(Screen.width/2f, Screen.height/2f, 0)-new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 0))/30;
	}

}
