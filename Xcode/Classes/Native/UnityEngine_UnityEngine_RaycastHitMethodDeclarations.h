#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t16;
// UnityEngine.Collider
struct Collider_t94;
// UnityEngine.Rigidbody
struct Rigidbody_t3;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t8  RaycastHit_get_point_m648 (RaycastHit_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t8  RaycastHit_get_normal_m673 (RaycastHit_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m630 (RaycastHit_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t94 * RaycastHit_get_collider_m647 (RaycastHit_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t3 * RaycastHit_get_rigidbody_m955 (RaycastHit_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
