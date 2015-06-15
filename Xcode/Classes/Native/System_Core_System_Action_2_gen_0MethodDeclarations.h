#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t2808;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m14206_gshared (Action_2_t2808 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_2__ctor_m14206(__this, ___object, ___method, method) (( void (*) (Action_2_t2808 *, Object_t *, IntPtr_t, MethodInfo*))Action_2__ctor_m14206_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m14207_gshared (Action_2_t2808 * __this, Vector3_t8  ___arg1, Object_t * ___arg2, MethodInfo* method);
#define Action_2_Invoke_m14207(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t2808 *, Vector3_t8 , Object_t *, MethodInfo*))Action_2_Invoke_m14207_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<UnityEngine.Vector3,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m14209_gshared (Action_2_t2808 * __this, Vector3_t8  ___arg1, Object_t * ___arg2, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_2_BeginInvoke_m14209(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t2808 *, Vector3_t8 , Object_t *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Action_2_BeginInvoke_m14209_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m14211_gshared (Action_2_t2808 * __this, Object_t * ___result, MethodInfo* method);
#define Action_2_EndInvoke_m14211(__this, ___result, method) (( void (*) (Action_2_t2808 *, Object_t *, MethodInfo*))Action_2_EndInvoke_m14211_gshared)(__this, ___result, method)
