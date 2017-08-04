using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBehavior : MonoBehaviour {

	public GameObject projectile;
	public float health = 150f;
	public float projectileSpeed = 10f;
	public float firingRate = 0.5f;
	public int scoreValue = 150;
	public AudioClip fireSound;
	public AudioClip deathSound;

	private ScoreKeeper scoreKeeper;

	void Start ()
	{
		scoreKeeper = GameObject.Find("Score").GetComponent<ScoreKeeper>();
	}

	void Update ()
	{
		float probability = Time.deltaTime * firingRate;
		float randVal = Random.value;
		if(randVal < probability){
			Fire();
		}
	}

	void Fire ()
	{
		Vector3 startPosition = transform.position + new Vector3(0, -1, 0);
		GameObject beam = Instantiate(projectile, startPosition, Quaternion.identity) as GameObject;
		beam.GetComponent<Rigidbody2D>().velocity = new Vector3(0, -projectileSpeed, 0);
		AudioSource.PlayClipAtPoint(fireSound, startPosition, 0.3f);
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		Projectile missile = col.gameObject.GetComponent<Projectile> ();
		if (missile) {
			
			health -= missile.GetDamage ();

			missile.Hit();
			if (health <= 0) {
				Die();
			}
		}
	}

	void Die ()
	{
		AudioSource.PlayClipAtPoint(deathSound, gameObject.transform.position, 3.5f);
		Destroy(gameObject);
		scoreKeeper.Score(scoreValue);
	}
}
