#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1387;
// Mono.Math.BigInteger
struct BigInteger_t1386;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6309 (ModulusRing_t1387 * __this, BigInteger_t1386 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6310 (ModulusRing_t1387 * __this, BigInteger_t1386 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1386 * ModulusRing_Multiply_m6311 (ModulusRing_t1387 * __this, BigInteger_t1386 * ___a, BigInteger_t1386 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1386 * ModulusRing_Difference_m6312 (ModulusRing_t1387 * __this, BigInteger_t1386 * ___a, BigInteger_t1386 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1386 * ModulusRing_Pow_m6313 (ModulusRing_t1387 * __this, BigInteger_t1386 * ___a, BigInteger_t1386 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1386 * ModulusRing_Pow_m6314 (ModulusRing_t1387 * __this, uint32_t ___b, BigInteger_t1386 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
