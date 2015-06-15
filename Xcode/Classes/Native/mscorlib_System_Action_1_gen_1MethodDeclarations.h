#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t647;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_7MethodDeclarations.h"
#define Action_1__ctor_m18401(__this, ___object, ___method, method) (( void (*) (Action_1_t647 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m18402_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m4521(__this, ___obj, method) (( void (*) (Action_1_t647 *, bool, MethodInfo*))Action_1_Invoke_m18403_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m18404(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t647 *, bool, AsyncCallback_t424 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m18405_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m18406(__this, ___result, method) (( void (*) (Action_1_t647 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m18407_gshared)(__this, ___result, method)
