﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>
struct Transform_1_t3446;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m20963(__this, ___object, ___method, method) (( void (*) (Transform_1_t3446 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12780_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20964(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3446 *, String_t*, Object_t *, MethodInfo*))Transform_1_Invoke_m12781_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20965(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3446 *, String_t*, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12782_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20966(__this, ___result, method) (( String_t* (*) (Transform_1_t3446 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12783_gshared)(__this, ___result, method)
