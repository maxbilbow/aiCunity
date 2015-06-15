﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>
struct Transform_1_t3431;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t800;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_87MethodDeclarations.h"
#define Transform_1__ctor_m20816(__this, ___object, ___method, method) (( void (*) (Transform_1_t3431 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20712_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20817(__this, ___key, ___value, method) (( NetworkAccessToken_t800 * (*) (Transform_1_t3431 *, uint64_t, NetworkAccessToken_t800 *, MethodInfo*))Transform_1_Invoke_m20713_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20818(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3431 *, uint64_t, NetworkAccessToken_t800 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20714_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20819(__this, ___result, method) (( NetworkAccessToken_t800 * (*) (Transform_1_t3431 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20715_gshared)(__this, ___result, method)
