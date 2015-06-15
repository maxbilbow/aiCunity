#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t21;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C" void MouseLook__ctor_m50 (MouseLook_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_Init_m51 (MouseLook_t21 * __this, Transform_t2 * ___character, Transform_t2 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_LookRotation_m52 (MouseLook_t21 * __this, Transform_t2 * ___character, Transform_t2 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C" Quaternion_t10  MouseLook_ClampRotationAroundXAxis_m53 (MouseLook_t21 * __this, Quaternion_t10  ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
