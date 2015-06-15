#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
struct Transform_1_t2762;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t19;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24MethodDeclarations.h"
#define Transform_1__ctor_m13842(__this, ___object, ___method, method) (( void (*) (Transform_1_t2762 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13843_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13844(__this, ___key, ___value, method) (( KeyValuePair_2_t210  (*) (Transform_1_t2762 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Transform_1_Invoke_m13845_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13846(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2762 *, Camera_t19 *, Camera_t19 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13847_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13848(__this, ___result, method) (( KeyValuePair_2_t210  (*) (Transform_1_t2762 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13849_gshared)(__this, ___result, method)
