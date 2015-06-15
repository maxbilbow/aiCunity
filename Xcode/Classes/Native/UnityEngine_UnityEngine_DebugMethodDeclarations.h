#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t732;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t91;
struct Object_t91_marshaled;
// System.Exception
struct Exception_t204;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void Debug_DrawLine_m3811 (Object_t * __this /* static, unused */, Vector3_t8  ___start, Vector3_t8  ___end, Color_t79  ___color, float ___duration, bool ___depthTest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m3812 (Object_t * __this /* static, unused */, Vector3_t8 * ___start, Vector3_t8 * ___end, Color_t79 * ___color, float ___duration, bool ___depthTest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" void Debug_DrawRay_m650 (Object_t * __this /* static, unused */, Vector3_t8  ___start, Vector3_t8  ___dir, Color_t79  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void Debug_DrawRay_m3813 (Object_t * __this /* static, unused */, Vector3_t8  ___start, Vector3_t8  ___dir, Color_t79  ___color, float ___duration, bool ___depthTest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m3814 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t91 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m3815 (Object_t * __this /* static, unused */, Exception_t204 * ___exception, Object_t91 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m922 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m798 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m2822 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t91 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m3816 (Object_t * __this /* static, unused */, Exception_t204 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m2700 (Object_t * __this /* static, unused */, Exception_t204 * ___exception, Object_t91 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m715 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m2995 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t91 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
