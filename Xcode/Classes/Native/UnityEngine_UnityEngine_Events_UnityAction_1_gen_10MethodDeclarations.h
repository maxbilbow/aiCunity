#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3167;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m18012_gshared (UnityAction_1_t3167 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m18012(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3167 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m18012_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m18013_gshared (UnityAction_1_t3167 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m18013(__this, ___arg0, method) (( void (*) (UnityAction_1_t3167 *, uint8_t, MethodInfo*))UnityAction_1_Invoke_m18013_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m18014_gshared (UnityAction_1_t3167 * __this, uint8_t ___arg0, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m18014(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3167 *, uint8_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m18014_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m18015_gshared (UnityAction_1_t3167 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m18015(__this, ___result, method) (( void (*) (UnityAction_1_t3167 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m18015_gshared)(__this, ___result, method)
