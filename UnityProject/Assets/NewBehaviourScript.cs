using System;
using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

public class NewBehaviourScript : MonoBehaviour {

	private Camera[] cameras;
//	private int cameraNumber = 0;
//	private int total = Camera.GetAllCameras.count;
	// Use this for initialization
	void Start () {
		this.cameras = new Camera [Camera.allCamerasCount];
		Camera.GetAllCameras(this.cameras);
	}
	
	// Update is called once per frame
	void Update () {

		if (CrossPlatformInputManager.GetButtonUp ("switchCamera")) {
			bool didEnableCamera = false;
			bool enableNextCamera = false;
			while (!didEnableCamera) {
				for (int i = 0; i < cameras.Length; ++i) {
					if (enableNextCamera) {
						cameras[i].enabled = true;
						enableNextCamera = false;
						didEnableCamera = true;
						break;
					} else if (cameras[i].isActiveAndEnabled) {
						cameras[i].enabled = false;
						enableNextCamera = true;
					}
				}
			}
		}
	}
}
