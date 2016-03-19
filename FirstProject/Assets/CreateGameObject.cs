using UnityEngine;
using System.Collections;

public class CreateGameObject : MonoBehaviour {

	void Awake() {
		
	}

	// Use this for initialization
	void Start () {
		//create GameObject
		/*
		GameObject testCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		testCube.transform.position = new Vector3 (0f, 2f, 0f);

		GameObject prefab = Instantiate (Resources.Load("cubePrefab")) as GameObject;
		prefab.transform.transform.position = new Vector3 (0f, 1f, 0f);

		testCube.transform.parent = this.transform;
		*/
		GameObject cube = GameObject.Find ("Cube");
		cube.transform.position = new Vector3(1f, 0f, 0f);

	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position = new Vector3 (0, Random.Range (0, 5), 0);
	}

	void FixedUpdate() {
		
	}

	void LateUpdate() {
		
	}

	void OnGUI() {
		
	}

	void Reset() {
	
	}

	void OnDisable() {
	
	}

	void OnDestroy() {
	
	}
}
