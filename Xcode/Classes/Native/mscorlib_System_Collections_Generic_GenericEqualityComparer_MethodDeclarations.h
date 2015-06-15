#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t2105;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11801_gshared (GenericEqualityComparer_1_t2105 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11801(__this, method) (( void (*) (GenericEqualityComparer_1_t2105 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11801_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m23482_gshared (GenericEqualityComparer_1_t2105 * __this, DateTime_t683  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m23482(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2105 *, DateTime_t683 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m23482_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m23483_gshared (GenericEqualityComparer_1_t2105 * __this, DateTime_t683  ___x, DateTime_t683  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m23483(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2105 *, DateTime_t683 , DateTime_t683 , MethodInfo*))GenericEqualityComparer_1_Equals_m23483_gshared)(__this, ___x, ___y, method)
