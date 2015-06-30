using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UnityStandardAssets.CrossPlatformInput
{
	public class RMXLookAround : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler, IScrollHandler
    {
//        public string axis
		public float speed = 1;

		public enum AxisOption
		{
			// Options for which axes to use
			Both, // Use both
			OnlyHorizontal, // Only horizontal
			OnlyVertical // Only vertical
		}
		public string cameraName = "Head";
		public int MovementRange = 100;
//		public AxisOption axesToUse = AxisOption.Both; // The options for the axes that the still will use
		public string axisName = "mouse 0"; // The name given to the horizontal axis for the cross platform input
//		public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		GameObject rig;//
		Vector3 m_StartPos;
//		bool m_UseX; // Toggle for using the x axis
//		bool m_UseY; // Toggle for using the Y axis
		UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager.VirtualAxis axis; // Reference to the joystick in the cross platform input
//		CrossPlatformInputManager.VirtualAxis m_VerticalVirtualAxis; // Reference to the joystick in the cross platform input
		
		void OnEnable()
		{
			print ("OnEnable...");
//			Cursor.lockState = CursorLockMode.Locked;
			rig = GameObject.Find (cameraName);
//			m_StartPos = Input.mousePosition;
//			lastMousePosition = Input.mousePosition;
//			CreateVirtualAxes();
		}

//		Vector3 lastMousePosition;
		Vector3 delta = new Vector3(0,0,0);
		bool willRotate = false;
	    void Update() {
			if (willRotate) {
//				rotateActiveCameraRig (rig);
			}
//			UpdateVirtualAxes (Input.mousePosition);

		}

		public float rotationSpeed = 0.2f;
		public float dampingTime = 0.2f;
		private Vector3 m_TargetAngles;
		private Vector3 m_FollowAngles;
		private Vector3 m_FollowVelocity;
		private Quaternion m_OriginalRotation;

		void rotateActiveCameraRig(GameObject rig) {

			delta = Input.mousePosition - m_StartPos;
			m_StartPos = Input.mousePosition;
			delta.x *= rotationSpeed;
			delta.y *= rotationSpeed;
			rig.transform.eulerAngles += new Vector3 (-delta.y, delta.x, 0);
//			rig.transform.Rotate (new Vector3(-delta.y,delta.x,0));
		}



   		public void OnScroll(PointerEventData data) {
			Vector3 scrollDelta = new Vector3 (data.scrollDelta.y, data.scrollDelta.x, 0);
			rig.transform.eulerAngles += scrollDelta;
//			rotateActiveCameraRig (rig);

		}

		public void OnDrag(PointerEventData data)
		{
<<<<<<< HEAD
			rotateActiveCameraRig (rig);
//			Vector3 newPos = Vector3.zero;
//				int deltaX = (int)(data.position.x - m_StartPos.x);
//				deltaX = Mathf.Clamp(deltaX, - MovementRange, MovementRange);
//				newPos.x = deltaX;
=======
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
					if (rig.GetComponent<Rigidbody>().isKinematic) {
						rig.transform.localEulerAngles += new Vector3 (-delta.y, delta.x, 0);
					} else {
						rig.gameObject.GetComponent<ConstantForce>().relativeTorque = new Vector3(-delta.y,delta.x,0);
					}
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
>>>>>>> origin/master
//
//				int deltaY = (int)(data.position.y - m_StartPos.y);
//				deltaY = Mathf.Clamp(deltaY, -MovementRange, MovementRange);
//				newPos.y = deltaY;
//
//			rig.transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
//			UpdateVirtualAxes(rig.transform.position);
		}
		
		
		public void OnPointerUp(PointerEventData data)
		{
			willRotate = false;
		}
		
		
		public void OnPointerDown(PointerEventData data) {
//			print (data.lastPress.transform.position);
			m_StartPos = data.pressPosition;
			willRotate = true;
		}
		
		void OnDisable()
		{

		}
	
	
	}


}
