using UnityEngine;
using System.Collections;

public class HeadStabilizer : MonoBehaviour {

	public float xMin = 35f;
	public float xMax = 360f - 35f;
	// Use this for initialization
	void Start () {
//		xMin = 
	}
	
	// Update is called once per frame
	void Update () {
		var angles = transform.eulerAngles;
		angles.z = 0;
		if (angles.x > xMin && angles.x < 180) {
			angles.x = xMin;
		} else if (angles.x < xMax && angles.x > 180) {
			angles.x = xMax;
		}
		transform.eulerAngles = angles;
	}
	
}
