using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour {

	// Use this for initialization
	void Start () {
		//this.gameObject.renderer.material.color = Color.red;
		GameObject cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
		cube.GetComponent<Renderer>().material.color = Color.blue;
		cube.transform.parent = this.transform;
	}

	// Update is called once per frame
	void Update () {
		float speed = 10;
		transform.Rotate(Vector3.right * speed * Time.deltaTime);

	}
}
 