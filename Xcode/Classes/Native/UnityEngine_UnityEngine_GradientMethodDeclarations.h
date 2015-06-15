#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t679;
struct Gradient_t679_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m3375 (Gradient_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m3376 (Gradient_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m3377 (Gradient_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m3378 (Gradient_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t679_marshal(const Gradient_t679& unmarshaled, Gradient_t679_marshaled& marshaled);
void Gradient_t679_marshal_back(const Gradient_t679_marshaled& marshaled, Gradient_t679& unmarshaled);
void Gradient_t679_marshal_cleanup(Gradient_t679_marshaled& marshaled);
