﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.PrimalityTests
struct PrimalityTests_t1393;
// Mono.Math.BigInteger
struct BigInteger_t1386;
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"

// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" int32_t PrimalityTests_GetSPPRounds_m6374 (Object_t * __this /* static, unused */, BigInteger_t1386 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTests_RabinMillerTest_m6375 (Object_t * __this /* static, unused */, BigInteger_t1386 * ___n, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
