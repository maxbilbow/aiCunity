#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3061;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16897_gshared (Comparison_1_t3061 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m16897(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3061 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m16897_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16898_gshared (Comparison_1_t3061 * __this, UIVertex_t414  ___x, UIVertex_t414  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m16898(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3061 *, UIVertex_t414 , UIVertex_t414 , MethodInfo*))Comparison_1_Invoke_m16898_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16899_gshared (Comparison_1_t3061 * __this, UIVertex_t414  ___x, UIVertex_t414  ___y, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m16899(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3061 *, UIVertex_t414 , UIVertex_t414 , AsyncCallback_t424 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m16899_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16900_gshared (Comparison_1_t3061 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m16900(__this, ___result, method) (( int32_t (*) (Comparison_1_t3061 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m16900_gshared)(__this, ___result, method)
