using UnityEngine;
using System.Collections;
using RMX;

public class DebugHUD : Bugger.DebugHUD {

	// Use this for initialization
	void Start () {
//		Show ();
		enabled = true;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	protected override string DebugData {
		get {
			return "No Custom Data";
		}
	}
}
