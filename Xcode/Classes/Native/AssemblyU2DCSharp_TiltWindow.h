#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TiltWindow
struct  TiltWindow_t287  : public MonoBehaviour_t5
{
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t13  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t2 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t10  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t13  ___mRot_5;
};
