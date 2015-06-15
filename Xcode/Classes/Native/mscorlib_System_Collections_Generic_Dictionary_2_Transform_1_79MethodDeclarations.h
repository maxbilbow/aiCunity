#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t3341;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20121_gshared (Transform_1_t3341 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m20121(__this, ___object, ___method, method) (( void (*) (Transform_1_t3341 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20121_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1156  Transform_1_Invoke_m20122_gshared (Transform_1_t3341 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m20122(__this, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Transform_1_t3341 *, Object_t *, int64_t, MethodInfo*))Transform_1_Invoke_m20122_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20123_gshared (Transform_1_t3341 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m20123(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3341 *, Object_t *, int64_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20123_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1156  Transform_1_EndInvoke_m20124_gshared (Transform_1_t3341 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m20124(__this, ___result, method) (( DictionaryEntry_t1156  (*) (Transform_1_t3341 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20124_gshared)(__this, ___result, method)
