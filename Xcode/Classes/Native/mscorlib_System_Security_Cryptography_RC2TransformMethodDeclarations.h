#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t1914;
// System.Security.Cryptography.RC2
struct RC2_t1518;
// System.Byte[]
struct ByteU5BU5D_t720;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RC2Transform__ctor_m10292 (RC2Transform_t1914 * __this, RC2_t1518 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t720* ___key, ByteU5BU5D_t720* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C" void RC2Transform__cctor_m10293 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C" void RC2Transform_ECB_m10294 (RC2Transform_t1914 * __this, ByteU5BU5D_t720* ___input, ByteU5BU5D_t720* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
