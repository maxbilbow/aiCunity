#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1205;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1203;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1202;
// System.Security.Cryptography.Oid
struct Oid_t1204;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1206;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Security.Cryptography.DSA
struct DSA_t1207;
// System.Security.Cryptography.RSA
struct RSA_t1208;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5278 (PublicKey_t1205 * __this, X509Certificate_t1206 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1203 * PublicKey_get_EncodedKeyValue_m5279 (PublicKey_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1203 * PublicKey_get_EncodedParameters_m5280 (PublicKey_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1202 * PublicKey_get_Key_m5281 (PublicKey_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1204 * PublicKey_get_Oid_m5282 (PublicKey_t1205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t722* PublicKey_GetUnsignedBigInteger_m5283 (Object_t * __this /* static, unused */, ByteU5BU5D_t722* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1207 * PublicKey_DecodeDSA_m5284 (Object_t * __this /* static, unused */, ByteU5BU5D_t722* ___rawPublicKey, ByteU5BU5D_t722* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1208 * PublicKey_DecodeRSA_m5285 (Object_t * __this /* static, unused */, ByteU5BU5D_t722* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
