#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t77;
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.RenderTexture
struct RenderTexture_t80;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Water.PlanarReflection::.ctor()
extern "C" void PlanarReflection__ctor_m237 (PlanarReflection_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::Start()
extern "C" void PlanarReflection_Start_m238 (PlanarReflection_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern "C" Camera_t19 * PlanarReflection_CreateReflectionCameraFor_m239 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C" void PlanarReflection_SetStandardCameraParameter_m240 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, LayerMask_t78  ___mask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.Water.PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C" RenderTexture_t80 * PlanarReflection_CreateTextureFor_m241 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern "C" void PlanarReflection_RenderHelpCameras_m242 (PlanarReflection_t77 * __this, Camera_t19 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::LateUpdate()
extern "C" void PlanarReflection_LateUpdate_m243 (PlanarReflection_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C" void PlanarReflection_WaterTileBeingRendered_m244 (PlanarReflection_t77 * __this, Transform_t2 * ___tr, Camera_t19 * ___currentCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnEnable()
extern "C" void PlanarReflection_OnEnable_m245 (PlanarReflection_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnDisable()
extern "C" void PlanarReflection_OnDisable_m246 (PlanarReflection_t77 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void PlanarReflection_RenderReflectionFor_m247 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, Camera_t19 * ___reflectCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C" void PlanarReflection_SaneCameraSettings_m248 (PlanarReflection_t77 * __this, Camera_t19 * ___helperCam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t81  PlanarReflection_CalculateObliqueMatrix_m249 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___projection, Vector4_t82  ___clipPlane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t81  PlanarReflection_CalculateReflectionMatrix_m250 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___reflectionMat, Vector4_t82  ___plane, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Water.PlanarReflection::Sgn(System.Single)
extern "C" float PlanarReflection_Sgn_m251 (Object_t * __this /* static, unused */, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t82  PlanarReflection_CameraSpacePlane_m252 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, Vector3_t8  ___pos, Vector3_t8  ___normal, float ___sideSign, MethodInfo* method) IL2CPP_METHOD_ATTR;
