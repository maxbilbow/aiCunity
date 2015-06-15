#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1464;
// System.IO.Stream
struct Stream_t1448;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t204;
// System.Threading.WaitHandle
struct WaitHandle_t1465;
// System.AsyncCallback
struct AsyncCallback_t426;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6786 (ReceiveRecordAsyncResult_t1464 * __this, AsyncCallback_t426 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t722* ___initialBuffer, Stream_t1448 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1448 * ReceiveRecordAsyncResult_get_Record_m6787 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t722* ReceiveRecordAsyncResult_get_ResultingBuffer_m6788 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t722* ReceiveRecordAsyncResult_get_InitialBuffer_m6789 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6790 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t204 * ReceiveRecordAsyncResult_get_AsyncException_m6791 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6792 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1465 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6793 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6794 (ReceiveRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6795 (ReceiveRecordAsyncResult_t1464 * __this, Exception_t204 * ___ex, ByteU5BU5D_t722* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6796 (ReceiveRecordAsyncResult_t1464 * __this, Exception_t204 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6797 (ReceiveRecordAsyncResult_t1464 * __this, ByteU5BU5D_t722* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
