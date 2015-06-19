using UnityEngine;
using System.Collections;

	public class RMXGameObject : MonoBehaviour {

	 	bool isRootObject;
		public RMXMasterControl rmx;
		protected GameObject parent;
		// Use this for initialization
		protected virtual void Awake () {
			rmx = GameObject.Find ("MasterControl").GetComponent<RMXMasterControl> ();
			try {
				parent = transform.parent.gameObject;//GameObject.Find (transform.parent.name);
				isRootObject = false;
			} catch {
				parent = rmx.gameObject;
				isRootObject = true;
			}
			print ("My name: " + name + ", Parent: " + parent.name + ", ROOT: " + isRootObject);
		}


		public virtual void Activate() {
			enabled = true;
	//		var behaviour = GetComponentInParent<MonoBehaviour> ();
	//		behaviour.enabled = true;
	//		print (name + " is active!");
		}
		
		public virtual void Deactivate() {
			enabled = false;
	//		var behaviour = GetComponentInParent<MonoBehaviour> ();
	//		behaviour.enabled = false;
	//		print (name + " is NOT Active!");
		}
		
		// Update is called once per frame
		void Update () {
		
		}

		public GameObject Parent() {
			return parent;
		}

		public bool hasSameParentAs(RMXGameObject rmxObject) {
			return rmxObject.Parent () == this.Parent();
		}
	}
