﻿using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;


public class RMXMasterControl : MonoBehaviour {
	private Camera[] cameras;
	private int current = 0;
	



	//	private int total = Camera.GetAllCameras.count;
	// Use this for initialization
	void Start () {
		this.cameras = new Camera [Camera.allCamerasCount];
		Camera.GetAllCameras(this.cameras);
		this.nextCamera ();
#if MOBILE_INPUT
		GameObject.Find ("DesktopInput").SetActive(false);
#else
		GameObject.Find ("MobileInput").SetActive (false);
#endif
	}

	
	// Update is called once per frame
	void Update () {
		if (CrossPlatformInputManager.GetButtonUp ("switchCamera")) {
			this.nextCamera();
		}
	}
	
	public void nextCamera() {
		
		if (++this.current >= this.cameras.Length) {
			this.current = 0;
		}
		for (int i = 0; i < this.cameras.Length; ++i) {
			this.cameras[i].enabled = i == this.current;
		}
	}
	
	
//	public void move(string direction) {
//		int x = 0;
//		int y = 0;
//		switch (direction) {
//		case "w":
//			y = 1;
//			break;
//		case "s":
//			y = -1;
//			break;
//		case "a":
//			x = -1;
//			break;
//		case "d":
//			x = 1;
//			break;
//		}	
//		int speed = 10;
//		UnityEngine.EventSystems.AxisEventData.ReferenceEquals (x * speed, y * speed);
//		UnityEngine.EventSystems.AxisEventData.Equals(x * speed ,y * speed);
//		UnityEngine.Event.KeyboardEvent (direction);
//	}
}
