#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2899;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15169_gshared (DefaultComparer_t2899 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m15169(__this, method) (( void (*) (DefaultComparer_t2899 *, MethodInfo*))DefaultComparer__ctor_m15169_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15170_gshared (DefaultComparer_t2899 * __this, RaycastResult_t315  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m15170(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2899 *, RaycastResult_t315 , MethodInfo*))DefaultComparer_GetHashCode_m15170_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15171_gshared (DefaultComparer_t2899 * __this, RaycastResult_t315  ___x, RaycastResult_t315  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m15171(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2899 *, RaycastResult_t315 , RaycastResult_t315 , MethodInfo*))DefaultComparer_Equals_m15171_gshared)(__this, ___x, ___y, method)
