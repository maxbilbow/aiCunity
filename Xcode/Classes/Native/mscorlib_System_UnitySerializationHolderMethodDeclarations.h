#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2066;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t2008;
// System.Reflection.Module
struct Module_t1543;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m11592 (UnitySerializationHolder_t2066 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m11593 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t873 * ___info, StreamingContext_t874  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m11594 (Object_t * __this /* static, unused */, DBNull_t2008 * ___instance, SerializationInfo_t873 * ___info, StreamingContext_t874  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m11595 (Object_t * __this /* static, unused */, Module_t1543 * ___instance, SerializationInfo_t873 * ___info, StreamingContext_t874  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m11596 (UnitySerializationHolder_t2066 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m11597 (UnitySerializationHolder_t2066 * __this, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
