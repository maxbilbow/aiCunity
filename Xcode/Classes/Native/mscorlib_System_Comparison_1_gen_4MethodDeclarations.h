#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.String>
struct Comparison_1_t2711;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m13404(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2711 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m13318_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.String>::Invoke(T,T)
#define Comparison_1_Invoke_m13405(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2711 *, String_t*, String_t*, MethodInfo*))Comparison_1_Invoke_m13319_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.String>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m13406(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2711 *, String_t*, String_t*, AsyncCallback_t426 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m13320_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.String>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m13407(__this, ___result, method) (( int32_t (*) (Comparison_1_t2711 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m13321_gshared)(__this, ___result, method)
