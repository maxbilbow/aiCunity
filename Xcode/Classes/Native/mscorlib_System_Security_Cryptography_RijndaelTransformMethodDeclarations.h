#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1922;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1522;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.UInt32[]
struct UInt32U5BU5D_t1390;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m10371 (RijndaelTransform_t1922 * __this, Rijndael_t1522 * ___algo, bool ___encryption, ByteU5BU5D_t722* ___key, ByteU5BU5D_t722* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m10372 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m10373 (RijndaelTransform_t1922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m10374 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___input, ByteU5BU5D_t722* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m10375 (RijndaelTransform_t1922 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m10376 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___indata, ByteU5BU5D_t722* ___outdata, UInt32U5BU5D_t1390* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m10377 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___indata, ByteU5BU5D_t722* ___outdata, UInt32U5BU5D_t1390* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m10378 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___indata, ByteU5BU5D_t722* ___outdata, UInt32U5BU5D_t1390* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m10379 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___indata, ByteU5BU5D_t722* ___outdata, UInt32U5BU5D_t1390* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m10380 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___indata, ByteU5BU5D_t722* ___outdata, UInt32U5BU5D_t1390* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m10381 (RijndaelTransform_t1922 * __this, ByteU5BU5D_t722* ___indata, ByteU5BU5D_t722* ___outdata, UInt32U5BU5D_t1390* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
