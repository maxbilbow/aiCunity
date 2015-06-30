using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;


public class RMXMasterControl : RMXGameObject {
	private Camera[] cameras;
	private int current = 0;

<<<<<<< HEAD
	public Camera GetActiveCamera() {
		return this.cameras [this.current];
=======
	public GameObject mobileInput;
	public GameObject desktopInput;

	public string nextCameraButton = "switchCamera";
	public string switchMountButton = "switchMount";
	public Camera mainCamera;

	public Camera activeCamera {
		get {
			return this.cameras [this.current];
		}
	}


	public GameObject activeCameraRig {
		get {
			try {
				return activeCamera.GetComponent<RMXCameraListener> ().Rig;
			} catch {
				return null;
			}
		}
>>>>>>> origin/master
	}
	
	public GameObject GetActiveCameraMount() {
<<<<<<< HEAD
		return GetActiveCamera ().GetComponent<RMXCameraListener> ().Parent ();
=======
		try {
			return activeCamera.GetComponent<RMXCameraListener> ().Parent;
		} catch {
			return null;
		}
>>>>>>> origin/master
	}


	//	private int total = Camera.GetAllCameras.count;
	// Use this for initialization
	protected override void Awake () {
		base.Awake();
		this.cameras = new Camera [Camera.allCamerasCount];
		Camera.GetAllCameras(this.cameras);
		this.nextCamera ();
#if MOBILE_INPUT
		GameObject.Find ("DesktopInput").SetActive(false);
#else
		GameObject.Find ("MobileInput").SetActive (false);
#endif
	}

<<<<<<< HEAD
	
	// Update is called once per frame
	void Update () {
		if (CrossPlatformInputManager.GetButtonUp ("switchCamera")) {
			this.nextCamera();
		}
=======
	private void sortCameras() {
		int mountCount = 0;
		GameObject[] mounts = new GameObject[Camera.allCamerasCount];
		foreach (Camera cam in Camera.allCameras) {
			bool addToMount = true;
			foreach (GameObject mount in mounts) {
				try {
					if (cam.transform.parent.gameObject == mount) {
						addToMount = false;
						break;
					}
				} catch {
					addToMount = false;
					break;
				}
			}
			if (addToMount) {
				mounts[mountCount++] = cam.transform.parent.gameObject;
			}
		}
		print ("there are " + mountCount + " rigs");
		int j = 0;
		for (int i = 0; i < mountCount; ++i) {
			GameObject mount = mounts[i];
			print ("rig " + i + ": " + mount.name + " has:");

			foreach (Camera cam in Camera.allCameras) {
				try {
					if (cam.transform.parent.gameObject == mount) {
						this.cameras[j] = cam;
						++j;
						print ("        " + cam.name);
					} else {
						
					}
				} catch {
					print ("Error " + cam.name + " does not have a listener or rig");
				}
			}
//			print (j + " cameras added to " + mounts[i].name);
		}


	}

//	public void PressButtonOnce(string button) {
//		CrossPlatformInputManager.SetButtonDown (button);
//		CrossPlatformInputManager.SetButtonUp (button);
//	}

	public void SetButtonDown(string button) {
		CrossPlatformInputManager.SetButtonDown (button);
	}

	public void SetButtonUp(string button){
		CrossPlatformInputManager.SetButtonUp (button);
	}

	public void ToggleButtonState(string button) {
		if (CrossPlatformInputManager.GetButtonUp(button)) {
			CrossPlatformInputManager.SetButtonDown (button);
		} else {
			CrossPlatformInputManager.SetButtonDown (button);
		}
	}
	void Start() {
		int i = 0;
		foreach (Camera cam in this.cameras) {
			if (mainCamera == cam) {
				this.current = i;
				break;
			} 
			++i;
		}

	}
	
	// Update is called once per frame
	void Update () {
//		if (CrossPlatformInputManager.GetButtonUp (nextCameraButton)) {
//			this.nextCamera();
//		}
>>>>>>> origin/master
	}
	/*
	public void nextCamera() {
<<<<<<< HEAD
		
		if (++this.current >= this.cameras.Length) {
			this.current = 0;
		}
		for (int i = 0; i < this.cameras.Length; ++i) {
			if (i == current ) {
				try {
					this.cameras[i].SendMessage("Activate");
					this.cameras[i].enabled = true;
				} catch {
					this.cameras[i].enabled = true;
				}
//				this.cameras [current].SendMessage ("activate");
			} else {
				try {
					this.cameras[i].SendMessage("Deactivate");
					this.cameras[i].enabled = false;
				} catch {
					this.cameras[i].enabled = false;
				}
			}
		}

=======
		return;
		activeCamera.SendMessage("Disable");
		if (++this.current >= this.cameras.Length) {
			this.current = 0;
		}
		activeCamera.SendMessage("Enable");
>>>>>>> origin/master

	}
	*/
}
