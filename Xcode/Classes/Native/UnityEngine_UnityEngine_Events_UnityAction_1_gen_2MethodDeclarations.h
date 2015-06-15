#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t549;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2936_gshared (UnityAction_1_t549 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m2936(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t549 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m2936_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m17539_gshared (UnityAction_1_t549 * __this, float ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m17539(__this, ___arg0, method) (( void (*) (UnityAction_1_t549 *, float, MethodInfo*))UnityAction_1_Invoke_m17539_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m17540_gshared (UnityAction_1_t549 * __this, float ___arg0, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m17540(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t549 *, float, AsyncCallback_t424 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m17540_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m17541_gshared (UnityAction_1_t549 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m17541(__this, ___result, method) (( void (*) (UnityAction_1_t549 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m17541_gshared)(__this, ___result, method)
