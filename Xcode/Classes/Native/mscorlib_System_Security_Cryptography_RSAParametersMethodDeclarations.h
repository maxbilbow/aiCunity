#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1339;
struct RSAParameters_t1339_marshaled;

void RSAParameters_t1339_marshal(const RSAParameters_t1339& unmarshaled, RSAParameters_t1339_marshaled& marshaled);
void RSAParameters_t1339_marshal_back(const RSAParameters_t1339_marshaled& marshaled, RSAParameters_t1339& unmarshaled);
void RSAParameters_t1339_marshal_cleanup(RSAParameters_t1339_marshaled& marshaled);
