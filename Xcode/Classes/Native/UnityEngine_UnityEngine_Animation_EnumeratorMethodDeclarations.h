#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation/Enumerator
struct Enumerator_t765;
// System.Object
struct Object_t;
// UnityEngine.Animation
struct Animation_t213;

// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m4025 (Enumerator_t765 * __this, Animation_t213 * ___outer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4026 (Enumerator_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4027 (Enumerator_t765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
