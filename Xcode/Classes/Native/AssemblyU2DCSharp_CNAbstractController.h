#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Action`2<UnityEngine.Vector3,CNAbstractController>
struct Action_2_t258;
// System.Action`1<CNAbstractController>
struct Action_1_t259;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CNAbstractController/Anchors
#include "AssemblyU2DCSharp_CNAbstractController_Anchors.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Nullable`1<UnityEngine.Vector3>
#include "mscorlib_System_Nullable_1_gen.h"
// CNAbstractController
struct  CNAbstractController_t252  : public MonoBehaviour_t5
{
	// CNAbstractController/Anchors CNAbstractController::_anchor
	int32_t ____anchor_4;
	// System.String CNAbstractController::_axisNameX
	String_t* ____axisNameX_5;
	// System.String CNAbstractController::_axisNameY
	String_t* ____axisNameY_6;
	// UnityEngine.Vector2 CNAbstractController::_touchZoneSize
	Vector2_t13  ____touchZoneSize_7;
	// UnityEngine.Vector2 CNAbstractController::_margins
	Vector2_t13  ____margins_8;
	// System.Action`2<UnityEngine.Vector3,CNAbstractController> CNAbstractController::ControllerMovedEvent
	Action_2_t258 * ___ControllerMovedEvent_9;
	// System.Action`1<CNAbstractController> CNAbstractController::FingerTouchedEvent
	Action_1_t259 * ___FingerTouchedEvent_10;
	// System.Action`1<CNAbstractController> CNAbstractController::FingerLiftedEvent
	Action_1_t259 * ___FingerLiftedEvent_11;
	// UnityEngine.Transform CNAbstractController::<TransformCache>k__BackingField
	Transform_t2 * ___U3CTransformCacheU3Ek__BackingField_12;
	// UnityEngine.Camera CNAbstractController::<ParentCamera>k__BackingField
	Camera_t19 * ___U3CParentCameraU3Ek__BackingField_13;
	// UnityEngine.Rect CNAbstractController::<CalculatedTouchZone>k__BackingField
	Rect_t260  ___U3CCalculatedTouchZoneU3Ek__BackingField_14;
	// UnityEngine.Vector2 CNAbstractController::<CurrentAxisValues>k__BackingField
	Vector2_t13  ___U3CCurrentAxisValuesU3Ek__BackingField_15;
	// System.Int32 CNAbstractController::<CurrentFingerId>k__BackingField
	int32_t ___U3CCurrentFingerIdU3Ek__BackingField_16;
	// System.Nullable`1<UnityEngine.Vector3> CNAbstractController::<CalculatedPosition>k__BackingField
	Nullable_1_t261  ___U3CCalculatedPositionU3Ek__BackingField_17;
	// System.Boolean CNAbstractController::<IsCurrentlyTweaking>k__BackingField
	bool ___U3CIsCurrentlyTweakingU3Ek__BackingField_18;
};
