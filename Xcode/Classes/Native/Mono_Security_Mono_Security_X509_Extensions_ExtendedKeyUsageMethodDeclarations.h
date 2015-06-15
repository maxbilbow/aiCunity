﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t1422;
// System.Collections.ArrayList
struct ArrayList_t1159;
// Mono.Security.X509.X509Extension
struct X509Extension_t1228;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void ExtendedKeyUsageExtension__ctor_m6574 (ExtendedKeyUsageExtension_t1422 * __this, X509Extension_t1228 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
extern "C" void ExtendedKeyUsageExtension_Decode_m6575 (ExtendedKeyUsageExtension_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
extern "C" void ExtendedKeyUsageExtension_Encode_m6576 (ExtendedKeyUsageExtension_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
extern "C" ArrayList_t1159 * ExtendedKeyUsageExtension_get_KeyPurpose_m6577 (ExtendedKeyUsageExtension_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
extern "C" String_t* ExtendedKeyUsageExtension_ToString_m6578 (ExtendedKeyUsageExtension_t1422 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
