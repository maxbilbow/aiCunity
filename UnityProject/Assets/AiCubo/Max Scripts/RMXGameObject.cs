﻿using UnityEngine;
using System.Collections;

public class RMXGameObject : MonoBehaviour {
	public static int COUNT;
	protected bool isRootObject;
	public RMXMasterControl rmx;
	public bool deactivateOnLaunch = false;
	public bool disableOnLaunch = false;
	private int _rmxID;
	public int rmxID {
		get { return _rmxID; }
	}

	protected GameObject parent;
	// Use this for initialization
	protected virtual void Awake () {
		_rmxID = RMXGameObject.COUNT++;
		rmx = GameObject.Find ("MasterControl").GetComponent<RMXMasterControl> ();
		try {
			parent = transform.parent.gameObject;//GameObject.Find (transform.parent.name);
			isRootObject = false;
		} catch {
			parent = null;
			isRootObject = true;
		}
	}
	
	void Start() {
		if (deactivateOnLaunch) {
			Deactivate();
		}
		if (disableOnLaunch) {
			Disable();
		}
	}
	
	public virtual void Enable() {
		enabled = true;
	}
	
	public virtual void Disable() {
		enabled = false;
	}
	
	public virtual void Activate() {
		gameObject.SetActive (true);
		//		var behaviour = GetComponentInParent<MonoBehaviour> ();
		//		behaviour.enabled = true;
		//		print (name + " is active!");
	}
	
	public virtual void Deactivate() {
		gameObject.SetActive (false);
		//		var behaviour = GetComponentInParent<MonoBehaviour> ();
		//		behaviour.enabled = false;
		//		print (name + " is NOT Active!");
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	
	public Vector2 point {
		get {
			return new Vector2(transform.position.x, transform.position.y);
		}
	}
	
	public Vector3 position {
		get {
			return transform.position;
		}
	}
	
	public Vector3 direction {
		get {
			return transform.forward;
		}
	}
	
	public GameObject Parent {
		get { return parent; }
	}
	
	public bool hasSameParentAs(RMXGameObject rmxObject) {
		return rmxObject.Parent == this.Parent;
	}
	
	public virtual void Reset() {}
}
