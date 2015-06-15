#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t2111;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11825_gshared (GenericEqualityComparer_1_t2111 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11825(__this, method) (( void (*) (GenericEqualityComparer_1_t2111 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11825_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m23537_gshared (GenericEqualityComparer_1_t2111 * __this, TimeSpan_t1232  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m23537(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2111 *, TimeSpan_t1232 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m23537_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m23538_gshared (GenericEqualityComparer_1_t2111 * __this, TimeSpan_t1232  ___x, TimeSpan_t1232  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m23538(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2111 *, TimeSpan_t1232 , TimeSpan_t1232 , MethodInfo*))GenericEqualityComparer_1_Equals_m23538_gshared)(__this, ___x, ___y, method)
