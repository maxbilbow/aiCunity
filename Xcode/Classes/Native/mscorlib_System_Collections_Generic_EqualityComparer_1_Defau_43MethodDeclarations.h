#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
struct DefaultComparer_t3420;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::.ctor()
extern "C" void DefaultComparer__ctor_m20738_gshared (DefaultComparer_t3420 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m20738(__this, method) (( void (*) (DefaultComparer_t3420 *, MethodInfo*))DefaultComparer__ctor_m20738_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20739_gshared (DefaultComparer_t3420 * __this, uint64_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m20739(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3420 *, uint64_t, MethodInfo*))DefaultComparer_GetHashCode_m20739_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20740_gshared (DefaultComparer_t3420 * __this, uint64_t ___x, uint64_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m20740(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3420 *, uint64_t, uint64_t, MethodInfo*))DefaultComparer_Equals_m20740_gshared)(__this, ___x, ___y, method)
