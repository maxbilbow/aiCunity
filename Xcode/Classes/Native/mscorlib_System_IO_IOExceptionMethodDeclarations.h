﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IOException
struct IOException_t1525;
// System.String
struct String_t;
// System.Exception
struct Exception_t204;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IOException::.ctor()
extern "C" void IOException__ctor_m9068 (IOException_t1525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
extern "C" void IOException__ctor_m9069 (IOException_t1525 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C" void IOException__ctor_m7236 (IOException_t1525 * __this, String_t* ___message, Exception_t204 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IOException__ctor_m9070 (IOException_t1525 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
extern "C" void IOException__ctor_m9071 (IOException_t1525 * __this, String_t* ___message, int32_t ___hresult, MethodInfo* method) IL2CPP_METHOD_ATTR;
