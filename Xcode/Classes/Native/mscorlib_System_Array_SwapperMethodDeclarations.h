﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/Swapper
struct Swapper_t1538;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
extern "C" void Swapper__ctor_m7883 (Swapper_t1538 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
extern "C" void Swapper_Invoke_m7884 (Swapper_t1538 * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Swapper_t1538(Il2CppObject* delegate, int32_t ___i, int32_t ___j);
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Swapper_BeginInvoke_m7885 (Swapper_t1538 * __this, int32_t ___i, int32_t ___j, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
extern "C" void Swapper_EndInvoke_m7886 (Swapper_t1538 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
