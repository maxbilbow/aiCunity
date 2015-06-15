﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1595;
// Mono.Math.BigInteger
struct BigInteger_t1589;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1596;
// System.UInt32[]
struct UInt32U5BU5D_t1390;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * Kernel_AddSameSign_m8204 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi1, BigInteger_t1589 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * Kernel_Subtract_m8205 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___big, BigInteger_t1589 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m8206 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___big, BigInteger_t1589 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m8207 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi1, BigInteger_t1589 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m8208 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi1, BigInteger_t1589 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m8209 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m8210 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1596* Kernel_DwordDivMod_m8211 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1596* Kernel_multiByteDivide_m8212 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi1, BigInteger_t1589 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1589 * Kernel_LeftShift_m8213 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1589 * Kernel_RightShift_m8214 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1589 * Kernel_MultiplyByDword_m8215 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m8216 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1390* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1390* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1390* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m8217 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1390* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1390* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1390* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m8218 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * Kernel_modInverse_m8219 (Object_t * __this /* static, unused */, BigInteger_t1589 * ___bi, BigInteger_t1589 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
