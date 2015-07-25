using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using RMX;

public class RMXMasterControl : AGameController<RMXMasterControl> {
	private Camera[] cameras;
	private int current = 0;


	public GameObject mobileInput;
	public GameObject desktopInput;

	public string nextCameraButton = "switchCamera";
	public Camera mainCamera;


	public Camera activeCamera {
		get {
			return this.mainCamera; //current;//this.cameras [this.current];
		}
	}

	public override void Patch ()
	{
		Debug.Log ("Patches not yet necessary");
	}

	public override void PauseGame (bool pause, object args)
	{
		throw new System.NotImplementedException ();
	}


	public GameObject activeCameraRig {
		get {
			try {
				return activeCamera.GetComponent<RMXCameraListener> ().Rig;
			} catch {
				return null;
			}
		}
	}

	public GameObject GetActiveCameraMount() {
		try {
			return activeCamera.GetComponent<RMXCameraListener> ().Parent;
		} catch {
			return null;
		}

	}

	protected override void StartDesktop ()
	{
		if (!desktopInput) {
			try {
				desktopInput = GameObject.Find ("DesktopInput");
			} catch {
				print ("Desktop input not found");
			}

		}
		if (mobileInput) {
			mobileInput.SetActive(false);
		}
	}

	protected override void StartMobile ()
	{
		if (!mobileInput) {
			try {
				mobileInput = GameObject.Find ("MobileInput");
			} catch {
				print ("Mobile input not found");
			}

		}
		if (desktopInput) {
			desktopInput.SetActive(false);
		}
	}
	//	private int total = Camera.GetAllCameras.count;
	// Use this for initialization
	protected override void StartSingletons() {

		this.cameras = new Camera [Camera.allCamerasCount];
		Camera.GetAllCameras(this.cameras);
		sortCameras ();

		if (!mainCamera) {
			mainCamera = Camera.current;
		}
		int i = 0;
		foreach (Camera cam in this.cameras) {
			if (mainCamera == cam) {
				this.current = i;
				break;
			} 
			++i;
		}

	}

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

	// Update is called once per frame
	void Update () {
		if (CrossPlatformInputManager.GetButtonUp (nextCameraButton)) {
			this.nextCamera();
		}
	}
	
	public void nextCamera() {
		activeCamera.SendMessage("Disable");
		if (++this.current >= this.cameras.Length) {
			this.current = 0;
		}
		activeCamera.SendMessage("Enable");
//
//
//		int i = 0;
//		foreach (Camera cam in this.cameras) {
//			if (i++ == current ) {
//				try {
//					cam.SendMessage("Enable");
//					print(cam.name + " with #" + (i - 1) + " was enabled." );
//				} catch {
//					print("error activating camera " + cam.name + (i - 1));
//				}
////				this.cameras [current].SendMessage ("activate");
//			} else {
//				try {
//					cam.SendMessage("Disable");
//				} catch {
//					print("error deactivating camera " + cam.name + (i - 1));
//				}
//			}
//		}


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
