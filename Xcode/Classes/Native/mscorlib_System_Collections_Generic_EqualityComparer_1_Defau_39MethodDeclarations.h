#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3334;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m19912_gshared (DefaultComparer_t3334 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19912(__this, method) (( void (*) (DefaultComparer_t3334 *, MethodInfo*))DefaultComparer__ctor_m19912_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19913_gshared (DefaultComparer_t3334 * __this, UILineInfo_t544  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19913(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3334 *, UILineInfo_t544 , MethodInfo*))DefaultComparer_GetHashCode_m19913_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19914_gshared (DefaultComparer_t3334 * __this, UILineInfo_t544  ___x, UILineInfo_t544  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19914(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3334 *, UILineInfo_t544 , UILineInfo_t544 , MethodInfo*))DefaultComparer_Equals_m19914_gshared)(__this, ___x, ___y, method)
