﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Capture
struct Capture_t1253;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Capture::.ctor(System.String)
extern "C" void Capture__ctor_m5498 (Capture_t1253 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern "C" void Capture__ctor_m5499 (Capture_t1253 * __this, String_t* ___text, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Capture::get_Index()
extern "C" int32_t Capture_get_Index_m5500 (Capture_t1253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern "C" int32_t Capture_get_Length_m5501 (Capture_t1253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::get_Value()
extern "C" String_t* Capture_get_Value_m5502 (Capture_t1253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::ToString()
extern "C" String_t* Capture_ToString_m5503 (Capture_t1253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::get_Text()
extern "C" String_t* Capture_get_Text_m5504 (Capture_t1253 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
