#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<UnityEngine.Vector3,CNAbstractController>
struct Action_2_t258;
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
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Action`2<UnityEngine.Vector3,CNAbstractController>::.ctor(System.Object,System.IntPtr)
// System.Action`2<UnityEngine.Vector3,System.Object>
#include "System_Core_System_Action_2_gen_0MethodDeclarations.h"
#define Action_2__ctor_m14216(__this, ___object, ___method, method) (( void (*) (Action_2_t258 *, Object_t *, IntPtr_t, MethodInfo*))Action_2__ctor_m14217_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<UnityEngine.Vector3,CNAbstractController>::Invoke(T1,T2)
#define Action_2_Invoke_m1284(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t258 *, Vector3_t8 , CNAbstractController_t252 *, MethodInfo*))Action_2_Invoke_m14218_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<UnityEngine.Vector3,CNAbstractController>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Action_2_BeginInvoke_m14219(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t258 *, Vector3_t8 , CNAbstractController_t252 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Action_2_BeginInvoke_m14220_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<UnityEngine.Vector3,CNAbstractController>::EndInvoke(System.IAsyncResult)
#define Action_2_EndInvoke_m14221(__this, ___result, method) (( void (*) (Action_2_t258 *, Object_t *, MethodInfo*))Action_2_EndInvoke_m14222_gshared)(__this, ___result, method)
