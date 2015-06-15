#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t3644;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m22724_gshared (Func_2_t3644 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m22724(__this, ___object, ___method, method) (( void (*) (Func_2_t3644 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m22724_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m22725_gshared (Func_2_t3644 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m22725(__this, ___arg1, method) (( Object_t * (*) (Func_2_t3644 *, Object_t *, MethodInfo*))Func_2_Invoke_m22725_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m22726_gshared (Func_2_t3644 * __this, Object_t * ___arg1, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m22726(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3644 *, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m22726_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m22727_gshared (Func_2_t3644 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m22727(__this, ___result, method) (( Object_t * (*) (Func_2_t3644 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m22727_gshared)(__this, ___result, method)
