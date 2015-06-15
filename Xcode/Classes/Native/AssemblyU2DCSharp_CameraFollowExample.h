#pragma once
#include <stdint.h>
// CNAbstractController
struct CNAbstractController_t252;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CameraFollowExample
struct  CameraFollowExample_t253  : public MonoBehaviour_t5
{
	// CNAbstractController CameraFollowExample::RotateJoystick
	CNAbstractController_t252 * ___RotateJoystick_2;
	// System.Single CameraFollowExample::RotationSpeed
	float ___RotationSpeed_3;
	// UnityEngine.Transform CameraFollowExample::_transformCache
	Transform_t2 * ____transformCache_4;
	// UnityEngine.Transform CameraFollowExample::_parentTransformCache
	Transform_t2 * ____parentTransformCache_5;
};
