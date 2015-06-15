#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2689;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13252_gshared (Predicate_1_t2689 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m13252(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2689 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m13252_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13253_gshared (Predicate_1_t2689 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m13253(__this, ___obj, method) (( bool (*) (Predicate_1_t2689 *, Object_t *, MethodInfo*))Predicate_1_Invoke_m13253_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13254_gshared (Predicate_1_t2689 * __this, Object_t * ___obj, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m13254(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2689 *, Object_t *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m13254_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13255_gshared (Predicate_1_t2689 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m13255(__this, ___result, method) (( bool (*) (Predicate_1_t2689 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m13255_gshared)(__this, ___result, method)
