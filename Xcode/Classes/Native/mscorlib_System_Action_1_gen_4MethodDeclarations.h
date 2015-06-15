#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t652;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t861;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m18435(__this, ___object, ___method, method) (( void (*) (Action_1_t652 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m14224_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m4534(__this, ___obj, method) (( void (*) (Action_1_t652 *, IScoreU5BU5D_t861*, MethodInfo*))Action_1_Invoke_m14225_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m18436(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t652 *, IScoreU5BU5D_t861*, AsyncCallback_t426 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m14227_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m18437(__this, ___result, method) (( void (*) (Action_1_t652 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m14229_gshared)(__this, ___result, method)
