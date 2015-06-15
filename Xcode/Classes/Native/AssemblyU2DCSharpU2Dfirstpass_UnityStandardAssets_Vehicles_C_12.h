#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t92;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityStandardAssets.Vehicles.Car.Suspension
struct  Suspension_t179  : public MonoBehaviour_t5
{
	// UnityEngine.GameObject UnityStandardAssets.Vehicles.Car.Suspension::wheel
	GameObject_t92 * ___wheel_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.Suspension::m_TargetOriginalPosition
	Vector3_t8  ___m_TargetOriginalPosition_3;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.Suspension::m_Origin
	Vector3_t8  ___m_Origin_4;
};
