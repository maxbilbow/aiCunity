#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3335;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19915_gshared (Predicate_1_t3335 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m19915(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3335 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m19915_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19916_gshared (Predicate_1_t3335 * __this, UILineInfo_t544  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m19916(__this, ___obj, method) (( bool (*) (Predicate_1_t3335 *, UILineInfo_t544 , MethodInfo*))Predicate_1_Invoke_m19916_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19917_gshared (Predicate_1_t3335 * __this, UILineInfo_t544  ___obj, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m19917(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3335 *, UILineInfo_t544 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m19917_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19918_gshared (Predicate_1_t3335 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m19918(__this, ___result, method) (( bool (*) (Predicate_1_t3335 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m19918_gshared)(__this, ___result, method)
