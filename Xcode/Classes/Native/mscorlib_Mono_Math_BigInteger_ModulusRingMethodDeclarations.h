#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1592;
// Mono.Math.BigInteger
struct BigInteger_t1587;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8187 (ModulusRing_t1592 * __this, BigInteger_t1587 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8188 (ModulusRing_t1592 * __this, BigInteger_t1587 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1587 * ModulusRing_Multiply_m8189 (ModulusRing_t1592 * __this, BigInteger_t1587 * ___a, BigInteger_t1587 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1587 * ModulusRing_Difference_m8190 (ModulusRing_t1592 * __this, BigInteger_t1587 * ___a, BigInteger_t1587 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1587 * ModulusRing_Pow_m8191 (ModulusRing_t1592 * __this, BigInteger_t1587 * ___a, BigInteger_t1587 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1587 * ModulusRing_Pow_m8192 (ModulusRing_t1592 * __this, uint32_t ___b, BigInteger_t1587 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
