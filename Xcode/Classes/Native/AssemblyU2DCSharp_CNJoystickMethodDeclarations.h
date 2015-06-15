#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CNJoystick
struct CNJoystick_t263;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void CNJoystick::.ctor()
extern "C" void CNJoystick__ctor_m1168 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CNJoystick::get_DragRadius()
extern "C" float CNJoystick_get_DragRadius_m1169 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::set_DragRadius(System.Single)
extern "C" void CNJoystick_set_DragRadius_m1170 (CNJoystick_t263 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNJoystick::get_SnapsToFinger()
extern "C" bool CNJoystick_get_SnapsToFinger_m1171 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::set_SnapsToFinger(System.Boolean)
extern "C" void CNJoystick_set_SnapsToFinger_m1172 (CNJoystick_t263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNJoystick::get_IsHiddenIfNotTweaking()
extern "C" bool CNJoystick_get_IsHiddenIfNotTweaking_m1173 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::set_IsHiddenIfNotTweaking(System.Boolean)
extern "C" void CNJoystick_set_IsHiddenIfNotTweaking_m1174 (CNJoystick_t263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::OnEnable()
extern "C" void CNJoystick_OnEnable_m1175 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::ResetControlState()
extern "C" void CNJoystick_ResetControlState_m1176 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::OnFingerLifted()
extern "C" void CNJoystick_OnFingerLifted_m1177 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::OnFingerTouched()
extern "C" void CNJoystick_OnFingerTouched_m1178 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::Update()
extern "C" void CNJoystick_Update_m1179 (CNJoystick_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::TweakControl(UnityEngine.Vector2)
extern "C" void CNJoystick_TweakControl_m1180 (CNJoystick_t263 * __this, Vector2_t13  ___touchPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNJoystick::PlaceJoystickBaseUnderTheFinger(UnityEngine.Touch)
extern "C" void CNJoystick_PlaceJoystickBaseUnderTheFinger_m1181 (CNJoystick_t263 * __this, Touch_t206  ___touch, MethodInfo* method) IL2CPP_METHOD_ATTR;
