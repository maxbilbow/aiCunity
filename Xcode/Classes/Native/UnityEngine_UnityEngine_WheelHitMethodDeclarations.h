#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WheelHit
struct WheelHit_t223;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern "C" Vector3_t8  WheelHit_get_normal_m1055 (WheelHit_t223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WheelHit::get_forwardSlip()
extern "C" float WheelHit_get_forwardSlip_m1057 (WheelHit_t223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern "C" float WheelHit_get_sidewaysSlip_m1058 (WheelHit_t223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
