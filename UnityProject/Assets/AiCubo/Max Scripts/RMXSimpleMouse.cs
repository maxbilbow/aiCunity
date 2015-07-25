using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Utility
{
	public class RMXSimpleMouse : MonoBehaviour
	{
		// A mouselook behaviour with constraints which operate relative to
		// this gameobject's initial rotation.
		// Only rotates around local X and Y.
		// Works in local coordinates, so if this object is parented
		// to another moving gameobject, its local constraints will
		// operate correctly
		// (Think: looking out the side window of a car, or a gun turret
		// on a moving spaceship with a limited angular range)
		// to have no constraints on an axis, set the rotationRange to 360 or greater.
		public Vector2 rotationRange = new Vector3(70, 360);
		public float rotationSpeed = 0.2f;
		public float dampingTime = 0.2f;
		public bool autoZeroVerticalOnMobile = true;
		public bool autoZeroHorizontalOnMobile = false;

		private Vector3 origin;
		
		
		private Vector3 m_TargetAngles;
		private Vector3 m_FollowAngles;
		private Vector3 m_FollowVelocity;
		private Quaternion m_OriginalRotation;
		
		
		private void Start()
		{

			m_OriginalRotation = transform.localRotation;

			origin = Input.mousePosition;
		}
		
		
		private void Update()
		{

//			Cursor.lockState = CursorLockMode.Locked	
			float dx = Input.mousePosition.x - origin.x;
			float dy = Input.mousePosition.y - origin.y;
			//		Cursor.lockState = CursorLockMode.Locked; // : CursorLockMode.None;
			// we make initial calculations from the original local rotation
			transform.localRotation = m_OriginalRotation;


			// set values to allowed range
			m_TargetAngles.y += dx * rotationSpeed; //Mathf.Lerp(-rotationRange.y*0.5f, rotationRange.y*0.5f, inputH/Screen.width);
			m_TargetAngles.x -= dy * rotationSpeed;
			// smoothly interpolate current values to target angles
			m_FollowAngles = Vector3.SmoothDamp(m_FollowAngles, m_TargetAngles, ref m_FollowVelocity, dampingTime);
			
			// update the actual gameobject's rotation
//			transform.localRotation = m_OriginalRotation*Quaternion.Euler(-m_FollowAngles.x, m_FollowAngles.y, 0);
			transform.Rotate (m_FollowAngles);
			origin = Input.mousePosition;
		}
	}
}
