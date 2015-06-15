﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2984;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t375;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16107_gshared (InvokableCall_1_t2984 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m16107(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2984 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m16107_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16108_gshared (InvokableCall_1_t2984 * __this, UnityAction_1_t375 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m16108(__this, ___callback, method) (( void (*) (InvokableCall_1_t2984 *, UnityAction_1_t375 *, MethodInfo*))InvokableCall_1__ctor_m16108_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16109_gshared (InvokableCall_1_t2984 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m16109(__this, ___args, method) (( void (*) (InvokableCall_1_t2984 *, ObjectU5BU5D_t194*, MethodInfo*))InvokableCall_1_Invoke_m16109_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16110_gshared (InvokableCall_1_t2984 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m16110(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2984 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m16110_gshared)(__this, ___targetObj, ___method, method)
