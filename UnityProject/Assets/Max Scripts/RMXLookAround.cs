using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UnityStandardAssets.CrossPlatformInput
{
	public class RMXLookAround : RMXGameObject, IPointerDownHandler, IPointerUpHandler, IDragHandler, IScrollHandler
    {
//        public string axis
		public float speed = 1;
		public GameObject targetArea;
		public enum AxisOption
		{
			// Options for which axes to use
			Both, // Use both
			OnlyHorizontal, // Only horizontal
			OnlyVertical // Only vertical
		}
//		public string cameraName = "Head";
		public int MovementRange = 100;

//		Vector3 m_StartPos;
//		Vector3 m_lastPos;

		//UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager.VirtualAxis axis; // Reference to the joystick in the cross platform input
//		CrossPlatformInputManager.VirtualAxis m_VerticalVirtualAxis; // Reference to the joystick in the cross platform input
		GameObject rig;
		void OnEnable()
		{
//			print ("OnEnable...");
//			Cursor.lockState = CursorLockMode.Locked;
//			rig = GameObject.Find (cameraName);
//			m_StartPos = Input.mousePosition;
//			lastMousePosition = Input.mousePosition;
//			CreateVirtualAxes();
		}

//		Vector3 lastMousePosition;
//		Vector3 delta = new Vector3(0,0,0);
		protected bool isCamOnRig = false;
	   

		public float rotationSpeed = 0.2f;
		public float dampingTime = 0.2f;
		private Vector3 m_TargetAngles;
		private Vector3 m_FollowAngles;
		private Vector3 m_FollowVelocity;
		private Quaternion m_OriginalRotation;





   		public void OnScroll(PointerEventData data) {
#if !MOBILE_INPUT
			Vector3 delta = new Vector3 (data.scrollDelta.x, data.scrollDelta.y, 0);
			var rig = rmx.activeCameraRig;//listener = rmx.activeCamera.GetComponent<RMXCameraListener>();
			if (rig != null) { //(listener != null && listener.isOnRig) {
				rmx.activeCameraRig.transform.localEulerAngles += new Vector3 (delta.y, delta.x, 0);
			} else {
				rmx.activeCamera.transform.localEulerAngles += new Vector3 (delta.y, delta.x, 0);
			}
#endif
		}

		public void OnDrag(PointerEventData data)
		{
			if (data.IsPointerMoving()) {
				Vector2 touchDelta = Input.touchCount > 0 ? Input.GetTouch (Input.touchCount - 1).deltaPosition : data.delta;
//				print (delta);
//				delta = Input.mousePosition - m_lastPos;
//				m_lastPos = Input.mousePosition;
				Vector3 delta = new Vector3(touchDelta.x,touchDelta.y,0);
				delta.x *= rotationSpeed;
				delta.y *= rotationSpeed;
				var rig = rmx.activeCameraRig;
				try {
					rig.GetComponent<ConstantForce>().relativeTorque = new Vector3(-delta.y,delta.x,0);
				} catch {
					if (rig != null) {
						rig.transform.localEulerAngles += new Vector3 (-delta.y, delta.x, 0);
					} else {
						rmx.activeCamera.transform.localEulerAngles += new Vector3 (-delta.y, delta.x, 0);
					}
				}
//				if (rig != null) {
//					ConstantForce force = rig.GetComponent<ConstantForce>().relativeTorque = new Vector3(-delta.y,delta.x,0);
//					if (force != null) {
//						force.relativeTorque = new Vector3(-delta.y,delta.x,0);
//						return;
//					}
//				} 
//				rmx.activeCamera.transform.localEulerAngles += new Vector3 (-delta.y, delta.x, 0);
//
			}
		}
		
		
		public void OnPointerUp(PointerEventData data)
		{
			if (rig != null) {
				isCamOnRig = false;
				ConstantForce force = rig.GetComponent<ConstantForce> ();
				if (force != null) {
					force.relativeTorque = Vector3.zero;
				} 
				rig = null;
			}
		}
		
//		Vector3 m_LastPos;
		public void OnPointerDown(PointerEventData data) {
				print(data.pointerEnter.name);
//				m_lastPos = m_StartPos = data.pressPosition;
//				if (!rig) {
				rig = rmx.GetActiveCameraMount ();
				var listener = rig.GetComponent<RMXCameraListener>();
				if (listener != null) {
					isCamOnRig = listener.isOnRig;
				}
//			
		}
		
		void OnDisable()
		{

		}
	
	
	}


}
