#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t94;
// UnityEngine.Rigidbody
struct Rigidbody_t3;

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t3 * Collider_get_attachedRigidbody_m641 (Collider_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C" bool Collider_get_isTrigger_m640 (Collider_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
