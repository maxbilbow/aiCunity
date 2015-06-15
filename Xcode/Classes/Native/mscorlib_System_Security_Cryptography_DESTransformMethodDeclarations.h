#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1905;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1415;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.UInt32[]
struct UInt32U5BU5D_t1390;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m10201 (DESTransform_t1905 * __this, SymmetricAlgorithm_t1415 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t722* ___key, ByteU5BU5D_t722* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m10202 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m10203 (DESTransform_t1905 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m10204 (Object_t * __this /* static, unused */, ByteU5BU5D_t722* ___input, ByteU5BU5D_t722* ___output, UInt32U5BU5D_t1390* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m10205 (Object_t * __this /* static, unused */, ByteU5BU5D_t722* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m10206 (DESTransform_t1905 * __this, ByteU5BU5D_t722* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m10207 (DESTransform_t1905 * __this, ByteU5BU5D_t722* ___input, ByteU5BU5D_t722* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m10208 (DESTransform_t1905 * __this, ByteU5BU5D_t722* ___input, ByteU5BU5D_t722* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t722* DESTransform_GetStrongKey_m10209 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
