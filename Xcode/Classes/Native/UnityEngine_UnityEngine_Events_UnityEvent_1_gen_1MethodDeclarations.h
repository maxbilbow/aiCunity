﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t422;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t3125;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t882;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2831(__this, method) (( void (*) (UnityEvent_1_t422 *, MethodInfo*))UnityEvent_1__ctor_m15482_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m17538(__this, ___call, method) (( void (*) (UnityEvent_1_t422 *, UnityAction_1_t3125 *, MethodInfo*))UnityEvent_1_AddListener_m15484_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m17539(__this, ___call, method) (( void (*) (UnityEvent_1_t422 *, UnityAction_1_t3125 *, MethodInfo*))UnityEvent_1_RemoveListener_m15486_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m3153(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t422 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m15487_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m3154(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t882 * (*) (UnityEvent_1_t422 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m15488_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m17540(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t882 * (*) (Object_t * /* static, unused */, UnityAction_1_t3125 *, MethodInfo*))UnityEvent_1_GetDelegate_m15490_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m2930(__this, ___arg0, method) (( void (*) (UnityEvent_1_t422 *, String_t*, MethodInfo*))UnityEvent_1_Invoke_m15491_gshared)(__this, ___arg0, method)
