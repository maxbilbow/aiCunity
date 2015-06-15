#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t517;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t312;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m14684_gshared (EventFunction_1_t517 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define EventFunction_1__ctor_m14684(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t517 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m14684_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m14686_gshared (EventFunction_1_t517 * __this, Object_t * ___handler, BaseEventData_t312 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m14686(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t517 *, Object_t *, BaseEventData_t312 *, MethodInfo*))EventFunction_1_Invoke_m14686_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m14688_gshared (EventFunction_1_t517 * __this, Object_t * ___handler, BaseEventData_t312 * ___eventData, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m14688(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t517 *, Object_t *, BaseEventData_t312 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m14688_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m14690_gshared (EventFunction_1_t517 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m14690(__this, ___result, method) (( void (*) (EventFunction_1_t517 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m14690_gshared)(__this, ___result, method)
