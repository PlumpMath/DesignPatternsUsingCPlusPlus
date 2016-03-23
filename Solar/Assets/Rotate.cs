using UnityEngine;
using System.Collections;
using Com.Mygame;

public class Rotate : MonoBehaviour {
	private GameObject earth, moon;

	// Use this for initialization
	void Start () {
		//this.gameObject.renderer.material.color = Color.red;
		print(MyClass.SayHello ("hi"));
		MyClass my = MyClass.GetInstance ();
		print (my.getBaseCode().myName);

		//using interface
		IMyAction action = MyClass.GetInstance () as IMyAction;
		print (action.nextRound ());

		this.gameObject.GetComponent<Renderer>().material.color = Color.red;
		//create earth
		earth = GameObject.CreatePrimitive (PrimitiveType.Sphere);
		earth.name = "earth";
		earth.GetComponent<Renderer>().material.color = Color.blue;
		earth.transform.parent = transform;
		earth.transform.position = new Vector3 (0, 5, 0);

		//create moon
		moon = GameObject.CreatePrimitive (PrimitiveType.Sphere);
		moon.name = "moon";
		moon.GetComponent<Renderer>().material.color = Color.grey;
		moon.transform.parent = earth.transform;
		moon.transform.position = new Vector3 (0, 3.5f, 0);
	}

	// Update is called once per frame
	void Update () {
		RotateTheSphere (this.gameObject);
		RotateTheSphere (earth);
		RotateTheSphere (moon);

		//change the postion
		//earth.transform.position = ;
		//moon.transform.position = ;
	}

	//make the sphere rotate
	void RotateTheSphere(GameObject sp) {
		float speed = 10;
		sp.transform.Rotate(Vector3.right * speed * Time.deltaTime);
	}
}
