#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2902;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15183_gshared (Predicate_1_t2902 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m15183(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2902 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15183_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15184_gshared (Predicate_1_t2902 * __this, RaycastResult_t317  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15184(__this, ___obj, method) (( bool (*) (Predicate_1_t2902 *, RaycastResult_t317 , MethodInfo*))Predicate_1_Invoke_m15184_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15185_gshared (Predicate_1_t2902 * __this, RaycastResult_t317  ___obj, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15185(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2902 *, RaycastResult_t317 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15185_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15186_gshared (Predicate_1_t2902 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15186(__this, ___result, method) (( bool (*) (Predicate_1_t2902 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15186_gshared)(__this, ___result, method)
