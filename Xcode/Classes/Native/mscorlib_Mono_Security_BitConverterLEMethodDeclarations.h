﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.BitConverterLE
struct BitConverterLE_t1621;
// System.Byte[]
struct ByteU5BU5D_t720;

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" ByteU5BU5D_t720* BitConverterLE_GetUIntBytes_m8484 (Object_t * __this /* static, unused */, uint8_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t720* BitConverterLE_GetBytes_m8485 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UShortFromBytes_m8486 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t720* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UIntFromBytes_m8487 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t720* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_ULongFromBytes_m8488 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t720* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
extern "C" int16_t BitConverterLE_ToInt16_m8489 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverterLE_ToInt32_m8490 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
extern "C" float BitConverterLE_ToSingle_m8491 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
extern "C" double BitConverterLE_ToDouble_m8492 (Object_t * __this /* static, unused */, ByteU5BU5D_t720* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
