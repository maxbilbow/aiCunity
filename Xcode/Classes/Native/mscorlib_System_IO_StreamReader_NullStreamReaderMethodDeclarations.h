﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t1704;
// System.Char[]
struct CharU5BU5D_t434;
// System.String
struct String_t;

// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern "C" void NullStreamReader__ctor_m9150 (NullStreamReader_t1704 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern "C" int32_t NullStreamReader_Peek_m9151 (NullStreamReader_t1704 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern "C" int32_t NullStreamReader_Read_m9152 (NullStreamReader_t1704 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t NullStreamReader_Read_m9153 (NullStreamReader_t1704 * __this, CharU5BU5D_t434* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern "C" String_t* NullStreamReader_ReadLine_m9154 (NullStreamReader_t1704 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern "C" String_t* NullStreamReader_ReadToEnd_m9155 (NullStreamReader_t1704 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
