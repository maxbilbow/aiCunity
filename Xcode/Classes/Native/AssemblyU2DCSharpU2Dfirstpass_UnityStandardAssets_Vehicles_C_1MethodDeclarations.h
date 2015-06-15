#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Vehicles.Car.CarAIControl
struct CarAIControl_t166;
// UnityEngine.Collision
struct Collision_t167;
// UnityEngine.Transform
struct Transform_t2;

// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::.ctor()
extern "C" void CarAIControl__ctor_m498 (CarAIControl_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::Awake()
extern "C" void CarAIControl_Awake_m499 (CarAIControl_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::FixedUpdate()
extern "C" void CarAIControl_FixedUpdate_m500 (CarAIControl_t166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::OnCollisionStay(UnityEngine.Collision)
extern "C" void CarAIControl_OnCollisionStay_m501 (CarAIControl_t166 * __this, Collision_t167 * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::SetTarget(UnityEngine.Transform)
extern "C" void CarAIControl_SetTarget_m502 (CarAIControl_t166 * __this, Transform_t2 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
