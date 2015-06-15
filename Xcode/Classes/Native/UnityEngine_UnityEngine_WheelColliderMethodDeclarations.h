#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WheelCollider
struct WheelCollider_t182;
// UnityEngine.WheelHit
#include "UnityEngine_UnityEngine_WheelHit.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.WheelCollider::get_radius()
extern "C" float WheelCollider_get_radius_m1059 (WheelCollider_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern "C" void WheelCollider_set_motorTorque_m1020 (WheelCollider_t182 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern "C" void WheelCollider_set_brakeTorque_m1053 (WheelCollider_t182 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern "C" void WheelCollider_set_steerAngle_m1052 (WheelCollider_t182 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern "C" bool WheelCollider_GetGroundHit_m1054 (WheelCollider_t182 * __this, WheelHit_t223 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" void WheelCollider_GetWorldPose_m1051 (WheelCollider_t182 * __this, Vector3_t8 * ___pos, Quaternion_t10 * ___quat, MethodInfo* method) IL2CPP_METHOD_ATTR;
