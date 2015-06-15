#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t3722;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m23250_gshared (Getter_2_t3722 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Getter_2__ctor_m23250(__this, ___object, ___method, method) (( void (*) (Getter_2_t3722 *, Object_t *, IntPtr_t, MethodInfo*))Getter_2__ctor_m23250_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m23251_gshared (Getter_2_t3722 * __this, Object_t * ____this, MethodInfo* method);
#define Getter_2_Invoke_m23251(__this, ____this, method) (( Object_t * (*) (Getter_2_t3722 *, Object_t *, MethodInfo*))Getter_2_Invoke_m23251_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m23252_gshared (Getter_2_t3722 * __this, Object_t * ____this, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Getter_2_BeginInvoke_m23252(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t3722 *, Object_t *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Getter_2_BeginInvoke_m23252_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m23253_gshared (Getter_2_t3722 * __this, Object_t * ___result, MethodInfo* method);
#define Getter_2_EndInvoke_m23253(__this, ___result, method) (( Object_t * (*) (Getter_2_t3722 *, Object_t *, MethodInfo*))Getter_2_EndInvoke_m23253_gshared)(__this, ___result, method)
