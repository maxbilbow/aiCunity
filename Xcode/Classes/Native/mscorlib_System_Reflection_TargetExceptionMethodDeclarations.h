﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetException
struct TargetException_t1760;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetException::.ctor()
extern "C" void TargetException__ctor_m9720 (TargetException_t1760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern "C" void TargetException__ctor_m9721 (TargetException_t1760 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetException__ctor_m9722 (TargetException_t1760 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
