﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Byte[]>
struct Comparison_1_t3292;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m19319(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3292 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m13307_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Byte[]>::Invoke(T,T)
#define Comparison_1_Invoke_m19320(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3292 *, ByteU5BU5D_t720*, ByteU5BU5D_t720*, MethodInfo*))Comparison_1_Invoke_m13308_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Byte[]>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m19321(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3292 *, ByteU5BU5D_t720*, ByteU5BU5D_t720*, AsyncCallback_t424 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m13309_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m19322(__this, ___result, method) (( int32_t (*) (Comparison_1_t3292 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m13310_gshared)(__this, ___result, method)
