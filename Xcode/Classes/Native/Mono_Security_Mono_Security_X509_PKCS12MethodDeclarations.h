#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t1347;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1161;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1349;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1415;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1400;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1411;
// Mono.Security.ASN1
struct ASN1_t1217;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m6492 (PKCS12_t1347 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m6088 (PKCS12_t1347 * __this, ByteU5BU5D_t722* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m6089 (PKCS12_t1347 * __this, ByteU5BU5D_t722* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m6493 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m6494 (PKCS12_t1347 * __this, ByteU5BU5D_t722* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m6495 (PKCS12_t1347 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m6496 (PKCS12_t1347 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t1161 * PKCS12_get_Keys_m6093 (PKCS12_t1347 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t1349 * PKCS12_get_Certificates_m6090 (PKCS12_t1347 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m6497 (PKCS12_t1347 * __this, ByteU5BU5D_t722* ___expected, ByteU5BU5D_t722* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1415 * PKCS12_GetSymmetricAlgorithm_m6498 (PKCS12_t1347 * __this, String_t* ___algorithmOid, ByteU5BU5D_t722* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t722* PKCS12_Decrypt_m6499 (PKCS12_t1347 * __this, String_t* ___algorithmOid, ByteU5BU5D_t722* ___salt, int32_t ___iterationCount, ByteU5BU5D_t722* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t722* PKCS12_Decrypt_m6500 (PKCS12_t1347 * __this, EncryptedData_t1400 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1343  PKCS12_GetExistingParameters_m6501 (PKCS12_t1347 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m6502 (PKCS12_t1347 * __this, PrivateKeyInfo_t1411 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m6503 (PKCS12_t1347 * __this, ASN1_t1217 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t722* PKCS12_MAC_m6504 (PKCS12_t1347 * __this, ByteU5BU5D_t722* ___password, ByteU5BU5D_t722* ___salt, int32_t ___iterations, ByteU5BU5D_t722* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m6505 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
