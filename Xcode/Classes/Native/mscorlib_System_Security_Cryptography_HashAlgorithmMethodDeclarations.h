﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1408;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
extern "C" void HashAlgorithm__ctor_m7129 (HashAlgorithm_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
extern "C" void HashAlgorithm_System_IDisposable_Dispose_m7278 (HashAlgorithm_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
extern "C" bool HashAlgorithm_get_CanReuseTransform_m7279 (HashAlgorithm_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" ByteU5BU5D_t722* HashAlgorithm_ComputeHash_m6155 (HashAlgorithm_t1408 * __this, ByteU5BU5D_t722* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t722* HashAlgorithm_ComputeHash_m7148 (HashAlgorithm_t1408 * __this, ByteU5BU5D_t722* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C" HashAlgorithm_t1408 * HashAlgorithm_Create_m7143 (Object_t * __this /* static, unused */, String_t* ___hashName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
extern "C" ByteU5BU5D_t722* HashAlgorithm_get_Hash_m7146 (HashAlgorithm_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32)
// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashFinal()
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
extern "C" int32_t HashAlgorithm_get_HashSize_m7132 (HashAlgorithm_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Initialize()
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
extern "C" void HashAlgorithm_Dispose_m7280 (HashAlgorithm_t1408 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t HashAlgorithm_TransformBlock_m7144 (HashAlgorithm_t1408 * __this, ByteU5BU5D_t722* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t722* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t722* HashAlgorithm_TransformFinalBlock_m7145 (HashAlgorithm_t1408 * __this, ByteU5BU5D_t722* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
