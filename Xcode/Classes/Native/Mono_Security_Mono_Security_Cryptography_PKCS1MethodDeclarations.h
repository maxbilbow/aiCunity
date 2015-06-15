#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1408;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.Security.Cryptography.RSA
struct RSA_t1206;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1406;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m6422 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m6423 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___array1, ByteU5BU5D_t720* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t720* PKCS1_I2OSP_m6424 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t720* PKCS1_OS2IP_m6425 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t720* PKCS1_RSASP1_m6426 (Object_t * __this /* static, unused */, RSA_t1206 * ___rsa, ByteU5BU5D_t720* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t720* PKCS1_RSAVP1_m6427 (Object_t * __this /* static, unused */, RSA_t1206 * ___rsa, ByteU5BU5D_t720* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t720* PKCS1_Sign_v15_m6428 (Object_t * __this /* static, unused */, RSA_t1206 * ___rsa, HashAlgorithm_t1406 * ___hash, ByteU5BU5D_t720* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m6429 (Object_t * __this /* static, unused */, RSA_t1206 * ___rsa, HashAlgorithm_t1406 * ___hash, ByteU5BU5D_t720* ___hashValue, ByteU5BU5D_t720* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m6430 (Object_t * __this /* static, unused */, RSA_t1206 * ___rsa, HashAlgorithm_t1406 * ___hash, ByteU5BU5D_t720* ___hashValue, ByteU5BU5D_t720* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t720* PKCS1_Encode_v15_m6431 (Object_t * __this /* static, unused */, HashAlgorithm_t1406 * ___hash, ByteU5BU5D_t720* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
