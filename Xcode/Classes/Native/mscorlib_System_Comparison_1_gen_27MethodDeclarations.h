#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3329;
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

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m19782_gshared (Comparison_1_t3329 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m19782(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3329 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m19782_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m19783_gshared (Comparison_1_t3329 * __this, UICharInfo_t546  ___x, UICharInfo_t546  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m19783(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3329 *, UICharInfo_t546 , UICharInfo_t546 , MethodInfo*))Comparison_1_Invoke_m19783_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m19784_gshared (Comparison_1_t3329 * __this, UICharInfo_t546  ___x, UICharInfo_t546  ___y, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m19784(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3329 *, UICharInfo_t546 , UICharInfo_t546 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m19784_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m19785_gshared (Comparison_1_t3329 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m19785(__this, ___result, method) (( int32_t (*) (Comparison_1_t3329 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m19785_gshared)(__this, ___result, method)
