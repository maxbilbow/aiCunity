﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderFallbackException
struct EncoderFallbackException_t1964;
// System.String
struct String_t;

// System.Void System.Text.EncoderFallbackException::.ctor()
extern "C" void EncoderFallbackException__ctor_m10606 (EncoderFallbackException_t1964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallbackException::.ctor(System.String)
extern "C" void EncoderFallbackException__ctor_m10607 (EncoderFallbackException_t1964 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallbackException::.ctor(System.Char,System.Int32)
extern "C" void EncoderFallbackException__ctor_m10608 (EncoderFallbackException_t1964 * __this, uint16_t ___charUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallbackException::.ctor(System.Char,System.Char,System.Int32)
extern "C" void EncoderFallbackException__ctor_m10609 (EncoderFallbackException_t1964 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
