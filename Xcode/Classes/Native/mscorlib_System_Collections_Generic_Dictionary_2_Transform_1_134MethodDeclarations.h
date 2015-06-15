#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>
struct Transform_1_t3649;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12MethodDeclarations.h"
#define Transform_1__ctor_m22807(__this, ___object, ___method, method) (( void (*) (Transform_1_t3649 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13553_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22808(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3649 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m13554_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22809(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3649 *, String_t*, bool, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13555_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22810(__this, ___result, method) (( String_t* (*) (Transform_1_t3649 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13556_gshared)(__this, ___result, method)
