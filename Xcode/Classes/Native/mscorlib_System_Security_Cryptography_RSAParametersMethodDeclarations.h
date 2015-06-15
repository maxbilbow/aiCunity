﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1341;
struct RSAParameters_t1341_marshaled;

void RSAParameters_t1341_marshal(const RSAParameters_t1341& unmarshaled, RSAParameters_t1341_marshaled& marshaled);
void RSAParameters_t1341_marshal_back(const RSAParameters_t1341_marshaled& marshaled, RSAParameters_t1341& unmarshaled);
void RSAParameters_t1341_marshal_cleanup(RSAParameters_t1341_marshaled& marshaled);
