#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3764;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m23544_gshared (DefaultComparer_t3764 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m23544(__this, method) (( void (*) (DefaultComparer_t3764 *, MethodInfo*))DefaultComparer__ctor_m23544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23545_gshared (DefaultComparer_t3764 * __this, TimeSpan_t1232  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m23545(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3764 *, TimeSpan_t1232 , MethodInfo*))DefaultComparer_GetHashCode_m23545_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23546_gshared (DefaultComparer_t3764 * __this, TimeSpan_t1232  ___x, TimeSpan_t1232  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m23546(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3764 *, TimeSpan_t1232 , TimeSpan_t1232 , MethodInfo*))DefaultComparer_Equals_m23546_gshared)(__this, ___x, ___y, method)
