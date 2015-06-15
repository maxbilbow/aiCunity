﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t1613;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t722;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C" void DeriveBytes__ctor_m8407 (DeriveBytes_t1613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C" void DeriveBytes__cctor_m8408 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C" void DeriveBytes_set_HashName_m8409 (DeriveBytes_t1613 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C" void DeriveBytes_set_IterationCount_m8410 (DeriveBytes_t1613 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C" void DeriveBytes_set_Password_m8411 (DeriveBytes_t1613 * __this, ByteU5BU5D_t722* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C" void DeriveBytes_set_Salt_m8412 (DeriveBytes_t1613 * __this, ByteU5BU5D_t722* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C" void DeriveBytes_Adjust_m8413 (DeriveBytes_t1613 * __this, ByteU5BU5D_t722* ___a, int32_t ___aOff, ByteU5BU5D_t722* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t722* DeriveBytes_Derive_m8414 (DeriveBytes_t1613 * __this, ByteU5BU5D_t722* ___diversifier, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C" ByteU5BU5D_t722* DeriveBytes_DeriveKey_m8415 (DeriveBytes_t1613 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C" ByteU5BU5D_t722* DeriveBytes_DeriveIV_m8416 (DeriveBytes_t1613 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C" ByteU5BU5D_t722* DeriveBytes_DeriveMAC_m8417 (DeriveBytes_t1613 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
