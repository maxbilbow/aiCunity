﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t1976;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Char[]
struct CharU5BU5D_t434;

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
extern "C" void UnicodeDecoder__ctor_m10760 (UnicodeDecoder_t1976 * __this, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UnicodeDecoder_GetChars_m10761 (UnicodeDecoder_t1976 * __this, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t434* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
