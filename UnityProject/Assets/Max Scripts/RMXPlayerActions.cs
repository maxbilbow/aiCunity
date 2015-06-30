using UnityEngine;
using System.Collections;

public class RMXPlayerActions : RMXGameObject {

	UnityStandardAssets.Vehicles.Ball.Ball body;
	bool willJump = false;
	// Use this for initialization
	protected override void Awake () {
		base.Awake ();
		body = GameObject.Find (name + "/body").GetComponent<UnityStandardAssets.Vehicles.Ball.Ball> ();
	}

	public void Jump(){
		willJump = true;
	}
	// Update is called once per frame
	void Update () {
		if (willJump) {
			body.Move(new Vector3(), willJump);
			willJump = false;
		}
	}
}
