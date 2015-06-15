#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t960;
// UnityEngine.Object
struct Object_t91;
struct Object_t91_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m4799_gshared (CachedInvokableCall_1_t960 * __this, Object_t91 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m4799(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t960 *, Object_t91 *, MethodInfo_t *, float, MethodInfo*))CachedInvokableCall_1__ctor_m4799_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m22412_gshared (CachedInvokableCall_1_t960 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m22412(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t960 *, ObjectU5BU5D_t194*, MethodInfo*))CachedInvokableCall_1_Invoke_m22412_gshared)(__this, ___args, method)
