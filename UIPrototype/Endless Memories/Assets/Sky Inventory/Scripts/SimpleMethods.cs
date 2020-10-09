using UnityEngine;
using System.Collections;

public static class SimpleMethods {

	//Method to get child with tag
	public static Transform getChildByTag (Transform obj, string tag) {
		for (int i = 0; i < obj.childCount; i++) {
			if (obj.GetChild (i).tag == tag) {
				return obj.GetChild (i);
			}
		}
		return null;
	}

	//returns random char
	public static char randomChar (bool isUpper) {
		string letters;
		if (isUpper == true) {
			letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		} else {
			letters = "abcdefghijklmnopqrstivwxyz";
		}
		return letters[Random.Range(0, letters.Length)];
	}

	//return random element name
	public static string randomElement () {
		string newElement = "";
		if (Random.Range (0, 2) == 0) {
			newElement += randomChar (true);
			newElement += randomChar (false);
		} else {
			newElement += randomChar (true);
		}
		return newElement;
	}

	public static string colorToString (Color color) {
		return color.r+"-"+color.g+"-"+color.b+"-"+color.a;
	}

	public static Color stringToColor (string color) {
		Color newColor;
		string[] splitedColor = color.Split("-"[0]);
		newColor.r = float.Parse(splitedColor [0]);
		newColor.g = float.Parse(splitedColor [1]);
		newColor.b = float.Parse(splitedColor [2]);
		newColor.a = float.Parse(splitedColor [3]);
		return newColor;
	}
}
