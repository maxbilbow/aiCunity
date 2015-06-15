#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3756;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m23506_gshared (DefaultComparer_t3756 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m23506(__this, method) (( void (*) (DefaultComparer_t3756 *, MethodInfo*))DefaultComparer__ctor_m23506_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23507_gshared (DefaultComparer_t3756 * __this, DateTimeOffset_t939  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m23507(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3756 *, DateTimeOffset_t939 , MethodInfo*))DefaultComparer_GetHashCode_m23507_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23508_gshared (DefaultComparer_t3756 * __this, DateTimeOffset_t939  ___x, DateTimeOffset_t939  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m23508(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3756 *, DateTimeOffset_t939 , DateTimeOffset_t939 , MethodInfo*))DefaultComparer_Equals_m23508_gshared)(__this, ___x, ___y, method)
