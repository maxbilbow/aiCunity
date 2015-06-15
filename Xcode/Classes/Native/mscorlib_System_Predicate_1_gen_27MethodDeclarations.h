#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3324;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19761_gshared (Predicate_1_t3324 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m19761(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3324 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m19761_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19762_gshared (Predicate_1_t3324 * __this, UICharInfo_t544  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m19762(__this, ___obj, method) (( bool (*) (Predicate_1_t3324 *, UICharInfo_t544 , MethodInfo*))Predicate_1_Invoke_m19762_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19763_gshared (Predicate_1_t3324 * __this, UICharInfo_t544  ___obj, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m19763(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3324 *, UICharInfo_t544 , AsyncCallback_t424 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m19763_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19764_gshared (Predicate_1_t3324 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m19764(__this, ___result, method) (( bool (*) (Predicate_1_t3324 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m19764_gshared)(__this, ___result, method)
