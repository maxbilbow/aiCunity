#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<System.Object,System.Object>
struct Action_2_t3643;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m22720_gshared (Action_2_t3643 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_2__ctor_m22720(__this, ___object, ___method, method) (( void (*) (Action_2_t3643 *, Object_t *, IntPtr_t, MethodInfo*))Action_2__ctor_m22720_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m22721_gshared (Action_2_t3643 * __this, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define Action_2_Invoke_m22721(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t3643 *, Object_t *, Object_t *, MethodInfo*))Action_2_Invoke_m22721_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m22722_gshared (Action_2_t3643 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_2_BeginInvoke_m22722(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t3643 *, Object_t *, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Action_2_BeginInvoke_m22722_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m22723_gshared (Action_2_t3643 * __this, Object_t * ___result, MethodInfo* method);
#define Action_2_EndInvoke_m22723(__this, ___result, method) (( void (*) (Action_2_t3643 *, Object_t *, MethodInfo*))Action_2_EndInvoke_m22723_gshared)(__this, ___result, method)
