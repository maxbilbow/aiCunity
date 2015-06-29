﻿using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Ball
{
	public class RMXBallUserControl : RMXGameObject, RMXBehaviour
	{

		public bool scriptEnabled {
			get {
				return _scriptEnabled;
			}
		}
		private bool _scriptEnabled = false;

		private Ball ball; // Reference to the ball controller.
		
		private Vector3 move;
		// the world-relative desired move direction, calculated from the camForward and user input.
		
		private Transform cam {
			get {
				return rmx.activeCamera.transform.parent;
			}
		} // A reference to the main camera in the scenes transform
		private Vector3 camForward; // The current forward direction of the camera
		private bool jump; // whether the jump button is currently pressed
//		private bool isActive = true;
		
		protected override void Awake()
		{
			base.Awake ();
			// Set up the reference.
			ball = GetComponent<Ball>();
			
			
			// get the transform of the main camera
			if (Camera.main == null) {
				Debug.LogWarning(
					"Warning: no main camera found. Ball needs a Camera tagged \"MainCamera\", for camera-relative controls.");
				// we use world-relative controls in this case, which may not be what the user wants, but hey, we warned them!
			}
		}
		

		private void Update()
		{
			if (scriptEnabled) {
				// Get the axis and jump input.
				float h = CrossPlatformInputManager.GetAxis ("Horizontal");
				float v = CrossPlatformInputManager.GetAxis ("Vertical");
				jump = CrossPlatformInputManager.GetButton ("Jump");
		
				// calculate move direction
				if (cam != null) {
					// calculate camera relative direction to move:
					camForward = Vector3.Scale (cam.forward, new Vector3 (1, 0, 1)).normalized;
					move = (v * camForward + h * cam.right).normalized;
				} else {
					// we use world-relative directions in the case of no main camera
					move = (v * Vector3.forward + h * Vector3.right).normalized;
				}
			}
		}
		
		
		private void FixedUpdate()
		{
			// Call the Move function of the ball controller
			ball.Move (move, jump);
			jump = false;

		}

		public void enableScript() {
			_scriptEnabled = true;
		}

		public void disableScript() {
			_scriptEnabled = false;
		}
	}
}
