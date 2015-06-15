﻿#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityStandardAssets.Utility.RMXSimpleMouse
struct  RMXSimpleMouse_t270  : public MonoBehaviour_t5
{
	// UnityEngine.Vector2 UnityStandardAssets.Utility.RMXSimpleMouse::rotationRange
	Vector2_t13  ___rotationRange_2;
	// System.Single UnityStandardAssets.Utility.RMXSimpleMouse::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single UnityStandardAssets.Utility.RMXSimpleMouse::dampingTime
	float ___dampingTime_4;
	// System.Boolean UnityStandardAssets.Utility.RMXSimpleMouse::autoZeroVerticalOnMobile
	bool ___autoZeroVerticalOnMobile_5;
	// System.Boolean UnityStandardAssets.Utility.RMXSimpleMouse::autoZeroHorizontalOnMobile
	bool ___autoZeroHorizontalOnMobile_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.RMXSimpleMouse::origin
	Vector3_t8  ___origin_7;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.RMXSimpleMouse::m_TargetAngles
	Vector3_t8  ___m_TargetAngles_8;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.RMXSimpleMouse::m_FollowAngles
	Vector3_t8  ___m_FollowAngles_9;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.RMXSimpleMouse::m_FollowVelocity
	Vector3_t8  ___m_FollowVelocity_10;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.RMXSimpleMouse::m_OriginalRotation
	Quaternion_t10  ___m_OriginalRotation_11;
};
