﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t2649;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m12857_gshared (DefaultComparer_t2649 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m12857(__this, method) (( void (*) (DefaultComparer_t2649 *, MethodInfo*))DefaultComparer__ctor_m12857_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12858_gshared (DefaultComparer_t2649 * __this, Object_t * ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m12858(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2649 *, Object_t *, MethodInfo*))DefaultComparer_GetHashCode_m12858_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12859_gshared (DefaultComparer_t2649 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define DefaultComparer_Equals_m12859(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2649 *, Object_t *, Object_t *, MethodInfo*))DefaultComparer_Equals_m12859_gshared)(__this, ___x, ___y, method)
