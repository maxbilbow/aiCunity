#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t677;
struct Gradient_t677_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m3364 (Gradient_t677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m3365 (Gradient_t677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m3366 (Gradient_t677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m3367 (Gradient_t677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t677_marshal(const Gradient_t677& unmarshaled, Gradient_t677_marshaled& marshaled);
void Gradient_t677_marshal_back(const Gradient_t677_marshaled& marshaled, Gradient_t677& unmarshaled);
void Gradient_t677_marshal_cleanup(Gradient_t677_marshaled& marshaled);
