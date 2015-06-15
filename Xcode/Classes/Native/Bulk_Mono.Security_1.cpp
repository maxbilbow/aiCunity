#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo TlsServerCertificate_t1487_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t1447_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t1347_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1204_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1443_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1425_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1422_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t1159_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1427_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1442_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1472_il2cpp_TypeInfo;
extern TypeInfo Int64_t922_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1478_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t720_il2cpp_TypeInfo;
extern TypeInfo Byte_t556_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1171_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1418_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1264_il2cpp_TypeInfo;
extern TypeInfo Exception_t204_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1428_il2cpp_TypeInfo;
extern TypeInfo Regex_t957_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t1260_il2cpp_TypeInfo;
extern TypeInfo Match_t1249_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t1258_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t919_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32U5BU5D_t1264_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m7018_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m7023_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m7019_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m6721_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m6980_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m6989_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m7056_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m6515_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m7002_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m7003_MethodInfo;
extern MethodInfo X509Certificate__ctor_m6086_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m6518_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m7058_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m6072_MethodInfo;
extern MethodInfo Context_get_Negotiating_m6765_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m6835_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m6628_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m6108_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m6109_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m6583_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m6574_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m6586_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m6577_MethodInfo;
extern MethodInfo ArrayList_Contains_m7189_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m6588_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m6590_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m6681_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m6872_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m6876_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m6842_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m6843_MethodInfo;
extern MethodInfo String_Format_m972_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo TlsException__ctor_m6974_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m6081_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m6140_MethodInfo;
extern MethodInfo X509Certificate__ctor_m7227_MethodInfo;
extern MethodInfo ArrayList__ctor_m5974_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m7057_MethodInfo;
extern MethodInfo ArrayList_Add_m5985_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m7059_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m6516_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m6523_MethodInfo;
extern MethodInfo X509Chain__ctor_m6526_MethodInfo;
extern MethodInfo X509Chain_Build_m6529_MethodInfo;
extern MethodInfo X509Chain_get_Status_m6527_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo ArrayList_ToArray_m6105_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m6875_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m6722_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m6962_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m6592_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m6594_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m7061_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m6595_MethodInfo;
extern MethodInfo String_op_Equality_m751_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m6504_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m7060_MethodInfo;
extern MethodInfo Regex__ctor_m5547_MethodInfo;
extern MethodInfo Regex_Matches_m5565_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m5538_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m5540_MethodInfo;
extern MethodInfo Group_get_Success_m5517_MethodInfo;
extern MethodInfo Match_get_Groups_m5531_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m5521_MethodInfo;
extern MethodInfo Capture_get_Value_m5502_MethodInfo;
extern MethodInfo String_ToString_m4588_MethodInfo;
extern MethodInfo String_IndexOf_m2899_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m4674_MethodInfo;
extern MethodInfo String_Compare_m6020_MethodInfo;
extern MethodInfo String_get_Length_m2828_MethodInfo;
extern MethodInfo String_get_Chars_m2843_MethodInfo;
extern MethodInfo String_IndexOf_m4582_MethodInfo;
extern MethodInfo String_Substring_m2869_MethodInfo;
extern MethodInfo String_Compare_m7258_MethodInfo;
extern MethodInfo String_Substring_m2844_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m7053_MethodInfo;
extern "C" void TlsServerCertificate__ctor_m7053 (TlsServerCertificate_t1487 * __this, Context_t1436 * ___context, ByteU5BU5D_t720* ___buffer, MethodInfo* method)
{
	{
		Context_t1436 * L_0 = ___context;
		ByteU5BU5D_t720* L_1 = ___buffer;
		HandshakeMessage__ctor_m7018(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/&HandshakeMessage__ctor_m7018_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m7054_MethodInfo;
extern "C" void TlsServerCertificate_Update_m7054 (TlsServerCertificate_t1487 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7023(__this, /*hidden argument*/&HandshakeMessage_Update_m7023_MethodInfo);
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1452 * L_1 = Context_get_ServerSettings_m6721(L_0, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		X509CertificateCollection_t1347 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m6980(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m6980_MethodInfo);
		Context_t1436 * L_3 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1452 * L_4 = Context_get_ServerSettings_m6721(L_3, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m6989(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m6989_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m7055_MethodInfo;
extern "C" void TlsServerCertificate_ProcessAsSsl3_m7055 (TlsServerCertificate_t1487 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m7056_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C" void TlsServerCertificate_ProcessAsTls1_m7056 (TlsServerCertificate_t1487 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t720* V_3 = {0};
	X509Certificate_t1204 * V_4 = {0};
	{
		X509CertificateCollection_t1347 * L_0 = (X509CertificateCollection_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1347_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m6515(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m6515_MethodInfo);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m7002(__this, /*hidden argument*/&TlsStream_ReadInt24_m7002_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m7002(__this, /*hidden argument*/&TlsStream_ReadInt24_m7002_MethodInfo);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		ByteU5BU5D_t720* L_6 = TlsStream_ReadBytes_m7003(__this, L_5, /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		V_3 = L_6;
		ByteU5BU5D_t720* L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t1204_il2cpp_TypeInfo));
		X509Certificate_t1204 * L_8 = (X509Certificate_t1204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1204_il2cpp_TypeInfo));
		X509Certificate__ctor_m6086(L_8, L_7, /*hidden argument*/&X509Certificate__ctor_m6086_MethodInfo);
		V_4 = L_8;
		X509CertificateCollection_t1347 * L_9 = (__this->___certificates_9);
		X509Certificate_t1204 * L_10 = V_4;
		NullCheck(L_9);
		X509CertificateCollection_Add_m6518(L_9, L_10, /*hidden argument*/&X509CertificateCollection_Add_m6518_MethodInfo);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t1347 * L_15 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m7058(__this, L_15, /*hidden argument*/&TlsServerCertificate_validateCertificates_m7058_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkCertificateUsage_m7057 (TlsServerCertificate_t1487 * __this, X509Certificate_t1204 * ___cert, MethodInfo* method)
{
	ClientContext_t1443 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t1425 * V_2 = {0};
	ExtendedKeyUsageExtension_t1422 * V_3 = {0};
	X509Extension_t1228 * V_4 = {0};
	NetscapeCertTypeExtension_t1427 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		V_0 = ((ClientContext_t1443 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1443_il2cpp_TypeInfo)));
		X509Certificate_t1204 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m6072(L_1, /*hidden argument*/&X509Certificate_get_Version_m6072_MethodInfo);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ClientContext_t1443 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t1454 * L_4 = Context_get_Negotiating_m6765(L_3, /*hidden argument*/&Context_get_Negotiating_m6765_MethodInfo);
		NullCheck(L_4);
		CipherSuite_t1437 * L_5 = SecurityParameters_get_Cipher_m6835(L_4, /*hidden argument*/&SecurityParameters_get_Cipher_m6835_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m6628(L_5, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m6628_MethodInfo);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t1425 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t1422 *)NULL;
		X509Certificate_t1204 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t1350 * L_9 = X509Certificate_get_Extensions_m6108(L_8, /*hidden argument*/&X509Certificate_get_Extensions_m6108_MethodInfo);
		NullCheck(L_9);
		X509Extension_t1228 * L_10 = X509ExtensionCollection_get_Item_m6109(L_9, (String_t*) &_stringLiteral670, /*hidden argument*/&X509ExtensionCollection_get_Item_m6109_MethodInfo);
		V_4 = L_10;
		X509Extension_t1228 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		X509Extension_t1228 * L_12 = V_4;
		KeyUsageExtension_t1425 * L_13 = (KeyUsageExtension_t1425 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t1425_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m6583(L_13, L_12, /*hidden argument*/&KeyUsageExtension__ctor_m6583_MethodInfo);
		V_2 = L_13;
	}

IL_008f:
	{
		X509Certificate_t1204 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t1350 * L_15 = X509Certificate_get_Extensions_m6108(L_14, /*hidden argument*/&X509Certificate_get_Extensions_m6108_MethodInfo);
		NullCheck(L_15);
		X509Extension_t1228 * L_16 = X509ExtensionCollection_get_Item_m6109(L_15, (String_t*) &_stringLiteral677, /*hidden argument*/&X509ExtensionCollection_get_Item_m6109_MethodInfo);
		V_4 = L_16;
		X509Extension_t1228 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		X509Extension_t1228 * L_18 = V_4;
		ExtendedKeyUsageExtension_t1422 * L_19 = (ExtendedKeyUsageExtension_t1422 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t1422_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m6574(L_19, L_18, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m6574_MethodInfo);
		V_3 = L_19;
	}

IL_00b0:
	{
		KeyUsageExtension_t1425 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		ExtendedKeyUsageExtension_t1422 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		KeyUsageExtension_t1425 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m6586(L_22, L_23, /*hidden argument*/&KeyUsageExtension_Support_m6586_MethodInfo);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		ExtendedKeyUsageExtension_t1422 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t1159 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m6577(L_25, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m6577_MethodInfo);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7189_MethodInfo, L_26, (String_t*) &_stringLiteral681);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		ExtendedKeyUsageExtension_t1422 * L_28 = V_3;
		NullCheck(L_28);
		ArrayList_t1159 * L_29 = ExtendedKeyUsageExtension_get_KeyPurpose_m6577(L_28, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m6577_MethodInfo);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7189_MethodInfo, L_29, (String_t*) &_stringLiteral1122);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		KeyUsageExtension_t1425 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		KeyUsageExtension_t1425 * L_32 = V_2;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		bool L_34 = KeyUsageExtension_Support_m6586(L_32, L_33, /*hidden argument*/&KeyUsageExtension_Support_m6586_MethodInfo);
		return L_34;
	}

IL_0101:
	{
		ExtendedKeyUsageExtension_t1422 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		ExtendedKeyUsageExtension_t1422 * L_36 = V_3;
		NullCheck(L_36);
		ArrayList_t1159 * L_37 = ExtendedKeyUsageExtension_get_KeyPurpose_m6577(L_36, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m6577_MethodInfo);
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7189_MethodInfo, L_37, (String_t*) &_stringLiteral681);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		ExtendedKeyUsageExtension_t1422 * L_39 = V_3;
		NullCheck(L_39);
		ArrayList_t1159 * L_40 = ExtendedKeyUsageExtension_get_KeyPurpose_m6577(L_39, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m6577_MethodInfo);
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m7189_MethodInfo, L_40, (String_t*) &_stringLiteral1122);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		X509Certificate_t1204 * L_42 = ___cert;
		NullCheck(L_42);
		X509ExtensionCollection_t1350 * L_43 = X509Certificate_get_Extensions_m6108(L_42, /*hidden argument*/&X509Certificate_get_Extensions_m6108_MethodInfo);
		NullCheck(L_43);
		X509Extension_t1228 * L_44 = X509ExtensionCollection_get_Item_m6109(L_43, (String_t*) &_stringLiteral708, /*hidden argument*/&X509ExtensionCollection_get_Item_m6109_MethodInfo);
		V_4 = L_44;
		X509Extension_t1228 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		X509Extension_t1228 * L_46 = V_4;
		NetscapeCertTypeExtension_t1427 * L_47 = (NetscapeCertTypeExtension_t1427 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t1427_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m6588(L_47, L_46, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m6588_MethodInfo);
		V_5 = L_47;
		NetscapeCertTypeExtension_t1427 * L_48 = V_5;
		NullCheck(L_48);
		bool L_49 = NetscapeCertTypeExtension_Support_m6590(L_48, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m6590_MethodInfo);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern TypeInfo* Int32U5BU5D_t1264_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_validateCertificates_m7058 (TlsServerCertificate_t1487 * __this, X509CertificateCollection_t1347 * ___certificates, MethodInfo* method)
{
	static bool TlsServerCertificate_validateCertificates_m7058_init;
	if (!TlsServerCertificate_validateCertificates_m7058_init)
	{
		Int32U5BU5D_t1264_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1264_0_0_0);
		TlsServerCertificate_validateCertificates_m7058_init = true;
	}
	ClientContext_t1443 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t1472 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t1204 * V_5 = {0};
	X509Certificate_t1171 * V_6 = {0};
	ArrayList_t1159 * V_7 = {0};
	X509CertificateCollection_t1347 * V_8 = {0};
	X509Chain_t1418 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t1264* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		V_0 = ((ClientContext_t1443 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1443_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		ClientContext_t1443 * L_1 = V_0;
		NullCheck(L_1);
		SslClientStream_t1442 * L_2 = ClientContext_get_SslStream_m6681(L_1, /*hidden argument*/&ClientContext_get_SslStream_m6681_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m6872_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		ClientContext_t1443 * L_4 = V_0;
		NullCheck(L_4);
		SslClientStream_t1442 * L_5 = ClientContext_get_SslStream_m6681(L_4, /*hidden argument*/&ClientContext_get_SslStream_m6681_MethodInfo);
		X509CertificateCollection_t1347 * L_6 = ___certificates;
		NullCheck(L_5);
		ValidationResult_t1472 * L_7 = (ValidationResult_t1472 *)VirtFuncInvoker1< ValidationResult_t1472 *, X509CertificateCollection_t1347 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m6876_MethodInfo, L_5, L_6);
		V_2 = L_7;
		ValidationResult_t1472 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = ValidationResult_get_Trusted_m6842(L_8, /*hidden argument*/&ValidationResult_get_Trusted_m6842_MethodInfo);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		ValidationResult_t1472 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = ValidationResult_get_ErrorCode_m6843(L_10, /*hidden argument*/&ValidationResult_get_ErrorCode_m6843_MethodInfo);
		V_3 = (((int64_t)L_11));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(InitializedTypeInfo(&Int64_t922_il2cpp_TypeInfo), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Format_m972(NULL /*static, unused*/, (String_t*) &_stringLiteral1123, L_18, /*hidden argument*/&String_Format_m972_MethodInfo);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral1124, L_21, /*hidden argument*/&String_Concat_m988_MethodInfo);
		TlsException_t1478 * L_23 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6974(L_23, L_20, L_22, /*hidden argument*/&TlsException__ctor_m6974_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		X509CertificateCollection_t1347 * L_24 = ___certificates;
		NullCheck(L_24);
		X509Certificate_t1204 * L_25 = X509CertificateCollection_get_Item_m6081(L_24, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m6081_MethodInfo);
		V_5 = L_25;
		X509Certificate_t1204 * L_26 = V_5;
		NullCheck(L_26);
		ByteU5BU5D_t720* L_27 = (ByteU5BU5D_t720*)VirtFuncInvoker0< ByteU5BU5D_t720* >::Invoke(&X509Certificate_get_RawData_m6140_MethodInfo, L_26);
		X509Certificate_t1171 * L_28 = (X509Certificate_t1171 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1171_il2cpp_TypeInfo));
		X509Certificate__ctor_m7227(L_28, L_27, /*hidden argument*/&X509Certificate__ctor_m7227_MethodInfo);
		V_6 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1159_il2cpp_TypeInfo));
		ArrayList_t1159 * L_29 = (ArrayList_t1159 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1159_il2cpp_TypeInfo));
		ArrayList__ctor_m5974(L_29, /*hidden argument*/&ArrayList__ctor_m5974_MethodInfo);
		V_7 = L_29;
		X509Certificate_t1204 * L_30 = V_5;
		bool L_31 = TlsServerCertificate_checkCertificateUsage_m7057(__this, L_30, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m7057_MethodInfo);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		ArrayList_t1159 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		Object_t * L_34 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_32, L_34);
	}

IL_00f1:
	{
		X509Certificate_t1204 * L_35 = V_5;
		bool L_36 = TlsServerCertificate_checkServerIdentity_m7059(__this, L_35, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m7059_MethodInfo);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t1159 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		Object_t * L_39 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_38);
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_37, L_39);
	}

IL_0110:
	{
		X509CertificateCollection_t1347 * L_40 = ___certificates;
		X509CertificateCollection_t1347 * L_41 = (X509CertificateCollection_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1347_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m6516(L_41, L_40, /*hidden argument*/&X509CertificateCollection__ctor_m6516_MethodInfo);
		V_8 = L_41;
		X509CertificateCollection_t1347 * L_42 = V_8;
		X509Certificate_t1204 * L_43 = V_5;
		NullCheck(L_42);
		X509CertificateCollection_Remove_m6523(L_42, L_43, /*hidden argument*/&X509CertificateCollection_Remove_m6523_MethodInfo);
		X509CertificateCollection_t1347 * L_44 = V_8;
		X509Chain_t1418 * L_45 = (X509Chain_t1418 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t1418_il2cpp_TypeInfo));
		X509Chain__ctor_m6526(L_45, L_44, /*hidden argument*/&X509Chain__ctor_m6526_MethodInfo);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		X509Chain_t1418 * L_46 = V_9;
		X509Certificate_t1204 * L_47 = V_5;
		NullCheck(L_46);
		bool L_48 = X509Chain_Build_m6529(L_46, L_47, /*hidden argument*/&X509Chain_Build_m6529_MethodInfo);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t204_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		X509Chain_t1418 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = X509Chain_get_Status_m6527(L_50, /*hidden argument*/&X509Chain_get_Status_m6527_MethodInfo);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		ArrayList_t1159 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		Object_t * L_60 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_59);
		NullCheck(L_58);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		ArrayList_t1159 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		Object_t * L_63 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_62);
		NullCheck(L_61);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		ArrayList_t1159 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		Object_t * L_66 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_65);
		NullCheck(L_64);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		ArrayList_t1159 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		Object_t * L_69 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_68);
		NullCheck(L_67);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1159 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		Object_t * L_72 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_71);
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1159 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		Object_t * L_75 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_74);
		NullCheck(L_73);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		ArrayList_t1159 * L_76 = V_7;
		X509Chain_t1418 * L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = X509Chain_get_Status_m6527(L_77, /*hidden argument*/&X509Chain_get_Status_m6527_MethodInfo);
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_79);
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5985_MethodInfo, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		ArrayList_t1159 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_82 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Int32_t188_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_81);
		Array_t * L_83 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m6105_MethodInfo, L_81, L_82);
		V_11 = ((Int32U5BU5D_t1264*)Castclass(L_83, Int32U5BU5D_t1264_il2cpp_TypeInfo_var));
		ClientContext_t1443 * L_84 = V_0;
		NullCheck(L_84);
		SslClientStream_t1442 * L_85 = ClientContext_get_SslStream_m6681(L_84, /*hidden argument*/&ClientContext_get_SslStream_m6681_MethodInfo);
		X509Certificate_t1171 * L_86 = V_6;
		Int32U5BU5D_t1264* L_87 = V_11;
		NullCheck(L_85);
		bool L_88 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1171 *, Int32U5BU5D_t1264* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m6875_MethodInfo, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		TlsException_t1478 * L_90 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6974(L_90, L_89, (String_t*) &_stringLiteral1125, /*hidden argument*/&TlsException__ctor_m6974_MethodInfo);
		il2cpp_codegen_raise_exception(L_90);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkServerIdentity_m7059 (TlsServerCertificate_t1487 * __this, X509Certificate_t1204 * ___cert, MethodInfo* method)
{
	ClientContext_t1443 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t1228 * V_2 = {0};
	SubjectAltNameExtension_t1428 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t215* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t215* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		V_0 = ((ClientContext_t1443 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1443_il2cpp_TypeInfo)));
		ClientContext_t1443 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t1453 * L_2 = Context_get_ClientSettings_m6722(L_1, /*hidden argument*/&Context_get_ClientSettings_m6722_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = TlsClientSettings_get_TargetHost_m6962(L_2, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6962_MethodInfo);
		V_1 = L_3;
		X509Certificate_t1204 * L_4 = ___cert;
		NullCheck(L_4);
		X509ExtensionCollection_t1350 * L_5 = X509Certificate_get_Extensions_m6108(L_4, /*hidden argument*/&X509Certificate_get_Extensions_m6108_MethodInfo);
		NullCheck(L_5);
		X509Extension_t1228 * L_6 = X509ExtensionCollection_get_Item_m6109(L_5, (String_t*) &_stringLiteral707, /*hidden argument*/&X509ExtensionCollection_get_Item_m6109_MethodInfo);
		V_2 = L_6;
		X509Extension_t1228 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		X509Extension_t1228 * L_8 = V_2;
		SubjectAltNameExtension_t1428 * L_9 = (SubjectAltNameExtension_t1428 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t1428_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m6592(L_9, L_8, /*hidden argument*/&SubjectAltNameExtension__ctor_m6592_MethodInfo);
		V_3 = L_9;
		SubjectAltNameExtension_t1428 * L_10 = V_3;
		NullCheck(L_10);
		StringU5BU5D_t215* L_11 = SubjectAltNameExtension_get_DNSNames_m6594(L_10, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m6594_MethodInfo);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		StringU5BU5D_t215* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14));
		String_t* L_15 = V_1;
		String_t* L_16 = V_4;
		bool L_17 = TlsServerCertificate_Match_m7061(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&TlsServerCertificate_Match_m7061_MethodInfo);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		StringU5BU5D_t215* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		SubjectAltNameExtension_t1428 * L_21 = V_3;
		NullCheck(L_21);
		StringU5BU5D_t215* L_22 = SubjectAltNameExtension_get_IPAddresses_m6595(L_21, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m6595_MethodInfo);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		StringU5BU5D_t215* L_23 = V_8;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_25));
		String_t* L_26 = V_7;
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_28 = String_op_Equality_m751(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		StringU5BU5D_t215* L_31 = V_8;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		X509Certificate_t1204 * L_32 = ___cert;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m6504_MethodInfo, L_32);
		bool L_34 = TlsServerCertificate_checkDomainName_m7060(__this, L_33, /*hidden argument*/&TlsServerCertificate_checkDomainName_m7060_MethodInfo);
		return L_34;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C" bool TlsServerCertificate_checkDomainName_m7060 (TlsServerCertificate_t1487 * __this, String_t* ___subjectName, MethodInfo* method)
{
	ClientContext_t1443 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t957 * V_2 = {0};
	MatchCollection_t1260 * V_3 = {0};
	{
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		V_0 = ((ClientContext_t1443 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1443_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t957_il2cpp_TypeInfo));
		Regex_t957 * L_2 = (Regex_t957 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t957_il2cpp_TypeInfo));
		Regex__ctor_m5547(L_2, (String_t*) &_stringLiteral1126, /*hidden argument*/&Regex__ctor_m5547_MethodInfo);
		V_2 = L_2;
		Regex_t957 * L_3 = V_2;
		String_t* L_4 = ___subjectName;
		NullCheck(L_3);
		MatchCollection_t1260 * L_5 = Regex_Matches_m5565(L_3, L_4, /*hidden argument*/&Regex_Matches_m5565_MethodInfo);
		V_3 = L_5;
		MatchCollection_t1260 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m5538_MethodInfo, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1260 * L_8 = V_3;
		NullCheck(L_8);
		Match_t1249 * L_9 = (Match_t1249 *)VirtFuncInvoker1< Match_t1249 *, int32_t >::Invoke(&MatchCollection_get_Item_m5540_MethodInfo, L_8, 0);
		NullCheck(L_9);
		bool L_10 = Group_get_Success_m5517(L_9, /*hidden argument*/&Group_get_Success_m5517_MethodInfo);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1260 * L_11 = V_3;
		NullCheck(L_11);
		Match_t1249 * L_12 = (Match_t1249 *)VirtFuncInvoker1< Match_t1249 *, int32_t >::Invoke(&MatchCollection_get_Item_m5540_MethodInfo, L_11, 0);
		NullCheck(L_12);
		GroupCollection_t1258 * L_13 = (GroupCollection_t1258 *)VirtFuncInvoker0< GroupCollection_t1258 * >::Invoke(&Match_get_Groups_m5531_MethodInfo, L_12);
		NullCheck(L_13);
		Group_t1256 * L_14 = GroupCollection_get_Item_m5521(L_13, 1, /*hidden argument*/&GroupCollection_get_Item_m5521_MethodInfo);
		NullCheck(L_14);
		String_t* L_15 = Capture_get_Value_m5502(L_14, /*hidden argument*/&Capture_get_Value_m5502_MethodInfo);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m4588_MethodInfo, L_15);
		V_1 = L_16;
	}

IL_005f:
	{
		ClientContext_t1443 * L_17 = V_0;
		NullCheck(L_17);
		TlsClientSettings_t1453 * L_18 = Context_get_ClientSettings_m6722(L_17, /*hidden argument*/&Context_get_ClientSettings_m6722_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = TlsClientSettings_get_TargetHost_m6962(L_18, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6962_MethodInfo);
		String_t* L_20 = V_1;
		bool L_21 = TlsServerCertificate_Match_m7061(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&TlsServerCertificate_Match_m7061_MethodInfo);
		return L_21;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C" bool TlsServerCertificate_Match_m7061 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___pattern;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2899(L_0, ((int32_t)42), /*hidden argument*/&String_IndexOf_m2899_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___hostname;
		String_t* L_4 = ___pattern;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_5 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_6 = String_Compare_m6020(NULL /*static, unused*/, L_3, L_4, 1, L_5, /*hidden argument*/&String_Compare_m6020_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___pattern;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2828(L_8, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = ___pattern;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m2843(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2843_MethodInfo);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		String_t* L_13 = ___pattern;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOf_m4582(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/&String_IndexOf_m4582_MethodInfo);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		String_t* L_17 = ___pattern;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2869(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/&String_Substring_m2869_MethodInfo);
		V_2 = L_19;
		String_t* L_20 = ___hostname;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m2828(L_20, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m2828(L_22, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		String_t* L_25 = ___hostname;
		int32_t L_26 = V_3;
		String_t* L_27 = V_2;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m2828(L_28, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_30 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_31 = String_Compare_m7258(NULL /*static, unused*/, L_25, L_26, L_27, 0, L_29, 1, L_30, /*hidden argument*/&String_Compare_m7258_MethodInfo);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_33 = ___hostname;
		NullCheck(L_33);
		int32_t L_34 = String_IndexOf_m2899(L_33, ((int32_t)46), /*hidden argument*/&String_IndexOf_m2899_MethodInfo);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		String_t* L_37 = ___hostname;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m2828(L_37, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m2828(L_39, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		String_t* L_41 = ___pattern;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2844(L_41, 0, L_42, /*hidden argument*/&String_Substring_m2844_MethodInfo);
		V_5 = L_43;
		String_t* L_44 = ___hostname;
		String_t* L_45 = V_5;
		String_t* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m2828(L_46, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_48 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_49 = String_Compare_m7258(NULL /*static, unused*/, L_44, 0, L_45, 0, L_47, 1, L_48, /*hidden argument*/&String_Compare_m7258_MethodInfo);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t1488_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo ClientCertificateTypeU5BU5D_t1479_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1480_il2cpp_TypeInfo;
extern TypeInfo ASN1_t1215_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
extern TypeInfo Encoding_t719_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern Il2CppType ClientCertificateTypeU5BU5D_t1479_0_0_0;
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern MethodInfo TlsServerSettings_set_CertificateTypes_m6987_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m6988_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m6986_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m7065_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m7000_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m7001_MethodInfo;
extern MethodInfo ASN1__ctor_m6041_MethodInfo;
extern MethodInfo ASN1_get_Count_m6045_MethodInfo;
extern MethodInfo ASN1_get_Item_m6046_MethodInfo;
extern MethodInfo ASN1_get_Value_m6044_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m4586_MethodInfo;
extern MethodInfo Encoding_GetString_m6076_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m7062_MethodInfo;
extern "C" void TlsServerCertificateRequest__ctor_m7062 (TlsServerCertificateRequest_t1488 * __this, Context_t1436 * ___context, ByteU5BU5D_t720* ___buffer, MethodInfo* method)
{
	{
		Context_t1436 * L_0 = ___context;
		ByteU5BU5D_t720* L_1 = ___buffer;
		HandshakeMessage__ctor_m7018(__this, L_0, ((int32_t)13), L_1, /*hidden argument*/&HandshakeMessage__ctor_m7018_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m7063_MethodInfo;
extern "C" void TlsServerCertificateRequest_Update_m7063 (TlsServerCertificateRequest_t1488 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7023(__this, /*hidden argument*/&HandshakeMessage_Update_m7023_MethodInfo);
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1452 * L_1 = Context_get_ServerSettings_m6721(L_0, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		ClientCertificateTypeU5BU5D_t1479* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m6987(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m6987_MethodInfo);
		Context_t1436 * L_3 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1452 * L_4 = Context_get_ServerSettings_m6721(L_3, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		StringU5BU5D_t215* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m6988(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m6988_MethodInfo);
		Context_t1436 * L_6 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t1452 * L_7 = Context_get_ServerSettings_m6721(L_6, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m6986(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m6986_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m7064_MethodInfo;
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m7064 (TlsServerCertificateRequest_t1488 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m7065_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t1479_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t215_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m7065 (TlsServerCertificateRequest_t1488 * __this, MethodInfo* method)
{
	static bool TlsServerCertificateRequest_ProcessAsTls1_m7065_init;
	if (!TlsServerCertificateRequest_ProcessAsTls1_m7065_init)
	{
		ClientCertificateTypeU5BU5D_t1479_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ClientCertificateTypeU5BU5D_t1479_0_0_0);
		StringU5BU5D_t215_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t215_0_0_0);
		TlsServerCertificateRequest_ProcessAsTls1_m7065_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t1215 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t1215 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m7000(__this, /*hidden argument*/&TlsStream_ReadByte_m7000_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t1479*)SZArrayNew(ClientCertificateTypeU5BU5D_t1479_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t1479* L_2 = (__this->___certificateTypes_9);
		int32_t L_3 = V_1;
		uint8_t L_4 = TlsStream_ReadByte_m7000(__this, /*hidden argument*/&TlsStream_ReadByte_m7000_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		ByteU5BU5D_t720* L_10 = TlsStream_ReadBytes_m7003(__this, L_9, /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		ASN1_t1215 * L_11 = (ASN1_t1215 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1215_il2cpp_TypeInfo));
		ASN1__ctor_m6041(L_11, L_10, /*hidden argument*/&ASN1__ctor_m6041_MethodInfo);
		V_2 = L_11;
		ASN1_t1215 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m6045(L_12, /*hidden argument*/&ASN1_get_Count_m6045_MethodInfo);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t215*)SZArrayNew(StringU5BU5D_t215_il2cpp_TypeInfo_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		ASN1_t1215 * L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		ASN1_t1215 * L_16 = ASN1_get_Item_m6046(L_14, L_15, /*hidden argument*/&ASN1_get_Item_m6046_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t720* L_17 = ASN1_get_Value_m6044(L_16, /*hidden argument*/&ASN1_get_Value_m6044_MethodInfo);
		ASN1_t1215 * L_18 = (ASN1_t1215 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1215_il2cpp_TypeInfo));
		ASN1__ctor_m6041(L_18, L_17, /*hidden argument*/&ASN1__ctor_m6041_MethodInfo);
		V_4 = L_18;
		StringU5BU5D_t215* L_19 = (__this->___distinguisedNames_10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t719_il2cpp_TypeInfo));
		Encoding_t719 * L_21 = Encoding_get_UTF8_m4586(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m4586_MethodInfo);
		ASN1_t1215 * L_22 = V_4;
		NullCheck(L_22);
		ASN1_t1215 * L_23 = ASN1_get_Item_m6046(L_22, 1, /*hidden argument*/&ASN1_get_Item_m6046_MethodInfo);
		NullCheck(L_23);
		ByteU5BU5D_t720* L_24 = ASN1_get_Value_m6044(L_23, /*hidden argument*/&ASN1_get_Value_m6044_MethodInfo);
		NullCheck(L_21);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t720* >::Invoke(&Encoding_GetString_m6076_MethodInfo, L_21, L_24);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		ArrayElementTypeCheck (L_19, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, L_20)) = (String_t*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		ASN1_t1215 * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m6045(L_28, /*hidden argument*/&ASN1_get_Count_m6045_MethodInfo);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t1489_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1502_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1476_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t1406_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1437_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1448_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1431_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t720_0_0_0;
extern MethodInfo RuntimeHelpers_InitializeArray_m6013_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m6726_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m6746_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m6886_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m6733_MethodInfo;
extern MethodInfo TlsStream_ToArray_m7010_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m7133_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m7134_MethodInfo;
extern MethodInfo TlsStream_get_Length_m6998_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m7135_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m7025_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m6604_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m7137_MethodInfo;
extern MethodInfo Context_get_Current_m6764_MethodInfo;
extern MethodInfo CipherSuite_PRF_m6646_MethodInfo;
extern MethodInfo TlsException__ctor_m6969_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1502____$$fieldU2D22_14_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m7066_MethodInfo;
extern "C" void TlsServerFinished__ctor_m7066 (TlsServerFinished_t1489 * __this, Context_t1436 * ___context, ByteU5BU5D_t720* ___buffer, MethodInfo* method)
{
	{
		Context_t1436 * L_0 = ___context;
		ByteU5BU5D_t720* L_1 = ___buffer;
		HandshakeMessage__ctor_m7018(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/&HandshakeMessage__ctor_m7018_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m7067_MethodInfo;
extern TypeInfo* ByteU5BU5D_t720_il2cpp_TypeInfo_var;
extern "C" void TlsServerFinished__cctor_m7067 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool TlsServerFinished__cctor_m7067_init;
	if (!TlsServerFinished__cctor_m7067_init)
	{
		ByteU5BU5D_t720_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t720_0_0_0);
		TlsServerFinished__cctor_m7067_init = true;
	}
	{
		ByteU5BU5D_t720* L_0 = ((ByteU5BU5D_t720*)SZArrayNew(ByteU5BU5D_t720_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m6013(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1502____$$fieldU2D22_14_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m6013_MethodInfo);
		((TlsServerFinished_t1489_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1489_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m7068_MethodInfo;
extern "C" void TlsServerFinished_Update_m7068 (TlsServerFinished_t1489 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7023(__this, /*hidden argument*/&HandshakeMessage_Update_m7023_MethodInfo);
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m6726(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m6726_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m7069_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsSsl3_m7069 (TlsServerFinished_t1489 * __this, MethodInfo* method)
{
	HashAlgorithm_t1406 * V_0 = {0};
	ByteU5BU5D_t720* V_1 = {0};
	ByteU5BU5D_t720* V_2 = {0};
	ByteU5BU5D_t720* V_3 = {0};
	{
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t720* L_1 = Context_get_MasterSecret_m6746(L_0, /*hidden argument*/&Context_get_MasterSecret_m6746_MethodInfo);
		SslHandshakeHash_t1476 * L_2 = (SslHandshakeHash_t1476 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t1476_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m6886(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m6886_MethodInfo);
		V_0 = L_2;
		Context_t1436 * L_3 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1448 * L_4 = Context_get_HandshakeMessages_m6733(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m6733_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t720* L_5 = TlsStream_ToArray_m7010(L_4, /*hidden argument*/&TlsStream_ToArray_m7010_MethodInfo);
		V_1 = L_5;
		HashAlgorithm_t1406 * L_6 = V_0;
		ByteU5BU5D_t720* L_7 = V_1;
		ByteU5BU5D_t720* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t720* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t720*, int32_t, int32_t, ByteU5BU5D_t720*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m7133_MethodInfo, L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), L_9, 0);
		HashAlgorithm_t1406 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t1489_il2cpp_TypeInfo));
		ByteU5BU5D_t720* L_11 = ((TlsServerFinished_t1489_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1489_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t720* L_12 = ((TlsServerFinished_t1489_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1489_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t720* L_13 = ((TlsServerFinished_t1489_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1489_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t720*, int32_t, int32_t, ByteU5BU5D_t720*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m7133_MethodInfo, L_10, L_11, 0, (((int32_t)(((Array_t *)L_12)->max_length))), L_13, 0);
		HashAlgorithm_t1406 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t1437_il2cpp_TypeInfo));
		ByteU5BU5D_t720* L_15 = ((CipherSuite_t1437_StaticFields*)InitializedTypeInfo(&CipherSuite_t1437_il2cpp_TypeInfo)->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t720*, ByteU5BU5D_t720*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m7134_MethodInfo, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m6998_MethodInfo, __this);
		ByteU5BU5D_t720* L_17 = TlsStream_ReadBytes_m7003(__this, (((int32_t)L_16)), /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		V_2 = L_17;
		HashAlgorithm_t1406 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_t720* L_19 = (ByteU5BU5D_t720*)VirtFuncInvoker0< ByteU5BU5D_t720* >::Invoke(&HashAlgorithm_get_Hash_m7135_MethodInfo, L_18);
		V_3 = L_19;
		ByteU5BU5D_t720* L_20 = V_3;
		ByteU5BU5D_t720* L_21 = V_2;
		bool L_22 = HandshakeMessage_Compare_m7025(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&HandshakeMessage_Compare_m7025_MethodInfo);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t1478 * L_23 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6974(L_23, ((int32_t)71), (String_t*) &_stringLiteral1127, /*hidden argument*/&TlsException__ctor_m6974_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m7070_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsTls1_m7070 (TlsServerFinished_t1489 * __this, MethodInfo* method)
{
	ByteU5BU5D_t720* V_0 = {0};
	HashAlgorithm_t1406 * V_1 = {0};
	ByteU5BU5D_t720* V_2 = {0};
	ByteU5BU5D_t720* V_3 = {0};
	ByteU5BU5D_t720* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m6998_MethodInfo, __this);
		ByteU5BU5D_t720* L_1 = TlsStream_ReadBytes_m7003(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t1431 * L_2 = (MD5SHA1_t1431 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1431_il2cpp_TypeInfo));
		MD5SHA1__ctor_m6604(L_2, /*hidden argument*/&MD5SHA1__ctor_m6604_MethodInfo);
		V_1 = L_2;
		Context_t1436 * L_3 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1448 * L_4 = Context_get_HandshakeMessages_m6733(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m6733_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t720* L_5 = TlsStream_ToArray_m7010(L_4, /*hidden argument*/&TlsStream_ToArray_m7010_MethodInfo);
		V_2 = L_5;
		HashAlgorithm_t1406 * L_6 = V_1;
		ByteU5BU5D_t720* L_7 = V_2;
		ByteU5BU5D_t720* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t720* L_9 = HashAlgorithm_ComputeHash_m7137(L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m7137_MethodInfo);
		V_3 = L_9;
		Context_t1436 * L_10 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_10);
		SecurityParameters_t1454 * L_11 = Context_get_Current_m6764(L_10, /*hidden argument*/&Context_get_Current_m6764_MethodInfo);
		NullCheck(L_11);
		CipherSuite_t1437 * L_12 = SecurityParameters_get_Cipher_m6835(L_11, /*hidden argument*/&SecurityParameters_get_Cipher_m6835_MethodInfo);
		Context_t1436 * L_13 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t720* L_14 = Context_get_MasterSecret_m6746(L_13, /*hidden argument*/&Context_get_MasterSecret_m6746_MethodInfo);
		ByteU5BU5D_t720* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t720* L_16 = CipherSuite_PRF_m6646(L_12, L_14, (String_t*) &_stringLiteral1128, L_15, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m6646_MethodInfo);
		V_4 = L_16;
		ByteU5BU5D_t720* L_17 = V_4;
		ByteU5BU5D_t720* L_18 = V_0;
		bool L_19 = HandshakeMessage_Compare_m7025(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&HandshakeMessage_Compare_m7025_MethodInfo);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t1478 * L_20 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6969(L_20, (String_t*) &_stringLiteral1127, /*hidden argument*/&TlsException__ctor_m6969_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0073:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t1490_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo ClientSessionCache_t1450_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1438_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo Context_set_SessionId_m6718_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m6741_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m6836_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m6720_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m6712_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m6738_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m6740_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m6040_MethodInfo;
extern MethodInfo Context_set_RandomCS_m6743_MethodInfo;
extern MethodInfo Context_set_RandomSC_m6745_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m7074_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m7075_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m6703_MethodInfo;
extern MethodInfo Context_get_SessionId_m6717_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m6710_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m6731_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m6672_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m6665_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m6762_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m6715_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m6714_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m6670_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m6732_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m6677_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m7071_MethodInfo;
extern "C" void TlsServerHello__ctor_m7071 (TlsServerHello_t1490 * __this, Context_t1436 * ___context, ByteU5BU5D_t720* ___buffer, MethodInfo* method)
{
	{
		Context_t1436 * L_0 = ___context;
		ByteU5BU5D_t720* L_1 = ___buffer;
		HandshakeMessage__ctor_m7018(__this, L_0, 2, L_1, /*hidden argument*/&HandshakeMessage__ctor_m7018_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m7072_MethodInfo;
extern TypeInfo* ByteU5BU5D_t720_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m7072 (TlsServerHello_t1490 * __this, MethodInfo* method)
{
	static bool TlsServerHello_Update_m7072_init;
	if (!TlsServerHello_Update_m7072_init)
	{
		ByteU5BU5D_t720_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t720_0_0_0);
		TlsServerHello_Update_m7072_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t720* V_3 = {0};
	ByteU5BU5D_t720* V_4 = {0};
	{
		HandshakeMessage_Update_m7023(__this, /*hidden argument*/&HandshakeMessage_Update_m7023_MethodInfo);
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		ByteU5BU5D_t720* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m6718(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m6718_MethodInfo);
		Context_t1436 * L_2 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		ByteU5BU5D_t720* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m6741(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m6741_MethodInfo);
		Context_t1436 * L_4 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t1454 * L_5 = Context_get_Negotiating_m6765(L_4, /*hidden argument*/&Context_get_Negotiating_m6765_MethodInfo);
		CipherSuite_t1437 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m6836(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m6836_MethodInfo);
		Context_t1436 * L_7 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m6720(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m6720_MethodInfo);
		Context_t1436 * L_9 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m6712(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m6712_MethodInfo);
		Context_t1436 * L_10 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t720* L_11 = Context_get_ClientRandom_m6738(L_10, /*hidden argument*/&Context_get_ClientRandom_m6738_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t1436 * L_12 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t720* L_13 = Context_get_ServerRandom_m6740(L_12, /*hidden argument*/&Context_get_ServerRandom_m6740_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((ByteU5BU5D_t720*)SZArrayNew(ByteU5BU5D_t720_il2cpp_TypeInfo_var, L_16));
		Context_t1436 * L_17 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_17);
		ByteU5BU5D_t720* L_18 = Context_get_ClientRandom_m6738(L_17, /*hidden argument*/&Context_get_ClientRandom_m6738_MethodInfo);
		ByteU5BU5D_t720* L_19 = V_3;
		int32_t L_20 = V_0;
		Buffer_BlockCopy_m6040(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, 0, (Array_t *)(Array_t *)L_19, 0, L_20, /*hidden argument*/&Buffer_BlockCopy_m6040_MethodInfo);
		Context_t1436 * L_21 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t720* L_22 = Context_get_ServerRandom_m6740(L_21, /*hidden argument*/&Context_get_ServerRandom_m6740_MethodInfo);
		ByteU5BU5D_t720* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_m6040(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/&Buffer_BlockCopy_m6040_MethodInfo);
		Context_t1436 * L_26 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		ByteU5BU5D_t720* L_27 = V_3;
		NullCheck(L_26);
		Context_set_RandomCS_m6743(L_26, L_27, /*hidden argument*/&Context_set_RandomCS_m6743_MethodInfo);
		int32_t L_28 = V_2;
		V_4 = ((ByteU5BU5D_t720*)SZArrayNew(ByteU5BU5D_t720_il2cpp_TypeInfo_var, L_28));
		Context_t1436 * L_29 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_29);
		ByteU5BU5D_t720* L_30 = Context_get_ServerRandom_m6740(L_29, /*hidden argument*/&Context_get_ServerRandom_m6740_MethodInfo);
		ByteU5BU5D_t720* L_31 = V_4;
		int32_t L_32 = V_1;
		Buffer_BlockCopy_m6040(NULL /*static, unused*/, (Array_t *)(Array_t *)L_30, 0, (Array_t *)(Array_t *)L_31, 0, L_32, /*hidden argument*/&Buffer_BlockCopy_m6040_MethodInfo);
		Context_t1436 * L_33 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_33);
		ByteU5BU5D_t720* L_34 = Context_get_ClientRandom_m6738(L_33, /*hidden argument*/&Context_get_ClientRandom_m6738_MethodInfo);
		ByteU5BU5D_t720* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m6040(NULL /*static, unused*/, (Array_t *)(Array_t *)L_34, 0, (Array_t *)(Array_t *)L_35, L_36, L_37, /*hidden argument*/&Buffer_BlockCopy_m6040_MethodInfo);
		Context_t1436 * L_38 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		ByteU5BU5D_t720* L_39 = V_4;
		NullCheck(L_38);
		Context_set_RandomSC_m6745(L_38, L_39, /*hidden argument*/&Context_set_RandomSC_m6745_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m7073_MethodInfo;
extern "C" void TlsServerHello_ProcessAsSsl3_m7073 (TlsServerHello_t1490 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m7074_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m7074 (TlsServerHello_t1490 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		TlsServerHello_processProtocol_m7075(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m7075_MethodInfo);
		ByteU5BU5D_t720* L_1 = TlsStream_ReadBytes_m7003(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m7000(__this, /*hidden argument*/&TlsStream_ReadByte_m7000_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_t720* L_5 = TlsStream_ReadBytes_m7003(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		__this->___sessionId_11 = L_5;
		Context_t1436 * L_6 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_6);
		TlsClientSettings_t1453 * L_7 = Context_get_ClientSettings_m6722(L_6, /*hidden argument*/&Context_get_ClientSettings_m6722_MethodInfo);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m6962(L_7, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6962_MethodInfo);
		ByteU5BU5D_t720* L_9 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t1450_il2cpp_TypeInfo));
		ClientSessionCache_Add_m6703(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&ClientSessionCache_Add_m6703_MethodInfo);
		Context_t1436 * L_10 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		ByteU5BU5D_t720* L_11 = (__this->___sessionId_11);
		Context_t1436 * L_12 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t720* L_13 = Context_get_SessionId_m6717(L_12, /*hidden argument*/&Context_get_SessionId_m6717_MethodInfo);
		bool L_14 = HandshakeMessage_Compare_m7025(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/&HandshakeMessage_Compare_m7025_MethodInfo);
		NullCheck(L_10);
		Context_set_AbbreviatedHandshake_m6710(L_10, L_14, /*hidden argument*/&Context_set_AbbreviatedHandshake_m6710_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t1436 * L_15 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_15);
		Context_set_AbbreviatedHandshake_m6710(L_15, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m6710_MethodInfo);
	}

IL_0082:
	{
		int16_t L_16 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		V_1 = L_16;
		Context_t1436 * L_17 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_17);
		CipherSuiteCollection_t1438 * L_18 = Context_get_SupportedCiphers_m6731(L_17, /*hidden argument*/&Context_get_SupportedCiphers_m6731_MethodInfo);
		int16_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = CipherSuiteCollection_IndexOf_m6672(L_18, L_19, /*hidden argument*/&CipherSuiteCollection_IndexOf_m6672_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t1478 * L_21 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6974(L_21, ((int32_t)71), (String_t*) &_stringLiteral1129, /*hidden argument*/&TlsException__ctor_m6974_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00ad:
	{
		Context_t1436 * L_22 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_22);
		CipherSuiteCollection_t1438 * L_23 = Context_get_SupportedCiphers_m6731(L_22, /*hidden argument*/&Context_get_SupportedCiphers_m6731_MethodInfo);
		int16_t L_24 = V_1;
		NullCheck(L_23);
		CipherSuite_t1437 * L_25 = CipherSuiteCollection_get_Item_m6665(L_23, L_24, /*hidden argument*/&CipherSuiteCollection_get_Item_m6665_MethodInfo);
		__this->___cipherSuite_12 = L_25;
		uint8_t L_26 = TlsStream_ReadByte_m7000(__this, /*hidden argument*/&TlsStream_ReadByte_m7000_MethodInfo);
		__this->___compressionMethod_9 = L_26;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m7075 (TlsServerHello_t1490 * __this, int16_t ___protocol, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m6762(L_0, L_1, /*hidden argument*/&Context_DecodeProtocolCode_m6762_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t1436 * L_4 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m6715(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m6715_MethodInfo);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t1436 * L_7 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m6715(L_7, /*hidden argument*/&Context_get_SecurityProtocolFlags_m6715_MethodInfo);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t1436 * L_9 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m6714(L_9, L_10, /*hidden argument*/&Context_set_SecurityProtocol_m6714_MethodInfo);
		Context_t1436 * L_11 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_11);
		CipherSuiteCollection_t1438 * L_12 = Context_get_SupportedCiphers_m6731(L_11, /*hidden argument*/&Context_get_SupportedCiphers_m6731_MethodInfo);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m6670_MethodInfo, L_12);
		Context_t1436 * L_13 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m6732(L_13, (CipherSuiteCollection_t1438 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m6732_MethodInfo);
		Context_t1436 * L_14 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t1438 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m6677(NULL /*static, unused*/, L_15, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m6677_MethodInfo);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m6732(L_14, L_16, /*hidden argument*/&Context_set_SupportedCiphers_m6732_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t1478 * L_17 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6974(L_17, ((int32_t)70), (String_t*) &_stringLiteral1074, /*hidden argument*/&TlsException__ctor_m6974_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0086:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t1491_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m7076_MethodInfo;
extern "C" void TlsServerHelloDone__ctor_m7076 (TlsServerHelloDone_t1491 * __this, Context_t1436 * ___context, ByteU5BU5D_t720* ___buffer, MethodInfo* method)
{
	{
		Context_t1436 * L_0 = ___context;
		ByteU5BU5D_t720* L_1 = ___buffer;
		HandshakeMessage__ctor_m7018(__this, L_0, ((int32_t)14), L_1, /*hidden argument*/&HandshakeMessage__ctor_m7018_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m7077_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m7077 (TlsServerHelloDone_t1491 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m7078_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsTls1_m7078 (TlsServerHelloDone_t1491 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t1492_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo RSAParameters_t1339_il2cpp_TypeInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m7083_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m6978_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m6983_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m6984_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m7082_MethodInfo;
extern MethodInfo TlsStream__ctor_m6990_MethodInfo;
extern MethodInfo Context_get_RandomCS_m6742_MethodInfo;
extern MethodInfo TlsStream_Write_m7008_MethodInfo;
extern MethodInfo TlsStream_Write_m7015_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m6144_MethodInfo;
extern MethodInfo TlsStream_Reset_m7009_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m6981_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m6609_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m7079_MethodInfo;
extern "C" void TlsServerKeyExchange__ctor_m7079 (TlsServerKeyExchange_t1492 * __this, Context_t1436 * ___context, ByteU5BU5D_t720* ___buffer, MethodInfo* method)
{
	{
		Context_t1436 * L_0 = ___context;
		ByteU5BU5D_t720* L_1 = ___buffer;
		HandshakeMessage__ctor_m7018(__this, L_0, ((int32_t)12), L_1, /*hidden argument*/&HandshakeMessage__ctor_m7018_MethodInfo);
		TlsServerKeyExchange_verifySignature_m7083(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m7083_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m7080_MethodInfo;
extern "C" void TlsServerKeyExchange_Update_m7080 (TlsServerKeyExchange_t1492 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m7023(__this, /*hidden argument*/&HandshakeMessage_Update_m7023_MethodInfo);
		Context_t1436 * L_0 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1452 * L_1 = Context_get_ServerSettings_m6721(L_0, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m6978(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m6978_MethodInfo);
		Context_t1436 * L_2 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t1452 * L_3 = Context_get_ServerSettings_m6721(L_2, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		RSAParameters_t1339  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m6983(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m6983_MethodInfo);
		Context_t1436 * L_5 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t1452 * L_6 = Context_get_ServerSettings_m6721(L_5, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		ByteU5BU5D_t720* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m6984(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m6984_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m7081_MethodInfo;
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m7081 (TlsServerKeyExchange_t1492 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m7082_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m7082 (TlsServerKeyExchange_t1492 * __this, MethodInfo* method)
{
	RSAParameters_t1339  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&RSAParameters_t1339_il2cpp_TypeInfo), (&V_0));
		RSAParameters_t1339  L_0 = V_0;
		__this->___rsaParams_9 = L_0;
		RSAParameters_t1339 * L_1 = &(__this->___rsaParams_9);
		int16_t L_2 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		ByteU5BU5D_t720* L_3 = TlsStream_ReadBytes_m7003(__this, L_2, /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		L_1->___Modulus_6 = L_3;
		RSAParameters_t1339 * L_4 = &(__this->___rsaParams_9);
		int16_t L_5 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		ByteU5BU5D_t720* L_6 = TlsStream_ReadBytes_m7003(__this, L_5, /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		L_4->___Exponent_7 = L_6;
		int16_t L_7 = TlsStream_ReadInt16_m7001(__this, /*hidden argument*/&TlsStream_ReadInt16_m7001_MethodInfo);
		ByteU5BU5D_t720* L_8 = TlsStream_ReadBytes_m7003(__this, L_7, /*hidden argument*/&TlsStream_ReadBytes_m7003_MethodInfo);
		__this->___signedParams_10 = L_8;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern "C" void TlsServerKeyExchange_verifySignature_m7083 (TlsServerKeyExchange_t1492 * __this, MethodInfo* method)
{
	MD5SHA1_t1431 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t1448 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t1431 * L_0 = (MD5SHA1_t1431 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1431_il2cpp_TypeInfo));
		MD5SHA1__ctor_m6604(L_0, /*hidden argument*/&MD5SHA1__ctor_m6604_MethodInfo);
		V_0 = L_0;
		RSAParameters_t1339 * L_1 = &(__this->___rsaParams_9);
		ByteU5BU5D_t720* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t1339 * L_3 = &(__this->___rsaParams_9);
		ByteU5BU5D_t720* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))+(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))))+(int32_t)4));
		TlsStream_t1448 * L_5 = (TlsStream_t1448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t1448_il2cpp_TypeInfo));
		TlsStream__ctor_m6990(L_5, /*hidden argument*/&TlsStream__ctor_m6990_MethodInfo);
		V_2 = L_5;
		TlsStream_t1448 * L_6 = V_2;
		Context_t1436 * L_7 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_7);
		ByteU5BU5D_t720* L_8 = Context_get_RandomCS_m6742(L_7, /*hidden argument*/&Context_get_RandomCS_m6742_MethodInfo);
		NullCheck(L_6);
		TlsStream_Write_m7008(L_6, L_8, /*hidden argument*/&TlsStream_Write_m7008_MethodInfo);
		TlsStream_t1448 * L_9 = V_2;
		ByteU5BU5D_t720* L_10 = TlsStream_ToArray_m7010(__this, /*hidden argument*/&TlsStream_ToArray_m7010_MethodInfo);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t720*, int32_t, int32_t >::Invoke(&TlsStream_Write_m7015_MethodInfo, L_9, L_10, 0, L_11);
		MD5SHA1_t1431 * L_12 = V_0;
		TlsStream_t1448 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_t720* L_14 = TlsStream_ToArray_m7010(L_13, /*hidden argument*/&TlsStream_ToArray_m7010_MethodInfo);
		NullCheck(L_12);
		HashAlgorithm_ComputeHash_m6144(L_12, L_14, /*hidden argument*/&HashAlgorithm_ComputeHash_m6144_MethodInfo);
		TlsStream_t1448 * L_15 = V_2;
		NullCheck(L_15);
		TlsStream_Reset_m7009(L_15, /*hidden argument*/&TlsStream_Reset_m7009_MethodInfo);
		MD5SHA1_t1431 * L_16 = V_0;
		Context_t1436 * L_17 = HandshakeMessage_get_Context_m7019(__this, /*hidden argument*/&HandshakeMessage_get_Context_m7019_MethodInfo);
		NullCheck(L_17);
		TlsServerSettings_t1452 * L_18 = Context_get_ServerSettings_m6721(L_17, /*hidden argument*/&Context_get_ServerSettings_m6721_MethodInfo);
		NullCheck(L_18);
		RSA_t1206 * L_19 = TlsServerSettings_get_CertificateRSA_m6981(L_18, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m6981_MethodInfo);
		ByteU5BU5D_t720* L_20 = (__this->___signedParams_10);
		NullCheck(L_16);
		bool L_21 = MD5SHA1_VerifySignature_m6609(L_16, L_19, L_20, /*hidden argument*/&MD5SHA1_VerifySignature_m6609_MethodInfo);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t1478 * L_23 = (TlsException_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1478_il2cpp_TypeInfo));
		TlsException__ctor_m6974(L_23, ((int32_t)50), (String_t*) &_stringLiteral1130, /*hidden argument*/&TlsException__ctor_m6974_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008c:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t1393_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m7084_MethodInfo;
extern "C" void PrimalityTest__ctor_m7084 (PrimalityTest_t1393 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m7085_MethodInfo;
extern "C" bool PrimalityTest_Invoke_m7085 (PrimalityTest_t1393 * __this, BigInteger_t1384 * ___bi, int32_t ___confidence, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m7085((PrimalityTest_t1393 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t1384 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t1384 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t1393(Il2CppObject* delegate, BigInteger_t1384 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t1384 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m7086_MethodInfo;
extern "C" Object_t * PrimalityTest_BeginInvoke_m7086 (PrimalityTest_t1393 * __this, BigInteger_t1384 * ___bi, int32_t ___confidence, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t1390_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m7087_MethodInfo;
extern "C" bool PrimalityTest_EndInvoke_m7087 (PrimalityTest_t1393 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t1473_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m7088_MethodInfo;
extern "C" void CertificateValidationCallback__ctor_m7088 (CertificateValidationCallback_t1473 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m7089_MethodInfo;
extern "C" bool CertificateValidationCallback_Invoke_m7089 (CertificateValidationCallback_t1473 * __this, X509Certificate_t1171 * ___certificate, Int32U5BU5D_t1264* ___certificateErrors, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m7089((CertificateValidationCallback_t1473 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1171 * ___certificate, Int32U5BU5D_t1264* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1171 * ___certificate, Int32U5BU5D_t1264* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t1264* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1473(Il2CppObject* delegate, X509Certificate_t1171 * ___certificate, Int32U5BU5D_t1264* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1171 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m7090_MethodInfo;
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m7090 (CertificateValidationCallback_t1473 * __this, X509Certificate_t1171 * ___certificate, Int32U5BU5D_t1264* ___certificateErrors, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m7091_MethodInfo;
extern "C" bool CertificateValidationCallback_EndInvoke_m7091 (CertificateValidationCallback_t1473 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t1474_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m7092_MethodInfo;
extern "C" void CertificateValidationCallback2__ctor_m7092 (CertificateValidationCallback2_t1474 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m7093_MethodInfo;
extern "C" ValidationResult_t1472 * CertificateValidationCallback2_Invoke_m7093 (CertificateValidationCallback2_t1474 * __this, X509CertificateCollection_t1347 * ___collection, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m7093((CertificateValidationCallback2_t1474 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t1472 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1347 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t1472 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1347 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t1472 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t1472 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1474(Il2CppObject* delegate, X509CertificateCollection_t1347 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t1347 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m7094_MethodInfo;
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m7094 (CertificateValidationCallback2_t1474 * __this, X509CertificateCollection_t1347 * ___collection, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m7095_MethodInfo;
extern "C" ValidationResult_t1472 * CertificateValidationCallback2_EndInvoke_m7095 (CertificateValidationCallback2_t1474 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t1472 *)__result;
}
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t1458_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m7096_MethodInfo;
extern "C" void CertificateSelectionCallback__ctor_m7096 (CertificateSelectionCallback_t1458 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m7097_MethodInfo;
extern "C" X509Certificate_t1171 * CertificateSelectionCallback_Invoke_m7097 (CertificateSelectionCallback_t1458 * __this, X509CertificateCollection_t1185 * ___clientCertificates, X509Certificate_t1171 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1185 * ___serverRequestedCertificates, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m7097((CertificateSelectionCallback_t1458 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t1171 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1185 * ___clientCertificates, X509Certificate_t1171 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1185 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t1171 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1185 * ___clientCertificates, X509Certificate_t1171 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1185 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t1171 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1171 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1185 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t1171 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1458(Il2CppObject* delegate, X509CertificateCollection_t1185 * ___clientCertificates, X509Certificate_t1171 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1185 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t1185 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m7098_MethodInfo;
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m7098 (CertificateSelectionCallback_t1458 * __this, X509CertificateCollection_t1185 * ___clientCertificates, X509Certificate_t1171 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1185 * ___serverRequestedCertificates, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m7099_MethodInfo;
extern "C" X509Certificate_t1171 * CertificateSelectionCallback_EndInvoke_m7099 (CertificateSelectionCallback_t1458 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t1171 *)__result;
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t1459_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m7100_MethodInfo;
extern "C" void PrivateKeySelectionCallback__ctor_m7100 (PrivateKeySelectionCallback_t1459 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m7101_MethodInfo;
extern "C" AsymmetricAlgorithm_t1200 * PrivateKeySelectionCallback_Invoke_m7101 (PrivateKeySelectionCallback_t1459 * __this, X509Certificate_t1171 * ___certificate, String_t* ___targetHost, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m7101((PrivateKeySelectionCallback_t1459 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1200 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1171 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1200 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1171 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t1200 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t1200 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1459(Il2CppObject* delegate, X509Certificate_t1171 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1171 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m7102_MethodInfo;
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m7102 (PrivateKeySelectionCallback_t1459 * __this, X509Certificate_t1171 * ___certificate, String_t* ___targetHost, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m7103_MethodInfo;
extern "C" AsymmetricAlgorithm_t1200 * PrivateKeySelectionCallback_EndInvoke_m7103 (PrivateKeySelectionCallback_t1459 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t1200 *)__result;
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t1493_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1493_marshal(const $ArrayType$3132_t1493& unmarshaled, $ArrayType$3132_t1493_marshaled& marshaled)
{
}
void $ArrayType$3132_t1493_marshal_back(const $ArrayType$3132_t1493_marshaled& marshaled, $ArrayType$3132_t1493& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1493_marshal_cleanup($ArrayType$3132_t1493_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t1494_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1494_marshal(const $ArrayType$256_t1494& unmarshaled, $ArrayType$256_t1494_marshaled& marshaled)
{
}
void $ArrayType$256_t1494_marshal_back(const $ArrayType$256_t1494_marshaled& marshaled, $ArrayType$256_t1494& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1494_marshal_cleanup($ArrayType$256_t1494_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t1495_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1495_marshal(const $ArrayType$20_t1495& unmarshaled, $ArrayType$20_t1495_marshaled& marshaled)
{
}
void $ArrayType$20_t1495_marshal_back(const $ArrayType$20_t1495_marshaled& marshaled, $ArrayType$20_t1495& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1495_marshal_cleanup($ArrayType$20_t1495_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t1496_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1496_marshal(const $ArrayType$32_t1496& unmarshaled, $ArrayType$32_t1496_marshaled& marshaled)
{
}
void $ArrayType$32_t1496_marshal_back(const $ArrayType$32_t1496_marshaled& marshaled, $ArrayType$32_t1496& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1496_marshal_cleanup($ArrayType$32_t1496_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t1497_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1497_marshal(const $ArrayType$48_t1497& unmarshaled, $ArrayType$48_t1497_marshaled& marshaled)
{
}
void $ArrayType$48_t1497_marshal_back(const $ArrayType$48_t1497_marshaled& marshaled, $ArrayType$48_t1497& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1497_marshal_cleanup($ArrayType$48_t1497_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t1498_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1498_marshal(const $ArrayType$64_t1498& unmarshaled, $ArrayType$64_t1498_marshaled& marshaled)
{
}
void $ArrayType$64_t1498_marshal_back(const $ArrayType$64_t1498_marshaled& marshaled, $ArrayType$64_t1498& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1498_marshal_cleanup($ArrayType$64_t1498_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t1499_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1499_marshal(const $ArrayType$12_t1499& unmarshaled, $ArrayType$12_t1499_marshaled& marshaled)
{
}
void $ArrayType$12_t1499_marshal_back(const $ArrayType$12_t1499_marshaled& marshaled, $ArrayType$12_t1499& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1499_marshal_cleanup($ArrayType$12_t1499_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t1500_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1500_marshal(const $ArrayType$16_t1500& unmarshaled, $ArrayType$16_t1500_marshaled& marshaled)
{
}
void $ArrayType$16_t1500_marshal_back(const $ArrayType$16_t1500_marshaled& marshaled, $ArrayType$16_t1500& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1500_marshal_cleanup($ArrayType$16_t1500_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t1501_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1501_marshal(const $ArrayType$4_t1501& unmarshaled, $ArrayType$4_t1501_marshaled& marshaled)
{
}
void $ArrayType$4_t1501_marshal_back(const $ArrayType$4_t1501_marshaled& marshaled, $ArrayType$4_t1501& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1501_marshal_cleanup($ArrayType$4_t1501_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
