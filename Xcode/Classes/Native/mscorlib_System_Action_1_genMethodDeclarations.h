#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<CNAbstractController>
struct Action_1_t259;
// System.Object
struct Object_t;
// CNAbstractController
struct CNAbstractController_t252;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<CNAbstractController>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m14223(__this, ___object, ___method, method) (( void (*) (Action_1_t259 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m14224_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<CNAbstractController>::Invoke(T)
#define Action_1_Invoke_m1285(__this, ___obj, method) (( void (*) (Action_1_t259 *, CNAbstractController_t252 *, MethodInfo*))Action_1_Invoke_m14225_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<CNAbstractController>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m14226(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t259 *, CNAbstractController_t252 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m14227_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<CNAbstractController>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m14228(__this, ___result, method) (( void (*) (Action_1_t259 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m14229_gshared)(__this, ___result, method)
