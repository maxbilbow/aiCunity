#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3057;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m16884_gshared (DefaultComparer_t3057 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m16884(__this, method) (( void (*) (DefaultComparer_t3057 *, MethodInfo*))DefaultComparer__ctor_m16884_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16885_gshared (DefaultComparer_t3057 * __this, UIVertex_t414  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m16885(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3057 *, UIVertex_t414 , MethodInfo*))DefaultComparer_GetHashCode_m16885_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16886_gshared (DefaultComparer_t3057 * __this, UIVertex_t414  ___x, UIVertex_t414  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m16886(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3057 *, UIVertex_t414 , UIVertex_t414 , MethodInfo*))DefaultComparer_Equals_m16886_gshared)(__this, ___x, ___y, method)
