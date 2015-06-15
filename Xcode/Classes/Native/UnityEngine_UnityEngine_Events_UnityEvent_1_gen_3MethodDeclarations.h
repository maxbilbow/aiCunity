#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t451;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3126;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t880;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m2935_gshared (UnityEvent_1_t451 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2935(__this, method) (( void (*) (UnityEvent_1_t451 *, MethodInfo*))UnityEvent_1__ctor_m2935_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m17546_gshared (UnityEvent_1_t451 * __this, UnityAction_1_t3126 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m17546(__this, ___call, method) (( void (*) (UnityEvent_1_t451 *, UnityAction_1_t3126 *, MethodInfo*))UnityEvent_1_AddListener_m17546_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m17547_gshared (UnityEvent_1_t451 * __this, UnityAction_1_t3126 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m17547(__this, ___call, method) (( void (*) (UnityEvent_1_t451 *, UnityAction_1_t3126 *, MethodInfo*))UnityEvent_1_RemoveListener_m17547_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3148_gshared (UnityEvent_1_t451 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3148(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t451 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m3148_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t880 * UnityEvent_1_GetDelegate_m3149_gshared (UnityEvent_1_t451 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3149(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t880 * (*) (UnityEvent_1_t451 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m3149_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t880 * UnityEvent_1_GetDelegate_m17548_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3126 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17548(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t880 * (*) (Object_t * /* static, unused */, UnityAction_1_t3126 *, MethodInfo*))UnityEvent_1_GetDelegate_m17548_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2958_gshared (UnityEvent_1_t451 * __this, Vector2_t13  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2958(__this, ___arg0, method) (( void (*) (UnityEvent_1_t451 *, Vector2_t13 , MethodInfo*))UnityEvent_1_Invoke_m2958_gshared)(__this, ___arg0, method)
