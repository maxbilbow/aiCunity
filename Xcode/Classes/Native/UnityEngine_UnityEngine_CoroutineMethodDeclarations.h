#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t435;
struct Coroutine_t435_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m3240 (Coroutine_t435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m3241 (Coroutine_t435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m3242 (Coroutine_t435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t435_marshal(const Coroutine_t435& unmarshaled, Coroutine_t435_marshaled& marshaled);
void Coroutine_t435_marshal_back(const Coroutine_t435_marshaled& marshaled, Coroutine_t435& unmarshaled);
void Coroutine_t435_marshal_cleanup(Coroutine_t435_marshaled& marshaled);
