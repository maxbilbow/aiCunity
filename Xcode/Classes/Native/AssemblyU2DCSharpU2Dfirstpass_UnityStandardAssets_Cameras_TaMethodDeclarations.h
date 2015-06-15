#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Cameras.TargetFieldOfView
struct TargetFieldOfView_t20;
// UnityEngine.Transform
struct Transform_t2;

// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::.ctor()
extern "C" void TargetFieldOfView__ctor_m30 (TargetFieldOfView_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::Start()
extern "C" void TargetFieldOfView_Start_m31 (TargetFieldOfView_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::FollowTarget(System.Single)
extern "C" void TargetFieldOfView_FollowTarget_m32 (TargetFieldOfView_t20 * __this, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::SetTarget(UnityEngine.Transform)
extern "C" void TargetFieldOfView_SetTarget_m33 (TargetFieldOfView_t20 * __this, Transform_t2 * ___newTransform, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::MaxBoundsExtent(UnityEngine.Transform,System.Boolean)
extern "C" float TargetFieldOfView_MaxBoundsExtent_m34 (Object_t * __this /* static, unused */, Transform_t2 * ___obj, bool ___includeEffects, MethodInfo* method) IL2CPP_METHOD_ATTR;
