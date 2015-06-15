#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3063;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16908_gshared (Comparison_1_t3063 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m16908(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3063 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m16908_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16909_gshared (Comparison_1_t3063 * __this, UIVertex_t416  ___x, UIVertex_t416  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m16909(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3063 *, UIVertex_t416 , UIVertex_t416 , MethodInfo*))Comparison_1_Invoke_m16909_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16910_gshared (Comparison_1_t3063 * __this, UIVertex_t416  ___x, UIVertex_t416  ___y, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m16910(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3063 *, UIVertex_t416 , UIVertex_t416 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m16910_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16911_gshared (Comparison_1_t3063 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m16911(__this, ___result, method) (( int32_t (*) (Comparison_1_t3063 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m16911_gshared)(__this, ___result, method)
