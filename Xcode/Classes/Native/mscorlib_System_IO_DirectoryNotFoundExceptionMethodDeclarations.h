#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_t1684;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryNotFoundException::.ctor()
extern "C" void DirectoryNotFoundException__ctor_m8999 (DirectoryNotFoundException_t1684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.String)
extern "C" void DirectoryNotFoundException__ctor_m9000 (DirectoryNotFoundException_t1684 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryNotFoundException__ctor_m9001 (DirectoryNotFoundException_t1684 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
