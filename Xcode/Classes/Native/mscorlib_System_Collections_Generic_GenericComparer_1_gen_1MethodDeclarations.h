#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t2110;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m11824_gshared (GenericComparer_1_t2110 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m11824(__this, method) (( void (*) (GenericComparer_1_t2110 *, MethodInfo*))GenericComparer_1__ctor_m11824_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m23524_gshared (GenericComparer_1_t2110 * __this, Guid_t942  ___x, Guid_t942  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m23524(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2110 *, Guid_t942 , Guid_t942 , MethodInfo*))GenericComparer_1_Compare_m23524_gshared)(__this, ___x, ___y, method)
