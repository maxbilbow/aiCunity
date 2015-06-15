#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t645;
struct YieldInstruction_t645_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m3910 (YieldInstruction_t645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t645_marshal(const YieldInstruction_t645& unmarshaled, YieldInstruction_t645_marshaled& marshaled);
void YieldInstruction_t645_marshal_back(const YieldInstruction_t645_marshaled& marshaled, YieldInstruction_t645& unmarshaled);
void YieldInstruction_t645_marshal_cleanup(YieldInstruction_t645_marshaled& marshaled);
