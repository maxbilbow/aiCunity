﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Predicate_1_t2868;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t240;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m14820(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2868 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m13252_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::Invoke(T)
#define Predicate_1_Invoke_m14821(__this, ___obj, method) (( bool (*) (Predicate_1_t2868 *, Object_t *, MethodInfo*))Predicate_1_Invoke_m13253_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m14822(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2868 *, Object_t *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m13254_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m14823(__this, ___result, method) (( bool (*) (Predicate_1_t2868 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m13255_gshared)(__this, ___result, method)
