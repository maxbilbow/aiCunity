﻿#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.Transform
struct Transform_t2;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t102  : public Object_t
{
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t19 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t8  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t2 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t8  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;
};
