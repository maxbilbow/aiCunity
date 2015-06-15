#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
struct DefaultComparer_t2734;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern "C" void DefaultComparer__ctor_m13613_gshared (DefaultComparer_t2734 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m13613(__this, method) (( void (*) (DefaultComparer_t2734 *, MethodInfo*))DefaultComparer__ctor_m13613_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13614_gshared (DefaultComparer_t2734 * __this, uint8_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m13614(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2734 *, uint8_t, MethodInfo*))DefaultComparer_GetHashCode_m13614_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13615_gshared (DefaultComparer_t2734 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m13615(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2734 *, uint8_t, uint8_t, MethodInfo*))DefaultComparer_Equals_m13615_gshared)(__this, ___x, ___y, method)
