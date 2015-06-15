﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1308;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1301;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1302;

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C" void Literal__ctor_m5832 (Literal_t1308 * __this, String_t* ___str, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C" void Literal_CompileLiteral_m5833 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Literal_Compile_m5834 (Literal_t1308 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C" void Literal_GetWidth_m5835 (Literal_t1308 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1302 * Literal_GetAnchorInfo_m5836 (Literal_t1308 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C" bool Literal_IsComplex_m5837 (Literal_t1308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
