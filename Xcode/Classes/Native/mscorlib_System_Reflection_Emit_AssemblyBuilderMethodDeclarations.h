#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1713;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1714;
// System.Exception
struct Exception_t204;
// System.Reflection.AssemblyName
struct AssemblyName_t1715;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m9252 (AssemblyBuilder_t1713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1714* AssemblyBuilder_GetModulesInternal_m9253 (AssemblyBuilder_t1713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m9254 (AssemblyBuilder_t1713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t204 * AssemblyBuilder_not_supported_m9255 (AssemblyBuilder_t1713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1715 * AssemblyBuilder_UnprotectedGetName_m9256 (AssemblyBuilder_t1713 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
