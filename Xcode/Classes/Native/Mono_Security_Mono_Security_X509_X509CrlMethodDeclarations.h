#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1227;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1350;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1229;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1204;
// System.Security.Cryptography.DSA
struct DSA_t1205;
// System.Security.Cryptography.RSA
struct RSA_t1206;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1200;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m6537 (X509Crl_t1227 * __this, ByteU5BU5D_t720* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m6538 (X509Crl_t1227 * __this, ByteU5BU5D_t720* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1350 * X509Crl_get_Extensions_m6110 (X509Crl_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t720* X509Crl_get_Hash_m6539 (X509Crl_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m6118 (X509Crl_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t683  X509Crl_get_NextUpdate_m6116 (X509Crl_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m6540 (X509Crl_t1227 * __this, ByteU5BU5D_t720* ___array1, ByteU5BU5D_t720* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1229 * X509Crl_GetCrlEntry_m6114 (X509Crl_t1227 * __this, X509Certificate_t1204 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1229 * X509Crl_GetCrlEntry_m6541 (X509Crl_t1227 * __this, ByteU5BU5D_t720* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m6542 (X509Crl_t1227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m6543 (X509Crl_t1227 * __this, DSA_t1205 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m6544 (X509Crl_t1227 * __this, RSA_t1206 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m6113 (X509Crl_t1227 * __this, AsymmetricAlgorithm_t1200 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
