﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour {

	public float speed = 15.0f;
	public float padding = 1f;
	public GameObject projectile;
	public float projectileSpeed;
	public float firingRate;
	public float health = 250f;
	public AudioClip fireSound;

	float xMin;
	float xMax;

	// Use this for initialization
	void Start () {
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, distance));

		xMin = leftmost.x + padding;
		xMax = rightmost.x - padding;
	}

	void Fire ()
	{
//		Vector3 startPosition = transform.position + new Vector3(0, 1, 0);
		GameObject beam = Instantiate(projectile, transform.position, Quaternion.identity) as GameObject;
		beam.GetComponent<Rigidbody2D>().velocity = new Vector3(0, projectileSpeed, 0);
		AudioSource.PlayClipAtPoint(fireSound, transform.position, 0.3f);
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Input.GetKeyDown (KeyCode.Space)) {
			InvokeRepeating ("Fire", 0.000001f, firingRate);
		}
		if (Input.GetKeyUp (KeyCode.Space)) {
			CancelInvoke("Fire");
		}

		if (Input.GetKey (KeyCode.LeftArrow)) {
			transform.position += Vector3.left * speed * Time.deltaTime;
		} else if (Input.GetKey (KeyCode.RightArrow)) {
			transform.position += Vector3.right * speed * Time.deltaTime;
		}

//	Restrict player to gamespace
	float newX = Mathf.Clamp(transform.position.x, xMin, xMax);
	transform.position = new Vector3(newX, transform.position.y, transform.position.z);
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		
		Projectile missile = col.gameObject.GetComponent<Projectile> ();
		if (missile) {
			Debug.Log("Player got hit with missile");	
			health -= missile.GetDamage ();

			missile.Hit();
			if (health <= 0) {
				Die();
			}
		}
	}

	void Die ()
	{	
		LevelManager man = GameObject.Find("LevelManager").GetComponent<LevelManager>();
		man.LoadLevel("Game Over");
		Destroy(gameObject);
	}
}
