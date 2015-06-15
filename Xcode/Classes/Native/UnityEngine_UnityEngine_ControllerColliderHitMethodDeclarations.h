#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t30;
// UnityEngine.Collider
struct Collider_t94;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
extern "C" Collider_t94 * ControllerColliderHit_get_collider_m686 (ControllerColliderHit_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_point()
extern "C" Vector3_t8  ControllerColliderHit_get_point_m688 (ControllerColliderHit_t30 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
