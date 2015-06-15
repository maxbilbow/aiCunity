#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1465;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1200;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m6826 (RSASslSignatureDeformatter_t1465 * __this, AsymmetricAlgorithm_t1200 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m6827 (RSASslSignatureDeformatter_t1465 * __this, ByteU5BU5D_t720* ___rgbHash, ByteU5BU5D_t720* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m6828 (RSASslSignatureDeformatter_t1465 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m6829 (RSASslSignatureDeformatter_t1465 * __this, AsymmetricAlgorithm_t1200 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
