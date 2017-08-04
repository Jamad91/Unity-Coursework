using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicPlayer : MonoBehaviour {

	static MusicPlayer instance = null;

	void Awake ()
	{
		Debug.Log("music player awake: " + GetInstanceID());
		if (instance != null) {
			Destroy(gameObject);
			print("Duplicate music player self-destructed");
		} else {
			instance = this;
			GameObject.DontDestroyOnLoad (gameObject);
		}
	}

	// Use this for initialization
	void Start ()
	{
		Debug.Log("music player start: " + GetInstanceID());

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
