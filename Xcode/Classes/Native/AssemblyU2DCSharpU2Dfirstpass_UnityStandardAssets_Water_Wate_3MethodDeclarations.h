#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Water.WaterBase
struct WaterBase_t83;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Camera
struct Camera_t19;

// System.Void UnityStandardAssets.Water.WaterBase::.ctor()
extern "C" void WaterBase__ctor_m266 (WaterBase_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.WaterBase::UpdateShader()
extern "C" void WaterBase_UpdateShader_m267 (WaterBase_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C" void WaterBase_WaterTileBeingRendered_m268 (WaterBase_t83 * __this, Transform_t2 * ___tr, Camera_t19 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.WaterBase::Update()
extern "C" void WaterBase_Update_m269 (WaterBase_t83 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
