using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LevelManager : MonoBehaviour {

	public float autoLoadNextLevelAfter;

	void Start ()
	{
		Invoke("LoadNextLevel", autoLoadNextLevelAfter);
	}

	public void LoadLevel (string name)
	{
		Debug.Log("Level Load Requested for: " + name);
		SceneManager.LoadScene(name);
	}

	public void LoadNextLevel() {
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void QuitGame ()
	{
		Debug.Log("Qutting Game");
		Application.Quit();
	}

}
