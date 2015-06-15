﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2930;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2876;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15492_gshared (InvokableCall_1_t2930 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m15492(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2930 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m15492_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15493_gshared (InvokableCall_1_t2930 * __this, UnityAction_1_t2876 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m15493(__this, ___callback, method) (( void (*) (InvokableCall_1_t2930 *, UnityAction_1_t2876 *, MethodInfo*))InvokableCall_1__ctor_m15493_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15494_gshared (InvokableCall_1_t2930 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m15494(__this, ___args, method) (( void (*) (InvokableCall_1_t2930 *, ObjectU5BU5D_t194*, MethodInfo*))InvokableCall_1_Invoke_m15494_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15495_gshared (InvokableCall_1_t2930 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m15495(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2930 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m15495_gshared)(__this, ___targetObj, ___method, method)
