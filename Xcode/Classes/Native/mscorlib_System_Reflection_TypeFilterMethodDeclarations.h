﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TypeFilter
struct TypeFilter_t1750;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C" void TypeFilter__ctor_m11632 (TypeFilter_t1750 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C" bool TypeFilter_Invoke_m11633 (TypeFilter_t1750 * __this, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t1750(Il2CppObject* delegate, Type_t * ___m, Object_t * ___filterCriteria);
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TypeFilter_BeginInvoke_m11634 (TypeFilter_t1750 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C" bool TypeFilter_EndInvoke_m11635 (TypeFilter_t1750 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
