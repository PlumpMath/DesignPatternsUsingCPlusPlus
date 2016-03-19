using UnityEngine;
using System.Collections;

public class Caculate : MonoBehaviour {

	private string[] buttonText = {
		"c",
		"del",
		"/",
		"*",
		"7",
		"8",
		"9",
		"-",
		"4",
		"5",
		"6",
		"+",
		"1",
		"2",
		"3",
		"=",
		"(",
		"0",
		".",
		")"
	};
	string displayNum;
	// Use this for initialization
	void Start () {
		displayNum = "";
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnGUI() {
		createDisplayScreen ();
		for (int i = 0; i < 20; i++) {
			if (GUI.Button(new Rect((i % 4) * 30, (i / 4) * 20 + 20, 30, 20), buttonText[i])) {
				if (this.buttonText[i].Equals("c")) {
					clear();
				} else if (this.buttonText[i].Equals("del")) {
					del();
				} else if (this.buttonText[i].Equals("=")) {
					caculate();
				} else {
					displayNum += this.buttonText[i];
					print (displayNum);
				}
			}
		}

	}

	void del() {
		displayNum = displayNum.Substring (0, displayNum.Length - 1);
	}

	void clear() {
		displayNum = "";
	}

	void showNum() {
		
	}

	void createDisplayScreen() {
		GUI.Button (new Rect (0, 0, 120, 20), displayNum);
	}

	void caculate()  {
		clear ();
		print ("fdjss");
	}
}
