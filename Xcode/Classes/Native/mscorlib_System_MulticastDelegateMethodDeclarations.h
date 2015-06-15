#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t427;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1533;
// System.Delegate
struct Delegate_t287;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3102 (MulticastDelegate_t427 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3100 (MulticastDelegate_t427 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3101 (MulticastDelegate_t427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1533* MulticastDelegate_GetInvocationList_m3104 (MulticastDelegate_t427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t287 * MulticastDelegate_CombineImpl_m3105 (MulticastDelegate_t427 * __this, Delegate_t287 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m7824 (MulticastDelegate_t427 * __this, MulticastDelegate_t427 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t427 * MulticastDelegate_KPM_m7825 (Object_t * __this /* static, unused */, MulticastDelegate_t427 * ___needle, MulticastDelegate_t427 * ___haystack, MulticastDelegate_t427 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t287 * MulticastDelegate_RemoveImpl_m3106 (MulticastDelegate_t427 * __this, Delegate_t287 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
