#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct NetscapeCertTypeExtension_t1427;
// Mono.Security.X509.X509Extension
struct X509Extension_t1228;
// System.String
struct String_t;
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"

// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void NetscapeCertTypeExtension__ctor_m6588 (NetscapeCertTypeExtension_t1427 * __this, X509Extension_t1228 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Decode()
extern "C" void NetscapeCertTypeExtension_Decode_m6589 (NetscapeCertTypeExtension_t1427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Support(Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes)
extern "C" bool NetscapeCertTypeExtension_Support_m6590 (NetscapeCertTypeExtension_t1427 * __this, int32_t ___usage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ToString()
extern "C" String_t* NetscapeCertTypeExtension_ToString_m6591 (NetscapeCertTypeExtension_t1427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
