﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>
struct Transform_1_t2757;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t19;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m13849(__this, ___object, ___method, method) (( void (*) (Transform_1_t2757 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12803_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13850(__this, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Transform_1_t2757 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Transform_1_Invoke_m12804_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13851(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2757 *, Camera_t19 *, Camera_t19 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12805_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13852(__this, ___result, method) (( DictionaryEntry_t1156  (*) (Transform_1_t2757 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12806_gshared)(__this, ___result, method)
