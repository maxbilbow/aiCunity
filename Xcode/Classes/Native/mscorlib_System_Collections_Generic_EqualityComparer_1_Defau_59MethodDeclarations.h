#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3762;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m23538_gshared (DefaultComparer_t3762 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m23538(__this, method) (( void (*) (DefaultComparer_t3762 *, MethodInfo*))DefaultComparer__ctor_m23538_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23539_gshared (DefaultComparer_t3762 * __this, Guid_t942  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m23539(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3762 *, Guid_t942 , MethodInfo*))DefaultComparer_GetHashCode_m23539_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23540_gshared (DefaultComparer_t3762 * __this, Guid_t942  ___x, Guid_t942  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m23540(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3762 *, Guid_t942 , Guid_t942 , MethodInfo*))DefaultComparer_Equals_m23540_gshared)(__this, ___x, ___y, method)
