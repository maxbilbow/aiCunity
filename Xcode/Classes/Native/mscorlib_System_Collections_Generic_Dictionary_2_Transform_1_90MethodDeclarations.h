﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>
struct Transform_1_t3426;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t798;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86MethodDeclarations.h"
#define Transform_1__ctor_m20782(__this, ___object, ___method, method) (( void (*) (Transform_1_t3426 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20678_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20783(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t3426 *, uint64_t, NetworkAccessToken_t798 *, MethodInfo*))Transform_1_Invoke_m20679_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20784(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3426 *, uint64_t, NetworkAccessToken_t798 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20680_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20785(__this, ___result, method) (( uint64_t (*) (Transform_1_t3426 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20681_gshared)(__this, ___result, method)
