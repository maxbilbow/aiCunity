#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SystemInfo
struct SystemInfo_t642;
// System.String
struct String_t;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"

// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
extern "C" bool SystemInfo_get_supportsRenderTextures_m903 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C" bool SystemInfo_SupportsRenderTextureFormat_m913 (Object_t * __this /* static, unused */, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern "C" String_t* SystemInfo_get_deviceUniqueIdentifier_m3239 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
