#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t3688;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m23082_gshared (Converter_2_t3688 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Converter_2__ctor_m23082(__this, ___object, ___method, method) (( void (*) (Converter_2_t3688 *, Object_t *, IntPtr_t, MethodInfo*))Converter_2__ctor_m23082_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m23083_gshared (Converter_2_t3688 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m23083(__this, ___input, method) (( Object_t * (*) (Converter_2_t3688 *, Object_t *, MethodInfo*))Converter_2_Invoke_m23083_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m23084_gshared (Converter_2_t3688 * __this, Object_t * ___input, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m23084(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t3688 *, Object_t *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Converter_2_BeginInvoke_m23084_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m23085_gshared (Converter_2_t3688 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m23085(__this, ___result, method) (( Object_t * (*) (Converter_2_t3688 *, Object_t *, MethodInfo*))Converter_2_EndInvoke_m23085_gshared)(__this, ___result, method)
