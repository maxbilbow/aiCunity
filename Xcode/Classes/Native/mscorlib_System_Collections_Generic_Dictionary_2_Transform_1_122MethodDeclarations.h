#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>
struct Transform_1_t3536;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21898_gshared (Transform_1_t3536 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m21898(__this, ___object, ___method, method) (( void (*) (Transform_1_t3536 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21898_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1156  Transform_1_Invoke_m21899_gshared (Transform_1_t3536 * __this, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Transform_1_Invoke_m21899(__this, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Transform_1_t3536 *, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Transform_1_Invoke_m21899_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21900_gshared (Transform_1_t3536 * __this, Object_t * ___key, KeyValuePair_2_t940  ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m21900(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3536 *, Object_t *, KeyValuePair_2_t940 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21900_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1156  Transform_1_EndInvoke_m21901_gshared (Transform_1_t3536 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m21901(__this, ___result, method) (( DictionaryEntry_t1156  (*) (Transform_1_t3536 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21901_gshared)(__this, ___result, method)
