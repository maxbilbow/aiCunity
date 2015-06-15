#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t2111;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11825_gshared (GenericEqualityComparer_1_t2111 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11825(__this, method) (( void (*) (GenericEqualityComparer_1_t2111 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11825_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m23531_gshared (GenericEqualityComparer_1_t2111 * __this, Guid_t942  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m23531(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2111 *, Guid_t942 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m23531_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m23532_gshared (GenericEqualityComparer_1_t2111 * __this, Guid_t942  ___x, Guid_t942  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m23532(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2111 *, Guid_t942 , Guid_t942 , MethodInfo*))GenericEqualityComparer_1_Equals_m23532_gshared)(__this, ___x, ___y, method)
