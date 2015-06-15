#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>
struct Transform_1_t2744;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12MethodDeclarations.h"
#define Transform_1__ctor_m13678(__this, ___object, ___method, method) (( void (*) (Transform_1_t2744 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13564_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13679(__this, ___key, ___value, method) (( Camera_t19 * (*) (Transform_1_t2744 *, Camera_t19 *, bool, MethodInfo*))Transform_1_Invoke_m13565_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13680(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2744 *, Camera_t19 *, bool, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13566_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13681(__this, ___result, method) (( Camera_t19 * (*) (Transform_1_t2744 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13567_gshared)(__this, ___result, method)
