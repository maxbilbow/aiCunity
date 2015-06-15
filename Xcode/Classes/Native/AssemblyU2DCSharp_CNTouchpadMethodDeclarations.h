#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CNTouchpad
struct CNTouchpad_t265;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void CNTouchpad::.ctor()
extern "C" void CNTouchpad__ctor_m1187 (CNTouchpad_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CNTouchpad::get_IsAlwaysNormalized()
extern "C" bool CNTouchpad_get_IsAlwaysNormalized_m1188 (CNTouchpad_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNTouchpad::set_IsAlwaysNormalized(System.Boolean)
extern "C" void CNTouchpad_set_IsAlwaysNormalized_m1189 (CNTouchpad_t265 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CNTouchpad::get_PreviousPosition()
extern "C" Vector3_t8  CNTouchpad_get_PreviousPosition_m1190 (CNTouchpad_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNTouchpad::set_PreviousPosition(UnityEngine.Vector3)
extern "C" void CNTouchpad_set_PreviousPosition_m1191 (CNTouchpad_t265 * __this, Vector3_t8  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNTouchpad::Update()
extern "C" void CNTouchpad_Update_m1192 (CNTouchpad_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CNTouchpad::TweakControl(UnityEngine.Vector2)
extern "C" void CNTouchpad_TweakControl_m1193 (CNTouchpad_t265 * __this, Vector2_t13  ___touchPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
