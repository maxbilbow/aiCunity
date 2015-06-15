#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3760;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m23527_gshared (DefaultComparer_t3760 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m23527(__this, method) (( void (*) (DefaultComparer_t3760 *, MethodInfo*))DefaultComparer__ctor_m23527_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23528_gshared (DefaultComparer_t3760 * __this, Guid_t940  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m23528(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3760 *, Guid_t940 , MethodInfo*))DefaultComparer_GetHashCode_m23528_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23529_gshared (DefaultComparer_t3760 * __this, Guid_t940  ___x, Guid_t940  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m23529(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3760 *, Guid_t940 , Guid_t940 , MethodInfo*))DefaultComparer_Equals_m23529_gshared)(__this, ___x, ___y, method)
