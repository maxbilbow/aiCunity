#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Shader
struct Shader_t95;
// System.String
struct String_t;

// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C" void Shader_EnableKeyword_m812 (Object_t * __this /* static, unused */, String_t* ___keyword, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C" void Shader_DisableKeyword_m813 (Object_t * __this /* static, unused */, String_t* ___keyword, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
extern "C" void Shader_set_maximumLOD_m912 (Shader_t95 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m3702 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
