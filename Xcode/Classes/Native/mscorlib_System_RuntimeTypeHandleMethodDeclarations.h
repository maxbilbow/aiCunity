﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t1542;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeTypeHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeTypeHandle__ctor_m8046 (RuntimeTypeHandle_t1542 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C" IntPtr_t RuntimeTypeHandle_get_Value_m8047 (RuntimeTypeHandle_t1542 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeTypeHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeTypeHandle_GetObjectData_m8048 (RuntimeTypeHandle_t1542 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeTypeHandle::Equals(System.Object)
extern "C" bool RuntimeTypeHandle_Equals_m8049 (RuntimeTypeHandle_t1542 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeTypeHandle::GetHashCode()
extern "C" int32_t RuntimeTypeHandle_GetHashCode_m8050 (RuntimeTypeHandle_t1542 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
