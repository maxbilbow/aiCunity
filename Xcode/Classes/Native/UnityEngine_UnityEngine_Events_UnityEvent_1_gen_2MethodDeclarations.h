﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t444;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t549;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t880;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2924_gshared (UnityEvent_1_t444 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2924(__this, method) (( void (*) (UnityEvent_1_t444 *, MethodInfo*))UnityEvent_1__ctor_m2924_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2957_gshared (UnityEvent_1_t444 * __this, UnityAction_1_t549 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2957(__this, ___call, method) (( void (*) (UnityEvent_1_t444 *, UnityAction_1_t549 *, MethodInfo*))UnityEvent_1_AddListener_m2957_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2956_gshared (UnityEvent_1_t444 * __this, UnityAction_1_t549 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2956(__this, ___call, method) (( void (*) (UnityEvent_1_t444 *, UnityAction_1_t549 *, MethodInfo*))UnityEvent_1_RemoveListener_m2956_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3145_gshared (UnityEvent_1_t444 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3145(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t444 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m3145_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t880 * UnityEvent_1_GetDelegate_m3146_gshared (UnityEvent_1_t444 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3146(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t880 * (*) (UnityEvent_1_t444 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m3146_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t880 * UnityEvent_1_GetDelegate_m17538_gshared (Object_t * __this /* static, unused */, UnityAction_1_t549 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17538(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t880 * (*) (Object_t * /* static, unused */, UnityAction_1_t549 *, MethodInfo*))UnityEvent_1_GetDelegate_m17538_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2934_gshared (UnityEvent_1_t444 * __this, float ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2934(__this, ___arg0, method) (( void (*) (UnityEvent_1_t444 *, float, MethodInfo*))UnityEvent_1_Invoke_m2934_gshared)(__this, ___arg0, method)
