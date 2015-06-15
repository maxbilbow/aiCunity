#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t373;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t375;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t880;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m2675_gshared (UnityEvent_1_t373 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2675(__this, method) (( void (*) (UnityEvent_1_t373 *, MethodInfo*))UnityEvent_1__ctor_m2675_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2677_gshared (UnityEvent_1_t373 * __this, UnityAction_1_t375 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2677(__this, ___call, method) (( void (*) (UnityEvent_1_t373 *, UnityAction_1_t375 *, MethodInfo*))UnityEvent_1_AddListener_m2677_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16102_gshared (UnityEvent_1_t373 * __this, UnityAction_1_t375 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16102(__this, ___call, method) (( void (*) (UnityEvent_1_t373 *, UnityAction_1_t375 *, MethodInfo*))UnityEvent_1_RemoveListener_m16102_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3124_gshared (UnityEvent_1_t373 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3124(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t373 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m3124_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t880 * UnityEvent_1_GetDelegate_m3125_gshared (UnityEvent_1_t373 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3125(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t880 * (*) (UnityEvent_1_t373 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m3125_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t880 * UnityEvent_1_GetDelegate_m16103_gshared (Object_t * __this /* static, unused */, UnityAction_1_t375 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16103(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t880 * (*) (Object_t * /* static, unused */, UnityAction_1_t375 *, MethodInfo*))UnityEvent_1_GetDelegate_m16103_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2676_gshared (UnityEvent_1_t373 * __this, Color_t79  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2676(__this, ___arg0, method) (( void (*) (UnityEvent_1_t373 *, Color_t79 , MethodInfo*))UnityEvent_1_Invoke_m2676_gshared)(__this, ___arg0, method)
