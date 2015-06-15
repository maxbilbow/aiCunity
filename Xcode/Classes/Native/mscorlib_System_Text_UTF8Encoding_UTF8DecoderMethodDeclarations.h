﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t1974;
// System.Text.DecoderFallback
struct DecoderFallback_t1955;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Char[]
struct CharU5BU5D_t434;

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
extern "C" void UTF8Decoder__ctor_m10730 (UTF8Decoder_t1974 * __this, DecoderFallback_t1955 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Decoder_GetChars_m10731 (UTF8Decoder_t1974 * __this, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t434* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
