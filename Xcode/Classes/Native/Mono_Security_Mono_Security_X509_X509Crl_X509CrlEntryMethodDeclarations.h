#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1231;
// System.Byte[]
struct ByteU5BU5D_t722;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1352;
// Mono.Security.ASN1
struct ASN1_t1217;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m6546 (X509CrlEntry_t1231 * __this, ASN1_t1217 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t722* X509CrlEntry_get_SerialNumber_m6547 (X509CrlEntry_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t685  X509CrlEntry_get_RevocationDate_m6126 (X509CrlEntry_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t1352 * X509CrlEntry_get_Extensions_m6133 (X509CrlEntry_t1231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
