using UnityEngine;
using System.Collections;

public class RMXAiPoppy : MonoBehaviour, RMXAiDelegate {

	// Use this for initialization
	public string nameOfMaster;
	GameObject master;
	GameObject self;
	RMXBallControl ball;

	void Start () {
		master = GameObject.Find (nameOfMaster + "/body");
		target = master.transform;
		self = GameObject.Find (name + "/body");
	}
	
	// Update is called once per frame
	void Update () {
//		print (master.transform.position);
	}

	public void run(Object data) {

	}

	// The target we are following
	[SerializeField]
	private Transform target;
	// The distance in the x-z plane to the target
	[SerializeField]
	private float distance = 10.0f;
	// the height we want the camera to be above the target
	[SerializeField]
	private float height = 5.0f;
	
	[SerializeField]
	private float rotationDamping;
	[SerializeField]
	private float heightDamping;

	// Update is called once per frame
	void LateUpdate()
	{
		// Early out if we don't have a target
		if (!target)
			return;
		
		// Calculate the current rotation angles
		var wantedRotationAngle = target.eulerAngles.y;
		var wantedHeight = target.position.y + height;
		
		var currentRotationAngle = self.transform.eulerAngles.y;
		var currentHeight = self.transform.position.y;
		
		// Damp the rotation around the y-axis
		currentRotationAngle = Mathf.LerpAngle(currentRotationAngle, wantedRotationAngle, rotationDamping * Time.deltaTime);
		
		// Damp the height
		currentHeight = Mathf.Lerp(currentHeight, wantedHeight, heightDamping * Time.deltaTime);
		
		// Convert the angle into a rotation
		var currentRotation = Quaternion.Euler(0, currentRotationAngle, 0);
		
		// Set the position of the camera on the x-z plane to:
		// distance meters behind the target
		self.transform.position = target.position;
		self.transform.position -= currentRotation * Vector3.forward * distance;
		
		// Set the height of the camera
		self.transform.position = new Vector3(self.transform.position.x ,currentHeight , self.transform.position.z);
		
		// Always look at the target
		self.transform.LookAt(target);
	}
}
