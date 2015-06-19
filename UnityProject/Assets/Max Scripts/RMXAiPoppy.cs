using UnityEngine;
using System.Collections;

public class RMXAiPoppy : RMXGameObject, RMXAiDelegate {

	// Use this for initialization
	public string nameOfMaster;
	GameObject master;
//	GameObject self;
	GameObject head;
	UnityStandardAssets.Vehicles.Ball.Ball body;

	void Start () {
		master = GameObject.Find (nameOfMaster + "/Head");
//		target = master.transform;
		var self = GameObject.Find (name + "/body");
		head = GameObject.Find (name + "/Head");
		body = self.GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>();
	}



	public void run(Object data) {

	}

	[SerializeField]
	private float rotationDamping;
	[SerializeField]
	private float heightDamping;

	private bool jump = false;
	// Update is called once per frame
	void Update()
	{
		// Early out if we don't have a target
		if (!master)
			return;
		var distance = (master.transform.position - body.transform.position);
		distance.y = 0;
		var direction = distance.normalized;
	
		

		body.Move (direction, jump);
		
		// Always look at the target
		head.transform.LookAt(master.transform);
	}
}
