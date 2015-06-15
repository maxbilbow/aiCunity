﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1512;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1202;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t722;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m10231 (DSASignatureDeformatter_t1512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m7167 (DSASignatureDeformatter_t1512 * __this, AsymmetricAlgorithm_t1202 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m7168 (DSASignatureDeformatter_t1512 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m10232 (DSASignatureDeformatter_t1512 * __this, AsymmetricAlgorithm_t1202 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m7169 (DSASignatureDeformatter_t1512 * __this, ByteU5BU5D_t722* ___rgbHash, ByteU5BU5D_t722* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
