#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct Transform_1_t3654;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m22839_gshared (Transform_1_t3654 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m22839(__this, ___object, ___method, method) (( void (*) (Transform_1_t3654 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m22839_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3644  Transform_1_Invoke_m22841_gshared (Transform_1_t3654 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m22841(__this, ___key, ___value, method) (( KeyValuePair_2_t3644  (*) (Transform_1_t3654 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m22841_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m22843_gshared (Transform_1_t3654 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m22843(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3654 *, Object_t *, uint8_t, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m22843_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3644  Transform_1_EndInvoke_m22845_gshared (Transform_1_t3654 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m22845(__this, ___result, method) (( KeyValuePair_2_t3644  (*) (Transform_1_t3654 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m22845_gshared)(__this, ___result, method)
