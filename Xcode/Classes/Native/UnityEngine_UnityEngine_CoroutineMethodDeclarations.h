#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t437;
struct Coroutine_t437_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m3251 (Coroutine_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m3252 (Coroutine_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m3253 (Coroutine_t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t437_marshal(const Coroutine_t437& unmarshaled, Coroutine_t437_marshaled& marshaled);
void Coroutine_t437_marshal_back(const Coroutine_t437_marshaled& marshaled, Coroutine_t437& unmarshaled);
void Coroutine_t437_marshal_cleanup(Coroutine_t437_marshaled& marshaled);
