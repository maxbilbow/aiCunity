﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct Transform_1_t3116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17492_gshared (Transform_1_t3116 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m17492(__this, ___object, ___method, method) (( void (*) (Transform_1_t3116 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17492_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3091  Transform_1_Invoke_m17494_gshared (Transform_1_t3116 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m17494(__this, ___key, ___value, method) (( KeyValuePair_2_t3091  (*) (Transform_1_t3116 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m17494_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17496_gshared (Transform_1_t3116 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m17496(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3116 *, Object_t *, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17496_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3091  Transform_1_EndInvoke_m17498_gshared (Transform_1_t3116 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m17498(__this, ___result, method) (( KeyValuePair_2_t3091  (*) (Transform_1_t3116 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17498_gshared)(__this, ___result, method)
