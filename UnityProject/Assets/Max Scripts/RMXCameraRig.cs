using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RMXCameraRig : MonoBehaviour {


	public RMXMutableCamera.Type type = RMXMutableCamera.Type.Static;
	public Vector3 offset = new Vector3 (0f, 0.9f, 0f);
	public Vector3[] cameraPositions = { 
		new Vector3 (0f, 0.0f, 0f),
		new Vector3 (0f, 0.9f, -5f),
		new Vector3 (0f, 10.0f, -24f)
	};
	public MonoBehaviour controller;
	List<RMXCameraMount> cameraMounts = new List<RMXCameraMount>();
	public bool cameraIsAlsoHead = false;
	public RMXCameraMount cameraMount {
		get {
			return cameraMounts[currentPov];//.localPosition;
		}
	}
	int currentPov = 0;
	void Awake(){
		foreach (Vector3 pos in cameraPositions) {
			var child = new GameObject ();
			child.transform.SetParent (this.transform);
			child.AddComponent<RMXCameraMount>();
			child.transform.localPosition = pos;
		}
		RMXMutableCamera.mounts.Add (this);
//		if (!cameraIsAlsoHead) {
//			offset = Vector3.zero;
//		}
//
		foreach (RMXCameraMount mount in GetComponentsInChildren<RMXCameraMount>()) {
			cameraMounts.Add (mount);
		}

	}
	// Use this for initialization
	void Start () {
		
	}

	public Vector3 NextCameraPosition() {
		if (++currentPov >= cameraMounts.Count) {
			currentPov = 0;
		}
		return cameraPosition;
	}

	public Vector3 PreviousCameraPosition() {
		if (--currentPov < 0) {
			currentPov = cameraMounts.Count - 1;
		}
		return cameraPosition;
	}


	public Vector3 cameraPosition {
		get {
			return cameraMount.transform.localPosition;
		}
	}

	public Vector3 position {
		get {
			return transform.position + offset;
		} 
	}
}
