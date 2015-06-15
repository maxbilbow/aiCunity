﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>
struct Transform_1_t3525;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t827;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m21688(__this, ___object, ___method, method) (( void (*) (Transform_1_t3525 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12780_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m21689(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3525 *, String_t*, GetDelegate_t827 *, MethodInfo*))Transform_1_Invoke_m12781_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m21690(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3525 *, String_t*, GetDelegate_t827 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12782_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m21691(__this, ___result, method) (( String_t* (*) (Transform_1_t3525 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12783_gshared)(__this, ___result, method)
