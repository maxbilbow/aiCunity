#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2901;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15180_gshared (DefaultComparer_t2901 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m15180(__this, method) (( void (*) (DefaultComparer_t2901 *, MethodInfo*))DefaultComparer__ctor_m15180_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15181_gshared (DefaultComparer_t2901 * __this, RaycastResult_t317  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m15181(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2901 *, RaycastResult_t317 , MethodInfo*))DefaultComparer_GetHashCode_m15181_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15182_gshared (DefaultComparer_t2901 * __this, RaycastResult_t317  ___x, RaycastResult_t317  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m15182(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2901 *, RaycastResult_t317 , RaycastResult_t317 , MethodInfo*))DefaultComparer_Equals_m15182_gshared)(__this, ___x, ___y, method)
