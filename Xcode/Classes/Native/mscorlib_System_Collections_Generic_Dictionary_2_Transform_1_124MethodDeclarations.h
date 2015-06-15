#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>
struct Transform_1_t3552;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_120MethodDeclarations.h"
#define Transform_1__ctor_m21951(__this, ___object, ___method, method) (( void (*) (Transform_1_t3552 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21871_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m21952(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3552 *, String_t*, KeyValuePair_2_t940 , MethodInfo*))Transform_1_Invoke_m21872_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m21953(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3552 *, String_t*, KeyValuePair_2_t940 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21873_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m21954(__this, ___result, method) (( String_t* (*) (Transform_1_t3552 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21874_gshared)(__this, ___result, method)
