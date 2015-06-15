﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ApplicationException
struct ApplicationException_t1999;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
extern "C" void ApplicationException__ctor_m10847 (ApplicationException_t1999 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" void ApplicationException__ctor_m10848 (ApplicationException_t1999 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationException__ctor_m10849 (ApplicationException_t1999 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
