using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SayNumber : MonoBehaviour
{
	private int numbersToSay = -1; //-1 means no number to say
	private int sayingDigit;
	private bool doLooping;
    // Start is called before the first frame update
    //void Start()
    //{
        
    //}

    // Update is called once per frame
    void Update()
    {
        if(numbersToSay != -1 && true) { //check sound play ends
			++sayingDigit;
			int n = numbersToSay;
			for(int digit = 1; digit < sayingDigit; ++digit) {
				if(n < 10) { //digit exceeded
					if(!doLooping)
						numbersToSay = -1; //stop sound
					else
						sayingDigit = 1; //replay first digit
				}
				n /= 10;
			}
			n %= 10;
			//play corresponding number sound
		}
    }
	
	public void sayNumber(int numbersToSay) {
		this.numbersToSay = numbersToSay;
		sayingDigit = 0;
	}
	public void setLooping(bool doLooping) {
		this.doLooping = doLooping;
	}
	public void sayNumber_Loop(int numbersToSay) {
		sayNumber(numbersToSay);
		setLooping(true);
	}
	public void sayNumber_Once(int numbersToSay) {
		sayNumber(numbersToSay);
		setLooping(false);
	}
}
