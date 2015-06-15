#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3128;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m17560_gshared (UnityAction_1_t3128 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m17560(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3128 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m17560_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m17561_gshared (UnityAction_1_t3128 * __this, Vector2_t13  ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m17561(__this, ___arg0, method) (( void (*) (UnityAction_1_t3128 *, Vector2_t13 , MethodInfo*))UnityAction_1_Invoke_m17561_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m17562_gshared (UnityAction_1_t3128 * __this, Vector2_t13  ___arg0, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m17562(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3128 *, Vector2_t13 , AsyncCallback_t426 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m17562_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m17563_gshared (UnityAction_1_t3128 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m17563(__this, ___result, method) (( void (*) (UnityAction_1_t3128 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m17563_gshared)(__this, ___result, method)
