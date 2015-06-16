using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UnityStandardAssets.CrossPlatformInput
{
	public class RMXLookAround : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
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
		public string cameraName = "headcam";
		public int MovementRange = 100;
//		public AxisOption axesToUse = AxisOption.Both; // The options for the axes that the still will use
		public string axisName = "mouse 0"; // The name given to the horizontal axis for the cross platform input
//		public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		GameObject rig;//
		Vector3 m_StartPos;
//		bool m_UseX; // Toggle for using the x axis
//		bool m_UseY; // Toggle for using the Y axis
		CrossPlatformInputManager.VirtualAxis axis; // Reference to the joystick in the cross platform input
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
				rotateActiveCameraRig (rig);
				print (" Input: " + Input.mousePosition);
				print (" Delta: " + delta);
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



   
		public void OnDrag(PointerEventData data)
		{
//			Vector3 newPos = Vector3.zero;
//				int deltaX = (int)(data.position.x - m_StartPos.x);
//				deltaX = Mathf.Clamp(deltaX, - MovementRange, MovementRange);
//				newPos.x = deltaX;
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
			m_StartPos = data.pressPosition;
			willRotate = true;
		}
		
		void OnDisable()
		{

		}
	
	
	}


}
