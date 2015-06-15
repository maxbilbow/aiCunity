#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1525;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1200;
// System.Byte[]
struct ByteU5BU5D_t720;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m7254 (RSAPKCS1KeyExchangeFormatter_t1525 * __this, AsymmetricAlgorithm_t1200 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t720* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m7255 (RSAPKCS1KeyExchangeFormatter_t1525 * __this, ByteU5BU5D_t720* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m10344 (RSAPKCS1KeyExchangeFormatter_t1525 * __this, AsymmetricAlgorithm_t1200 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
