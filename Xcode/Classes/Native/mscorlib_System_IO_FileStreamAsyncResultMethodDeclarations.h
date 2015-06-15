#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1693;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1463;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IAsyncResult
struct IAsyncResult_t423;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m9045 (FileStreamAsyncResult_t1693 * __this, AsyncCallback_t424 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m9046 (Object_t * __this /* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m9047 (FileStreamAsyncResult_t1693 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1463 * FileStreamAsyncResult_get_AsyncWaitHandle_m9048 (FileStreamAsyncResult_t1693 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m9049 (FileStreamAsyncResult_t1693 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
