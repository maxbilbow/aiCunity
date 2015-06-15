#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t726;
struct CacheIndex_t726_marshaled;

void CacheIndex_t726_marshal(const CacheIndex_t726& unmarshaled, CacheIndex_t726_marshaled& marshaled);
void CacheIndex_t726_marshal_back(const CacheIndex_t726_marshaled& marshaled, CacheIndex_t726& unmarshaled);
void CacheIndex_t726_marshal_cleanup(CacheIndex_t726_marshaled& marshaled);
