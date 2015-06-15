#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<System.Object,System.Object>
struct Action_2_t3641;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m22709_gshared (Action_2_t3641 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_2__ctor_m22709(__this, ___object, ___method, method) (( void (*) (Action_2_t3641 *, Object_t *, IntPtr_t, MethodInfo*))Action_2__ctor_m22709_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m22710_gshared (Action_2_t3641 * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define Action_2_Invoke_m22710(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t3641 *, Object_t *, Object_t *, MethodInfo*))Action_2_Invoke_m22710_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m22711_gshared (Action_2_t3641 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_2_BeginInvoke_m22711(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t3641 *, Object_t *, Object_t *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Action_2_BeginInvoke_m22711_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m22712_gshared (Action_2_t3641 * __this, Object_t * ___result, MethodInfo* method);
#define Action_2_EndInvoke_m22712(__this, ___result, method) (( void (*) (Action_2_t3641 *, Object_t *, MethodInfo*))Action_2_EndInvoke_m22712_gshared)(__this, ___result, method)
