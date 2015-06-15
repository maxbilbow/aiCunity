#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1184;
// System.Net.WebRequest
struct WebRequest_t1174;
// System.Uri
struct Uri_t804;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m5169 (HttpRequestCreator_t1184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1174 * HttpRequestCreator_Create_m5170 (HttpRequestCreator_t1184 * __this, Uri_t804 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
