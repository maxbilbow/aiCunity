﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t2107;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11812_gshared (GenericEqualityComparer_1_t2107 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11812(__this, method) (( void (*) (GenericEqualityComparer_1_t2107 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11812_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m23493_gshared (GenericEqualityComparer_1_t2107 * __this, DateTime_t685  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m23493(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2107 *, DateTime_t685 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m23493_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m23494_gshared (GenericEqualityComparer_1_t2107 * __this, DateTime_t685  ___x, DateTime_t685  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m23494(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2107 *, DateTime_t685 , DateTime_t685 , MethodInfo*))GenericEqualityComparer_1_Equals_m23494_gshared)(__this, ___x, ___y, method)
