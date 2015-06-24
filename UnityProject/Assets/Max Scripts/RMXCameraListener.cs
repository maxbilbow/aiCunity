using UnityEngine;
using System.Collections;

public class RMXCameraListener : RMXGameObject, RMXBehaviour {

	public bool switchBehavioursWhenActivated = true;
//	public MonoBehaviour behaviour;
	public GameObject activeBehaviour;
	public GameObject inactiveBehaviour;
	Camera attachedCamera;
	AudioListener audioListener;

	protected override void Awake ()
	{
		base.Awake ();
		this.attachedCamera = gameObject.GetComponent<Camera> ();
		this.audioListener = gameObject.GetComponent<AudioListener> ();

	}
	// Use this for initialization
 	void Start () {
		if (rmx.mainCamera == this.attachedCamera) {
			this.Enable ();
		} else {
			this.Disable ();
		}
//		if (rmx.mainCamera == this.attachedCamera) {
//			this.Enable ();
//		}
		if (isPartOfActiveRig) {
			enableScript();
		}
	}

	public override void Enable() {
		print("Activating " + name);
		try {
			attachedCamera.enabled = true; 
		} catch {
			print ("ERROR: " + name + " has no attached camera");
		}	
		try {
			audioListener.enabled = true; 
		} catch {
			print ("ERROR: " + name + " has no attached audio listener");
		}	
		if (switchBehavioursWhenActivated) {
			enableScript();
		}
	}

	public override void Disable() {
		print("deactivating " + name);
		try {
			attachedCamera.enabled = false; 
		} catch {
			print ("ERROR: " + name + " has no attached camera");
		}	
		try {
			audioListener.enabled = false; 
		} catch {
			print ("ERROR: " + name + " has no attached audio listener");
		}	
		if (switchBehavioursWhenActivated) {
			disableScript();//activeBehaviour.SendMessage("disableScript");
		}
	}


	public void enableScript() {
		if (inactiveBehaviour != null) {
			inactiveBehaviour.SendMessage("disableScript");//.GetComponent<RMXBehaviour> ().disableScript ();
		}
		if (activeBehaviour != null) {
			activeBehaviour.SendMessage("enableScript");//..GetComponent<RMXBehaviour> ().enableScript ();
		}
	}
	
	public void disableScript() {
		if (activeBehaviour != null) {
			activeBehaviour.SendMessage("disableScript");//.GetComponent<RMXBehaviour> ().disableScript ();
		}
		if (inactiveBehaviour != null) {
			inactiveBehaviour.SendMessage("enableScript");//..GetComponent<RMXBehaviour> ().enableScript ();
		}
	}
	private bool init = true;
	 public bool isPartOfActiveRig {
		get {
			var activeCamera = init ? rmx.mainCamera : rmx.activeCamera;
			init = false;
			bool result = !this.isRootObject && activeCamera.transform.parent.gameObject != null && this.transform.parent.gameObject == activeCamera.transform.parent.gameObject;
			print (name + " is part of rig: " + result);
			return result;
		}
	}

	// Update is called once per frame
	void Update () {
	
	}


}
