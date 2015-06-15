#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1709;
// System.IO.Stream
struct Stream_t1446;
// System.Text.Encoding
struct Encoding_t719;
// System.Char[]
struct CharU5BU5D_t432;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m9235 (UnexceptionalStreamWriter_t1709 * __this, Stream_t1446 * ___stream, Encoding_t719 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m9236 (UnexceptionalStreamWriter_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m9237 (UnexceptionalStreamWriter_t1709 * __this, CharU5BU5D_t432* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m9238 (UnexceptionalStreamWriter_t1709 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m9239 (UnexceptionalStreamWriter_t1709 * __this, CharU5BU5D_t432* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m9240 (UnexceptionalStreamWriter_t1709 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
