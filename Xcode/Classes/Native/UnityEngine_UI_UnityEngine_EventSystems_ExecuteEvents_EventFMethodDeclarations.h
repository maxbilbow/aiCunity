#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t338;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDeselectHandler
struct IDeselectHandler_t349;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t314;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"
#define EventFunction_1__ctor_m2577(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t338 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m14695_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m14696(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t338 *, Object_t *, BaseEventData_t314 *, MethodInfo*))EventFunction_1_Invoke_m14697_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m14698(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t338 *, Object_t *, BaseEventData_t314 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m14699_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m14700(__this, ___result, method) (( void (*) (EventFunction_1_t338 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m14701_gshared)(__this, ___result, method)
