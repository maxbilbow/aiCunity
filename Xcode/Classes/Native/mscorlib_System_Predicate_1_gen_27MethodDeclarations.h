#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3326;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19772_gshared (Predicate_1_t3326 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m19772(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3326 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m19772_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19773_gshared (Predicate_1_t3326 * __this, UICharInfo_t546  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m19773(__this, ___obj, method) (( bool (*) (Predicate_1_t3326 *, UICharInfo_t546 , MethodInfo*))Predicate_1_Invoke_m19773_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19774_gshared (Predicate_1_t3326 * __this, UICharInfo_t546  ___obj, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m19774(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3326 *, UICharInfo_t546 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m19774_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19775_gshared (Predicate_1_t3326 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m19775(__this, ___result, method) (( bool (*) (Predicate_1_t3326 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m19775_gshared)(__this, ___result, method)
