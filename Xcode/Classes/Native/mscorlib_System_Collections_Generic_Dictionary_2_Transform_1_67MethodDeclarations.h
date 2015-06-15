﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct Transform_1_t3245;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18756_gshared (Transform_1_t3245 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m18756(__this, ___object, ___method, method) (( void (*) (Transform_1_t3245 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18756_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3234  Transform_1_Invoke_m18758_gshared (Transform_1_t3245 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m18758(__this, ___key, ___value, method) (( KeyValuePair_2_t3234  (*) (Transform_1_t3245 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m18758_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18760_gshared (Transform_1_t3245 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m18760(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3245 *, int32_t, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18760_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3234  Transform_1_EndInvoke_m18762_gshared (Transform_1_t3245 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m18762(__this, ___result, method) (( KeyValuePair_2_t3234  (*) (Transform_1_t3245 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18762_gshared)(__this, ___result, method)
