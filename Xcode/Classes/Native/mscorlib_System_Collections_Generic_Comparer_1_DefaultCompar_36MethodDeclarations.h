#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3756;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m23508_gshared (DefaultComparer_t3756 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m23508(__this, method) (( void (*) (DefaultComparer_t3756 *, MethodInfo*))DefaultComparer__ctor_m23508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m23509_gshared (DefaultComparer_t3756 * __this, DateTimeOffset_t941  ___x, DateTimeOffset_t941  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m23509(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3756 *, DateTimeOffset_t941 , DateTimeOffset_t941 , MethodInfo*))DefaultComparer_Compare_m23509_gshared)(__this, ___x, ___y, method)
