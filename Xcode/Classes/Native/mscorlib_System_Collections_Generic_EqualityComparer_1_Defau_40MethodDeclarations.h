#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
struct DefaultComparer_t3359;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m20143_gshared (DefaultComparer_t3359 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m20143(__this, method) (( void (*) (DefaultComparer_t3359 *, MethodInfo*))DefaultComparer__ctor_m20143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20144_gshared (DefaultComparer_t3359 * __this, int64_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m20144(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3359 *, int64_t, MethodInfo*))DefaultComparer_GetHashCode_m20144_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20145_gshared (DefaultComparer_t3359 * __this, int64_t ___x, int64_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m20145(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3359 *, int64_t, int64_t, MethodInfo*))DefaultComparer_Equals_m20145_gshared)(__this, ___x, ___y, method)
