#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3766;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m23555_gshared (DefaultComparer_t3766 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m23555(__this, method) (( void (*) (DefaultComparer_t3766 *, MethodInfo*))DefaultComparer__ctor_m23555_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23556_gshared (DefaultComparer_t3766 * __this, TimeSpan_t1234  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m23556(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3766 *, TimeSpan_t1234 , MethodInfo*))DefaultComparer_GetHashCode_m23556_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23557_gshared (DefaultComparer_t3766 * __this, TimeSpan_t1234  ___x, TimeSpan_t1234  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m23557(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3766 *, TimeSpan_t1234 , TimeSpan_t1234 , MethodInfo*))DefaultComparer_Equals_m23557_gshared)(__this, ___x, ___y, method)
