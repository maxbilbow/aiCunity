#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1176;
// System.Net.WebRequest
struct WebRequest_t1172;
// System.Uri
struct Uri_t802;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m5150 (FileWebRequestCreator_t1176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1172 * FileWebRequestCreator_Create_m5151 (FileWebRequestCreator_t1176 * __this, Uri_t802 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
