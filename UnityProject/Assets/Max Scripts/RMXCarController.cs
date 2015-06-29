using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Car
{
	[RequireComponent(typeof (CarController))]
	public class RMXCarController : MonoBehaviour, RMXBehaviour
	{
		private CarController m_Car; // the car controller we want to use
		public bool scriptEnabled {
			get {
				return _scriptEnabled;
			}
		}
		private bool _scriptEnabled = false;

		
		private void Awake()
		{
			// get the car controller
			m_Car = GetComponent<CarController>();
		}

		public void enableScript() {
			_scriptEnabled = true;
		}
		
		public void disableScript() {
			_scriptEnabled = false;
		}
		
		private void FixedUpdate()
		{
			if (scriptEnabled) {
				// pass the input to the car!
				float h = CrossPlatformInputManager.GetAxis ("Horizontal");
				float v = CrossPlatformInputManager.GetAxis ("Vertical");
				#if !MOBILE_INPUT
				float handbrake = CrossPlatformInputManager.GetAxis ("Jump");
				m_Car.Move (h, v, v, handbrake);
				#else
			m_Car.Move(h, v, v, 0f);
				#endif
			} else {
				m_Car.Move (0, 0, 0, 0);
			}
		}
	}
}
