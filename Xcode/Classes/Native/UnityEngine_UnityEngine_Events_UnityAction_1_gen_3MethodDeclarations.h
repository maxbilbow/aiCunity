#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t494;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t185;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m3054(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t494 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m14863_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m3056(__this, ___arg0, method) (( void (*) (UnityAction_1_t494 *, Component_t185 *, MethodInfo*))UnityAction_1_Invoke_m14864_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m18337(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t494 *, Component_t185 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m14865_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m18338(__this, ___result, method) (( void (*) (UnityAction_1_t494 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m14866_gshared)(__this, ___result, method)
