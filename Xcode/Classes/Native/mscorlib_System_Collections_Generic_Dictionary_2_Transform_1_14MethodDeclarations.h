﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
struct Transform_1_t2716;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13591_gshared (Transform_1_t2716 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m13591(__this, ___object, ___method, method) (( void (*) (Transform_1_t2716 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13591_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1156  Transform_1_Invoke_m13592_gshared (Transform_1_t2716 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m13592(__this, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Transform_1_t2716 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m13592_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13593_gshared (Transform_1_t2716 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m13593(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2716 *, Object_t *, uint8_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13593_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1156  Transform_1_EndInvoke_m13594_gshared (Transform_1_t2716 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m13594(__this, ___result, method) (( DictionaryEntry_t1156  (*) (Transform_1_t2716 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13594_gshared)(__this, ___result, method)
