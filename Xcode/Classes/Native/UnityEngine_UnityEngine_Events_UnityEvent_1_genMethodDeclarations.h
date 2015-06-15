#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t319;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2931;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t882;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t314;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2559(__this, method) (( void (*) (UnityEvent_1_t319 *, MethodInfo*))UnityEvent_1__ctor_m15482_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m15483(__this, ___call, method) (( void (*) (UnityEvent_1_t319 *, UnityAction_1_t2931 *, MethodInfo*))UnityEvent_1_AddListener_m15484_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m15485(__this, ___call, method) (( void (*) (UnityEvent_1_t319 *, UnityAction_1_t2931 *, MethodInfo*))UnityEvent_1_RemoveListener_m15486_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m3104(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t319 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m15487_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m3105(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t882 * (*) (UnityEvent_1_t319 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m15488_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m15489(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t882 * (*) (Object_t * /* static, unused */, UnityAction_1_t2931 *, MethodInfo*))UnityEvent_1_GetDelegate_m15490_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m2563(__this, ___arg0, method) (( void (*) (UnityEvent_1_t319 *, BaseEventData_t314 *, MethodInfo*))UnityEvent_1_Invoke_m15491_gshared)(__this, ___arg0, method)
