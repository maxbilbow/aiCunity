﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t375;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2741_gshared (UnityAction_1_t375 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m2741(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t375 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m2741_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16104_gshared (UnityAction_1_t375 * __this, Color_t79  ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m16104(__this, ___arg0, method) (( void (*) (UnityAction_1_t375 *, Color_t79 , MethodInfo*))UnityAction_1_Invoke_m16104_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16105_gshared (UnityAction_1_t375 * __this, Color_t79  ___arg0, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16105(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t375 *, Color_t79 , AsyncCallback_t424 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m16105_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16106_gshared (UnityAction_1_t375 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m16106(__this, ___result, method) (( void (*) (UnityAction_1_t375 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m16106_gshared)(__this, ___result, method)
