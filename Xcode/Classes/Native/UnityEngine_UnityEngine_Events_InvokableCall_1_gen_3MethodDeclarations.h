#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t3125;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t549;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17542_gshared (InvokableCall_1_t3125 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m17542(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3125 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m17542_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17543_gshared (InvokableCall_1_t3125 * __this, UnityAction_1_t549 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m17543(__this, ___callback, method) (( void (*) (InvokableCall_1_t3125 *, UnityAction_1_t549 *, MethodInfo*))InvokableCall_1__ctor_m17543_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17544_gshared (InvokableCall_1_t3125 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m17544(__this, ___args, method) (( void (*) (InvokableCall_1_t3125 *, ObjectU5BU5D_t194*, MethodInfo*))InvokableCall_1_Invoke_m17544_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17545_gshared (InvokableCall_1_t3125 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m17545(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3125 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m17545_gshared)(__this, ___targetObj, ___method, method)
