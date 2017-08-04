using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brick : MonoBehaviour {

	public Sprite[] hitSprites;
	public static int breakableCount = 0;
	public AudioClip crack;
	public GameObject smoke;

	private int timesHit;
	private LevelManager levelManager;
	private bool isBreakable;
	private string startColor;



	// Use this for initialization
	void Start ()
	{
		isBreakable = (this.tag == "Breakable");
		if (isBreakable) {
			breakableCount++;
		}

		timesHit = 0;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
			
	}

	void OnCollisionEnter2D (Collision2D collision)
	{
		AudioSource.PlayClipAtPoint(crack, transform.position);
		if (isBreakable) {
			HandleHits();
		}
	}

	void HandleHits ()
	{
		timesHit++;
		int maxHits = hitSprites.Length + 1;
		if (timesHit >= maxHits) {
			breakableCount--;
			levelManager.BrickDestroyed();
			GameObject mySmoke = Instantiate(smoke, this.transform.position, this.transform.rotation) as GameObject;
        	ParticleSystem.MainModule ps =  mySmoke.GetComponent<ParticleSystem>().main;
        	ps.startColor = new ParticleSystem.MinMaxGradient(this.GetComponent<SpriteRenderer>().color);
			Destroy (gameObject);
		} else {
			LoadSprites();
		}
	}

//	TODO Remove this method once win condition is established
	void SimulateWin ()
	{
		levelManager.LoadNextLevel();
	}

	void LoadSprites ()
	{
		int spriteIndex = timesHit - 1;
		if (hitSprites [spriteIndex]) {
			this.GetComponent<SpriteRenderer>().sprite = hitSprites[spriteIndex];
		}
	}
}
