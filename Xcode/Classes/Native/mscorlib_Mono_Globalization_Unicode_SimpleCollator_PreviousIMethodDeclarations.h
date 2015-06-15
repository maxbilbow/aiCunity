#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t1580;
struct PreviousInfo_t1580_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m8113 (PreviousInfo_t1580 * __this, bool ___dummy, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t1580_marshal(const PreviousInfo_t1580& unmarshaled, PreviousInfo_t1580_marshaled& marshaled);
void PreviousInfo_t1580_marshal_back(const PreviousInfo_t1580_marshaled& marshaled, PreviousInfo_t1580& unmarshaled);
void PreviousInfo_t1580_marshal_cleanup(PreviousInfo_t1580_marshaled& marshaled);
