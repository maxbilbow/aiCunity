#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1188;
// System.Uri
struct Uri_t804;
// System.Net.ServicePoint
struct ServicePoint_t1172;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m5172 (HttpWebRequest_t1188 * __this, Uri_t804 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m5173 (HttpWebRequest_t1188 * __this, SerializationInfo_t873 * ___serializationInfo, StreamingContext_t874  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m5174 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m5175 (HttpWebRequest_t1188 * __this, SerializationInfo_t873 * ___serializationInfo, StreamingContext_t874  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t804 * HttpWebRequest_get_Address_m5176 (HttpWebRequest_t1188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1172 * HttpWebRequest_get_ServicePoint_m5177 (HttpWebRequest_t1188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1172 * HttpWebRequest_GetServicePoint_m5178 (HttpWebRequest_t1188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m5179 (HttpWebRequest_t1188 * __this, SerializationInfo_t873 * ___serializationInfo, StreamingContext_t874  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
