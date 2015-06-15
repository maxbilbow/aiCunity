#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
struct Transform_1_t2729;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13587_gshared (Transform_1_t2729 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m13587(__this, ___object, ___method, method) (( void (*) (Transform_1_t2729 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13587_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m13588_gshared (Transform_1_t2729 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m13588(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t2729 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m13588_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13589_gshared (Transform_1_t2729 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m13589(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2729 *, Object_t *, uint8_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13589_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m13590_gshared (Transform_1_t2729 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m13590(__this, ___result, method) (( uint8_t (*) (Transform_1_t2729 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13590_gshared)(__this, ___result, method)
