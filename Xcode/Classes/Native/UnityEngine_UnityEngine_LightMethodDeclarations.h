#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Light
struct Light_t107;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_get_color_m3876 (Light_t107 * __this, Color_t79 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_set_color_m3877 (Light_t107 * __this, Color_t79 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Light::get_color()
extern "C" Color_t79  Light_get_color_m1310 (Light_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C" void Light_set_color_m1313 (Light_t107 * __this, Color_t79  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Light::get_shadowStrength()
extern "C" float Light_get_shadowStrength_m966 (Light_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
extern "C" void Light_set_shadowStrength_m970 (Light_t107 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
extern "C" void Light_set_shadowBias_m969 (Light_t107 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
