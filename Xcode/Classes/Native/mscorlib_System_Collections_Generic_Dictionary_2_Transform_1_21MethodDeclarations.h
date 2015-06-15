#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>
struct Transform_1_t2761;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m13826(__this, ___object, ___method, method) (( void (*) (Transform_1_t2761 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12780_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13827(__this, ___key, ___value, method) (( Camera_t19 * (*) (Transform_1_t2761 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Transform_1_Invoke_m12781_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13828(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2761 *, Camera_t19 *, Camera_t19 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12782_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13829(__this, ___result, method) (( Camera_t19 * (*) (Transform_1_t2761 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12783_gshared)(__this, ___result, method)
