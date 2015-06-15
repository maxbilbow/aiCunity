#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t1921;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1520;
// System.Byte[]
struct ByteU5BU5D_t720;

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelManagedTransform__ctor_m10371 (RijndaelManagedTransform_t1921 * __this, Rijndael_t1520 * ___algo, bool ___encryption, ByteU5BU5D_t720* ___key, ByteU5BU5D_t720* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
extern "C" void RijndaelManagedTransform_System_IDisposable_Dispose_m10372 (RijndaelManagedTransform_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
extern "C" bool RijndaelManagedTransform_get_CanReuseTransform_m10373 (RijndaelManagedTransform_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t RijndaelManagedTransform_TransformBlock_m10374 (RijndaelManagedTransform_t1921 * __this, ByteU5BU5D_t720* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t720* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t720* RijndaelManagedTransform_TransformFinalBlock_m10375 (RijndaelManagedTransform_t1921 * __this, ByteU5BU5D_t720* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
