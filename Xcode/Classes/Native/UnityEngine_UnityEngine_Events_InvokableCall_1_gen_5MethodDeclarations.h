﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t3168;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3167;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m18016_gshared (InvokableCall_1_t3168 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m18016(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3168 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m18016_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m18017_gshared (InvokableCall_1_t3168 * __this, UnityAction_1_t3167 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m18017(__this, ___callback, method) (( void (*) (InvokableCall_1_t3168 *, UnityAction_1_t3167 *, MethodInfo*))InvokableCall_1__ctor_m18017_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m18018_gshared (InvokableCall_1_t3168 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m18018(__this, ___args, method) (( void (*) (InvokableCall_1_t3168 *, ObjectU5BU5D_t194*, MethodInfo*))InvokableCall_1_Invoke_m18018_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m18019_gshared (InvokableCall_1_t3168 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m18019(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3168 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m18019_gshared)(__this, ___targetObj, ___method, method)
