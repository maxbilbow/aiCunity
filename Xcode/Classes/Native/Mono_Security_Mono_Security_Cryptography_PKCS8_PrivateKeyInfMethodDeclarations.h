#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1409;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.Security.Cryptography.RSA
struct RSA_t1206;
// System.Security.Cryptography.DSA
struct DSA_t1205;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m6432 (PrivateKeyInfo_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m6433 (PrivateKeyInfo_t1409 * __this, ByteU5BU5D_t720* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t720* PrivateKeyInfo_get_PrivateKey_m6434 (PrivateKeyInfo_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m6435 (PrivateKeyInfo_t1409 * __this, ByteU5BU5D_t720* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t720* PrivateKeyInfo_RemoveLeadingZero_m6436 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t720* PrivateKeyInfo_Normalize_m6437 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1206 * PrivateKeyInfo_DecodeRSA_m6438 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1205 * PrivateKeyInfo_DecodeDSA_m6439 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___privateKey, DSAParameters_t1341  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
