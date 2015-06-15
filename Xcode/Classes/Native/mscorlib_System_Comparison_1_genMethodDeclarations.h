#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t315;
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

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2536_gshared (Comparison_1_t315 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m2536(__this, ___object, ___method, method) (( void (*) (Comparison_1_t315 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m2536_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14692_gshared (Comparison_1_t315 * __this, RaycastResult_t317  ___x, RaycastResult_t317  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m14692(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t315 *, RaycastResult_t317 , RaycastResult_t317 , MethodInfo*))Comparison_1_Invoke_m14692_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14693_gshared (Comparison_1_t315 * __this, RaycastResult_t317  ___x, RaycastResult_t317  ___y, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m14693(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t315 *, RaycastResult_t317 , RaycastResult_t317 , AsyncCallback_t426 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m14693_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14694_gshared (Comparison_1_t315 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m14694(__this, ___result, method) (( int32_t (*) (Comparison_1_t315 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m14694_gshared)(__this, ___result, method)
