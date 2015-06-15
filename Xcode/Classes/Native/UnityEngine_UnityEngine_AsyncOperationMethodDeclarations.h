#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t638;
struct AsyncOperation_t638_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3777 (AsyncOperation_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3778 (AsyncOperation_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3779 (AsyncOperation_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t638_marshal(const AsyncOperation_t638& unmarshaled, AsyncOperation_t638_marshaled& marshaled);
void AsyncOperation_t638_marshal_back(const AsyncOperation_t638_marshaled& marshaled, AsyncOperation_t638& unmarshaled);
void AsyncOperation_t638_marshal_cleanup(AsyncOperation_t638_marshaled& marshaled);
