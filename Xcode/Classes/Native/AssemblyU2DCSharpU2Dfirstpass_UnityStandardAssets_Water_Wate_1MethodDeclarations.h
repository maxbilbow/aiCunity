#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Water.Water
struct Water_t87;
// UnityEngine.Camera
struct Camera_t19;
// UnityStandardAssets.Water.Water/WaterMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_0.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityStandardAssets.Water.Water::.ctor()
extern "C" void Water__ctor_m256 (Water_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnWillRenderObject()
extern "C" void Water_OnWillRenderObject_m257 (Water_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnDisable()
extern "C" void Water_OnDisable_m258 (Water_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::Update()
extern "C" void Water_Update_m259 (Water_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void Water_UpdateCameraModes_m260 (Water_t87 * __this, Camera_t19 * ___src, Camera_t19 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C" void Water_CreateWaterObjects_m261 (Water_t87 * __this, Camera_t19 * ___currentCamera, Camera_t19 ** ___reflectionCamera, Camera_t19 ** ___refractionCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::GetWaterMode()
extern "C" int32_t Water_GetWaterMode_m262 (Water_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::FindHardwareWaterSupport()
extern "C" int32_t Water_FindHardwareWaterSupport_m263 (Water_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t82  Water_CameraSpacePlane_m264 (Water_t87 * __this, Camera_t19 * ___cam, Vector3_t8  ___pos, Vector3_t8  ___normal, float ___sideSign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C" void Water_CalculateReflectionMatrix_m265 (Object_t * __this /* static, unused */, Matrix4x4_t81 * ___reflectionMat, Vector4_t82  ___plane, MethodInfo* method) IL2CPP_METHOD_ATTR;
