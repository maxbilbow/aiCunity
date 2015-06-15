#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>>
struct Transform_1_t2661;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12939_gshared (Transform_1_t2661 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m12939(__this, ___object, ___method, method) (( void (*) (Transform_1_t2661 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12939_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2650  Transform_1_Invoke_m12941_gshared (Transform_1_t2661 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m12941(__this, ___key, ___value, method) (( KeyValuePair_2_t2650  (*) (Transform_1_t2661 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m12941_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12943_gshared (Transform_1_t2661 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m12943(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2661 *, Object_t *, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12943_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2650  Transform_1_EndInvoke_m12945_gshared (Transform_1_t2661 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m12945(__this, ___result, method) (( KeyValuePair_2_t2650  (*) (Transform_1_t2661 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12945_gshared)(__this, ___result, method)
