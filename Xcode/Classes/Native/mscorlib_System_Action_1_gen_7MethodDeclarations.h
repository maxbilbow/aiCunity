#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte>
struct Action_1_t3209;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m18413_gshared (Action_1_t3209 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_1__ctor_m18413(__this, ___object, ___method, method) (( void (*) (Action_1_t3209 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m18413_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m18414_gshared (Action_1_t3209 * __this, uint8_t ___obj, MethodInfo* method);
#define Action_1_Invoke_m18414(__this, ___obj, method) (( void (*) (Action_1_t3209 *, uint8_t, MethodInfo*))Action_1_Invoke_m18414_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m18416_gshared (Action_1_t3209 * __this, uint8_t ___obj, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m18416(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3209 *, uint8_t, AsyncCallback_t426 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m18416_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m18418_gshared (Action_1_t3209 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m18418(__this, ___result, method) (( void (*) (Action_1_t3209 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m18418_gshared)(__this, ___result, method)
