#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t121;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t120;
// UnityEngine.Transform
struct Transform_t2;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t745;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m989 (ParticleSystem_t121 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C" float ParticleSystem_get_startSize_m1031 (ParticleSystem_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" void ParticleSystem_set_startSize_m1034 (ParticleSystem_t121 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_get_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_get_startColor_m3913 (ParticleSystem_t121 * __this, Color_t79 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_set_startColor_m3914 (ParticleSystem_t121 * __this, Color_t79 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.ParticleSystem::get_startColor()
extern "C" Color_t79  ParticleSystem_get_startColor_m1032 (ParticleSystem_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
extern "C" void ParticleSystem_set_startColor_m1036 (ParticleSystem_t121 * __this, Color_t79  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C" float ParticleSystem_get_startLifetime_m985 (ParticleSystem_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C" void ParticleSystem_set_startLifetime_m1033 (ParticleSystem_t121 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m3915 (ParticleSystem_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m1062 (ParticleSystem_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m3916 (ParticleSystem_t121 * __this, bool ___withChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C" void ParticleSystem_Emit_m1063 (ParticleSystem_t121 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m3917 (Object_t * __this /* static, unused */, ParticleSystem_t121 * ___self, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t120* ParticleSystem_GetParticleSystems_m3918 (Object_t * __this /* static, unused */, ParticleSystem_t121 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3919 (Object_t * __this /* static, unused */, Transform_t2 * ___transform, List_1_t745 * ___particleSystems, MethodInfo* method) IL2CPP_METHOD_ATTR;
