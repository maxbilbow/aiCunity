#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_t37;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
extern "C" void Ball__ctor_m70 (Ball_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
extern "C" void Ball_Start_m71 (Ball_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C" void Ball_Move_m72 (Ball_t37 * __this, Vector3_t8  ___moveDirection, bool ___jump, MethodInfo* method) IL2CPP_METHOD_ATTR;
