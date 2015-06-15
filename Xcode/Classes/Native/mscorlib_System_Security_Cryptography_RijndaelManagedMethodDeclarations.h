#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1921;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1404;
// System.Byte[]
struct ByteU5BU5D_t722;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m10366 (RijndaelManaged_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m10367 (RijndaelManaged_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m10368 (RijndaelManaged_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m10369 (RijndaelManaged_t1921 * __this, ByteU5BU5D_t722* ___rgbKey, ByteU5BU5D_t722* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m10370 (RijndaelManaged_t1921 * __this, ByteU5BU5D_t722* ___rgbKey, ByteU5BU5D_t722* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
