using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NumberWizard : MonoBehaviour {

	int max;
	int min;
	int guess;

	public Text text;

	int maxGuessesAllowed = 10;

	// Use this for initialization
	void Start () {
		StartGame();
	}

	void StartGame ()
	{
		min = 1;
		max = 1001;
		NextGuess();

	}

	void NextGuess ()
	{
		guess = Random.Range(min,max);
		text.text = guess.ToString();
		maxGuessesAllowed--;
		if (maxGuessesAllowed <= 0){
			Application.LoadLevel("Win");
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
	}

	public void GuessHigher()
	{
		min = guess;
		NextGuess();
	}

	public void GuessLower ()
	{
		max = guess;
		NextGuess();
	}

}
