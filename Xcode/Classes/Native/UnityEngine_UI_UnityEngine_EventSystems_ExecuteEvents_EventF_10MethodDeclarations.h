﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t333;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t307;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t314;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"
#define EventFunction_1__ctor_m2572(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t333 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m14695_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m15528(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t333 *, Object_t *, BaseEventData_t314 *, MethodInfo*))EventFunction_1_Invoke_m14697_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m15529(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t333 *, Object_t *, BaseEventData_t314 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m14699_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m15530(__this, ___result, method) (( void (*) (EventFunction_1_t333 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m14701_gshared)(__this, ___result, method)
