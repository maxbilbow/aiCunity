﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityException
struct SecurityException_t1947;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t1946;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C" void SecurityException__ctor_m10519 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C" void SecurityException__ctor_m10520 (SecurityException_t1947 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException__ctor_m10521 (SecurityException_t1947 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C" Object_t * SecurityException_get_Demanded_m10522 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C" Object_t * SecurityException_get_FirstPermissionThatFailed_m10523 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C" String_t* SecurityException_get_PermissionState_m10524 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C" Type_t * SecurityException_get_PermissionType_m10525 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C" String_t* SecurityException_get_GrantedSet_m10526 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C" String_t* SecurityException_get_RefusedSet_m10527 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException_GetObjectData_m10528 (SecurityException_t1947 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C" String_t* SecurityException_ToString_m10529 (SecurityException_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
