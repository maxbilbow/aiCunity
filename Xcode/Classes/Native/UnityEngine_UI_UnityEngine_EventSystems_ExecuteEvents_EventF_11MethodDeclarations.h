﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t332;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t306;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t312;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"
#define EventFunction_1__ctor_m2562(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t332 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m14684_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m15520(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t332 *, Object_t *, BaseEventData_t312 *, MethodInfo*))EventFunction_1_Invoke_m14686_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m15521(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t332 *, Object_t *, BaseEventData_t312 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m14688_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m15522(__this, ___result, method) (( void (*) (EventFunction_1_t332 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m14690_gshared)(__this, ___result, method)
