#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1467;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1200;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter__ctor_m6830 (RSASslSignatureFormatter_t1467 * __this, AsymmetricAlgorithm_t1200 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t720* RSASslSignatureFormatter_CreateSignature_m6831 (RSASslSignatureFormatter_t1467 * __this, ByteU5BU5D_t720* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureFormatter_SetHashAlgorithm_m6832 (RSASslSignatureFormatter_t1467 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter_SetKey_m6833 (RSASslSignatureFormatter_t1467 * __this, AsymmetricAlgorithm_t1200 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
