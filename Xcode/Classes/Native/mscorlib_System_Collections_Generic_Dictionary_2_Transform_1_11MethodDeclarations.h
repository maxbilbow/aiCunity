#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>>
struct Transform_1_t2680;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13087_gshared (Transform_1_t2680 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m13087(__this, ___object, ___method, method) (( void (*) (Transform_1_t2680 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13087_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2669  Transform_1_Invoke_m13089_gshared (Transform_1_t2680 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m13089(__this, ___key, ___value, method) (( KeyValuePair_2_t2669  (*) (Transform_1_t2680 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m13089_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13091_gshared (Transform_1_t2680 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m13091(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2680 *, Object_t *, Object_t *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13091_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2669  Transform_1_EndInvoke_m13093_gshared (Transform_1_t2680 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m13093(__this, ___result, method) (( KeyValuePair_2_t2669  (*) (Transform_1_t2680 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13093_gshared)(__this, ___result, method)
