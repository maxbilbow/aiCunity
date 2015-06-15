#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1594;
// Mono.Math.BigInteger
struct BigInteger_t1589;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8198 (ModulusRing_t1594 * __this, BigInteger_t1589 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8199 (ModulusRing_t1594 * __this, BigInteger_t1589 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * ModulusRing_Multiply_m8200 (ModulusRing_t1594 * __this, BigInteger_t1589 * ___a, BigInteger_t1589 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * ModulusRing_Difference_m8201 (ModulusRing_t1594 * __this, BigInteger_t1589 * ___a, BigInteger_t1589 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * ModulusRing_Pow_m8202 (ModulusRing_t1594 * __this, BigInteger_t1589 * ___a, BigInteger_t1589 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1589 * ModulusRing_Pow_m8203 (ModulusRing_t1594 * __this, uint32_t ___b, BigInteger_t1589 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
