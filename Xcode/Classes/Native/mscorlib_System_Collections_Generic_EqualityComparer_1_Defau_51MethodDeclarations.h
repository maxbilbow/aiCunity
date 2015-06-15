#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct DefaultComparer_t3546;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
extern "C" void DefaultComparer__ctor_m21906_gshared (DefaultComparer_t3546 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21906(__this, method) (( void (*) (DefaultComparer_t3546 *, MethodInfo*))DefaultComparer__ctor_m21906_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21907_gshared (DefaultComparer_t3546 * __this, KeyValuePair_2_t938  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m21907(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3546 *, KeyValuePair_2_t938 , MethodInfo*))DefaultComparer_GetHashCode_m21907_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21908_gshared (DefaultComparer_t3546 * __this, KeyValuePair_2_t938  ___x, KeyValuePair_2_t938  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m21908(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3546 *, KeyValuePair_2_t938 , KeyValuePair_2_t938 , MethodInfo*))DefaultComparer_Equals_m21908_gshared)(__this, ___x, ___y, method)
