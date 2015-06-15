﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
struct Transform_1_t3600;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t438;
struct Event_t438_marshaled;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_26MethodDeclarations.h"
#define Transform_1__ctor_m22351(__this, ___object, ___method, method) (( void (*) (Transform_1_t3600 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14396_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22352(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3600 *, Event_t438 *, int32_t, MethodInfo*))Transform_1_Invoke_m14397_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22353(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3600 *, Event_t438 *, int32_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14398_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22354(__this, ___result, method) (( int32_t (*) (Transform_1_t3600 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14399_gshared)(__this, ___result, method)
