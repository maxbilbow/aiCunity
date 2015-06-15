﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1952;
// System.Char[]
struct CharU5BU5D_t434;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1953;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1954;
// System.Text.Decoder
struct Decoder_t1679;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m10543 (ASCIIEncoding_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m10544 (ASCIIEncoding_t1952 * __this, CharU5BU5D_t434* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m10545 (ASCIIEncoding_t1952 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m10546 (ASCIIEncoding_t1952 * __this, CharU5BU5D_t434* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m10547 (ASCIIEncoding_t1952 * __this, CharU5BU5D_t434* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1953 ** ___buffer, CharU5BU5D_t434** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m10548 (ASCIIEncoding_t1952 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m10549 (ASCIIEncoding_t1952 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1953 ** ___buffer, CharU5BU5D_t434** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m10550 (ASCIIEncoding_t1952 * __this, ByteU5BU5D_t722* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m10551 (ASCIIEncoding_t1952 * __this, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t434* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m10552 (ASCIIEncoding_t1952 * __this, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t434* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1954 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m10553 (ASCIIEncoding_t1952 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m10554 (ASCIIEncoding_t1952 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m10555 (ASCIIEncoding_t1952 * __this, ByteU5BU5D_t722* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m10556 (ASCIIEncoding_t1952 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m10557 (ASCIIEncoding_t1952 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1679 * ASCIIEncoding_GetDecoder_m10558 (ASCIIEncoding_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
