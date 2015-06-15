#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>
struct Transform_1_t3595;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t436;
struct Event_t436_marshaled;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_25MethodDeclarations.h"
#define Transform_1__ctor_m22317(__this, ___object, ___method, method) (( void (*) (Transform_1_t3595 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14362_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22318(__this, ___key, ___value, method) (( Event_t436 * (*) (Transform_1_t3595 *, Event_t436 *, int32_t, MethodInfo*))Transform_1_Invoke_m14363_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22319(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3595 *, Event_t436 *, int32_t, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14364_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,UnityEngine.Event>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22320(__this, ___result, method) (( Event_t436 * (*) (Transform_1_t3595 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14365_gshared)(__this, ___result, method)
