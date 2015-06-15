#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1173;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C" void X509Certificate__ctor_m10174 (X509Certificate_t1173 * __this, ByteU5BU5D_t722* ___data, bool ___dates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m7238 (X509Certificate_t1173 * __this, ByteU5BU5D_t722* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C" void X509Certificate__ctor_m6084 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate__ctor_m10175 (X509Certificate_t1173 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m6273 (X509Certificate_t1173 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m6272 (X509Certificate_t1173 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C" String_t* X509Certificate_tostr_m10176 (X509Certificate_t1173 * __this, ByteU5BU5D_t722* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" bool X509Certificate_Equals_m6108 (X509Certificate_t1173 * __this, X509Certificate_t1173 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C" ByteU5BU5D_t722* X509Certificate_GetCertHash_m6274 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C" String_t* X509Certificate_GetCertHashString_m6082 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C" String_t* X509Certificate_GetEffectiveDateString_m6275 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C" String_t* X509Certificate_GetExpirationDateString_m6276 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C" int32_t X509Certificate_GetHashCode_m6271 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C" String_t* X509Certificate_GetIssuerName_m6277 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C" String_t* X509Certificate_GetName_m6278 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C" ByteU5BU5D_t722* X509Certificate_GetPublicKey_m6279 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C" ByteU5BU5D_t722* X509Certificate_GetRawCertData_m6280 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C" String_t* X509Certificate_ToString_m10177 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C" String_t* X509Certificate_ToString_m6099 (X509Certificate_t1173 * __this, bool ___fVerbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C" String_t* X509Certificate_get_Issuer_m6102 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C" String_t* X509Certificate_get_Subject_m6101 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C" bool X509Certificate_Equals_m6270 (X509Certificate_t1173 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m6096 (X509Certificate_t1173 * __this, ByteU5BU5D_t722* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C" void X509Certificate_Reset_m6098 (X509Certificate_t1173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
