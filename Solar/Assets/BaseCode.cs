using UnityEngine;
using System.Collections;
using Com.Mygame;

namespace Com.Mygame {
	public interface IMyAction {
		int nextRound ();
	}

	public class MyClass : System.Object, IMyAction {

		private static MyClass _instance;
		private BaseCode _base_code;

		public static string SayHello(string name) {
			return ("hello " + name);
		}

		public static MyClass GetInstance() {
			if (_instance == null) {
				_instance = new MyClass ();
			}
			return _instance;
		}

		public int nextRound () {
			if (_base_code != null) {
				return _base_code.round ++;
			}
			return 0;
		}

		public BaseCode getBaseCode(){
			return _base_code;
		}

		internal void setBeseCode(BaseCode bc){
			if (_base_code == null) {
				_base_code = bc;
			}
		}
	}
}

public class BaseCode : MonoBehaviour {

	public string myName;
	public int round=2;

	// Use this for initialization
	void Start () {
		MyClass my = MyClass.GetInstance();
		my.setBeseCode (this);
	}

	// Update is called once per frame
	void Update () {

	}
}