#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t92;
// CNAbstractController
#include "AssemblyU2DCSharp_CNAbstractController.h"
// CNJoystick
struct  CNJoystick_t263  : public CNAbstractController_t252
{
	// System.Single CNJoystick::_dragRadius
	float ____dragRadius_19;
	// System.Boolean CNJoystick::_snapsToFinger
	bool ____snapsToFinger_20;
	// System.Boolean CNJoystick::_isHiddenIfNotTweaking
	bool ____isHiddenIfNotTweaking_21;
	// UnityEngine.Transform CNJoystick::_stickTransform
	Transform_t2 * ____stickTransform_22;
	// UnityEngine.Transform CNJoystick::_baseTransform
	Transform_t2 * ____baseTransform_23;
	// UnityEngine.GameObject CNJoystick::_stickGameObject
	GameObject_t92 * ____stickGameObject_24;
	// UnityEngine.GameObject CNJoystick::_baseGameObject
	GameObject_t92 * ____baseGameObject_25;
};
