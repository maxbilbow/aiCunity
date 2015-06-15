#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t1345;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1159;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1347;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1413;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1398;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1409;
// Mono.Security.ASN1
struct ASN1_t1215;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m6481 (PKCS12_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m6077 (PKCS12_t1345 * __this, ByteU5BU5D_t720* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m6078 (PKCS12_t1345 * __this, ByteU5BU5D_t720* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m6482 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m6483 (PKCS12_t1345 * __this, ByteU5BU5D_t720* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m6484 (PKCS12_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m6485 (PKCS12_t1345 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t1159 * PKCS12_get_Keys_m6082 (PKCS12_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t1347 * PKCS12_get_Certificates_m6079 (PKCS12_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m6486 (PKCS12_t1345 * __this, ByteU5BU5D_t720* ___expected, ByteU5BU5D_t720* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1413 * PKCS12_GetSymmetricAlgorithm_m6487 (PKCS12_t1345 * __this, String_t* ___algorithmOid, ByteU5BU5D_t720* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t720* PKCS12_Decrypt_m6488 (PKCS12_t1345 * __this, String_t* ___algorithmOid, ByteU5BU5D_t720* ___salt, int32_t ___iterationCount, ByteU5BU5D_t720* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t720* PKCS12_Decrypt_m6489 (PKCS12_t1345 * __this, EncryptedData_t1398 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1341  PKCS12_GetExistingParameters_m6490 (PKCS12_t1345 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m6491 (PKCS12_t1345 * __this, PrivateKeyInfo_t1409 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m6492 (PKCS12_t1345 * __this, ASN1_t1215 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t720* PKCS12_MAC_m6493 (PKCS12_t1345 * __this, ByteU5BU5D_t720* ___password, ByteU5BU5D_t720* ___salt, int32_t ___iterations, ByteU5BU5D_t720* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m6494 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
