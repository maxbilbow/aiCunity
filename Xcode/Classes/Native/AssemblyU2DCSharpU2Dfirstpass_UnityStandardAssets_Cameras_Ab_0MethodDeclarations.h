#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t4;
// UnityEngine.Transform
struct Transform_t2;

// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
extern "C" void AbstractTargetFollower__ctor_m0 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
extern "C" void AbstractTargetFollower_Start_m1 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FixedUpdate()
extern "C" void AbstractTargetFollower_FixedUpdate_m2 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::LateUpdate()
extern "C" void AbstractTargetFollower_LateUpdate_m3 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::ManualUpdate()
extern "C" void AbstractTargetFollower_ManualUpdate_m4 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single)
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
extern "C" void AbstractTargetFollower_FindAndTargetPlayer_m5 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
extern "C" void AbstractTargetFollower_SetTarget_m6 (AbstractTargetFollower_t4 * __this, Transform_t2 * ___newTransform, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::get_Target()
extern "C" Transform_t2 * AbstractTargetFollower_get_Target_m7 (AbstractTargetFollower_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
