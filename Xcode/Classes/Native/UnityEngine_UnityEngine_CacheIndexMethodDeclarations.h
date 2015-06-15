#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t724;
struct CacheIndex_t724_marshaled;

void CacheIndex_t724_marshal(const CacheIndex_t724& unmarshaled, CacheIndex_t724_marshaled& marshaled);
void CacheIndex_t724_marshal_back(const CacheIndex_t724_marshaled& marshaled, CacheIndex_t724& unmarshaled);
void CacheIndex_t724_marshal_cleanup(CacheIndex_t724_marshaled& marshaled);
