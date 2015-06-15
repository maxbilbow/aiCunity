﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_t1694;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate__ctor_m9018 (WriteDelegate_t1694 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" void WriteDelegate_Invoke_m9019 (WriteDelegate_t1694 * __this, ByteU5BU5D_t722* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Byte_t558_il2cpp_TypeInfo;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t1694(Il2CppObject* delegate, ByteU5BU5D_t722* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_BeginInvoke_m9020 (WriteDelegate_t1694 * __this, ByteU5BU5D_t722* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_EndInvoke_m9021 (WriteDelegate_t1694 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
