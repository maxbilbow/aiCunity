#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1425;
// System.String[]
struct StringU5BU5D_t215;
// Mono.Security.ASN1
struct ASN1_t1217;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m6590 (GeneralNames_t1425 * __this, ASN1_t1217 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t215* GeneralNames_get_DNSNames_m6591 (GeneralNames_t1425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t215* GeneralNames_get_IPAddresses_m6592 (GeneralNames_t1425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m6593 (GeneralNames_t1425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
