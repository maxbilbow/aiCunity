#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CNAbstractController
struct CNAbstractController_t252;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Camera
struct Camera_t19;
// System.Action`2<UnityEngine.Vector3,CNAbstractController>
struct Action_2_t258;
// System.Action`1<CNAbstractController>
struct Action_1_t259;
// CNAbstractController/Anchors
#include "AssemblyU2DCSharp_CNAbstractController_Anchors.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Nullable`1<UnityEngine.Vector3>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<UnityEngine.Touch>
#include "mscorlib_System_Nullable_1_gen_0.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void CNAbstractController::.ctor()
extern "C" void CNAbstractController__ctor_m1124 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::add_ControllerMovedEvent(System.Action`2<UnityEngine.Vector3,CNAbstractController>)
extern "C" void CNAbstractController_add_ControllerMovedEvent_m1125 (CNAbstractController_t252 * __this, Action_2_t258 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::remove_ControllerMovedEvent(System.Action`2<UnityEngine.Vector3,CNAbstractController>)
extern "C" void CNAbstractController_remove_ControllerMovedEvent_m1126 (CNAbstractController_t252 * __this, Action_2_t258 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::add_FingerTouchedEvent(System.Action`1<CNAbstractController>)
extern "C" void CNAbstractController_add_FingerTouchedEvent_m1127 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::remove_FingerTouchedEvent(System.Action`1<CNAbstractController>)
extern "C" void CNAbstractController_remove_FingerTouchedEvent_m1128 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::add_FingerLiftedEvent(System.Action`1<CNAbstractController>)
extern "C" void CNAbstractController_add_FingerLiftedEvent_m1129 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::remove_FingerLiftedEvent(System.Action`1<CNAbstractController>)
extern "C" void CNAbstractController_remove_FingerLiftedEvent_m1130 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CNAbstractController/Anchors CNAbstractController::get_Anchor()
extern "C" int32_t CNAbstractController_get_Anchor_m1131 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_Anchor(CNAbstractController/Anchors)
extern "C" void CNAbstractController_set_Anchor_m1132 (CNAbstractController_t252 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CNAbstractController::get_AxisNameX()
extern "C" String_t* CNAbstractController_get_AxisNameX_m1133 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_AxisNameX(System.String)
extern "C" void CNAbstractController_set_AxisNameX_m1134 (CNAbstractController_t252 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CNAbstractController::get_AxisNameY()
extern "C" String_t* CNAbstractController_get_AxisNameY_m1135 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_AxisNameY(System.String)
extern "C" void CNAbstractController_set_AxisNameY_m1136 (CNAbstractController_t252 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CNAbstractController::get_Margins()
extern "C" Vector2_t13  CNAbstractController_get_Margins_m1137 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_Margins(UnityEngine.Vector2)
extern "C" void CNAbstractController_set_Margins_m1138 (CNAbstractController_t252 * __this, Vector2_t13  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CNAbstractController::get_TouchZoneSize()
extern "C" Vector2_t13  CNAbstractController_get_TouchZoneSize_m1139 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_TouchZoneSize(UnityEngine.Vector2)
extern "C" void CNAbstractController_set_TouchZoneSize_m1140 (CNAbstractController_t252 * __this, Vector2_t13  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform CNAbstractController::get_TransformCache()
extern "C" Transform_t2 * CNAbstractController_get_TransformCache_m1141 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_TransformCache(UnityEngine.Transform)
extern "C" void CNAbstractController_set_TransformCache_m1142 (CNAbstractController_t252 * __this, Transform_t2 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CNAbstractController::get_ParentCamera()
extern "C" Camera_t19 * CNAbstractController_get_ParentCamera_m1143 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_ParentCamera(UnityEngine.Camera)
extern "C" void CNAbstractController_set_ParentCamera_m1144 (CNAbstractController_t252 * __this, Camera_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CNAbstractController::get_CalculatedTouchZone()
extern "C" Rect_t260  CNAbstractController_get_CalculatedTouchZone_m1145 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_CalculatedTouchZone(UnityEngine.Rect)
extern "C" void CNAbstractController_set_CalculatedTouchZone_m1146 (CNAbstractController_t252 * __this, Rect_t260  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CNAbstractController::get_CurrentAxisValues()
extern "C" Vector2_t13  CNAbstractController_get_CurrentAxisValues_m1147 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_CurrentAxisValues(UnityEngine.Vector2)
extern "C" void CNAbstractController_set_CurrentAxisValues_m1148 (CNAbstractController_t252 * __this, Vector2_t13  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CNAbstractController::get_CurrentFingerId()
extern "C" int32_t CNAbstractController_get_CurrentFingerId_m1149 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_CurrentFingerId(System.Int32)
extern "C" void CNAbstractController_set_CurrentFingerId_m1150 (CNAbstractController_t252 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Vector3> CNAbstractController::get_CalculatedPosition()
extern "C" Nullable_1_t261  CNAbstractController_get_CalculatedPosition_m1151 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_CalculatedPosition(System.Nullable`1<UnityEngine.Vector3>)
extern "C" void CNAbstractController_set_CalculatedPosition_m1152 (CNAbstractController_t252 * __this, Nullable_1_t261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNAbstractController::get_IsCurrentlyTweaking()
extern "C" bool CNAbstractController_get_IsCurrentlyTweaking_m1153 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::set_IsCurrentlyTweaking(System.Boolean)
extern "C" void CNAbstractController_set_IsCurrentlyTweaking_m1154 (CNAbstractController_t252 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CNAbstractController::GetAxis(System.String)
extern "C" float CNAbstractController_GetAxis_m1155 (CNAbstractController_t252 * __this, String_t* ___axisName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::Disable()
extern "C" void CNAbstractController_Disable_m1156 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::Enable()
extern "C" void CNAbstractController_Enable_m1157 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::OnEnable()
extern "C" void CNAbstractController_OnEnable_m1158 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Touch> CNAbstractController::GetTouchByFingerId(System.Int32)
extern "C" Nullable_1_t262  CNAbstractController_GetTouchByFingerId_m1159 (CNAbstractController_t252 * __this, int32_t ___fingerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::OnControllerMoved(UnityEngine.Vector2)
extern "C" void CNAbstractController_OnControllerMoved_m1160 (CNAbstractController_t252 * __this, Vector2_t13  ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::OnFingerTouched()
extern "C" void CNAbstractController_OnFingerTouched_m1161 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::OnFingerLifted()
extern "C" void CNAbstractController_OnFingerLifted_m1162 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CNAbstractController::InitializePosition()
extern "C" Vector3_t8  CNAbstractController_InitializePosition_m1163 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::ResetControlState()
extern "C" void CNAbstractController_ResetControlState_m1164 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNAbstractController::TweakIfNeeded()
extern "C" bool CNAbstractController_TweakIfNeeded_m1165 (CNAbstractController_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNAbstractController::IsTouchCaptured(UnityEngine.Touch&)
extern "C" bool CNAbstractController_IsTouchCaptured_m1166 (CNAbstractController_t252 * __this, Touch_t206 * ___capturedTouch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNAbstractController::IsTouchInZone(UnityEngine.Vector2)
extern "C" bool CNAbstractController_IsTouchInZone_m1167 (CNAbstractController_t252 * __this, Vector2_t13  ___touchPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNAbstractController::TweakControl(UnityEngine.Vector2)
