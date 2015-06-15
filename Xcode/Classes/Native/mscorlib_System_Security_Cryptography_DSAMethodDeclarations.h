﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSA
struct DSA_t1207;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
extern "C" void DSA__ctor_m10215 (DSA_t1207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C" DSA_t1207 * DSA_Create_m6047 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
extern "C" DSA_t1207 * DSA_Create_m10216 (Object_t * __this /* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSA::CreateSignature(System.Byte[])
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
extern "C" void DSA_ZeroizePrivateKey_m10217 (DSA_t1207 * __this, DSAParameters_t1343  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
extern "C" void DSA_FromXmlString_m10218 (DSA_t1207 * __this, String_t* ___xmlString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters)
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
extern "C" String_t* DSA_ToXmlString_m10219 (DSA_t1207 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSA::VerifySignature(System.Byte[],System.Byte[])
