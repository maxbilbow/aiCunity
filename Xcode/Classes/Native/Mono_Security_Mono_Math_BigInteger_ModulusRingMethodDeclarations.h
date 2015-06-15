#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1385;
// Mono.Math.BigInteger
struct BigInteger_t1384;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6298 (ModulusRing_t1385 * __this, BigInteger_t1384 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6299 (ModulusRing_t1385 * __this, BigInteger_t1384 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1384 * ModulusRing_Multiply_m6300 (ModulusRing_t1385 * __this, BigInteger_t1384 * ___a, BigInteger_t1384 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1384 * ModulusRing_Difference_m6301 (ModulusRing_t1385 * __this, BigInteger_t1384 * ___a, BigInteger_t1384 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1384 * ModulusRing_Pow_m6302 (ModulusRing_t1385 * __this, BigInteger_t1384 * ___a, BigInteger_t1384 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1384 * ModulusRing_Pow_m6303 (ModulusRing_t1385 * __this, uint32_t ___b, BigInteger_t1384 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
