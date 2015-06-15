#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1182;
// System.Net.WebRequest
struct WebRequest_t1172;
// System.Uri
struct Uri_t802;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m5158 (HttpRequestCreator_t1182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1172 * HttpRequestCreator_Create_m5159 (HttpRequestCreator_t1182 * __this, Uri_t802 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
