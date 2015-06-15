#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t636;
struct AsyncOperation_t636_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3766 (AsyncOperation_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3767 (AsyncOperation_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3768 (AsyncOperation_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t636_marshal(const AsyncOperation_t636& unmarshaled, AsyncOperation_t636_marshaled& marshaled);
void AsyncOperation_t636_marshal_back(const AsyncOperation_t636_marshaled& marshaled, AsyncOperation_t636& unmarshaled);
void AsyncOperation_t636_marshal_cleanup(AsyncOperation_t636_marshaled& marshaled);
