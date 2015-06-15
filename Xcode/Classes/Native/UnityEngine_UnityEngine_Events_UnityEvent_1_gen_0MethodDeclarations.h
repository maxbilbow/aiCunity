#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t375;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t377;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t882;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m2686_gshared (UnityEvent_1_t375 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2686(__this, method) (( void (*) (UnityEvent_1_t375 *, MethodInfo*))UnityEvent_1__ctor_m2686_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2688_gshared (UnityEvent_1_t375 * __this, UnityAction_1_t377 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2688(__this, ___call, method) (( void (*) (UnityEvent_1_t375 *, UnityAction_1_t377 *, MethodInfo*))UnityEvent_1_AddListener_m2688_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16113_gshared (UnityEvent_1_t375 * __this, UnityAction_1_t377 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16113(__this, ___call, method) (( void (*) (UnityEvent_1_t375 *, UnityAction_1_t377 *, MethodInfo*))UnityEvent_1_RemoveListener_m16113_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3135_gshared (UnityEvent_1_t375 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3135(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t375 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m3135_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t882 * UnityEvent_1_GetDelegate_m3136_gshared (UnityEvent_1_t375 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3136(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t882 * (*) (UnityEvent_1_t375 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m3136_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t882 * UnityEvent_1_GetDelegate_m16114_gshared (Object_t * __this /* static, unused */, UnityAction_1_t377 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16114(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t882 * (*) (Object_t * /* static, unused */, UnityAction_1_t377 *, MethodInfo*))UnityEvent_1_GetDelegate_m16114_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2687_gshared (UnityEvent_1_t375 * __this, Color_t79  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2687(__this, ___arg0, method) (( void (*) (UnityEvent_1_t375 *, Color_t79 , MethodInfo*))UnityEvent_1_Invoke_m2687_gshared)(__this, ___arg0, method)
