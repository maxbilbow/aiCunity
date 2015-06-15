#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1341;
struct DSAParameters_t1341_marshaled;

void DSAParameters_t1341_marshal(const DSAParameters_t1341& unmarshaled, DSAParameters_t1341_marshaled& marshaled);
void DSAParameters_t1341_marshal_back(const DSAParameters_t1341_marshaled& marshaled, DSAParameters_t1341& unmarshaled);
void DSAParameters_t1341_marshal_cleanup(DSAParameters_t1341_marshaled& marshaled);
