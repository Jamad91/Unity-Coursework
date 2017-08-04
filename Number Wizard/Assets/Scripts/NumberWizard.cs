using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NumberWizard : MonoBehaviour {

	int max;
	int min;
	int guess;

	// Use this for initialization
	void Start () {
		Debug.Log ("i was actually called");
		StartGame();
	}

	void StartGame ()
	{
		min = 1;
		max = 1000;
		guess = 500;

		print("==========================");
		print ("Welcome to Number Wizard");
		print("Pick a number in yout head, but don't tell me");

		print("The highest number you can pick is " + max);
		print("The lowest number you can pick is " + min);
		max++;

		print("Is the number higher or lower than " + guess + "?");
		print("Up = higher, down = lower, return = equals");
	}

	void NextGuess ()
	{
		guess = (max + min) / 2;
		print ("Higher or lower than " + guess + "?"); 
		print("Up = higher, down = lower, return = equals");	
	}
	
	// Update is called once per frame
	void Update ()
	{

		if (Input.GetKeyDown (KeyCode.UpArrow)) {
			min = guess;
			NextGuess();
		} else if (Input.GetKeyDown (KeyCode.DownArrow)) {
			max = guess;
			NextGuess();
		} else if (Input.GetKeyDown (KeyCode.Return)) {
			print("I won");
			StartGame();
		}
		
	}
}
