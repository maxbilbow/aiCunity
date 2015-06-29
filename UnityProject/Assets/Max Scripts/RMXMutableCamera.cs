using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class RMXMutableCamera : RMXGameObject
{
	public static List<RMXCameraRig> mounts = new List<RMXCameraRig>();
	public enum Type {
		Static, Free, Follow
	}
//	public Transform target;
//	public Vector3 offset = new Vector3(0f, 7.5f, 0f);
	public RMXCameraRig mount;
	Camera mainCamera;
	Vector3 startingAngles;

	int currentMount = 0;


//	public GameObject GetActiveCameraMount() {
//		try {
//			return rmx.activeCamera.GetComponent<RMXCameraListener> ().Parent;
//		} catch {
//			return null;
//		}
//	}

	void Start() {
		startingAngles = transform.localEulerAngles;
		if (!mount) {
			SetMount (RMXMutableCamera.mounts [currentMount]);
		} else {
			mount.SendMessage ("enableScript");
		}

		if (!mainCamera) {
			mainCamera = rmx.activeCamera;
		}
		if (mount.type == Type.Static) {
			transform.SetParent (mount.transform); //transform.position = mount.position;
		}
		mainCamera.transform.localPosition = mount.cameraMount.transform.localPosition;// mount.cameraMount.transform.position;
	}


	void Update()
	{
		if (mount != null) {
			if (CrossPlatformInputManager.GetButtonUp (rmx.nextCameraButton)) {
				NextCamera();
			}
			if (CrossPlatformInputManager.GetButtonUp (rmx.switchMountButton)) {
				NextMount();
			}


			switch (mount.type) {
			case Type.Free:
			case Type.Follow:
				transform.position = mount.position;//.transform.position + mount.offset;
				break;
			case Type.Static:
//				transform.localPosition = mount.position;//.localPosition + mount.offset;
				break;
			}
		}
	}

	public void NextMount() {
		if (++currentMount >= RMXMutableCamera.mounts.Count) {
			currentMount = 0;
		}
		SetMount(RMXMutableCamera.mounts[currentMount]);
	}

	public void NextCamera(){
		if (mount != null) {
			mainCamera.transform.localPosition = mount.NextCameraPosition ();
			resetTransform();
		}
	}

	void resetTransform() {
//		transform.localEulerAngles = startingAngles;
	}

//	Vector3 localPos;
	public void SetMount(RMXCameraRig mount) {
		try {
			if (this.mount != null) {
				this.mount.controller.SendMessage("disableScript");
			}
			this.mount = mount;
//			this.target = mount.transform;
//			transform.parent = mount.transform;
//			transform.localPosition = mount.offset;

			this.mount.controller.SendMessage("enableScript");
			if (this.mount.cameraIsAlsoHead) {
				this.GetComponent<Collider>().enabled = true;
				this.GetComponent<Rigidbody>().isKinematic = false;
				this.GetComponent<MeshRenderer>().enabled = true;
			} else {
				this.GetComponent<Collider>().enabled = false;
				this.GetComponent<Rigidbody>().isKinematic = true;
				this.GetComponent<MeshRenderer>().enabled = false;
			}
			switch (mount.type) {
			case Type.Static:
				transform.SetParent (mount.transform);
				transform.localPosition = mount.offset;//transform.position = mount.position;
				break;
			case Type.Free:
			case Type.Follow:
				transform.SetParent(null);
				transform.position = mount.position;
			
				break;
			}
			mainCamera.transform.localPosition = mount.cameraPosition;
//			} else {
//				transform.SetParent(null);
//			}
//			Update();
		} catch {
			print ("Error setting mount");
		}
	}

}
