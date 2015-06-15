#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1178;
// System.Net.WebRequest
struct WebRequest_t1174;
// System.Uri
struct Uri_t804;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m5161 (FileWebRequestCreator_t1178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1174 * FileWebRequestCreator_Create_m5162 (FileWebRequestCreator_t1178 * __this, Uri_t804 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
