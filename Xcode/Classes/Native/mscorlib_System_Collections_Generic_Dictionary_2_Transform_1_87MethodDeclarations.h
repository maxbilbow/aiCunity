#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
struct Transform_1_t3415;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20712_gshared (Transform_1_t3415 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m20712(__this, ___object, ___method, method) (( void (*) (Transform_1_t3415 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20712_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m20713_gshared (Transform_1_t3415 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m20713(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3415 *, uint64_t, Object_t *, MethodInfo*))Transform_1_Invoke_m20713_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20714_gshared (Transform_1_t3415 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m20714(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3415 *, uint64_t, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20714_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m20715_gshared (Transform_1_t3415 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m20715(__this, ___result, method) (( Object_t * (*) (Transform_1_t3415 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20715_gshared)(__this, ___result, method)
