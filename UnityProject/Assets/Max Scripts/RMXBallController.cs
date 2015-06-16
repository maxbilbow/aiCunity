using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Ball
{
	public class RMXBallController : BallUserControl
	{
		private bool willJump; // whether the jump button is currently pressed
		

		public void jump(){
			#if MOBILE_INPUT
			willJump = true;
			CrossPlatformInputManager.SetButtonDown("Jump");
			print ("Will jump");
#endif
		}

#if MOBILE_INPUT
		private void FixedUpdate()
		{
			// Call the Move function of the ball controller
			//this.ball.Move(move, willJump);
			if (willJump) {
				CrossPlatformInputManager.SetButtonUp("Jump");
				willJump = false;
			}
		}
	
#endif
	}
}
