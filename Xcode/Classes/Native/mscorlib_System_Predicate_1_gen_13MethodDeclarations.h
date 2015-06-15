#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Predicate_1_t2978;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t361;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m16080(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2978 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m13252_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Invoke(T)
#define Predicate_1_Invoke_m16081(__this, ___obj, method) (( bool (*) (Predicate_1_t2978 *, ButtonState_t361 *, MethodInfo*))Predicate_1_Invoke_m13253_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m16082(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2978 *, ButtonState_t361 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m13254_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m16083(__this, ___result, method) (( bool (*) (Predicate_1_t2978 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m13255_gshared)(__this, ___result, method)
