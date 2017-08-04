﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextController : MonoBehaviour {

	public Text text;

	private enum States {cell, sheets_0, lock_0, sheets_1, lock_1, mirror, cell_mirror, corridor_0, corridor_1};
	private States myState;

	// Use this for initialization
	void Start () {
		myState = States.cell;
	}
	
	// Update is called once per frame
	void Update ()
	{
		print (myState);
		if (myState == States.cell) {
			cell ();
		} else if (myState == States.sheets_0) {
			sheets_0 ();
		} else if (myState == States.sheets_1) {
			sheets_1 ();
		} else if (myState == States.lock_0) {
			lock_0 ();
		} else if (myState == States.lock_1) {
			lock_1 ();
		} else if (myState == States.mirror) {
			mirror ();
		} else if (myState == States.cell_mirror) {
			cell_mirror();
		} else if (myState == States.corridor_0) {
			corridor_0();
		}
	}

	void cell ()
	{
		text.text = "You are in a prison cell and you want to escape. there are " +
		"some dirty sheets on the bed, a mirror on the wall, and the door " +
		"is locked from the outside.\n\n" +
		"Press S to VIEW SHEETS, M to VIEW MIRROR, AND L to VIEW LOCK";

		if (Input.GetKeyDown (KeyCode.S)) {
			myState = States.sheets_0;	
		} else if (Input.GetKeyDown (KeyCode.M)) {
			myState = States.mirror;
		} else if (Input.GetKeyDown (KeyCode.L)) {
			myState = States.lock_0;
		}
	}

	void sheets_0 ()
	{
		text.text = "You can't believe you sleep in these things. Surely it's " +
					"time somebody changed them. The pleasures of prison life " +
					"I guess!\n\n" +
					"Press R to RETURN TO CELL";

		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell;	
		}
	}

	void sheets_1 ()
	{
		text.text = "Holding a mirror in your hand doesn't make the sheets look " +
					"any better.\n\n" +
					"Press R to RETURN TO CELL";

		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell_mirror;	
		}
	}

	void lock_0 ()
	{
		text.text = "This is one of the button locks. You have no idea what the " +
					"combination is. You wish you could somehow see where the dirty " +
					"fingerprints were, maybe that would help.\n\n" +
					"Press R to RETURN TO CELL";

		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell;	
		}
	}

	void lock_1 ()
	{
		text.text = "You carefully put the mirror through the bars and turn it around " +
		"so you can see the lock. You can just make out the fingerprints around " +
		"the buttons. You press the dirty buttons and hear a click.\n\n" +
		"Press O to OPEN, or R to RETURN TO CELL";

		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell_mirror;	
		} else if (Input.GetKeyDown (KeyCode.O)) {
			myState = States.corridor_0;
		}
	}

	void mirror ()
	{
		text.text = "The dirty old mirror on the wall seems loose. \n\n" +
					"Press T to TAKE MIRROR, or R to RETURN TO CELL";

		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell;	
		} else if (Input.GetKeyDown (KeyCode.T)) {
			myState = States.cell_mirror;
		}
	}

	void cell_mirror ()
	{
		text.text = "You are still in your cell and you STILL want to escpae! There are " +
					"some dirty sheets on the bed, a mark where the mirror was, " +
					"and that pesky door is still there, and firmly locked!\n\n" +
					"Press S to VIEW SHEETS or L to VIEW LOCK";

		if (Input.GetKeyDown (KeyCode.S)) {
			myState = States.sheets_1;	
		} else if (Input.GetKeyDown (KeyCode.L)) {
			myState = States.lock_1;
		}
	}

	void corridor_0 ()
	{
		text.text = "You are in a corridor \n\n" +
					"Press P to Play again";

		if (Input.GetKeyDown (KeyCode.P)) {
			myState = States.cell;	
		} 
	}


}