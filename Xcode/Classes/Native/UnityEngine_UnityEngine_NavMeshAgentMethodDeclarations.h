#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t39;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m722 (NavMeshAgent_t39 * __this, Vector3_t8  ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m3976 (Object_t * __this /* static, unused */, NavMeshAgent_t39 * ___self, Vector3_t8 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C" void NavMeshAgent_INTERNAL_get_desiredVelocity_m3977 (NavMeshAgent_t39 * __this, Vector3_t8 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_desiredVelocity()
extern "C" Vector3_t8  NavMeshAgent_get_desiredVelocity_m723 (NavMeshAgent_t39 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C" void NavMeshAgent_set_updatePosition_m721 (NavMeshAgent_t39 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C" void NavMeshAgent_set_updateRotation_m720 (NavMeshAgent_t39 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
