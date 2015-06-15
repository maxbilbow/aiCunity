#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1711;
// System.IO.Stream
struct Stream_t1448;
// System.Text.Encoding
struct Encoding_t721;
// System.Char[]
struct CharU5BU5D_t434;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m9246 (UnexceptionalStreamWriter_t1711 * __this, Stream_t1448 * ___stream, Encoding_t721 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m9247 (UnexceptionalStreamWriter_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m9248 (UnexceptionalStreamWriter_t1711 * __this, CharU5BU5D_t434* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m9249 (UnexceptionalStreamWriter_t1711 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m9250 (UnexceptionalStreamWriter_t1711 * __this, CharU5BU5D_t434* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m9251 (UnexceptionalStreamWriter_t1711 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
