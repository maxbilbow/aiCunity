#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3721;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m23243_gshared (StaticGetter_1_t3721 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define StaticGetter_1__ctor_m23243(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t3721 *, Object_t *, IntPtr_t, MethodInfo*))StaticGetter_1__ctor_m23243_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m23244_gshared (StaticGetter_1_t3721 * __this, MethodInfo* method);
#define StaticGetter_1_Invoke_m23244(__this, method) (( Object_t * (*) (StaticGetter_1_t3721 *, MethodInfo*))StaticGetter_1_Invoke_m23244_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m23245_gshared (StaticGetter_1_t3721 * __this, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m23245(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t3721 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))StaticGetter_1_BeginInvoke_m23245_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m23246_gshared (StaticGetter_1_t3721 * __this, Object_t * ___result, MethodInfo* method);
#define StaticGetter_1_EndInvoke_m23246(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t3721 *, Object_t *, MethodInfo*))StaticGetter_1_EndInvoke_m23246_gshared)(__this, ___result, method)
