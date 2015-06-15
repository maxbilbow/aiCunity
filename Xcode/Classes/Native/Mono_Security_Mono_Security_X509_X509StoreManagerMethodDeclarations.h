﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t1422;
// Mono.Security.X509.X509Stores
struct X509Stores_t1245;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1349;

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" X509Stores_t1245 * X509StoreManager_get_CurrentUser_m6145 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" X509Stores_t1245 * X509StoreManager_get_LocalMachine_m6146 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" X509CertificateCollection_t1349 * X509StoreManager_get_TrustedRootCertificates_m6575 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
