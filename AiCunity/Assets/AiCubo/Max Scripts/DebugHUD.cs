using UnityEngine;
using System.Collections;
using RMX;

public class DebugHUD : Bugger.DebugHUD {


	// Update is called once per frame
	void Update () {
	
	}

	protected override string DebugData {
		get {
			return "No Custom Data";
		}
	}
}
