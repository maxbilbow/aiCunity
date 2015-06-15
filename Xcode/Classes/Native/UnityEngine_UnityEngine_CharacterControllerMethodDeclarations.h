#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterController
struct CharacterController_t27;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"

// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" int32_t CharacterController_Move_m677 (CharacterController_t27 * __this, Vector3_t8  ___motion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" int32_t CharacterController_INTERNAL_CALL_Move_m3967 (Object_t * __this /* static, unused */, CharacterController_t27 * ___self, Vector3_t8 * ___motion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C" bool CharacterController_get_isGrounded_m664 (CharacterController_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void CharacterController_INTERNAL_get_velocity_m3968 (CharacterController_t27 * __this, Vector3_t8 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C" Vector3_t8  CharacterController_get_velocity_m678 (CharacterController_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_radius()
extern "C" float CharacterController_get_radius_m669 (CharacterController_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_height()
extern "C" float CharacterController_get_height_m671 (CharacterController_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
