#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1711;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1712;
// System.Exception
struct Exception_t204;
// System.Reflection.AssemblyName
struct AssemblyName_t1713;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m9241 (AssemblyBuilder_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1712* AssemblyBuilder_GetModulesInternal_m9242 (AssemblyBuilder_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m9243 (AssemblyBuilder_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t204 * AssemblyBuilder_not_supported_m9244 (AssemblyBuilder_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1713 * AssemblyBuilder_UnprotectedGetName_m9245 (AssemblyBuilder_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
