#pragma once
#include <stdint.h>
// CNAbstractController
struct CNAbstractController_t252;
// UnityEngine.CharacterController
struct CharacterController_t27;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Controller3DExample
struct  Controller3DExample_t254  : public MonoBehaviour_t5
{
	// System.Single Controller3DExample::movementSpeed
	float ___movementSpeed_3;
	// CNAbstractController Controller3DExample::MovementJoystick
	CNAbstractController_t252 * ___MovementJoystick_4;
	// UnityEngine.CharacterController Controller3DExample::_characterController
	CharacterController_t27 * ____characterController_5;
	// UnityEngine.Transform Controller3DExample::_mainCameraTransform
	Transform_t2 * ____mainCameraTransform_6;
	// UnityEngine.Transform Controller3DExample::_transformCache
	Transform_t2 * ____transformCache_7;
	// UnityEngine.Transform Controller3DExample::_playerTransform
	Transform_t2 * ____playerTransform_8;
};
