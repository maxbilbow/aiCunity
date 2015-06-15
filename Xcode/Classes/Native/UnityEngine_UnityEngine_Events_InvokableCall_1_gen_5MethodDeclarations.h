#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t3166;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3165;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m18005_gshared (InvokableCall_1_t3166 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m18005(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3166 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m18005_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m18006_gshared (InvokableCall_1_t3166 * __this, UnityAction_1_t3165 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m18006(__this, ___callback, method) (( void (*) (InvokableCall_1_t3166 *, UnityAction_1_t3165 *, MethodInfo*))InvokableCall_1__ctor_m18006_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m18007_gshared (InvokableCall_1_t3166 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m18007(__this, ___args, method) (( void (*) (InvokableCall_1_t3166 *, ObjectU5BU5D_t194*, MethodInfo*))InvokableCall_1_Invoke_m18007_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m18008_gshared (InvokableCall_1_t3166 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m18008(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3166 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m18008_gshared)(__this, ___targetObj, ___method, method)
