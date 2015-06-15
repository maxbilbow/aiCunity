﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Transform_1_t3480;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t822;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m21249(__this, ___object, ___method, method) (( void (*) (Transform_1_t3480 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12769_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m21250(__this, ___key, ___value, method) (( ConstructorDelegate_t822 * (*) (Transform_1_t3480 *, Type_t *, ConstructorDelegate_t822 *, MethodInfo*))Transform_1_Invoke_m12770_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m21251(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3480 *, Type_t *, ConstructorDelegate_t822 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12771_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m21252(__this, ___result, method) (( ConstructorDelegate_t822 * (*) (Transform_1_t3480 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12772_gshared)(__this, ___result, method)
