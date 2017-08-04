using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LevelManager : MonoBehaviour {

	public void LoadLevel (string name)
	{
		Debug.Log("Level Load Requested for: " + name);
		Brick.breakableCount = 0;
		SceneManager.LoadScene(name);
	}

	public void LoadNextLevel() {
		Brick.breakableCount = 0;
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void QuitGame ()
	{
		Debug.Log("Qutting Game");
		Application.Quit();
	}

	public void BrickDestroyed ()
	{
		if (Brick.breakableCount <= 0) {
			LoadNextLevel();
		}
	}
}
