using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Aeroplane
{
	[RequireComponent(typeof (AeroplaneController))]
	public class RMXAirPlaneController : MonoBehaviour, RMXBehaviour
	{
		// these max angles are only used on mobile, due to the way pitch and roll input are handled
		public float maxRollAngle = 80;
		public float maxPitchAngle = 80;
		
		// reference to the aeroplane that we're controlling
		private AeroplaneController m_Aeroplane;
		private float m_Throttle;
		private bool m_AirBrakes;
		private float m_Yaw;
		public float maxThrottle = 1;
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
		
		
		private void FixedUpdate()
		{
			float roll = 0;
			float pitch = 0;
			if (scriptEnabled) {
				// Read input for the pitch, yaw, roll and throttle of the aeroplane.
			 	roll = CrossPlatformInputManager.GetAxis ("Horizontal");
				pitch = CrossPlatformInputManager.GetAxis ("Vertical");
//				m_AirBrakes = CrossPlatformInputManager.GetButton ("Fire1");
				m_Yaw = CrossPlatformInputManager.GetAxis ("Horizontal");
				m_AirBrakes = !CrossPlatformInputManager.GetButton ("Jump");
			} else {
				m_AirBrakes = true;
				m_Yaw = 0;
			}
			if (!m_AirBrakes && m_Throttle <= maxThrottle) {
				m_Throttle += 0.1f;
			} else if (m_Throttle > 0){
				m_Throttle -= 0.2f;
			}

			#if MOBILE_INPUT
			AdjustInputForMobileControls(ref roll, ref pitch, ref m_Throttle);
			#endif
			// Pass the input to the aeroplane
			m_Aeroplane.Move(roll, pitch, m_Yaw, m_Throttle, m_AirBrakes);
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
		}

		public void enableScript() {
			_scriptEnabled = true;
		}

		public void disableScript() {
			_scriptEnabled = false;
		}
	}
}
