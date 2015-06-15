#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1203;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1201;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1200;
// System.Security.Cryptography.Oid
struct Oid_t1202;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1204;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.Security.Cryptography.DSA
struct DSA_t1205;
// System.Security.Cryptography.RSA
struct RSA_t1206;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5267 (PublicKey_t1203 * __this, X509Certificate_t1204 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1201 * PublicKey_get_EncodedKeyValue_m5268 (PublicKey_t1203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1201 * PublicKey_get_EncodedParameters_m5269 (PublicKey_t1203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1200 * PublicKey_get_Key_m5270 (PublicKey_t1203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1202 * PublicKey_get_Oid_m5271 (PublicKey_t1203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t720* PublicKey_GetUnsignedBigInteger_m5272 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1205 * PublicKey_DecodeDSA_m5273 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___rawPublicKey, ByteU5BU5D_t720* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1206 * PublicKey_DecodeRSA_m5274 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
