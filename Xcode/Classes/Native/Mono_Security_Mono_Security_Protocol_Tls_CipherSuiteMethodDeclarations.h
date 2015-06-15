#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1439;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1404;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1432;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t1438;
// System.Byte[]
struct ByteU5BU5D_t722;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void CipherSuite__ctor_m6629 (CipherSuite_t1439 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C" void CipherSuite__cctor_m6630 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C" Object_t * CipherSuite_get_EncryptionCipher_m6631 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C" Object_t * CipherSuite_get_DecryptionCipher_m6632 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C" KeyedHashAlgorithm_t1432 * CipherSuite_get_ClientHMAC_m6633 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C" KeyedHashAlgorithm_t1432 * CipherSuite_get_ServerHMAC_m6634 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C" int32_t CipherSuite_get_CipherAlgorithmType_m6635 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C" String_t* CipherSuite_get_HashAlgorithmName_m6636 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C" int32_t CipherSuite_get_HashAlgorithmType_m6637 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C" int32_t CipherSuite_get_HashSize_m6638 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C" int32_t CipherSuite_get_ExchangeAlgorithmType_m6639 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C" int32_t CipherSuite_get_CipherMode_m6640 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C" int16_t CipherSuite_get_Code_m6641 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C" String_t* CipherSuite_get_Name_m6642 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C" bool CipherSuite_get_IsExportable_m6643 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C" uint8_t CipherSuite_get_KeyMaterialSize_m6644 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C" int32_t CipherSuite_get_KeyBlockSize_m6645 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C" uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m6646 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C" int16_t CipherSuite_get_EffectiveKeyBits_m6647 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C" uint8_t CipherSuite_get_IvSize_m6648 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C" Context_t1438 * CipherSuite_get_Context_m6649 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C" void CipherSuite_set_Context_m6650 (CipherSuite_t1439 * __this, Context_t1438 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C" void CipherSuite_Write_m6651 (CipherSuite_t1439 * __this, ByteU5BU5D_t722* ___array, int32_t ___offset, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C" void CipherSuite_Write_m6652 (CipherSuite_t1439 * __this, ByteU5BU5D_t722* ___array, int32_t ___offset, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C" void CipherSuite_InitializeCipher_m6653 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C" ByteU5BU5D_t722* CipherSuite_EncryptRecord_m6654 (CipherSuite_t1439 * __this, ByteU5BU5D_t722* ___fragment, ByteU5BU5D_t722* ___mac, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C" void CipherSuite_DecryptRecord_m6655 (CipherSuite_t1439 * __this, ByteU5BU5D_t722* ___fragment, ByteU5BU5D_t722** ___dcrFragment, ByteU5BU5D_t722** ___dcrMAC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys()
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C" ByteU5BU5D_t722* CipherSuite_CreatePremasterSecret_m6656 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t722* CipherSuite_PRF_m6657 (CipherSuite_t1439 * __this, ByteU5BU5D_t722* ___secret, String_t* ___label, ByteU5BU5D_t722* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t722* CipherSuite_Expand_m6658 (CipherSuite_t1439 * __this, String_t* ___hashName, ByteU5BU5D_t722* ___secret, ByteU5BU5D_t722* ___seed, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C" void CipherSuite_createEncryptionCipher_m6659 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C" void CipherSuite_createDecryptionCipher_m6660 (CipherSuite_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
