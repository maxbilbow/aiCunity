#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Locale
struct Locale_t1147;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t194;

// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m5062 (Object_t * __this /* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String,System.Object[])
extern "C" String_t* Locale_GetText_m5063 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t194* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
