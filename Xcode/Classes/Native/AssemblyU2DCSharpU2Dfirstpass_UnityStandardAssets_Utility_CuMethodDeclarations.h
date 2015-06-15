#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t23;
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C" void CurveControlledBob__ctor_m290 (CurveControlledBob_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" void CurveControlledBob_Setup_m291 (CurveControlledBob_t23 * __this, Camera_t19 * ___camera, float ___bobBaseInterval, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" Vector3_t8  CurveControlledBob_DoHeadBob_m292 (CurveControlledBob_t23 * __this, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
