﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t519;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t314;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m14695_gshared (EventFunction_1_t519 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define EventFunction_1__ctor_m14695(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t519 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m14695_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m14697_gshared (EventFunction_1_t519 * __this, Object_t * ___handler, BaseEventData_t314 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m14697(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t519 *, Object_t *, BaseEventData_t314 *, MethodInfo*))EventFunction_1_Invoke_m14697_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m14699_gshared (EventFunction_1_t519 * __this, Object_t * ___handler, BaseEventData_t314 * ___eventData, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m14699(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t519 *, Object_t *, BaseEventData_t314 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m14699_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m14701_gshared (EventFunction_1_t519 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m14701(__this, ___result, method) (( void (*) (EventFunction_1_t519 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m14701_gshared)(__this, ___result, method)
