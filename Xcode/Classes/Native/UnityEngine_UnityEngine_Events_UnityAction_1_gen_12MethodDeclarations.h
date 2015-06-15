#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3616;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m22418_gshared (UnityAction_1_t3616 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m22418(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3616 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m22418_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m22419_gshared (UnityAction_1_t3616 * __this, int32_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m22419(__this, ___arg0, method) (( void (*) (UnityAction_1_t3616 *, int32_t, MethodInfo*))UnityAction_1_Invoke_m22419_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m22420_gshared (UnityAction_1_t3616 * __this, int32_t ___arg0, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m22420(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3616 *, int32_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m22420_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m22421_gshared (UnityAction_1_t3616 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m22421(__this, ___result, method) (( void (*) (UnityAction_1_t3616 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m22421_gshared)(__this, ___result, method)
