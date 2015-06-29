using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Aeroplane
{
	[RequireComponent(typeof (AeroplaneController))]
	public class RMXJetController : MonoBehaviour, RMXBehaviour
	{
		// these max angles are only used on mobile, due to the way pitch and roll input are handled
		public float maxRollAngle = 80;
		public float maxPitchAngle = 80;
		
		// reference to the aeroplane that we're controlling
		private AeroplaneController m_Aeroplane;

		public bool scriptEnabled {
			get {
				return _scriptEnabled;
			}
		}
		private bool _scriptEnabled = false;
		
		private void Awake()
		{
			// Set up the reference to the aeroplane controller.
			m_Aeroplane = GetComponent<AeroplaneController>();
		}
		
		private float throttle = 0;
		private void FixedUpdate()
		{
			// Read input for the pitch, yaw, roll and throttle of the aeroplane.
			float roll = 0;
			float pitch = 0;
			bool airBrakes = true;
			if (scriptEnabled) {
				roll = CrossPlatformInputManager.GetAxis ("Horizontal");
				pitch = CrossPlatformInputManager.GetAxis ("Vertical");
				airBrakes = !CrossPlatformInputManager.GetButton ("Jump");

			}

			// auto throttle up, or down if braking.
			if (!airBrakes && throttle <= 1) {
				throttle += 0.1f;
			} else if (throttle > -1) {
				throttle -= 0.2f;
			}

			#if MOBILE_INPUT
		AdjustInputForMobileControls(ref roll, ref pitch, ref throttle);
			#endif
			// Pass the input to the aeroplane
			m_Aeroplane.Move (roll, pitch, 0, throttle, airBrakes);

		}
		
		
		private void AdjustInputForMobileControls(ref float roll, ref float pitch, ref float throttle)
		{
			// because mobile tilt is used for roll and pitch, we help out by
			// assuming that a centered level device means the user
			// wants to fly straight and level!
			
			// this means on mobile, the input represents the *desired* roll angle of the aeroplane,
			// and the roll input is calculated to achieve that.
			// whereas on non-mobile, the input directly controls the roll of the aeroplane.
			float intendedRollAngle = roll*maxRollAngle*Mathf.Deg2Rad;
			float intendedPitchAngle = pitch*maxPitchAngle*Mathf.Deg2Rad;
			roll = Mathf.Clamp((intendedRollAngle - m_Aeroplane.RollAngle), -1, 1);
			pitch = Mathf.Clamp((intendedPitchAngle - m_Aeroplane.PitchAngle), -1, 1);
			
			// similarly, the throttle axis input is considered to be the desired absolute value, not a relative change to current throttle.
			float intendedThrottle = throttle*0.5f + 0.5f;
			throttle = Mathf.Clamp(intendedThrottle - m_Aeroplane.Throttle, -1, 1);
		}

		public void enableScript() {
			_scriptEnabled = true;
		}
		
		public void disableScript() {
			_scriptEnabled = false;
//			print ("disabled " + name);
		}
	}
}
