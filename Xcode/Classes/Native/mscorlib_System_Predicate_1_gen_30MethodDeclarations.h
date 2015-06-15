#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t3393;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t793;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m20520(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3393 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m13263_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::Invoke(T)
#define Predicate_1_Invoke_m20521(__this, ___obj, method) (( bool (*) (Predicate_1_t3393 *, MatchDesc_t793 *, MethodInfo*))Predicate_1_Invoke_m13264_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m20522(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3393 *, MatchDesc_t793 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m13265_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m20523(__this, ___result, method) (( bool (*) (Predicate_1_t3393 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m13266_gshared)(__this, ___result, method)
