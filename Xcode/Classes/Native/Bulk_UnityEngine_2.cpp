#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
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
extern TypeInfo DestroyMatchRequest_t786_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
extern TypeInfo ObjectU5BU5D_t194_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Request_t776_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo NetworkID_t796_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t194_0_0_0;
extern MethodInfo Request__ctor_m4109_MethodInfo;
extern MethodInfo Request_ToString_m4113_MethodInfo;
extern MethodInfo DestroyMatchRequest_get_networkId_m4176_MethodInfo;
extern MethodInfo Enum_ToString_m4626_MethodInfo;
extern MethodInfo UnityString_Format_m3765_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern MethodInfo DestroyMatchRequest__ctor_m4175_MethodInfo;
extern "C" void DestroyMatchRequest__ctor_m4175 (DestroyMatchRequest_t786 * __this, MethodInfo* method)
{
	{
		Request__ctor_m4109(__this, /*hidden argument*/&Request__ctor_m4109_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m4176 (DestroyMatchRequest_t786 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DestroyMatchRequest_set_networkId_m4177_MethodInfo;
extern "C" void DestroyMatchRequest_set_networkId_m4177 (DestroyMatchRequest_t786 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern MethodInfo DestroyMatchRequest_ToString_m4178_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m4178 (DestroyMatchRequest_t786 * __this, MethodInfo* method)
{
	static bool DestroyMatchRequest_ToString_m4178_init;
	if (!DestroyMatchRequest_ToString_m4178_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		DestroyMatchRequest_ToString_m4178_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m4113(__this, /*hidden argument*/&Request_ToString_m4113_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m4176(__this, /*hidden argument*/&DestroyMatchRequest_get_networkId_m4176_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4626(L_5, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral337, L_2, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DropConnectionRequest_t787_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"

// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo NodeID_t797_il2cpp_TypeInfo;
extern MethodInfo DropConnectionRequest_get_networkId_m4180_MethodInfo;
extern MethodInfo DropConnectionRequest_get_nodeId_m4182_MethodInfo;


// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern MethodInfo DropConnectionRequest__ctor_m4179_MethodInfo;
extern "C" void DropConnectionRequest__ctor_m4179 (DropConnectionRequest_t787 * __this, MethodInfo* method)
{
	{
		Request__ctor_m4109(__this, /*hidden argument*/&Request__ctor_m4109_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m4180 (DropConnectionRequest_t787 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DropConnectionRequest_set_networkId_m4181_MethodInfo;
extern "C" void DropConnectionRequest_set_networkId_m4181 (DropConnectionRequest_t787 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m4182 (DropConnectionRequest_t787 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern MethodInfo DropConnectionRequest_set_nodeId_m4183_MethodInfo;
extern "C" void DropConnectionRequest_set_nodeId_m4183 (DropConnectionRequest_t787 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern MethodInfo DropConnectionRequest_ToString_m4184_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m4184 (DropConnectionRequest_t787 * __this, MethodInfo* method)
{
	static bool DropConnectionRequest_ToString_m4184_init;
	if (!DropConnectionRequest_ToString_m4184_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		DropConnectionRequest_ToString_m4184_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m4113(__this, /*hidden argument*/&Request_ToString_m4113_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m4180(__this, /*hidden argument*/&DropConnectionRequest_get_networkId_m4180_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4626(L_5, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t194* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m4182(__this, /*hidden argument*/&DropConnectionRequest_get_nodeId_m4182_MethodInfo);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&NodeID_t797_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m4626(L_10, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral338, L_7, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchRequest_t788_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t781_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
extern Il2CppType Dictionary_2_t781_0_0_0;
extern MethodInfo ListMatchRequest_get_pageSize_m4186_MethodInfo;
extern MethodInfo ListMatchRequest_get_pageNum_m4188_MethodInfo;
extern MethodInfo ListMatchRequest_get_nameFilter_m4190_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterLessThan_m4192_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m4633_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterGreaterThan_m4193_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Count_m4633_GenericMethod;


// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern MethodInfo ListMatchRequest__ctor_m4185_MethodInfo;
extern "C" void ListMatchRequest__ctor_m4185 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	{
		Request__ctor_m4109(__this, /*hidden argument*/&Request__ctor_m4109_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m4186 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern MethodInfo ListMatchRequest_set_pageSize_m4187_MethodInfo;
extern "C" void ListMatchRequest_set_pageSize_m4187 (ListMatchRequest_t788 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m4188 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern MethodInfo ListMatchRequest_set_pageNum_m4189_MethodInfo;
extern "C" void ListMatchRequest_set_pageNum_m4189 (ListMatchRequest_t788 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m4190 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern MethodInfo ListMatchRequest_set_nameFilter_m4191_MethodInfo;
extern "C" void ListMatchRequest_set_nameFilter_m4191 (ListMatchRequest_t788 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t781 * ListMatchRequest_get_matchAttributeFilterLessThan_m4192 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t781 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t781 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m4193 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t781 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern MethodInfo ListMatchRequest_ToString_m4194_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m4633_MethodInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m4194 (ListMatchRequest_t788 * __this, MethodInfo* method)
{
	static bool ListMatchRequest_ToString_m4194_init;
	if (!ListMatchRequest_ToString_m4194_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Dictionary_2_get_Count_m4633_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m4633_GenericMethod);
		ListMatchRequest_ToString_m4194_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t194* G_B2_1 = {0};
	ObjectU5BU5D_t194* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t194* G_B1_1 = {0};
	ObjectU5BU5D_t194* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t194* G_B3_2 = {0};
	ObjectU5BU5D_t194* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t194* G_B5_1 = {0};
	ObjectU5BU5D_t194* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t194* G_B4_1 = {0};
	ObjectU5BU5D_t194* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t194* G_B6_2 = {0};
	ObjectU5BU5D_t194* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m4113(__this, /*hidden argument*/&Request_ToString_m4113_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m4186(__this, /*hidden argument*/&ListMatchRequest_get_pageSize_m4186_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t194* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m4188(__this, /*hidden argument*/&ListMatchRequest_get_pageNum_m4188_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t194* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m4190(__this, /*hidden argument*/&ListMatchRequest_get_nameFilter_m4190_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t194* L_12 = L_10;
		Dictionary_2_t781 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m4192(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m4192_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral339;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral339;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t781 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m4192(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m4192_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m4633_MethodInfo_var, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t194* L_18 = G_B3_3;
		Dictionary_2_t781 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m4193(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m4193_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t781 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m4193(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m4193_MethodInfo);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m4633_MethodInfo_var, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m3765(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDirectConnectInfo_t789_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
extern TypeInfo IDictionary_2_t778_il2cpp_TypeInfo;
extern TypeInfo FormatException_t914_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern Il2CppType IDictionary_2_t778_0_0_0;
extern MethodInfo ResponseBase__ctor_m4114_MethodInfo;
extern MethodInfo Object_ToString_m1098_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_nodeId_m4196_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_publicAddress_m4198_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_privateAddress_m4200_MethodInfo;
extern MethodInfo ResponseBase_ParseJSONUInt16_m4117_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_nodeId_m4197_MethodInfo;
extern MethodInfo ResponseBase_ParseJSONString_m4115_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_publicAddress_m4199_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_privateAddress_m4201_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo FormatException__ctor_m4628_MethodInfo;


// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern MethodInfo MatchDirectConnectInfo__ctor_m4195_MethodInfo;
extern "C" void MatchDirectConnectInfo__ctor_m4195 (MatchDirectConnectInfo_t789 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m4114(__this, /*hidden argument*/&ResponseBase__ctor_m4114_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m4196 (MatchDirectConnectInfo_t789 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m4197 (MatchDirectConnectInfo_t789 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m4198 (MatchDirectConnectInfo_t789 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m4199 (MatchDirectConnectInfo_t789 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m4200 (MatchDirectConnectInfo_t789 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m4201 (MatchDirectConnectInfo_t789 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern MethodInfo MatchDirectConnectInfo_ToString_m4202_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m4202 (MatchDirectConnectInfo_t789 * __this, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_ToString_m4202_init;
	if (!MatchDirectConnectInfo_ToString_m4202_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		MatchDirectConnectInfo_ToString_m4202_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1098(__this, /*hidden argument*/&Object_ToString_m1098_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m4196(__this, /*hidden argument*/&MatchDirectConnectInfo_get_nodeId_m4196_MethodInfo);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NodeID_t797_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t194* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m4198(__this, /*hidden argument*/&MatchDirectConnectInfo_get_publicAddress_m4198_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t194* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m4200(__this, /*hidden argument*/&MatchDirectConnectInfo_get_privateAddress_m4200_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral340, L_8, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern MethodInfo MatchDirectConnectInfo_Parse_m4203_MethodInfo;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m4203 (MatchDirectConnectInfo_t789 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_Parse_m4203_init;
	if (!MatchDirectConnectInfo_Parse_m4203_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		MatchDirectConnectInfo_Parse_m4203_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m4117(__this, (String_t*) &_stringLiteral333, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m4117_MethodInfo);
		MatchDirectConnectInfo_set_nodeId_m4197(__this, L_4, /*hidden argument*/&MatchDirectConnectInfo_set_nodeId_m4197_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral341, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		MatchDirectConnectInfo_set_publicAddress_m4199(__this, L_7, /*hidden argument*/&MatchDirectConnectInfo_set_publicAddress_m4199_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral342, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		MatchDirectConnectInfo_set_privateAddress_m4201(__this, L_10, /*hidden argument*/&MatchDirectConnectInfo_set_privateAddress_m4201_MethodInfo);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_12, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_14 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_14, L_13, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDesc_t791_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo List_1_t790_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
extern Il2CppType List_1_t790_0_0_0;
extern MethodInfo MatchDesc_get_networkId_m4205_MethodInfo;
extern MethodInfo MatchDesc_get_name_m4207_MethodInfo;
extern MethodInfo MatchDesc_get_averageEloScore_m4209_MethodInfo;
extern MethodInfo MatchDesc_get_maxSize_m4210_MethodInfo;
extern MethodInfo MatchDesc_get_currentSize_m4212_MethodInfo;
extern MethodInfo MatchDesc_get_isPrivate_m4214_MethodInfo;
extern MethodInfo MatchDesc_get_matchAttributes_m4216_MethodInfo;
extern MethodInfo MatchDesc_get_directConnectInfos_m4218_MethodInfo;
extern MethodInfo List_1_get_Count_m4634_MethodInfo;
extern MethodInfo ResponseBase_ParseJSONUInt64_m4118_MethodInfo;
extern MethodInfo MatchDesc_set_networkId_m4206_MethodInfo;
extern MethodInfo MatchDesc_set_name_m4208_MethodInfo;
extern MethodInfo ResponseBase_ParseJSONInt32_m4116_MethodInfo;
extern MethodInfo MatchDesc_set_maxSize_m4211_MethodInfo;
extern MethodInfo MatchDesc_set_currentSize_m4213_MethodInfo;
extern MethodInfo ResponseBase_ParseJSONBool_m4119_MethodInfo;
extern MethodInfo MatchDesc_set_isPrivate_m4215_MethodInfo;
extern MethodInfo MatchDesc_set_directConnectInfos_m4219_MethodInfo;
struct ResponseBase_t777;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t790 * ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635 (ResponseBase_t777 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m4634_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635_GenericMethod;


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern MethodInfo MatchDesc__ctor_m4204_MethodInfo;
extern "C" void MatchDesc__ctor_m4204 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m4114(__this, /*hidden argument*/&ResponseBase__ctor_m4114_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m4205 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m4206 (MatchDesc_t791 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m4207 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m4208 (MatchDesc_t791 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m4209 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m4210 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m4211 (MatchDesc_t791 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m4212 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m4213 (MatchDesc_t791 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m4214 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m4215 (MatchDesc_t791 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t781 * MatchDesc_get_matchAttributes_m4216 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t781 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern MethodInfo MatchDesc_get_hostNodeId_m4217_MethodInfo;
extern "C" uint16_t MatchDesc_get_hostNodeId_m4217 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t790 * MatchDesc_get_directConnectInfos_m4218 (MatchDesc_t791 * __this, MethodInfo* method)
{
	{
		List_1_t790 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m4219 (MatchDesc_t791 * __this, List_1_t790 * ___value, MethodInfo* method)
{
	{
		List_1_t790 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern MethodInfo MatchDesc_ToString_m4220_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m4633_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m4634_MethodInfo_var;
extern "C" String_t* MatchDesc_ToString_m4220 (MatchDesc_t791 * __this, MethodInfo* method)
{
	static bool MatchDesc_ToString_m4220_init;
	if (!MatchDesc_ToString_m4220_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Dictionary_2_get_Count_m4633_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m4633_GenericMethod);
		List_1_get_Count_m4634_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m4634_GenericMethod);
		MatchDesc_ToString_m4220_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t194* G_B2_1 = {0};
	ObjectU5BU5D_t194* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t194* G_B1_1 = {0};
	ObjectU5BU5D_t194* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t194* G_B3_2 = {0};
	ObjectU5BU5D_t194* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m1098(__this, /*hidden argument*/&Object_ToString_m1098_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m4205(__this, /*hidden argument*/&MatchDesc_get_networkId_m4205_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4626(L_5, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t194* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m4207(__this, /*hidden argument*/&MatchDesc_get_name_m4207_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t194* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m4209(__this, /*hidden argument*/&MatchDesc_get_averageEloScore_m4209_MethodInfo);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t194* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m4210(__this, /*hidden argument*/&MatchDesc_get_maxSize_m4210_MethodInfo);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t194* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m4212(__this, /*hidden argument*/&MatchDesc_get_currentSize_m4212_MethodInfo);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t194* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m4214(__this, /*hidden argument*/&MatchDesc_get_isPrivate_m4214_MethodInfo);
		bool L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t194* L_25 = L_21;
		Dictionary_2_t781 * L_26 = MatchDesc_get_matchAttributes_m4216(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m4216_MethodInfo);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral343;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral343;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t781 * L_27 = MatchDesc_get_matchAttributes_m4216(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m4216_MethodInfo);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m4633_MethodInfo_var, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t194* L_31 = G_B3_3;
		List_1_t790 * L_32 = MatchDesc_get_directConnectInfos_m4218(__this, /*hidden argument*/&MatchDesc_get_directConnectInfos_m4218_MethodInfo);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m4634_MethodInfo_var, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m3765(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern MethodInfo MatchDesc_Parse_m4221_MethodInfo;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635_MethodInfo_var;
extern "C" void MatchDesc_Parse_m4221 (MatchDesc_t791 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDesc_Parse_m4221_init;
	if (!MatchDesc_Parse_m4221_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635_GenericMethod);
		MatchDesc_Parse_m4221_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m4118(__this, (String_t*) &_stringLiteral331, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m4118_MethodInfo);
		MatchDesc_set_networkId_m4206(__this, L_4, /*hidden argument*/&MatchDesc_set_networkId_m4206_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral15, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		MatchDesc_set_name_m4208(__this, L_7, /*hidden argument*/&MatchDesc_set_name_m4208_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m4116(__this, (String_t*) &_stringLiteral344, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONInt32_m4116_MethodInfo);
		MatchDesc_set_maxSize_m4211(__this, L_10, /*hidden argument*/&MatchDesc_set_maxSize_m4211_MethodInfo);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m4116(__this, (String_t*) &_stringLiteral345, L_11, L_12, /*hidden argument*/&ResponseBase_ParseJSONInt32_m4116_MethodInfo);
		MatchDesc_set_currentSize_m4213(__this, L_13, /*hidden argument*/&MatchDesc_set_currentSize_m4213_MethodInfo);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m4119(__this, (String_t*) &_stringLiteral346, L_14, L_15, /*hidden argument*/&ResponseBase_ParseJSONBool_m4119_MethodInfo);
		MatchDesc_set_isPrivate_m4215(__this, L_16, /*hidden argument*/&MatchDesc_set_isPrivate_m4215_MethodInfo);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t790 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635(__this, (String_t*) &_stringLiteral347, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t789_m4635_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m4219(__this, L_19, /*hidden argument*/&MatchDesc_set_directConnectInfos_m4219_MethodInfo);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_21, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_23 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_23, L_22, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchResponse_t793_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
extern TypeInfo Response_t779_il2cpp_TypeInfo;
extern TypeInfo List_1_t792_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
extern Il2CppType List_1_t792_0_0_0;
extern MethodInfo BasicResponse__ctor_m4127_MethodInfo;
extern MethodInfo Response_ToString_m4125_MethodInfo;
extern MethodInfo ListMatchResponse_get_matches_m4223_MethodInfo;
extern MethodInfo List_1_get_Count_m4636_MethodInfo;
extern MethodInfo Response_Parse_m4126_MethodInfo;
extern MethodInfo ListMatchResponse_set_matches_m4224_MethodInfo;
struct ResponseBase_t777;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t792 * ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637 (ResponseBase_t777 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m4636_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637_GenericMethod;


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern MethodInfo ListMatchResponse__ctor_m4222_MethodInfo;
extern "C" void ListMatchResponse__ctor_m4222 (ListMatchResponse_t793 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m4127(__this, /*hidden argument*/&BasicResponse__ctor_m4127_MethodInfo);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t792 * ListMatchResponse_get_matches_m4223 (ListMatchResponse_t793 * __this, MethodInfo* method)
{
	{
		List_1_t792 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m4224 (ListMatchResponse_t793 * __this, List_1_t792 * ___value, MethodInfo* method)
{
	{
		List_1_t792 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern MethodInfo ListMatchResponse_ToString_m4225_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m4636_MethodInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m4225 (ListMatchResponse_t793 * __this, MethodInfo* method)
{
	static bool ListMatchResponse_ToString_m4225_init;
	if (!ListMatchResponse_ToString_m4225_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		List_1_get_Count_m4636_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m4636_GenericMethod);
		ListMatchResponse_ToString_m4225_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m4125(__this, /*hidden argument*/&Response_ToString_m4125_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		List_1_t792 * L_3 = ListMatchResponse_get_matches_m4223(__this, /*hidden argument*/&ListMatchResponse_get_matches_m4223_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m4636_MethodInfo_var, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral348, L_2, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern MethodInfo ListMatchResponse_Parse_m4226_MethodInfo;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m4226 (ListMatchResponse_t793 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool ListMatchResponse_Parse_m4226_init;
	if (!ListMatchResponse_Parse_m4226_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637_GenericMethod);
		ListMatchResponse_Parse_m4226_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m4126(__this, L_0, /*hidden argument*/&Response_Parse_m4126_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t792 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637(__this, (String_t*) &_stringLiteral349, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t791_m4637_MethodInfo_var);
		ListMatchResponse_set_matches_m4224(__this, L_5, /*hidden argument*/&ListMatchResponse_set_matches_m4224_MethodInfo);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_7, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_9 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_9, L_8, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AppID_t794_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SourceID_t795_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkAccessToken_t798_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo ByteU5BU5D_t720_il2cpp_TypeInfo;
extern TypeInfo Byte_t556_il2cpp_TypeInfo;
extern TypeInfo Convert_t907_il2cpp_TypeInfo;
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t720_0_0_0;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo Convert_ToBase64String_m4638_MethodInfo;


// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern MethodInfo NetworkAccessToken__ctor_m4227_MethodInfo;
extern TypeInfo* ByteU5BU5D_t720_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m4227 (NetworkAccessToken_t798 * __this, MethodInfo* method)
{
	static bool NetworkAccessToken__ctor_m4227_init;
	if (!NetworkAccessToken__ctor_m4227_init)
	{
		ByteU5BU5D_t720_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t720_0_0_0);
		NetworkAccessToken__ctor_m4227_init = true;
	}
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		__this->___array_0 = ((ByteU5BU5D_t720*)SZArrayNew(ByteU5BU5D_t720_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern MethodInfo NetworkAccessToken_GetByteString_m4228_MethodInfo;
extern "C" String_t* NetworkAccessToken_GetByteString_m4228 (NetworkAccessToken_t798 * __this, MethodInfo* method)
{
	{
		ByteU5BU5D_t720* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		String_t* L_1 = Convert_ToBase64String_m4638(NULL /*static, unused*/, L_0, /*hidden argument*/&Convert_ToBase64String_m4638_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Utility_t801_il2cpp_TypeInfo;
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
extern TypeInfo Random_t799_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t800_il2cpp_TypeInfo;
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t800_0_0_0;
extern MethodInfo Environment_get_TickCount_m4639_MethodInfo;
extern MethodInfo Random__ctor_m4640_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4641_MethodInfo;
extern MethodInfo SystemInfo_get_deviceUniqueIdentifier_m3239_MethodInfo;
extern MethodInfo String_Concat_m897_MethodInfo;
extern MethodInfo String_GetHashCode_m4537_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m4642_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m4641_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m4642_GenericMethod;


// System.Void UnityEngine.Networking.Utility::.cctor()
extern MethodInfo Utility__cctor_m4229_MethodInfo;
extern TypeInfo* Dictionary_2_t800_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4641_MethodInfo_var;
extern "C" void Utility__cctor_m4229 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Utility__cctor_m4229_init;
	if (!Utility__cctor_m4229_init)
	{
		Dictionary_2_t800_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t800_0_0_0);
		Dictionary_2__ctor_m4641_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4641_GenericMethod);
		Utility__cctor_m4229_init = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m4639(NULL /*static, unused*/, /*hidden argument*/&Environment_get_TickCount_m4639_MethodInfo);
		Random_t799 * L_1 = (Random_t799 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Random_t799_il2cpp_TypeInfo));
		Random__ctor_m4640(L_1, L_0, /*hidden argument*/&Random__ctor_m4640_MethodInfo);
		((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t800 * L_2 = (Dictionary_2_t800 *)il2cpp_codegen_object_new (Dictionary_2_t800_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4641(L_2, /*hidden argument*/Dictionary_2__ctor_m4641_MethodInfo_var);
		((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern MethodInfo Utility_GetSourceID_m4230_MethodInfo;
extern "C" uint64_t Utility_GetSourceID_m4230 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m3239(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_deviceUniqueIdentifier_m3239_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		int32_t L_1 = ((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m897(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&String_Concat_m897_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m4537_MethodInfo, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern MethodInfo Utility_SetAppID_m4231_MethodInfo;
extern "C" void Utility_SetAppID_m4231 (Object_t * __this /* static, unused */, uint64_t ___newAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern MethodInfo Utility_GetAppID_m4232_MethodInfo;
extern "C" uint64_t Utility_GetAppID_m4232 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		uint64_t L_0 = ((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo Utility_GetAccessTokenForNetwork_m4233_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m4642_MethodInfo_var;
extern "C" NetworkAccessToken_t798 * Utility_GetAccessTokenForNetwork_m4233 (Object_t * __this /* static, unused */, uint64_t ___netId, MethodInfo* method)
{
	static bool Utility_GetAccessTokenForNetwork_m4233_init;
	if (!Utility_GetAccessTokenForNetwork_m4233_init)
	{
		Dictionary_2_TryGetValue_m4642_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4642_GenericMethod);
		Utility_GetAccessTokenForNetwork_m4233_init = true;
	}
	NetworkAccessToken_t798 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		Dictionary_2_t800 * L_0 = ((Utility_t801_StaticFields*)InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t798 ** >::Invoke(Dictionary_2_TryGetValue_m4642_MethodInfo_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t798 * L_3 = (NetworkAccessToken_t798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetworkAccessToken_t798_il2cpp_TypeInfo));
		NetworkAccessToken__ctor_m4227(L_3, /*hidden argument*/&NetworkAccessToken__ctor_m4227_MethodInfo);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t798 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkMatch_t803_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
extern TypeInfo Uri_t802_il2cpp_TypeInfo;
extern TypeInfo CreateMatchRequest_t782_il2cpp_TypeInfo;
extern TypeInfo WWWForm_t721_il2cpp_TypeInfo;
extern TypeInfo Enum_t227_il2cpp_TypeInfo;
extern TypeInfo UInt32_t915_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t718_il2cpp_TypeInfo;
extern TypeInfo WWW_t717_il2cpp_TypeInfo;
extern TypeInfo JoinMatchRequest_t784_il2cpp_TypeInfo;
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"
extern Il2CppType Dictionary_2_t718_0_0_0;
extern MethodInfo Uri__ctor_m4643_MethodInfo;
extern MethodInfo MonoBehaviour__ctor_m575_MethodInfo;
extern MethodInfo PlayerPrefs_GetString_m3901_MethodInfo;
extern MethodInfo UInt64_TryParse_m4644_MethodInfo;
extern MethodInfo Debug_Log_m922_MethodInfo;
extern MethodInfo NetworkMatch_SetProgramAppID_m4237_MethodInfo;
extern MethodInfo CreateMatchRequest__ctor_m4128_MethodInfo;
extern MethodInfo CreateMatchRequest_set_name_m4130_MethodInfo;
extern MethodInfo CreateMatchRequest_set_size_m4132_MethodInfo;
extern MethodInfo CreateMatchRequest_set_advertise_m4134_MethodInfo;
extern MethodInfo CreateMatchRequest_set_password_m4136_MethodInfo;
extern MethodInfo NetworkMatch_CreateMatch_m4239_MethodInfo;
extern MethodInfo NetworkMatch_get_baseUri_m4235_MethodInfo;
extern MethodInfo Uri__ctor_m4645_MethodInfo;
extern MethodInfo WWWForm__ctor_m3751_MethodInfo;
extern MethodInfo Enum_ToString_m1070_MethodInfo;
extern MethodInfo WWWForm_AddField_m3752_MethodInfo;
extern MethodInfo WWWForm_AddField_m3754_MethodInfo;
extern MethodInfo CreateMatchRequest_get_name_m4129_MethodInfo;
extern MethodInfo CreateMatchRequest_get_size_m4131_MethodInfo;
extern MethodInfo UInt32_ToString_m4646_MethodInfo;
extern MethodInfo CreateMatchRequest_get_advertise_m4133_MethodInfo;
extern MethodInfo Boolean_ToString_m4647_MethodInfo;
extern MethodInfo CreateMatchRequest_get_password_m4135_MethodInfo;
extern MethodInfo WWWForm_get_headers_m3755_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m4593_MethodInfo;
extern MethodInfo Uri_ToString_m4648_MethodInfo;
extern MethodInfo WWW__ctor_m3736_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m665_MethodInfo;
extern MethodInfo JoinMatchRequest__ctor_m4154_MethodInfo;
extern MethodInfo JoinMatchRequest_set_networkId_m4156_MethodInfo;
extern MethodInfo JoinMatchRequest_set_password_m4158_MethodInfo;
extern MethodInfo NetworkMatch_JoinMatch_m4241_MethodInfo;
extern MethodInfo JoinMatchRequest_get_networkId_m4155_MethodInfo;
extern MethodInfo JoinMatchRequest_get_password_m4157_MethodInfo;
extern MethodInfo NetworkMatch_DestroyMatch_m4243_MethodInfo;
extern MethodInfo NetworkMatch_DropConnection_m4245_MethodInfo;
extern MethodInfo NetworkMatch_ListMatches_m4247_MethodInfo;
struct NetworkMatch_t803;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649 (NetworkMatch_t803 * __this, WWW_t717 * p0, ResponseDelegate_1_t804 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t803;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_0.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650 (NetworkMatch_t803 * __this, WWW_t717 * p0, ResponseDelegate_1_t805 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t803;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_1.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651 (NetworkMatch_t803 * __this, WWW_t717 * p0, ResponseDelegate_1_t806 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t803;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_2.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652 (NetworkMatch_t803 * __this, WWW_t717 * p0, ResponseDelegate_1_t807 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_set_Item_m4593_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern MethodInfo NetworkMatch__ctor_m4234_MethodInfo;
extern "C" void NetworkMatch__ctor_m4234 (NetworkMatch_t803 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri_t802 * L_0 = (Uri_t802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri__ctor_m4643(L_0, (String_t*) &_stringLiteral350, /*hidden argument*/&Uri__ctor_m4643_MethodInfo);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		String_t* L_1 = PlayerPrefs_GetString_m3901(NULL /*static, unused*/, (String_t*) &_stringLiteral351, /*hidden argument*/&PlayerPrefs_GetString_m3901_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m4644(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/&UInt64_TryParse_m4644_MethodInfo);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m922(NULL /*static, unused*/, (String_t*) &_stringLiteral352, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m4237(__this, L_4, /*hidden argument*/&NetworkMatch_SetProgramAppID_m4237_MethodInfo);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t802 * NetworkMatch_get_baseUri_m4235 (NetworkMatch_t803 * __this, MethodInfo* method)
{
	{
		Uri_t802 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern MethodInfo NetworkMatch_set_baseUri_m4236_MethodInfo;
extern "C" void NetworkMatch_set_baseUri_m4236 (NetworkMatch_t803 * __this, Uri_t802 * ___value, MethodInfo* method)
{
	{
		Uri_t802 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m4237 (NetworkMatch_t803 * __this, uint64_t ___programAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		Utility_SetAppID_m4231(NULL /*static, unused*/, L_0, /*hidden argument*/&Utility_SetAppID_m4231_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo NetworkMatch_CreateMatch_m4238_MethodInfo;
extern "C" Coroutine_t435 * NetworkMatch_CreateMatch_m4238 (NetworkMatch_t803 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t804 * ___callback, MethodInfo* method)
{
	CreateMatchRequest_t782 * V_0 = {0};
	{
		CreateMatchRequest_t782 * L_0 = (CreateMatchRequest_t782 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CreateMatchRequest_t782_il2cpp_TypeInfo));
		CreateMatchRequest__ctor_m4128(L_0, /*hidden argument*/&CreateMatchRequest__ctor_m4128_MethodInfo);
		V_0 = L_0;
		CreateMatchRequest_t782 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m4130(L_1, L_2, /*hidden argument*/&CreateMatchRequest_set_name_m4130_MethodInfo);
		CreateMatchRequest_t782 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m4132(L_3, L_4, /*hidden argument*/&CreateMatchRequest_set_size_m4132_MethodInfo);
		CreateMatchRequest_t782 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m4134(L_5, L_6, /*hidden argument*/&CreateMatchRequest_set_advertise_m4134_MethodInfo);
		CreateMatchRequest_t782 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m4136(L_7, L_8, /*hidden argument*/&CreateMatchRequest_set_password_m4136_MethodInfo);
		CreateMatchRequest_t782 * L_9 = V_0;
		ResponseDelegate_1_t804 * L_10 = ___callback;
		Coroutine_t435 * L_11 = NetworkMatch_CreateMatch_m4239(__this, L_9, L_10, /*hidden argument*/&NetworkMatch_CreateMatch_m4239_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m4593_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649_MethodInfo_var;
extern "C" Coroutine_t435 * NetworkMatch_CreateMatch_m4239 (NetworkMatch_t803 * __this, CreateMatchRequest_t782 * ___req, ResponseDelegate_1_t804 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_CreateMatch_m4239_init;
	if (!NetworkMatch_CreateMatch_m4239_init)
	{
		Dictionary_2_set_Item_m4593_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m4593_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649_GenericMethod);
		NetworkMatch_CreateMatch_m4239_init = true;
	}
	Uri_t802 * V_0 = {0};
	WWWForm_t721 * V_1 = {0};
	WWW_t717 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t802 * L_0 = NetworkMatch_get_baseUri_m4235(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m4235_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri_t802 * L_1 = (Uri_t802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri__ctor_m4645(L_1, L_0, (String_t*) &_stringLiteral353, /*hidden argument*/&Uri__ctor_m4645_MethodInfo);
		V_0 = L_1;
		Uri_t802 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m897(NULL /*static, unused*/, (String_t*) &_stringLiteral354, L_2, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		WWWForm_t721 * L_4 = (WWWForm_t721 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t721_il2cpp_TypeInfo));
		WWWForm__ctor_m3751(L_4, /*hidden argument*/&WWWForm__ctor_m3751_MethodInfo);
		V_1 = L_4;
		WWWForm_t721 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m4230(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m4230_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t795_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3752(L_5, (String_t*) &_stringLiteral355, L_9, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m4232(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m4232_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t794_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3752(L_10, (String_t*) &_stringLiteral356, L_14, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m3754(L_15, (String_t*) &_stringLiteral332, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m3754(L_16, (String_t*) &_stringLiteral357, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_17 = V_1;
		CreateMatchRequest_t782 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m4129(L_18, /*hidden argument*/&CreateMatchRequest_get_name_m4129_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m3752(L_17, (String_t*) &_stringLiteral15, L_19, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_20 = V_1;
		CreateMatchRequest_t782 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m4131(L_21, /*hidden argument*/&CreateMatchRequest_get_size_m4131_MethodInfo);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m4646((&V_3), /*hidden argument*/&UInt32_ToString_m4646_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m3752(L_20, (String_t*) &_stringLiteral358, L_23, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_24 = V_1;
		CreateMatchRequest_t782 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m4133(L_25, /*hidden argument*/&CreateMatchRequest_get_advertise_m4133_MethodInfo);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m4647((&V_4), /*hidden argument*/&Boolean_ToString_m4647_MethodInfo);
		NullCheck(L_24);
		WWWForm_AddField_m3752(L_24, (String_t*) &_stringLiteral359, L_27, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_28 = V_1;
		CreateMatchRequest_t782 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m4135(L_29, /*hidden argument*/&CreateMatchRequest_get_password_m4135_MethodInfo);
		NullCheck(L_28);
		WWWForm_AddField_m3752(L_28, (String_t*) &_stringLiteral360, L_30, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t718 * L_32 = WWWForm_get_headers_m3755(L_31, /*hidden argument*/&WWWForm_get_headers_m3755_MethodInfo);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m4593_MethodInfo_var, L_32, (String_t*) &_stringLiteral361, (String_t*) &_stringLiteral362);
		Uri_t802 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m4648_MethodInfo, L_33);
		WWWForm_t721 * L_35 = V_1;
		WWW_t717 * L_36 = (WWW_t717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t717_il2cpp_TypeInfo));
		WWW__ctor_m3736(L_36, L_34, L_35, /*hidden argument*/&WWW__ctor_m3736_MethodInfo);
		V_2 = L_36;
		WWW_t717 * L_37 = V_2;
		ResponseDelegate_1_t804 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t783_m4649_MethodInfo_var);
		Coroutine_t435 * L_40 = MonoBehaviour_StartCoroutine_m665(__this, L_39, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo NetworkMatch_JoinMatch_m4240_MethodInfo;
extern "C" Coroutine_t435 * NetworkMatch_JoinMatch_m4240 (NetworkMatch_t803 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t805 * ___callback, MethodInfo* method)
{
	JoinMatchRequest_t784 * V_0 = {0};
	{
		JoinMatchRequest_t784 * L_0 = (JoinMatchRequest_t784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JoinMatchRequest_t784_il2cpp_TypeInfo));
		JoinMatchRequest__ctor_m4154(L_0, /*hidden argument*/&JoinMatchRequest__ctor_m4154_MethodInfo);
		V_0 = L_0;
		JoinMatchRequest_t784 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m4156(L_1, L_2, /*hidden argument*/&JoinMatchRequest_set_networkId_m4156_MethodInfo);
		JoinMatchRequest_t784 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m4158(L_3, L_4, /*hidden argument*/&JoinMatchRequest_set_password_m4158_MethodInfo);
		JoinMatchRequest_t784 * L_5 = V_0;
		ResponseDelegate_1_t805 * L_6 = ___callback;
		Coroutine_t435 * L_7 = NetworkMatch_JoinMatch_m4241(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_JoinMatch_m4241_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m4593_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650_MethodInfo_var;
extern "C" Coroutine_t435 * NetworkMatch_JoinMatch_m4241 (NetworkMatch_t803 * __this, JoinMatchRequest_t784 * ___req, ResponseDelegate_1_t805 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_JoinMatch_m4241_init;
	if (!NetworkMatch_JoinMatch_m4241_init)
	{
		Dictionary_2_set_Item_m4593_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m4593_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650_GenericMethod);
		NetworkMatch_JoinMatch_m4241_init = true;
	}
	Uri_t802 * V_0 = {0};
	WWWForm_t721 * V_1 = {0};
	WWW_t717 * V_2 = {0};
	{
		Uri_t802 * L_0 = NetworkMatch_get_baseUri_m4235(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m4235_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri_t802 * L_1 = (Uri_t802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri__ctor_m4645(L_1, L_0, (String_t*) &_stringLiteral363, /*hidden argument*/&Uri__ctor_m4645_MethodInfo);
		V_0 = L_1;
		Uri_t802 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m897(NULL /*static, unused*/, (String_t*) &_stringLiteral364, L_2, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		WWWForm_t721 * L_4 = (WWWForm_t721 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t721_il2cpp_TypeInfo));
		WWWForm__ctor_m3751(L_4, /*hidden argument*/&WWWForm__ctor_m3751_MethodInfo);
		V_1 = L_4;
		WWWForm_t721 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m4230(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m4230_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t795_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3752(L_5, (String_t*) &_stringLiteral355, L_9, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m4232(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m4232_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t794_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3752(L_10, (String_t*) &_stringLiteral356, L_14, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m3754(L_15, (String_t*) &_stringLiteral332, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m3754(L_16, (String_t*) &_stringLiteral357, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_17 = V_1;
		JoinMatchRequest_t784 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m4155(L_18, /*hidden argument*/&JoinMatchRequest_get_networkId_m4155_MethodInfo);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m3752(L_17, (String_t*) &_stringLiteral331, L_22, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_23 = V_1;
		JoinMatchRequest_t784 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m4157(L_24, /*hidden argument*/&JoinMatchRequest_get_password_m4157_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m3752(L_23, (String_t*) &_stringLiteral360, L_25, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t718 * L_27 = WWWForm_get_headers_m3755(L_26, /*hidden argument*/&WWWForm_get_headers_m3755_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m4593_MethodInfo_var, L_27, (String_t*) &_stringLiteral361, (String_t*) &_stringLiteral362);
		Uri_t802 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m4648_MethodInfo, L_28);
		WWWForm_t721 * L_30 = V_1;
		WWW_t717 * L_31 = (WWW_t717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t717_il2cpp_TypeInfo));
		WWW__ctor_m3736(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m3736_MethodInfo);
		V_2 = L_31;
		WWW_t717 * L_32 = V_2;
		ResponseDelegate_1_t805 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t785_m4650_MethodInfo_var);
		Coroutine_t435 * L_35 = MonoBehaviour_StartCoroutine_m665(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DestroyMatch_m4242_MethodInfo;
extern "C" Coroutine_t435 * NetworkMatch_DestroyMatch_m4242 (NetworkMatch_t803 * __this, uint64_t ___netId, ResponseDelegate_1_t806 * ___callback, MethodInfo* method)
{
	DestroyMatchRequest_t786 * V_0 = {0};
	{
		DestroyMatchRequest_t786 * L_0 = (DestroyMatchRequest_t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DestroyMatchRequest_t786_il2cpp_TypeInfo));
		DestroyMatchRequest__ctor_m4175(L_0, /*hidden argument*/&DestroyMatchRequest__ctor_m4175_MethodInfo);
		V_0 = L_0;
		DestroyMatchRequest_t786 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m4177(L_1, L_2, /*hidden argument*/&DestroyMatchRequest_set_networkId_m4177_MethodInfo);
		DestroyMatchRequest_t786 * L_3 = V_0;
		ResponseDelegate_1_t806 * L_4 = ___callback;
		Coroutine_t435 * L_5 = NetworkMatch_DestroyMatch_m4243(__this, L_3, L_4, /*hidden argument*/&NetworkMatch_DestroyMatch_m4243_MethodInfo);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m4593_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_MethodInfo_var;
extern "C" Coroutine_t435 * NetworkMatch_DestroyMatch_m4243 (NetworkMatch_t803 * __this, DestroyMatchRequest_t786 * ___req, ResponseDelegate_1_t806 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DestroyMatch_m4243_init;
	if (!NetworkMatch_DestroyMatch_m4243_init)
	{
		Dictionary_2_set_Item_m4593_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m4593_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_GenericMethod);
		NetworkMatch_DestroyMatch_m4243_init = true;
	}
	Uri_t802 * V_0 = {0};
	WWWForm_t721 * V_1 = {0};
	WWW_t717 * V_2 = {0};
	{
		Uri_t802 * L_0 = NetworkMatch_get_baseUri_m4235(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m4235_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri_t802 * L_1 = (Uri_t802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri__ctor_m4645(L_1, L_0, (String_t*) &_stringLiteral365, /*hidden argument*/&Uri__ctor_m4645_MethodInfo);
		V_0 = L_1;
		Uri_t802 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m4648_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral366, L_3, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_4, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		WWWForm_t721 * L_5 = (WWWForm_t721 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t721_il2cpp_TypeInfo));
		WWWForm__ctor_m3751(L_5, /*hidden argument*/&WWWForm__ctor_m3751_MethodInfo);
		V_1 = L_5;
		WWWForm_t721 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		uint64_t L_7 = Utility_GetSourceID_m4230(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m4230_MethodInfo);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&SourceID_t795_il2cpp_TypeInfo), &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m3752(L_6, (String_t*) &_stringLiteral355, L_10, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m4232(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m4232_MethodInfo);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&AppID_t794_il2cpp_TypeInfo), &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m3752(L_11, (String_t*) &_stringLiteral356, L_15, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_16 = V_1;
		DestroyMatchRequest_t786 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m4176(L_17, /*hidden argument*/&DestroyMatchRequest_get_networkId_m4176_MethodInfo);
		NetworkAccessToken_t798 * L_19 = Utility_GetAccessTokenForNetwork_m4233(NULL /*static, unused*/, L_18, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m4233_MethodInfo);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m4228(L_19, /*hidden argument*/&NetworkAccessToken_GetByteString_m4228_MethodInfo);
		NullCheck(L_16);
		WWWForm_AddField_m3752(L_16, (String_t*) &_stringLiteral332, L_20, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m3754(L_21, (String_t*) &_stringLiteral357, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_22 = V_1;
		DestroyMatchRequest_t786 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m4176(L_23, /*hidden argument*/&DestroyMatchRequest_get_networkId_m4176_MethodInfo);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m3752(L_22, (String_t*) &_stringLiteral331, L_27, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t718 * L_29 = WWWForm_get_headers_m3755(L_28, /*hidden argument*/&WWWForm_get_headers_m3755_MethodInfo);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m4593_MethodInfo_var, L_29, (String_t*) &_stringLiteral361, (String_t*) &_stringLiteral362);
		Uri_t802 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m4648_MethodInfo, L_30);
		WWWForm_t721 * L_32 = V_1;
		WWW_t717 * L_33 = (WWW_t717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t717_il2cpp_TypeInfo));
		WWW__ctor_m3736(L_33, L_31, L_32, /*hidden argument*/&WWW__ctor_m3736_MethodInfo);
		V_2 = L_33;
		WWW_t717 * L_34 = V_2;
		ResponseDelegate_1_t806 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_MethodInfo_var);
		Coroutine_t435 * L_37 = MonoBehaviour_StartCoroutine_m665(__this, L_36, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DropConnection_m4244_MethodInfo;
extern "C" Coroutine_t435 * NetworkMatch_DropConnection_m4244 (NetworkMatch_t803 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t806 * ___callback, MethodInfo* method)
{
	DropConnectionRequest_t787 * V_0 = {0};
	{
		DropConnectionRequest_t787 * L_0 = (DropConnectionRequest_t787 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DropConnectionRequest_t787_il2cpp_TypeInfo));
		DropConnectionRequest__ctor_m4179(L_0, /*hidden argument*/&DropConnectionRequest__ctor_m4179_MethodInfo);
		V_0 = L_0;
		DropConnectionRequest_t787 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m4181(L_1, L_2, /*hidden argument*/&DropConnectionRequest_set_networkId_m4181_MethodInfo);
		DropConnectionRequest_t787 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m4183(L_3, L_4, /*hidden argument*/&DropConnectionRequest_set_nodeId_m4183_MethodInfo);
		DropConnectionRequest_t787 * L_5 = V_0;
		ResponseDelegate_1_t806 * L_6 = ___callback;
		Coroutine_t435 * L_7 = NetworkMatch_DropConnection_m4245(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_DropConnection_m4245_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m4593_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_MethodInfo_var;
extern "C" Coroutine_t435 * NetworkMatch_DropConnection_m4245 (NetworkMatch_t803 * __this, DropConnectionRequest_t787 * ___req, ResponseDelegate_1_t806 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DropConnection_m4245_init;
	if (!NetworkMatch_DropConnection_m4245_init)
	{
		Dictionary_2_set_Item_m4593_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m4593_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_GenericMethod);
		NetworkMatch_DropConnection_m4245_init = true;
	}
	Uri_t802 * V_0 = {0};
	WWWForm_t721 * V_1 = {0};
	WWW_t717 * V_2 = {0};
	{
		Uri_t802 * L_0 = NetworkMatch_get_baseUri_m4235(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m4235_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri_t802 * L_1 = (Uri_t802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri__ctor_m4645(L_1, L_0, (String_t*) &_stringLiteral367, /*hidden argument*/&Uri__ctor_m4645_MethodInfo);
		V_0 = L_1;
		Uri_t802 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m897(NULL /*static, unused*/, (String_t*) &_stringLiteral368, L_2, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		WWWForm_t721 * L_4 = (WWWForm_t721 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t721_il2cpp_TypeInfo));
		WWWForm__ctor_m3751(L_4, /*hidden argument*/&WWWForm__ctor_m3751_MethodInfo);
		V_1 = L_4;
		WWWForm_t721 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m4230(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m4230_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t795_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3752(L_5, (String_t*) &_stringLiteral355, L_9, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m4232(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m4232_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t794_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3752(L_10, (String_t*) &_stringLiteral356, L_14, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_15 = V_1;
		DropConnectionRequest_t787 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m4180(L_16, /*hidden argument*/&DropConnectionRequest_get_networkId_m4180_MethodInfo);
		NetworkAccessToken_t798 * L_18 = Utility_GetAccessTokenForNetwork_m4233(NULL /*static, unused*/, L_17, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m4233_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m4228(L_18, /*hidden argument*/&NetworkAccessToken_GetByteString_m4228_MethodInfo);
		NullCheck(L_15);
		WWWForm_AddField_m3752(L_15, (String_t*) &_stringLiteral332, L_19, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m3754(L_20, (String_t*) &_stringLiteral357, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_21 = V_1;
		DropConnectionRequest_t787 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m4180(L_22, /*hidden argument*/&DropConnectionRequest_get_networkId_m4180_MethodInfo);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m3752(L_21, (String_t*) &_stringLiteral331, L_26, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_27 = V_1;
		DropConnectionRequest_t787 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m4182(L_28, /*hidden argument*/&DropConnectionRequest_get_nodeId_m4182_MethodInfo);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&NodeID_t797_il2cpp_TypeInfo), &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m3752(L_27, (String_t*) &_stringLiteral333, L_32, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t718 * L_34 = WWWForm_get_headers_m3755(L_33, /*hidden argument*/&WWWForm_get_headers_m3755_MethodInfo);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m4593_MethodInfo_var, L_34, (String_t*) &_stringLiteral361, (String_t*) &_stringLiteral362);
		Uri_t802 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m4648_MethodInfo, L_35);
		WWWForm_t721 * L_37 = V_1;
		WWW_t717 * L_38 = (WWW_t717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t717_il2cpp_TypeInfo));
		WWW__ctor_m3736(L_38, L_36, L_37, /*hidden argument*/&WWW__ctor_m3736_MethodInfo);
		V_2 = L_38;
		WWW_t717 * L_39 = V_2;
		ResponseDelegate_1_t806 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t780_m4651_MethodInfo_var);
		Coroutine_t435 * L_42 = MonoBehaviour_StartCoroutine_m665(__this, L_41, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo NetworkMatch_ListMatches_m4246_MethodInfo;
extern "C" Coroutine_t435 * NetworkMatch_ListMatches_m4246 (NetworkMatch_t803 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t807 * ___callback, MethodInfo* method)
{
	ListMatchRequest_t788 * V_0 = {0};
	{
		ListMatchRequest_t788 * L_0 = (ListMatchRequest_t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ListMatchRequest_t788_il2cpp_TypeInfo));
		ListMatchRequest__ctor_m4185(L_0, /*hidden argument*/&ListMatchRequest__ctor_m4185_MethodInfo);
		V_0 = L_0;
		ListMatchRequest_t788 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m4189(L_1, L_2, /*hidden argument*/&ListMatchRequest_set_pageNum_m4189_MethodInfo);
		ListMatchRequest_t788 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m4187(L_3, L_4, /*hidden argument*/&ListMatchRequest_set_pageSize_m4187_MethodInfo);
		ListMatchRequest_t788 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m4191(L_5, L_6, /*hidden argument*/&ListMatchRequest_set_nameFilter_m4191_MethodInfo);
		ListMatchRequest_t788 * L_7 = V_0;
		ResponseDelegate_1_t807 * L_8 = ___callback;
		Coroutine_t435 * L_9 = NetworkMatch_ListMatches_m4247(__this, L_7, L_8, /*hidden argument*/&NetworkMatch_ListMatches_m4247_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m4593_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652_MethodInfo_var;
extern "C" Coroutine_t435 * NetworkMatch_ListMatches_m4247 (NetworkMatch_t803 * __this, ListMatchRequest_t788 * ___req, ResponseDelegate_1_t807 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_ListMatches_m4247_init;
	if (!NetworkMatch_ListMatches_m4247_init)
	{
		Dictionary_2_set_Item_m4593_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m4593_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652_GenericMethod);
		NetworkMatch_ListMatches_m4247_init = true;
	}
	Uri_t802 * V_0 = {0};
	WWWForm_t721 * V_1 = {0};
	WWW_t717 * V_2 = {0};
	{
		Uri_t802 * L_0 = NetworkMatch_get_baseUri_m4235(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m4235_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri_t802 * L_1 = (Uri_t802 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo));
		Uri__ctor_m4645(L_1, L_0, (String_t*) &_stringLiteral369, /*hidden argument*/&Uri__ctor_m4645_MethodInfo);
		V_0 = L_1;
		Uri_t802 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m897(NULL /*static, unused*/, (String_t*) &_stringLiteral370, L_2, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		WWWForm_t721 * L_4 = (WWWForm_t721 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t721_il2cpp_TypeInfo));
		WWWForm__ctor_m3751(L_4, /*hidden argument*/&WWWForm__ctor_m3751_MethodInfo);
		V_1 = L_4;
		WWWForm_t721 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t801_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m4230(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m4230_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t795_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3752(L_5, (String_t*) &_stringLiteral355, L_9, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m4232(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m4232_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t794_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3752(L_10, (String_t*) &_stringLiteral356, L_14, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m3754(L_15, (String_t*) &_stringLiteral332, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m3754(L_16, (String_t*) &_stringLiteral357, 0, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_17 = V_1;
		ListMatchRequest_t788 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m4186(L_18, /*hidden argument*/&ListMatchRequest_get_pageSize_m4186_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m3754(L_17, (String_t*) &_stringLiteral371, L_19, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_20 = V_1;
		ListMatchRequest_t788 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m4188(L_21, /*hidden argument*/&ListMatchRequest_get_pageNum_m4188_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m3754(L_20, (String_t*) &_stringLiteral372, L_22, /*hidden argument*/&WWWForm_AddField_m3754_MethodInfo);
		WWWForm_t721 * L_23 = V_1;
		ListMatchRequest_t788 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m4190(L_24, /*hidden argument*/&ListMatchRequest_get_nameFilter_m4190_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m3752(L_23, (String_t*) &_stringLiteral373, L_25, /*hidden argument*/&WWWForm_AddField_m3752_MethodInfo);
		WWWForm_t721 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t718 * L_27 = WWWForm_get_headers_m3755(L_26, /*hidden argument*/&WWWForm_get_headers_m3755_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m4593_MethodInfo_var, L_27, (String_t*) &_stringLiteral361, (String_t*) &_stringLiteral362);
		Uri_t802 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m4648_MethodInfo, L_28);
		WWWForm_t721 * L_30 = V_1;
		WWW_t717 * L_31 = (WWW_t717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t717_il2cpp_TypeInfo));
		WWW__ctor_m3736(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m3736_MethodInfo);
		V_2 = L_31;
		WWW_t717 * L_32 = V_2;
		ResponseDelegate_1_t807 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t793_m4652_MethodInfo_var);
		Coroutine_t435 * L_35 = MonoBehaviour_StartCoroutine_m665(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonArray_t808_il2cpp_TypeInfo;
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
extern MethodInfo SimpleJson_SerializeObject_m4270_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m4653_GenericMethod;


// System.Void SimpleJson.JsonArray::.ctor()
extern MethodInfo JsonArray__ctor_m4248_MethodInfo;
extern MethodInfo* List_1__ctor_m4653_MethodInfo_var;
extern "C" void JsonArray__ctor_m4248 (JsonArray_t808 * __this, MethodInfo* method)
{
	static bool JsonArray__ctor_m4248_init;
	if (!JsonArray__ctor_m4248_init)
	{
		List_1__ctor_m4653_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4653_GenericMethod);
		JsonArray__ctor_m4248_init = true;
	}
	{
		List_1__ctor_m4653(__this, /*hidden argument*/List_1__ctor_m4653_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern MethodInfo JsonArray_ToString_m4249_MethodInfo;
extern "C" String_t* JsonArray_ToString_m4249 (JsonArray_t808 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m4270(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m4270_MethodInfo);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonObject_t810_il2cpp_TypeInfo;
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo Dictionary_2_t809_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t916_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t815_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t814_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern Il2CppType Dictionary_2_t809_0_0_0;
extern Il2CppType Enumerator_t916_0_0_0;
extern Il2CppType IEnumerator_1_t815_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m4654_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m4655_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m4656_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4657_MethodInfo;
extern MethodInfo Dictionary_2_Add_m4658_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m4659_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m4660_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m4661_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m4662_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo JsonObject_get_Count_m4263_MethodInfo;
extern MethodInfo JsonObject_GetEnumerator_m4266_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4663_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m4664_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m4665_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m4654_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m4655_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m4656_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m4657_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m4666_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m4658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m4659_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m4660_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m4667_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m4668_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m4661_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m4662_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4663_GenericMethod;


// System.Void SimpleJson.JsonObject::.ctor()
extern MethodInfo JsonObject__ctor_m4250_MethodInfo;
extern TypeInfo* Dictionary_2_t809_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4657_MethodInfo_var;
extern "C" void JsonObject__ctor_m4250 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject__ctor_m4250_init;
	if (!JsonObject__ctor_m4250_init)
	{
		Dictionary_2_t809_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t809_0_0_0);
		Dictionary_2__ctor_m4657_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4657_GenericMethod);
		JsonObject__ctor_m4250_init = true;
	}
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Dictionary_2_t809 * L_0 = (Dictionary_2_t809 *)il2cpp_codegen_object_new (Dictionary_2_t809_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4657(L_0, /*hidden argument*/Dictionary_2__ctor_m4657_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo JsonObject_System_Collections_IEnumerable_GetEnumerator_m4251_MethodInfo;
extern TypeInfo* Enumerator_t916_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m4666_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m4251 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject_System_Collections_IEnumerable_GetEnumerator_m4251_init;
	if (!JsonObject_System_Collections_IEnumerable_GetEnumerator_m4251_init)
	{
		Enumerator_t916_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t916_0_0_0);
		Dictionary_2_GetEnumerator_m4666_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m4666_GenericMethod);
		JsonObject_System_Collections_IEnumerable_GetEnumerator_m4251_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t916  L_1 = Dictionary_2_GetEnumerator_m4666(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m4666_MethodInfo_var);
		Enumerator_t916  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t916_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern MethodInfo JsonObject_Add_m4252_MethodInfo;
extern MethodInfo* Dictionary_2_Add_m4658_MethodInfo_var;
extern "C" void JsonObject_Add_m4252 (JsonObject_t810 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_Add_m4252_init;
	if (!JsonObject_Add_m4252_init)
	{
		Dictionary_2_Add_m4658_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4658_GenericMethod);
		JsonObject_Add_m4252_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m4658_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern MethodInfo JsonObject_get_Keys_m4253_MethodInfo;
extern MethodInfo* Dictionary_2_get_Keys_m4664_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m4253 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Keys_m4253_init;
	if (!JsonObject_get_Keys_m4253_init)
	{
		Dictionary_2_get_Keys_m4664_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Keys_m4664_GenericMethod);
		JsonObject_get_Keys_m4253_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t917 * L_1 = Dictionary_2_get_Keys_m4664(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4664_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern MethodInfo JsonObject_Remove_m4254_MethodInfo;
extern MethodInfo* Dictionary_2_Remove_m4659_MethodInfo_var;
extern "C" bool JsonObject_Remove_m4254 (JsonObject_t810 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_Remove_m4254_init;
	if (!JsonObject_Remove_m4254_init)
	{
		Dictionary_2_Remove_m4659_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m4659_GenericMethod);
		JsonObject_Remove_m4254_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m4659_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern MethodInfo JsonObject_TryGetValue_m4255_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m4660_MethodInfo_var;
extern "C" bool JsonObject_TryGetValue_m4255 (JsonObject_t810 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method)
{
	static bool JsonObject_TryGetValue_m4255_init;
	if (!JsonObject_TryGetValue_m4255_init)
	{
		Dictionary_2_TryGetValue_m4660_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4660_GenericMethod);
		JsonObject_TryGetValue_m4255_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(Dictionary_2_TryGetValue_m4660_MethodInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern MethodInfo JsonObject_get_Values_m4256_MethodInfo;
extern MethodInfo* Dictionary_2_get_Values_m4665_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m4256 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Values_m4256_init;
	if (!JsonObject_get_Values_m4256_init)
	{
		Dictionary_2_get_Values_m4665_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Values_m4665_GenericMethod);
		JsonObject_get_Values_m4256_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t918 * L_1 = Dictionary_2_get_Values_m4665(L_0, /*hidden argument*/Dictionary_2_get_Values_m4665_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern MethodInfo JsonObject_get_Item_m4257_MethodInfo;
extern MethodInfo* Dictionary_2_get_Item_m4654_MethodInfo_var;
extern "C" Object_t * JsonObject_get_Item_m4257 (JsonObject_t810 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_get_Item_m4257_init;
	if (!JsonObject_get_Item_m4257_init)
	{
		Dictionary_2_get_Item_m4654_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m4654_GenericMethod);
		JsonObject_get_Item_m4257_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m4654_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern MethodInfo JsonObject_set_Item_m4258_MethodInfo;
extern MethodInfo* Dictionary_2_set_Item_m4655_MethodInfo_var;
extern "C" void JsonObject_set_Item_m4258 (JsonObject_t810 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_set_Item_m4258_init;
	if (!JsonObject_set_Item_m4258_init)
	{
		Dictionary_2_set_Item_m4655_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m4655_GenericMethod);
		JsonObject_set_Item_m4258_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_set_Item_m4655_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Add_m4259_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m4667_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m4668_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4658_MethodInfo_var;
extern "C" void JsonObject_Add_m4259 (JsonObject_t810 * __this, KeyValuePair_2_t814  ___item, MethodInfo* method)
{
	static bool JsonObject_Add_m4259_init;
	if (!JsonObject_Add_m4259_init)
	{
		KeyValuePair_2_get_Key_m4667_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m4667_GenericMethod);
		KeyValuePair_2_get_Value_m4668_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m4668_GenericMethod);
		Dictionary_2_Add_m4658_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4658_GenericMethod);
		JsonObject_Add_m4259_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4667((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4667_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m4668((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m4668_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m4658_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern MethodInfo JsonObject_Clear_m4260_MethodInfo;
extern MethodInfo* Dictionary_2_Clear_m4661_MethodInfo_var;
extern "C" void JsonObject_Clear_m4260 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject_Clear_m4260_init;
	if (!JsonObject_Clear_m4260_init)
	{
		Dictionary_2_Clear_m4661_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Clear_m4661_GenericMethod);
		JsonObject_Clear_m4260_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m4661_MethodInfo_var, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Contains_m4261_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m4667_MethodInfo_var;
extern MethodInfo* Dictionary_2_ContainsKey_m4662_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m4654_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m4668_MethodInfo_var;
extern "C" bool JsonObject_Contains_m4261 (JsonObject_t810 * __this, KeyValuePair_2_t814  ___item, MethodInfo* method)
{
	static bool JsonObject_Contains_m4261_init;
	if (!JsonObject_Contains_m4261_init)
	{
		KeyValuePair_2_get_Key_m4667_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m4667_GenericMethod);
		Dictionary_2_ContainsKey_m4662_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m4662_GenericMethod);
		Dictionary_2_get_Item_m4654_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m4654_GenericMethod);
		KeyValuePair_2_get_Value_m4668_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m4668_GenericMethod);
		JsonObject_Contains_m4261_init = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4667((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4667_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m4662_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t809 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m4667((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4667_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m4654_MethodInfo_var, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m4668((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m4668_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern MethodInfo JsonObject_CopyTo_m4262_MethodInfo;
extern MethodInfo* IEnumerator_1_get_Current_m4663_MethodInfo_var;
extern "C" void JsonObject_CopyTo_m4262 (JsonObject_t810 * __this, KeyValuePair_2U5BU5D_t813* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	static bool JsonObject_CopyTo_m4262_init;
	if (!JsonObject_CopyTo_m4262_init)
	{
		IEnumerator_1_get_Current_m4663_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4663_GenericMethod);
		JsonObject_CopyTo_m4262_init = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t814  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t813* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&JsonObject_get_Count_m4263_MethodInfo, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&JsonObject_GetEnumerator_m4266_MethodInfo, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t814  L_5 = (KeyValuePair_2_t814 )InterfaceFuncInvoker0< KeyValuePair_2_t814  >::Invoke(IEnumerator_1_get_Current_m4663_MethodInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t813* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t814  L_9 = V_1;
			*((KeyValuePair_2_t814 *)(KeyValuePair_2_t814 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern MethodInfo* Dictionary_2_get_Count_m4656_MethodInfo_var;
extern "C" int32_t JsonObject_get_Count_m4263 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Count_m4263_init;
	if (!JsonObject_get_Count_m4263_init)
	{
		Dictionary_2_get_Count_m4656_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m4656_GenericMethod);
		JsonObject_get_Count_m4263_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m4656_MethodInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern MethodInfo JsonObject_get_IsReadOnly_m4264_MethodInfo;
extern "C" bool JsonObject_get_IsReadOnly_m4264 (JsonObject_t810 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Remove_m4265_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m4667_MethodInfo_var;
extern MethodInfo* Dictionary_2_Remove_m4659_MethodInfo_var;
extern "C" bool JsonObject_Remove_m4265 (JsonObject_t810 * __this, KeyValuePair_2_t814  ___item, MethodInfo* method)
{
	static bool JsonObject_Remove_m4265_init;
	if (!JsonObject_Remove_m4265_init)
	{
		KeyValuePair_2_get_Key_m4667_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m4667_GenericMethod);
		Dictionary_2_Remove_m4659_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m4659_GenericMethod);
		JsonObject_Remove_m4265_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4667((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4667_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m4659_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t916_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m4666_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m4266 (JsonObject_t810 * __this, MethodInfo* method)
{
	static bool JsonObject_GetEnumerator_m4266_init;
	if (!JsonObject_GetEnumerator_m4266_init)
	{
		Enumerator_t916_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t916_0_0_0);
		Dictionary_2_GetEnumerator_m4666_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m4666_GenericMethod);
		JsonObject_GetEnumerator_m4266_init = true;
	}
	{
		Dictionary_2_t809 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t916  L_1 = Dictionary_2_GetEnumerator_m4666(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m4666_MethodInfo_var);
		Enumerator_t916  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t916_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern MethodInfo JsonObject_ToString_m4267_MethodInfo;
extern "C" String_t* JsonObject_ToString_m4267 (JsonObject_t810 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m4270(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m4270_MethodInfo);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleJson_t818_il2cpp_TypeInfo;

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
extern TypeInfo PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t515_il2cpp_TypeInfo;
extern TypeInfo List_1_t516_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t919_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t920_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t432_il2cpp_TypeInfo;
extern TypeInfo Char_t425_il2cpp_TypeInfo;
extern TypeInfo Double_t921_il2cpp_TypeInfo;
extern TypeInfo Int64_t922_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t811_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t812_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t923_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t618_il2cpp_TypeInfo;
extern TypeInfo IJsonSerializerStrategy_t816_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t924_il2cpp_TypeInfo;
extern TypeInfo UInt64_t925_il2cpp_TypeInfo;
extern TypeInfo Decimal_t926_il2cpp_TypeInfo;
extern TypeInfo Single_t184_il2cpp_TypeInfo;
extern TypeInfo SByte_t232_il2cpp_TypeInfo;
extern TypeInfo Int16_t594_il2cpp_TypeInfo;
extern TypeInfo UInt16_t913_il2cpp_TypeInfo;
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern Il2CppType List_1_t516_0_0_0;
extern Il2CppType CharU5BU5D_t432_0_0_0;
extern Il2CppType IDictionary_2_t923_0_0_0;
extern MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m4288_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy__ctor_m4289_MethodInfo;
extern MethodInfo String_ToCharArray_m4669_MethodInfo;
extern MethodInfo SimpleJson_ParseValue_m4273_MethodInfo;
extern MethodInfo StringBuilder__ctor_m4670_MethodInfo;
extern MethodInfo SimpleJson_SerializeValue_m4281_MethodInfo;
extern MethodInfo StringBuilder_ToString_m2541_MethodInfo;
extern MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m4287_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m4269_MethodInfo;
extern MethodInfo SimpleJson_NextToken_m4280_MethodInfo;
extern MethodInfo SimpleJson_LookAhead_m4279_MethodInfo;
extern MethodInfo SimpleJson_ParseString_m4274_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m4671_MethodInfo;
extern MethodInfo List_1_Add_m4672_MethodInfo;
extern MethodInfo SimpleJson_ParseNumber_m4276_MethodInfo;
extern MethodInfo SimpleJson_ParseObject_m4271_MethodInfo;
extern MethodInfo SimpleJson_ParseArray_m4272_MethodInfo;
extern MethodInfo SimpleJson_EatWhitespace_m4278_MethodInfo;
extern MethodInfo StringBuilder_Append_m2861_MethodInfo;
extern MethodInfo String__ctor_m4673_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m4674_MethodInfo;
extern MethodInfo UInt32_TryParse_m4675_MethodInfo;
extern MethodInfo String_op_Equality_m751_MethodInfo;
extern MethodInfo SimpleJson_ConvertFromUtf32_m4275_MethodInfo;
extern MethodInfo StringBuilder_Append_m4676_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4677_MethodInfo;
extern MethodInfo String__ctor_m2870_MethodInfo;
extern MethodInfo String__ctor_m4678_MethodInfo;
extern MethodInfo SimpleJson_GetLastIndexOfNumber_m4277_MethodInfo;
extern MethodInfo String_IndexOf_m4581_MethodInfo;
extern MethodInfo Double_TryParse_m4679_MethodInfo;
extern MethodInfo Int64_TryParse_m4680_MethodInfo;
extern MethodInfo String_IndexOf_m2899_MethodInfo;
extern MethodInfo SimpleJson_SerializeString_m4284_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m4681_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m4682_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m4282_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m4683_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m4684_MethodInfo;
extern MethodInfo SimpleJson_SerializeArray_m4283_MethodInfo;
extern MethodInfo SimpleJson_IsNumeric_m4286_MethodInfo;
extern MethodInfo SimpleJson_SerializeNumber_m4285_MethodInfo;
extern MethodInfo IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m4685_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4686_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m769_MethodInfo;
extern MethodInfo Int64_ToString_m4687_MethodInfo;
extern MethodInfo UInt64_ToString_m4688_MethodInfo;
extern MethodInfo Int32_ToString_m4689_MethodInfo;
extern MethodInfo UInt32_ToString_m4690_MethodInfo;
extern MethodInfo Decimal_ToString_m4691_MethodInfo;
extern MethodInfo Single_ToString_m4692_MethodInfo;
extern MethodInfo Convert_ToDouble_m4693_MethodInfo;
extern MethodInfo Double_ToString_m4694_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_set_Item_m4671_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m4672_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m4681_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m4682_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m4683_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m4684_GenericMethod;


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern MethodInfo SimpleJson_TryDeserializeObject_m4268_MethodInfo;
extern "C" bool SimpleJson_TryDeserializeObject_m4268 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t432* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t432* L_2 = String_ToCharArray_m4669(L_1, /*hidden argument*/&String_ToCharArray_m4669_MethodInfo);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t432* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m4273(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/&SimpleJson_ParseValue_m4273_MethodInfo);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m4269 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, MethodInfo* method)
{
	StringBuilder_t515 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t515 * L_0 = (StringBuilder_t515 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t515_il2cpp_TypeInfo));
		StringBuilder__ctor_m4670(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m4670_MethodInfo);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t515 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m4281(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeValue_m4281_MethodInfo);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t515 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2541_MethodInfo, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m4270 (Object_t * __this /* static, unused */, Object_t * ___json, MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m4287(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_CurrentJsonSerializerStrategy_m4287_MethodInfo);
		String_t* L_2 = SimpleJson_SerializeObject_m4269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_SerializeObject_m4269_MethodInfo);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* IDictionary_2_set_Item_m4671_MethodInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m4271 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseObject_m4271_init;
	if (!SimpleJson_ParseObject_m4271_init)
	{
		IDictionary_2_set_Item_m4671_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m4671_GenericMethod);
		SimpleJson_ParseObject_m4271_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t810 * L_0 = (JsonObject_t810 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t810_il2cpp_TypeInfo));
		JsonObject__ctor_m4250(L_0, /*hidden argument*/&JsonObject__ctor_m4250_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t432* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t432* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m4279(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m4279_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t432* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t432* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t432* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m4274(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_ParseString_m4274_MethodInfo);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t432* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t432* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m4273(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&SimpleJson_ParseValue_m4273_MethodInfo);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_set_Item_m4671_MethodInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* List_1_Add_m4672_MethodInfo_var;
extern "C" JsonArray_t808 * SimpleJson_ParseArray_m4272 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseArray_m4272_init;
	if (!SimpleJson_ParseArray_m4272_init)
	{
		List_1_Add_m4672_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4672_GenericMethod);
		SimpleJson_ParseArray_m4272_init = true;
	}
	JsonArray_t808 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t808 * L_0 = (JsonArray_t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonArray_t808_il2cpp_TypeInfo));
		JsonArray__ctor_m4248(L_0, /*hidden argument*/&JsonArray__ctor_m4248_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t432* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t432* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m4279(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m4279_MethodInfo);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t808 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t432* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t432* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t432* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m4273(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/&SimpleJson_ParseValue_m4273_MethodInfo);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t808 *)NULL;
	}

IL_0063:
	{
		JsonArray_t808 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(List_1_Add_m4672_MethodInfo_var, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t808 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m4273 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t432* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m4279(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/&SimpleJson_LookAhead_m4279_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t432* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m4274(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&SimpleJson_ParseString_m4274_MethodInfo);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t432* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m4276(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&SimpleJson_ParseNumber_m4276_MethodInfo);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t432* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m4271(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&SimpleJson_ParseObject_m4271_MethodInfo);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t432* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t808 * L_19 = SimpleJson_ParseArray_m4272(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/&SimpleJson_ParseArray_m4272_MethodInfo);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t432* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		bool L_22 = 1;
		Object_t * L_23 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t432* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		bool L_26 = 0;
		Object_t * L_27 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t432* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m4274 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	StringBuilder_t515 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t515 * L_0 = (StringBuilder_t515 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t515_il2cpp_TypeInfo));
		StringBuilder__ctor_m4670(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m4670_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t432* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m4278(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_EatWhitespace_m4278_MethodInfo);
		CharU5BU5D_t432* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t432* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t432* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t432* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t432* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t515 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m2861(L_28, ((int32_t)34), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t515 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m2861(L_30, ((int32_t)92), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t515 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m2861(L_32, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t515 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m2861(L_34, 8, /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t515 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m2861(L_36, ((int32_t)12), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t515 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m2861(L_38, ((int32_t)10), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t515 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m2861(L_40, ((int32_t)13), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t515 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m2861(L_42, ((int32_t)9), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t432* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t432* L_48 = ___json;
		int32_t* L_49 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_50 = String_CreateString_m4695(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/&String__ctor_m4673_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_51 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		bool L_52 = UInt32_TryParse_m4675(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/&UInt32_TryParse_m4675_MethodInfo);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t432* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t432* L_63 = ___json;
		int32_t* L_64 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_65 = String_CreateString_m4695(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/&String__ctor_m4673_MethodInfo);
		bool L_66 = String_op_Equality_m751(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral379, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t432* L_67 = ___json;
		int32_t* L_68 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_69 = String_CreateString_m4695(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/&String__ctor_m4673_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_70 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		bool L_71 = UInt32_TryParse_m4675(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/&UInt32_TryParse_m4675_MethodInfo);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t515 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m2861(L_74, (((uint16_t)L_75)), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		StringBuilder_t515 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m2861(L_76, (((uint16_t)L_77)), /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_81 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t515 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m4275(NULL /*static, unused*/, L_83, /*hidden argument*/&SimpleJson_ConvertFromUtf32_m4275_MethodInfo);
		NullCheck(L_82);
		StringBuilder_Append_m4676(L_82, L_84, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t515 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m2861(L_87, L_88, /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t515 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2541_MethodInfo, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* CharU5BU5D_t432_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m4275 (Object_t * __this /* static, unused */, int32_t ___utf32, MethodInfo* method)
{
	static bool SimpleJson_ConvertFromUtf32_m4275_init;
	if (!SimpleJson_ConvertFromUtf32_m4275_init)
	{
		CharU5BU5D_t432_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t432_0_0_0);
		SimpleJson_ConvertFromUtf32_m4275_init = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t920 * L_2 = (ArgumentOutOfRangeException_t920 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t920_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4677(L_2, (String_t*) &_stringLiteral380, (String_t*) &_stringLiteral381, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4677_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t920 * L_5 = (ArgumentOutOfRangeException_t920 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t920_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4677(L_5, (String_t*) &_stringLiteral380, (String_t*) &_stringLiteral382, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4677_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_8 = String_CreateString_m2921(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/&String__ctor_m2870_MethodInfo);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t432* L_10 = ((CharU5BU5D_t432*)SZArrayNew(CharU5BU5D_t432_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t432* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_14 = String_CreateString_m4696(L_14, L_12, /*hidden argument*/&String__ctor_m4678_MethodInfo);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m4276 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t432* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m4278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m4278_MethodInfo);
		CharU5BU5D_t432* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m4277(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/&SimpleJson_GetLastIndexOfNumber_m4277_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t432* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_10 = String_CreateString_m4695(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/&String__ctor_m4673_MethodInfo);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m4581(L_11, (String_t*) &_stringLiteral132, 5, /*hidden argument*/&String_IndexOf_m4581_MethodInfo);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m4581(L_13, (String_t*) &_stringLiteral383, 5, /*hidden argument*/&String_IndexOf_m4581_MethodInfo);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t432* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_19 = String_CreateString_m4695(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/&String__ctor_m4673_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_20 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		bool L_21 = Double_TryParse_m4679(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/&Double_TryParse_m4679_MethodInfo);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Double_t921_il2cpp_TypeInfo), &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t432* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_29 = String_CreateString_m4695(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/&String__ctor_m4673_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_30 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		bool L_31 = Int64_TryParse_m4680(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/&Int64_TryParse_m4680_MethodInfo);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Int64_t922_il2cpp_TypeInfo), &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m4277 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t432* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral384);
		int32_t L_4 = String_IndexOf_m2899((String_t*) &_stringLiteral384, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&String_IndexOf_m2899_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t432* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m4278 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t432* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral385);
		int32_t L_3 = String_IndexOf_m2899((String_t*) &_stringLiteral385, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&String_IndexOf_m2899_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t432* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m4279 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t432* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m4280(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/&SimpleJson_NextToken_m4280_MethodInfo);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m4280 (Object_t * __this /* static, unused */, CharU5BU5D_t432* ___json, int32_t* ___index, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t432* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m4278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m4278_MethodInfo);
		int32_t* L_2 = ___index;
		CharU5BU5D_t432* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t432* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t432* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t432* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t432* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t432* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t432* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t432* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t432* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t432* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t432* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t432* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t432* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t432* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t432* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t432* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t923_il2cpp_TypeInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m4681_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m4682_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m4683_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m4684_MethodInfo_var;
extern "C" bool SimpleJson_SerializeValue_m4281 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t515 * ___builder, MethodInfo* method)
{
	static bool SimpleJson_SerializeValue_m4281_init;
	if (!SimpleJson_SerializeValue_m4281_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		IDictionary_2_t923_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t923_0_0_0);
		IDictionary_2_get_Keys_m4681_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m4681_GenericMethod);
		IDictionary_2_get_Values_m4682_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m4682_GenericMethod);
		IDictionary_2_get_Keys_m4683_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m4683_GenericMethod);
		IDictionary_2_get_Values_m4684_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m4684_GenericMethod);
		SimpleJson_SerializeValue_m4281_init = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t515 * G_B13_0 = {0};
	StringBuilder_t515 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t515 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t515 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m4284(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeString_m4284_MethodInfo);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m4681_MethodInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m4682_MethodInfo_var, L_10);
		StringBuilder_t515 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m4282(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/&SimpleJson_SerializeObject_m4282_MethodInfo);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t923_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m4683_MethodInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m4684_MethodInfo_var, L_19);
		StringBuilder_t515 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m4282(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/&SimpleJson_SerializeObject_m4282_MethodInfo);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, InitializedTypeInfo(&IEnumerable_t618_il2cpp_TypeInfo)));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t515 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m4283(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/&SimpleJson_SerializeArray_m4283_MethodInfo);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m4286(NULL /*static, unused*/, L_29, /*hidden argument*/&SimpleJson_IsNumeric_m4286_MethodInfo);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t515 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m4285(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&SimpleJson_SerializeNumber_m4285_MethodInfo);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t515 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo))))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral386;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral387;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m4676(G_B14_1, G_B14_0, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t515 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m4676(L_38, (String_t*) &_stringLiteral388, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m4685_MethodInfo, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t515 * L_45 = ___builder;
		SimpleJson_SerializeValue_m4281(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/&SimpleJson_SerializeValue_m4281_MethodInfo);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m4282 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t515 * ___builder, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t515 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m4676(L_0, (String_t*) &_stringLiteral389, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4686_MethodInfo, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4686_MethodInfo, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t515 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m4676(L_10, (String_t*) &_stringLiteral390, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, (&String_t_il2cpp_TypeInfo)));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t515 * L_14 = ___builder;
		SimpleJson_SerializeString_m4284(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&SimpleJson_SerializeString_m4284_MethodInfo);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t515 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m4281(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_SerializeValue_m4281_MethodInfo);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t515 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m4676(L_19, (String_t*) &_stringLiteral391, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t515 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m4281(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/&SimpleJson_SerializeValue_m4281_MethodInfo);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t515 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m4676(L_28, (String_t*) &_stringLiteral175, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m4283 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t515 * ___builder, MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t515 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m4676(L_0, (String_t*) &_stringLiteral392, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4686_MethodInfo, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t515 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m4676(L_6, (String_t*) &_stringLiteral390, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t515 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m4281(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&SimpleJson_SerializeValue_m4281_MethodInfo);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, InitializedTypeInfo(&IDisposable_t203_il2cpp_TypeInfo)));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_006e:
	{
		StringBuilder_t515 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m4676(L_16, (String_t*) &_stringLiteral393, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m4284 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t515 * ___builder, MethodInfo* method)
{
	CharU5BU5D_t432* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t515 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m4676(L_0, (String_t*) &_stringLiteral292, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t432* L_2 = String_ToCharArray_m4669(L_1, /*hidden argument*/&String_ToCharArray_m4669_MethodInfo);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t432* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t515 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m4676(L_7, (String_t*) &_stringLiteral394, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t515 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m4676(L_9, (String_t*) &_stringLiteral395, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t515 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m4676(L_11, (String_t*) &_stringLiteral396, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t515 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m4676(L_13, (String_t*) &_stringLiteral397, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t515 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m4676(L_15, (String_t*) &_stringLiteral398, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t515 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m4676(L_17, (String_t*) &_stringLiteral399, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t515 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m4676(L_19, (String_t*) &_stringLiteral400, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t515 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m2861(L_20, L_21, /*hidden argument*/&StringBuilder_Append_m2861_MethodInfo);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t432* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t515 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m4676(L_25, (String_t*) &_stringLiteral292, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m4285 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t515 * ___builder, MethodInfo* method)
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t926  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&Int64_t922_il2cpp_TypeInfo))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t515 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, InitializedTypeInfo(&Int64_t922_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_3 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_4 = Int64_ToString_m4687((&V_0), L_3, /*hidden argument*/&Int64_ToString_m4687_MethodInfo);
		NullCheck(L_1);
		StringBuilder_Append_m4676(L_1, L_4, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t515 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_8 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_9 = UInt64_ToString_m4688((&V_1), L_8, /*hidden argument*/&UInt64_ToString_m4688_MethodInfo);
		NullCheck(L_6);
		StringBuilder_Append_m4676(L_6, L_9, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo))))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t515 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_13 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_14 = Int32_ToString_m4689((&V_2), L_13, /*hidden argument*/&Int32_ToString_m4689_MethodInfo);
		NullCheck(L_11);
		StringBuilder_Append_m4676(L_11, L_14, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, InitializedTypeInfo(&UInt32_t915_il2cpp_TypeInfo))))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t515 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, InitializedTypeInfo(&UInt32_t915_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_18 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_19 = UInt32_ToString_m4690((&V_3), L_18, /*hidden argument*/&UInt32_ToString_m4690_MethodInfo);
		NullCheck(L_16);
		StringBuilder_Append_m4676(L_16, L_19, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, InitializedTypeInfo(&Decimal_t926_il2cpp_TypeInfo))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t515 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t926 *)((Decimal_t926 *)UnBox (L_22, InitializedTypeInfo(&Decimal_t926_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_23 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_24 = Decimal_ToString_m4691((&V_4), L_23, /*hidden argument*/&Decimal_ToString_m4691_MethodInfo);
		NullCheck(L_21);
		StringBuilder_Append_m4676(L_21, L_24, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, InitializedTypeInfo(&Single_t184_il2cpp_TypeInfo))))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t515 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&Single_t184_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_28 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_29 = Single_ToString_m4692((&V_5), L_28, /*hidden argument*/&Single_ToString_m4692_MethodInfo);
		NullCheck(L_26);
		StringBuilder_Append_m4676(L_26, L_29, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t515 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_32 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		double L_33 = Convert_ToDouble_m4693(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&Convert_ToDouble_m4693_MethodInfo);
		V_6 = L_33;
		CultureInfo_t919 * L_34 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_35 = Double_ToString_m4694((&V_6), (String_t*) &_stringLiteral401, L_34, /*hidden argument*/&Double_ToString_m4694_MethodInfo);
		NullCheck(L_30);
		StringBuilder_Append_m4676(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m4286 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&SByte_t232_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, InitializedTypeInfo(&Byte_t556_il2cpp_TypeInfo))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, InitializedTypeInfo(&Int16_t594_il2cpp_TypeInfo))))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, InitializedTypeInfo(&UInt16_t913_il2cpp_TypeInfo))))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo))))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt32_t915_il2cpp_TypeInfo))))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, InitializedTypeInfo(&Int64_t922_il2cpp_TypeInfo))))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo))))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&Single_t184_il2cpp_TypeInfo))))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, InitializedTypeInfo(&Double_t921_il2cpp_TypeInfo))))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Decimal_t926_il2cpp_TypeInfo))))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m4287 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t818_StaticFields*)InitializedTypeInfo(&SimpleJson_t818_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t817 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m4288(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_PocoJsonSerializerStrategy_m4288_MethodInfo);
		PocoJsonSerializerStrategy_t817 * L_3 = L_2;
		((SimpleJson_t818_StaticFields*)InitializedTypeInfo(&SimpleJson_t818_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t817 * SimpleJson_get_PocoJsonSerializerStrategy_m4288 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	PocoJsonSerializerStrategy_t817 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t817 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t817 * L_0 = ((SimpleJson_t818_StaticFields*)InitializedTypeInfo(&SimpleJson_t818_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t817 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy_t817 * L_2 = (PocoJsonSerializerStrategy_t817 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy__ctor_m4289(L_2, /*hidden argument*/&PocoJsonSerializerStrategy__ctor_m4289_MethodInfo);
		PocoJsonSerializerStrategy_t817 * L_3 = L_2;
		((SimpleJson_t818_StaticFields*)InitializedTypeInfo(&SimpleJson_t818_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// System.Type
#include "mscorlib_System_Type.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
extern TypeInfo ConstructorDelegate_t822_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t927_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t928_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t823_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t929_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t930_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t824_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t931_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t932_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
extern TypeInfo ReflectionUtils_t833_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t933_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t835_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t934_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t935_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo GetDelegate_t825_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t836_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t936_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t937_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t938_il2cpp_TypeInfo;
extern TypeInfo DateTime_t683_il2cpp_TypeInfo;
extern TypeInfo DateTimeOffset_t939_il2cpp_TypeInfo;
extern TypeInfo Guid_t940_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t820_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t941_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t942_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t943_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t927_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t928_0_0_0;
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t929_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t930_0_0_0;
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t931_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t932_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern Il2CppType Dictionary_2_t933_0_0_0;
extern Il2CppType IEnumerable_1_t835_0_0_0;
extern Il2CppType IEnumerator_1_t934_0_0_0;
extern Il2CppType IDictionary_2_t823_0_0_0;
extern Il2CppType IEnumerable_1_t836_0_0_0;
extern Il2CppType IEnumerator_1_t936_0_0_0;
extern Il2CppType Dictionary_2_t937_0_0_0;
extern Il2CppType KeyValuePair_2_t938_0_0_0;
extern Il2CppType IDictionary_2_t824_0_0_0;
extern Il2CppType IDictionary_2_t820_0_0_0;
extern Il2CppType IEnumerable_1_t941_0_0_0;
extern Il2CppType IEnumerator_1_t942_0_0_0;
extern MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m4292_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m4697_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m4698_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m4293_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m4699_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m4700_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m4294_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m4701_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m4702_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo Type_get_IsArray_m4703_MethodInfo;
extern MethodInfo ReflectionUtils_GetContructor_m4328_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4704_MethodInfo;
extern MethodInfo ReflectionUtils_GetProperties_m4324_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4705_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4706_MethodInfo;
extern MethodInfo PropertyInfo_get_CanRead_m4707_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetterMethodInfo_m4326_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m4708_MethodInfo;
extern MethodInfo MethodBase_get_IsPublic_m4709_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m4710_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethod_m4331_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m4711_MethodInfo;
extern MethodInfo ReflectionUtils_GetFields_m4325_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4712_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4713_MethodInfo;
extern MethodInfo FieldInfo_get_IsStatic_m4714_MethodInfo;
extern MethodInfo FieldInfo_get_IsPublic_m4715_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethod_m4332_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4716_MethodInfo;
extern MethodInfo PropertyInfo_get_CanWrite_m4717_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetterMethodInfo_m4327_MethodInfo;
extern MethodInfo PropertyInfo_get_PropertyType_m4718_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethod_m4335_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m4719_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m4720_MethodInfo;
extern MethodInfo FieldInfo_get_IsInitOnly_m4721_MethodInfo;
extern MethodInfo FieldInfo_get_FieldType_m4722_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethod_m4336_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m4297_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4298_MethodInfo;
extern MethodInfo DateTime_ToUniversalTime_m4723_MethodInfo;
extern MethodInfo DateTime_ToString_m4724_MethodInfo;
extern MethodInfo DateTimeOffset_ToUniversalTime_m4725_MethodInfo;
extern MethodInfo DateTimeOffset_ToString_m4726_MethodInfo;
extern MethodInfo Guid_ToString_m4727_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m4296_MethodInfo;
extern MethodInfo Object_GetType_m2624_MethodInfo;
extern MethodInfo Type_get_FullName_m4728_MethodInfo;
extern MethodInfo IDictionary_2_get_Item_m4729_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4730_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4731_MethodInfo;
extern MethodInfo GetDelegate_Invoke_m4300_MethodInfo;
extern MethodInfo IDictionary_2_Add_m4732_MethodInfo;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m4697_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m4698_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m4699_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m4700_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m4701_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m4702_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m4704_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4705_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4706_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_set_Item_m4711_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4712_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4713_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m4716_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m4719_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_set_Item_m4720_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Item_m4729_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4730_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4731_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m4733_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m4734_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_Add_m4732_GenericMethod;


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t927_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t928_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t929_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t930_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t931_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t932_il2cpp_TypeInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m4697_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m4698_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m4699_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m4700_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m4701_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m4702_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m4289 (PocoJsonSerializerStrategy_t817 * __this, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy__ctor_m4289_init;
	if (!PocoJsonSerializerStrategy__ctor_m4289_init)
	{
		ThreadSafeDictionaryValueFactory_2_t927_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t927_0_0_0);
		ThreadSafeDictionary_2_t928_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t928_0_0_0);
		ThreadSafeDictionaryValueFactory_2_t929_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t929_0_0_0);
		ThreadSafeDictionary_2_t930_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t930_0_0_0);
		ThreadSafeDictionaryValueFactory_2_t931_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t931_0_0_0);
		ThreadSafeDictionary_2_t932_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t932_0_0_0);
		ThreadSafeDictionaryValueFactory_2__ctor_m4697_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m4697_GenericMethod);
		ThreadSafeDictionary_2__ctor_m4698_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m4698_GenericMethod);
		ThreadSafeDictionaryValueFactory_2__ctor_m4699_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m4699_GenericMethod);
		ThreadSafeDictionary_2__ctor_m4700_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m4700_GenericMethod);
		ThreadSafeDictionaryValueFactory_2__ctor_m4701_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m4701_GenericMethod);
		ThreadSafeDictionary_2__ctor_m4702_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m4702_GenericMethod);
		PocoJsonSerializerStrategy__ctor_m4289_init = true;
	}
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		IntPtr_t L_0 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_ContructorDelegateFactory_m4292_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t927 * L_1 = (ThreadSafeDictionaryValueFactory_2_t927 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t927_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4697(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4697_MethodInfo_var);
		ThreadSafeDictionary_2_t928 * L_2 = (ThreadSafeDictionary_2_t928 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t928_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4698(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4698_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_GetterValueFactory_m4293_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t929 * L_4 = (ThreadSafeDictionaryValueFactory_2_t929 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t929_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4699(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4699_MethodInfo_var);
		ThreadSafeDictionary_2_t930 * L_5 = (ThreadSafeDictionary_2_t930 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t930_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4700(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4700_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_SetterValueFactory_m4294_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t931 * L_7 = (ThreadSafeDictionaryValueFactory_2_t931 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t931_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4701(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4701_MethodInfo_var);
		ThreadSafeDictionary_2_t932 * L_8 = (ThreadSafeDictionary_2_t932 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t932_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m4702(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m4702_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern MethodInfo PocoJsonSerializerStrategy__cctor_m4290_MethodInfo;
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t215_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m4290 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy__cctor_m4290_init;
	if (!PocoJsonSerializerStrategy__cctor_m4290_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		StringU5BU5D_t215_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t215_0_0_0);
		PocoJsonSerializerStrategy__cctor_m4290_init = true;
	}
	{
		((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t207* L_0 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Int32_t188_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t215* L_2 = ((StringU5BU5D_t215*)SZArrayNew(StringU5BU5D_t215_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral402);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral402;
		StringU5BU5D_t215* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral403);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral403;
		StringU5BU5D_t215* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral404);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral404;
		((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291 (PocoJsonSerializerStrategy_t817 * __this, String_t* ___clrPropertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" ConstructorDelegate_t822 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m4292 (PocoJsonSerializerStrategy_t817 * __this, Type_t * ___key, MethodInfo* method)
{
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t207* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m4703_MethodInfo, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo));
		TypeU5BU5D_t207* L_3 = ((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo));
		TypeU5BU5D_t207* L_4 = ((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		ConstructorDelegate_t822 * L_5 = ReflectionUtils_GetContructor_m4328(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/&ReflectionUtils_GetContructor_m4328_MethodInfo);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t933_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4704_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m4705_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4706_MethodInfo_var;
extern MethodInfo* IDictionary_2_set_Item_m4711_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m4712_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4713_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m4293 (PocoJsonSerializerStrategy_t817 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_GetterValueFactory_m4293_init;
	if (!PocoJsonSerializerStrategy_GetterValueFactory_m4293_init)
	{
		Dictionary_2_t933_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t933_0_0_0);
		Dictionary_2__ctor_m4704_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4704_GenericMethod);
		IEnumerable_1_GetEnumerator_m4705_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4705_GenericMethod);
		IEnumerator_1_get_Current_m4706_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4706_GenericMethod);
		IDictionary_2_set_Item_m4711_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m4711_GenericMethod);
		IEnumerable_1_GetEnumerator_m4712_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4712_GenericMethod);
		IEnumerator_1_get_Current_m4713_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4713_GenericMethod);
		PocoJsonSerializerStrategy_GetterValueFactory_m4293_init = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t933 * L_0 = (Dictionary_2_t933 *)il2cpp_codegen_object_new (Dictionary_2_t933_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4704(L_0, /*hidden argument*/Dictionary_2__ctor_m4704_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		Object_t* L_2 = ReflectionUtils_GetProperties_m4324(NULL /*static, unused*/, L_1, /*hidden argument*/&ReflectionUtils_GetProperties_m4324_MethodInfo);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4705_MethodInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(IEnumerator_1_get_Current_m4706_MethodInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&PropertyInfo_get_CanRead_m4707_MethodInfo, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m4326(NULL /*static, unused*/, L_8, /*hidden argument*/&ReflectionUtils_GetGetterMethodInfo_m4326_MethodInfo);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m4708_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m4709_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291_MethodInfo, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
			GetDelegate_t825 * L_19 = ReflectionUtils_GetGetMethod_m4331(NULL /*static, unused*/, L_18, /*hidden argument*/&ReflectionUtils_GetGetMethod_m4331_MethodInfo);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t825 * >::Invoke(IDictionary_2_set_Item_m4711_MethodInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		Object_t* L_25 = ReflectionUtils_GetFields_m4325(NULL /*static, unused*/, L_24, /*hidden argument*/&ReflectionUtils_GetFields_m4325_MethodInfo);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4712_MethodInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(IEnumerator_1_get_Current_m4713_MethodInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m4714_MethodInfo, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsPublic_m4715_MethodInfo, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291_MethodInfo, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
			GetDelegate_t825 * L_38 = ReflectionUtils_GetGetMethod_m4332(NULL /*static, unused*/, L_37, /*hidden argument*/&ReflectionUtils_GetGetMethod_m4332_MethodInfo);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t825 * >::Invoke(IDictionary_2_set_Item_m4711_MethodInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t937_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4716_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m4705_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4706_MethodInfo_var;
extern MethodInfo* KeyValuePair_2__ctor_m4719_MethodInfo_var;
extern MethodInfo* IDictionary_2_set_Item_m4720_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m4712_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4713_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m4294 (PocoJsonSerializerStrategy_t817 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_SetterValueFactory_m4294_init;
	if (!PocoJsonSerializerStrategy_SetterValueFactory_m4294_init)
	{
		Dictionary_2_t937_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t937_0_0_0);
		Dictionary_2__ctor_m4716_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4716_GenericMethod);
		IEnumerable_1_GetEnumerator_m4705_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4705_GenericMethod);
		IEnumerator_1_get_Current_m4706_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4706_GenericMethod);
		KeyValuePair_2__ctor_m4719_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2__ctor_m4719_GenericMethod);
		IDictionary_2_set_Item_m4720_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m4720_GenericMethod);
		IEnumerable_1_GetEnumerator_m4712_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4712_GenericMethod);
		IEnumerator_1_get_Current_m4713_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4713_GenericMethod);
		PocoJsonSerializerStrategy_SetterValueFactory_m4294_init = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t937 * L_0 = (Dictionary_2_t937 *)il2cpp_codegen_object_new (Dictionary_2_t937_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4716(L_0, /*hidden argument*/Dictionary_2__ctor_m4716_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		Object_t* L_2 = ReflectionUtils_GetProperties_m4324(NULL /*static, unused*/, L_1, /*hidden argument*/&ReflectionUtils_GetProperties_m4324_MethodInfo);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4705_MethodInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(IEnumerator_1_get_Current_m4706_MethodInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&PropertyInfo_get_CanWrite_m4717_MethodInfo, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m4327(NULL /*static, unused*/, L_8, /*hidden argument*/&ReflectionUtils_GetSetterMethodInfo_m4327_MethodInfo);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m4708_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m4709_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291_MethodInfo, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&PropertyInfo_get_PropertyType_m4718_MethodInfo, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
			SetDelegate_t826 * L_21 = ReflectionUtils_GetSetMethod_m4335(NULL /*static, unused*/, L_20, /*hidden argument*/&ReflectionUtils_GetSetMethod_m4335_MethodInfo);
			KeyValuePair_2_t938  L_22 = {0};
			KeyValuePair_2__ctor_m4719(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m4719_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t938  >::Invoke(IDictionary_2_set_Item_m4720_MethodInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		Object_t* L_28 = ReflectionUtils_GetFields_m4325(NULL /*static, unused*/, L_27, /*hidden argument*/&ReflectionUtils_GetFields_m4325_MethodInfo);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4712_MethodInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(IEnumerator_1_get_Current_m4713_MethodInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsInitOnly_m4721_MethodInfo, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m4714_MethodInfo, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsPublic_m4715_MethodInfo, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291_MethodInfo, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&FieldInfo_get_FieldType_m4722_MethodInfo, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
			SetDelegate_t826 * L_45 = ReflectionUtils_GetSetMethod_m4336(NULL /*static, unused*/, L_44, /*hidden argument*/&ReflectionUtils_GetSetMethod_m4336_MethodInfo);
			KeyValuePair_2_t938  L_46 = {0};
			KeyValuePair_2__ctor_m4719(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m4719_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t938  >::Invoke(IDictionary_2_set_Item_m4720_MethodInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m4295_MethodInfo;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m4295 (PocoJsonSerializerStrategy_t817 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m4297_MethodInfo, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4298_MethodInfo, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m4296 (PocoJsonSerializerStrategy_t817 * __this, Enum_t227 * ___p, MethodInfo* method)
{
	{
		Enum_t227 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_1 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		double L_2 = Convert_ToDouble_m4693(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Convert_ToDouble_m4693_MethodInfo);
		double L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Double_t921_il2cpp_TypeInfo), &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m4297 (PocoJsonSerializerStrategy_t817 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	bool V_0 = false;
	Enum_t227 * V_1 = {0};
	DateTime_t683  V_2 = {0};
	DateTime_t683  V_3 = {0};
	DateTimeOffset_t939  V_4 = {0};
	DateTimeOffset_t939  V_5 = {0};
	Guid_t940  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo))))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t683 *)((DateTime_t683 *)UnBox (L_2, InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo)))));
		DateTime_t683  L_3 = DateTime_ToUniversalTime_m4723((&V_2), /*hidden argument*/&DateTime_ToUniversalTime_m4723_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo));
		StringU5BU5D_t215* L_4 = ((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_6 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_7 = DateTime_ToString_m4724((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/&DateTime_ToString_m4724_MethodInfo);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&DateTimeOffset_t939_il2cpp_TypeInfo))))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t939 *)((DateTimeOffset_t939 *)UnBox (L_10, InitializedTypeInfo(&DateTimeOffset_t939_il2cpp_TypeInfo)))));
		DateTimeOffset_t939  L_11 = DateTimeOffset_ToUniversalTime_m4725((&V_4), /*hidden argument*/&DateTimeOffset_ToUniversalTime_m4725_MethodInfo);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo));
		StringU5BU5D_t215* L_12 = ((PocoJsonSerializerStrategy_t817_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t817_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t919_il2cpp_TypeInfo));
		CultureInfo_t919 * L_14 = CultureInfo_get_InvariantCulture_m4674(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4674_MethodInfo);
		String_t* L_15 = DateTimeOffset_ToString_m4726((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/&DateTimeOffset_ToString_m4726_MethodInfo);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, InitializedTypeInfo(&Guid_t940_il2cpp_TypeInfo))))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t940 *)((Guid_t940 *)UnBox (L_18, InitializedTypeInfo(&Guid_t940_il2cpp_TypeInfo)))));
		String_t* L_19 = Guid_ToString_m4727((&V_6), (String_t*) &_stringLiteral405, /*hidden argument*/&Guid_ToString_m4727_MethodInfo);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t802 *)IsInst(L_20, InitializedTypeInfo(&Uri_t802_il2cpp_TypeInfo))))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t227 *)IsInst(L_24, InitializedTypeInfo(&Enum_t227_il2cpp_TypeInfo)));
		Enum_t227 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t227 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t227 * >::Invoke(&PocoJsonSerializerStrategy_SerializeEnum_m4296_MethodInfo, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern MethodInfo* IDictionary_2_get_Item_m4729_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m4730_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4731_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m4733_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Key_m4734_MethodInfo_var;
extern MethodInfo* IDictionary_2_Add_m4732_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4298 (PocoJsonSerializerStrategy_t817 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4298_init;
	if (!PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4298_init)
	{
		IDictionary_2_get_Item_m4729_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Item_m4729_GenericMethod);
		IEnumerable_1_GetEnumerator_m4730_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4730_GenericMethod);
		IEnumerator_1_get_Current_m4731_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4731_GenericMethod);
		KeyValuePair_2_get_Value_m4733_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m4733_GenericMethod);
		KeyValuePair_2_get_Key_m4734_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m4734_GenericMethod);
		IDictionary_2_Add_m4732_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_Add_m4732_GenericMethod);
		PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m4298_init = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t943  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral406, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2624(L_3, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m4728_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t810 * L_7 = (JsonObject_t810 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t810_il2cpp_TypeInfo));
		JsonObject__ctor_m4250(L_7, /*hidden argument*/&JsonObject__ctor_m4250_MethodInfo);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(IDictionary_2_get_Item_m4729_MethodInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4730_MethodInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t943  L_14 = (KeyValuePair_2_t943 )InterfaceFuncInvoker0< KeyValuePair_2_t943  >::Invoke(IEnumerator_1_get_Current_m4731_MethodInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t825 * L_15 = KeyValuePair_2_get_Value_m4733((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4733_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m4734((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4734_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m4291_MethodInfo, __this, L_17);
			GetDelegate_t825 * L_19 = KeyValuePair_2_get_Value_m4733((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4733_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&GetDelegate_Invoke_m4300_MethodInfo, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_Add_m4732_MethodInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetDelegate__ctor_m4299_MethodInfo;
extern "C" void GetDelegate__ctor_m4299 (GetDelegate_t825 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m4300 (GetDelegate_t825 * __this, Object_t * ___source, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m4300((GetDelegate_t825 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t825(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetDelegate_BeginInvoke_m4301_MethodInfo;
extern "C" Object_t * GetDelegate_BeginInvoke_m4301 (GetDelegate_t825 * __this, Object_t * ___source, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo GetDelegate_EndInvoke_m4302_MethodInfo;
extern "C" Object_t * GetDelegate_EndInvoke_m4302 (GetDelegate_t825 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetDelegate_t826_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo SetDelegate__ctor_m4303_MethodInfo;
extern "C" void SetDelegate__ctor_m4303 (SetDelegate_t826 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern MethodInfo SetDelegate_Invoke_m4304_MethodInfo;
extern "C" void SetDelegate_Invoke_m4304 (SetDelegate_t826 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m4304((SetDelegate_t826 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t826(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern MethodInfo SetDelegate_BeginInvoke_m4305_MethodInfo;
extern "C" Object_t * SetDelegate_BeginInvoke_m4305 (SetDelegate_t826 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo SetDelegate_EndInvoke_m4306_MethodInfo;
extern "C" void SetDelegate_EndInvoke_m4306 (SetDelegate_t826 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo ConstructorDelegate__ctor_m4307_MethodInfo;
extern "C" void ConstructorDelegate__ctor_m4307 (ConstructorDelegate_t822 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern MethodInfo ConstructorDelegate_Invoke_m4308_MethodInfo;
extern "C" Object_t * ConstructorDelegate_Invoke_m4308 (ConstructorDelegate_t822 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m4308((ConstructorDelegate_t822 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t822(Il2CppObject* delegate, ObjectU5BU5D_t194* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo ConstructorDelegate_BeginInvoke_m4309_MethodInfo;
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m4309 (ConstructorDelegate_t822 * __this, ObjectU5BU5D_t194* ___args, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo ConstructorDelegate_EndInvoke_m4310_MethodInfo;
extern "C" Object_t * ConstructorDelegate_EndInvoke_m4310 (ConstructorDelegate_t822 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern MethodInfo ConstructorInfo_Invoke_m4735_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m4311_MethodInfo;
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m4311 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m4312_MethodInfo;
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m4312 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method)
{
	{
		ConstructorInfo_t827 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t194* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m4735(L_0, L_1, /*hidden argument*/&ConstructorInfo_Invoke_m4735_MethodInfo);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"
extern MethodInfo MethodBase_Invoke_m4736_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4313_MethodInfo;
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4313 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m4314_MethodInfo;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m4314 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 * __this, Object_t * ___source, MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		ObjectU5BU5D_t194* L_2 = ((ReflectionUtils_t833_StaticFields*)InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo)->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t194* >::Invoke(&MethodBase_Invoke_m4736_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"

extern MethodInfo FieldInfo_GetValue_m4737_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m4315_MethodInfo;
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m4315 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m4316_MethodInfo;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m4316 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 * __this, Object_t * ___source, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&FieldInfo_GetValue_m4737_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4317_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4317 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m4318_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m4318 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m4318_init;
	if (!U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m4318_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m4318_init = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t194* L_2 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t194* >::Invoke(&MethodBase_Invoke_m4736_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"

extern MethodInfo FieldInfo_SetValue_m4738_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m4319_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m4319 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m4320_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m4320 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&FieldInfo_SetValue_m4738_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
extern TypeInfo ConstructorInfoU5BU5D_t944_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t827_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t834_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t945_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t946_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t947_il2cpp_TypeInfo;
extern TypeInfo PropertyInfoU5BU5D_t948_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t949_il2cpp_TypeInfo;
extern TypeInfo FieldInfoU5BU5D_t950_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType IEnumerable_1_t834_0_0_0;
extern Il2CppType IEnumerator_1_t945_0_0_0;
extern MethodInfo Type_GetConstructors_m4739_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructors_m4322_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4740_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4741_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m4742_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m4743_MethodInfo;
extern MethodInfo Type_GetProperties_m4744_MethodInfo;
extern MethodInfo Type_GetFields_m4745_MethodInfo;
extern MethodInfo PropertyInfo_GetGetMethod_m4746_MethodInfo;
extern MethodInfo PropertyInfo_GetSetMethod_m4747_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorByReflection_m4330_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorInfo_m4323_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorByReflection_m4329_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethodByReflection_m4333_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethodByReflection_m4334_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethodByReflection_m4337_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethodByReflection_m4338_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4740_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4741_GenericMethod;


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern MethodInfo ReflectionUtils__cctor_m4321_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m4321 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ReflectionUtils__cctor_m4321_init;
	if (!ReflectionUtils__cctor_m4321_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		ReflectionUtils__cctor_m4321_init = true;
	}
	{
		((ReflectionUtils_t833_StaticFields*)InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo)->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m4322 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t944* L_1 = (ConstructorInfoU5BU5D_t944*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t944* >::Invoke(&Type_GetConstructors_m4739_MethodInfo, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern MethodInfo* IEnumerable_1_GetEnumerator_m4740_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m4741_MethodInfo_var;
extern "C" ConstructorInfo_t827 * ReflectionUtils_GetConstructorInfo_m4323 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t207* ___argsType, MethodInfo* method)
{
	static bool ReflectionUtils_GetConstructorInfo_m4323_init;
	if (!ReflectionUtils_GetConstructorInfo_m4323_init)
	{
		IEnumerable_1_GetEnumerator_m4740_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m4740_GenericMethod);
		IEnumerator_1_get_Current_m4741_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m4741_GenericMethod);
		ReflectionUtils_GetConstructorInfo_m4323_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t827 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t946* V_5 = {0};
	ParameterInfo_t947 * V_6 = {0};
	ParameterInfoU5BU5D_t946* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t827 * V_9 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		Object_t* L_1 = ReflectionUtils_GetConstructors_m4322(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetConstructors_m4322_MethodInfo);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m4740_MethodInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t827 * L_5 = (ConstructorInfo_t827 *)InterfaceFuncInvoker0< ConstructorInfo_t827 * >::Invoke(IEnumerator_1_get_Current_m4741_MethodInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t827 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t946* L_7 = (ParameterInfoU5BU5D_t946*)VirtFuncInvoker0< ParameterInfoU5BU5D_t946* >::Invoke(&MethodBase_GetParameters_m4742_MethodInfo, L_6);
			V_5 = L_7;
			TypeU5BU5D_t207* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t946* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t827 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t946* L_11 = (ParameterInfoU5BU5D_t946*)VirtFuncInvoker0< ParameterInfoU5BU5D_t946* >::Invoke(&MethodBase_GetParameters_m4742_MethodInfo, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t946* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t947 **)(ParameterInfo_t947 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t947 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4743_MethodInfo, L_15);
			TypeU5BU5D_t207* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t946* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t827 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t827 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t827 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m4324 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t948* L_1 = (PropertyInfoU5BU5D_t948*)VirtFuncInvoker1< PropertyInfoU5BU5D_t948*, int32_t >::Invoke(&Type_GetProperties_m4744_MethodInfo, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m4325 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t950* L_1 = (FieldInfoU5BU5D_t950*)VirtFuncInvoker1< FieldInfoU5BU5D_t950*, int32_t >::Invoke(&Type_GetFields_m4745_MethodInfo, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m4326 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetGetMethod_m4746_MethodInfo, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m4327 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetSetMethod_m4747_MethodInfo, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" ConstructorDelegate_t822 * ReflectionUtils_GetContructor_m4328 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t207* ___argsType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t207* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		ConstructorDelegate_t822 * L_2 = ReflectionUtils_GetConstructorByReflection_m4330(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&ReflectionUtils_GetConstructorByReflection_m4330_MethodInfo);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" ConstructorDelegate_t822 * ReflectionUtils_GetConstructorByReflection_m4329 (Object_t * __this /* static, unused */, ConstructorInfo_t827 * ___constructorInfo, MethodInfo* method)
{
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828_il2cpp_TypeInfo));
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m4311(L_0, /*hidden argument*/&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m4311_MethodInfo);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 * L_1 = V_0;
		ConstructorInfo_t827 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t828 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m4312_MethodInfo };
		ConstructorDelegate_t822 * L_5 = (ConstructorDelegate_t822 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructorDelegate_t822_il2cpp_TypeInfo));
		ConstructorDelegate__ctor_m4307(L_5, L_3, L_4, /*hidden argument*/&ConstructorDelegate__ctor_m4307_MethodInfo);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" ConstructorDelegate_t822 * ReflectionUtils_GetConstructorByReflection_m4330 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t207* ___argsType, MethodInfo* method)
{
	ConstructorInfo_t827 * V_0 = {0};
	ConstructorDelegate_t822 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t207* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		ConstructorInfo_t827 * L_2 = ReflectionUtils_GetConstructorInfo_m4323(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&ReflectionUtils_GetConstructorInfo_m4323_MethodInfo);
		V_0 = L_2;
		ConstructorInfo_t827 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t822 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t827 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		ConstructorDelegate_t822 * L_5 = ReflectionUtils_GetConstructorByReflection_m4329(NULL /*static, unused*/, L_4, /*hidden argument*/&ReflectionUtils_GetConstructorByReflection_m4329_MethodInfo);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t825 * ReflectionUtils_GetGetMethod_m4331 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		GetDelegate_t825 * L_1 = ReflectionUtils_GetGetMethodByReflection_m4333(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetGetMethodByReflection_m4333_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" GetDelegate_t825 * ReflectionUtils_GetGetMethod_m4332 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		GetDelegate_t825 * L_1 = ReflectionUtils_GetGetMethodByReflection_m4334(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetGetMethodByReflection_m4334_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t825 * ReflectionUtils_GetGetMethodByReflection_m4333 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829_il2cpp_TypeInfo));
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4313(L_0, /*hidden argument*/&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m4313_MethodInfo);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m4326(NULL /*static, unused*/, L_2, /*hidden argument*/&ReflectionUtils_GetGetterMethodInfo_m4326_MethodInfo);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t829 * L_4 = V_0;
		IntPtr_t L_5 = { &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m4314_MethodInfo };
		GetDelegate_t825 * L_6 = (GetDelegate_t825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GetDelegate_t825_il2cpp_TypeInfo));
		GetDelegate__ctor_m4299(L_6, L_4, L_5, /*hidden argument*/&GetDelegate__ctor_m4299_MethodInfo);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" GetDelegate_t825 * ReflectionUtils_GetGetMethodByReflection_m4334 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830_il2cpp_TypeInfo));
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m4315(L_0, /*hidden argument*/&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m4315_MethodInfo);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t830 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m4316_MethodInfo };
		GetDelegate_t825 * L_5 = (GetDelegate_t825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GetDelegate_t825_il2cpp_TypeInfo));
		GetDelegate__ctor_m4299(L_5, L_3, L_4, /*hidden argument*/&GetDelegate__ctor_m4299_MethodInfo);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t826 * ReflectionUtils_GetSetMethod_m4335 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		SetDelegate_t826 * L_1 = ReflectionUtils_GetSetMethodByReflection_m4337(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetSetMethodByReflection_m4337_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" SetDelegate_t826 * ReflectionUtils_GetSetMethod_m4336 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		SetDelegate_t826 * L_1 = ReflectionUtils_GetSetMethodByReflection_m4338(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetSetMethodByReflection_m4338_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t826 * ReflectionUtils_GetSetMethodByReflection_m4337 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831_il2cpp_TypeInfo));
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4317(L_0, /*hidden argument*/&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m4317_MethodInfo);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t833_il2cpp_TypeInfo));
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m4327(NULL /*static, unused*/, L_2, /*hidden argument*/&ReflectionUtils_GetSetterMethodInfo_m4327_MethodInfo);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t831 * L_4 = V_0;
		IntPtr_t L_5 = { &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m4318_MethodInfo };
		SetDelegate_t826 * L_6 = (SetDelegate_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SetDelegate_t826_il2cpp_TypeInfo));
		SetDelegate__ctor_m4303(L_6, L_4, L_5, /*hidden argument*/&SetDelegate__ctor_m4303_MethodInfo);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" SetDelegate_t826 * ReflectionUtils_GetSetMethodByReflection_m4338 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832_il2cpp_TypeInfo));
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m4319(L_0, /*hidden argument*/&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m4319_MethodInfo);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t832 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m4320_MethodInfo };
		SetDelegate_t826 * L_5 = (SetDelegate_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SetDelegate_t826_il2cpp_TypeInfo));
		SetDelegate__ctor_m4303(L_5, L_3, L_4, /*hidden argument*/&SetDelegate__ctor_m4303_MethodInfo);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WrapperlessIcall_t837_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m4577_MethodInfo;


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern MethodInfo WrapperlessIcall__ctor_m4339_MethodInfo;
extern "C" void WrapperlessIcall__ctor_m4339 (WrapperlessIcall_t837 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IL2CPPStructAlignmentAttribute_t838_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern MethodInfo IL2CPPStructAlignmentAttribute__ctor_m4340_MethodInfo;
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m4340 (IL2CPPStructAlignmentAttribute_t838 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AttributeHelperEngine_t842_il2cpp_TypeInfo;
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
extern TypeInfo DisallowMultipleComponentU5BU5D_t839_il2cpp_TypeInfo;
extern TypeInfo DisallowMultipleComponent_t593_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditModeU5BU5D_t840_il2cpp_TypeInfo;
extern TypeInfo ExecuteInEditMode_t229_il2cpp_TypeInfo;
extern TypeInfo RequireComponentU5BU5D_t841_il2cpp_TypeInfo;
extern TypeInfo RequireComponent_t236_il2cpp_TypeInfo;
extern TypeInfo Stack_1_t951_il2cpp_TypeInfo;
extern TypeInfo List_1_t952_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
extern Il2CppType DisallowMultipleComponentU5BU5D_t839_0_0_0;
extern Il2CppType ExecuteInEditModeU5BU5D_t840_0_0_0;
extern Il2CppType RequireComponentU5BU5D_t841_0_0_0;
extern Il2CppType Stack_1_t951_0_0_0;
extern Il2CppType MonoBehaviour_t5_0_0_0;
extern Il2CppType DisallowMultipleComponent_t593_0_0_0;
extern Il2CppType RequireComponent_t236_0_0_0;
extern Il2CppType List_1_t952_0_0_0;
extern Il2CppType ExecuteInEditMode_t229_0_0_0;
extern MethodInfo Stack_1__ctor_m4748_MethodInfo;
extern MethodInfo Type_get_BaseType_m4749_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m4750_MethodInfo;
extern MethodInfo Stack_1_get_Count_m4751_MethodInfo;
extern MethodInfo List_1__ctor_m4752_MethodInfo;
extern MethodInfo List_1_Add_m4753_MethodInfo;
extern Il2CppGenericMethod Stack_1__ctor_m4748_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m4754_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m4755_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m4751_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m4752_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m4753_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m4756_GenericMethod;


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern MethodInfo AttributeHelperEngine__cctor_m4341_MethodInfo;
extern TypeInfo* DisallowMultipleComponentU5BU5D_t839_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t840_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t841_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m4341 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool AttributeHelperEngine__cctor_m4341_init;
	if (!AttributeHelperEngine__cctor_m4341_init)
	{
		DisallowMultipleComponentU5BU5D_t839_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisallowMultipleComponentU5BU5D_t839_0_0_0);
		ExecuteInEditModeU5BU5D_t840_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ExecuteInEditModeU5BU5D_t840_0_0_0);
		RequireComponentU5BU5D_t841_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RequireComponentU5BU5D_t841_0_0_0);
		AttributeHelperEngine__cctor_m4341_init = true;
	}
	{
		((AttributeHelperEngine_t842_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t842_il2cpp_TypeInfo)->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t839*)SZArrayNew(DisallowMultipleComponentU5BU5D_t839_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t842_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t842_il2cpp_TypeInfo)->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t840*)SZArrayNew(ExecuteInEditModeU5BU5D_t840_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t842_StaticFields*)InitializedTypeInfo(&AttributeHelperEngine_t842_il2cpp_TypeInfo)->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t841*)SZArrayNew(RequireComponentU5BU5D_t841_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4342_MethodInfo;
extern TypeInfo* Stack_1_t951_il2cpp_TypeInfo_var;
extern MethodInfo* Stack_1__ctor_m4748_MethodInfo_var;
extern MethodInfo* Stack_1_Push_m4754_MethodInfo_var;
extern MethodInfo* Stack_1_Pop_m4755_MethodInfo_var;
extern MethodInfo* Stack_1_get_Count_m4751_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4342 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4342_init;
	if (!AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4342_init)
	{
		Stack_1_t951_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Stack_1_t951_0_0_0);
		Stack_1__ctor_m4748_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1__ctor_m4748_GenericMethod);
		Stack_1_Push_m4754_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Push_m4754_GenericMethod);
		Stack_1_Pop_m4755_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_Pop_m4755_GenericMethod);
		Stack_1_get_Count_m4751_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Stack_1_get_Count_m4751_GenericMethod);
		AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4342_init = true;
	}
	Stack_1_t951 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t194* V_2 = {0};
	{
		Stack_1_t951 * L_0 = (Stack_1_t951 *)il2cpp_codegen_object_new (Stack_1_t951_il2cpp_TypeInfo_var);
		Stack_1__ctor_m4748(L_0, /*hidden argument*/Stack_1__ctor_m4748_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t951 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m4754(L_1, L_2, /*hidden argument*/Stack_1_Push_m4754_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m4749_MethodInfo, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t5_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t951 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m4755(L_8, /*hidden argument*/Stack_1_Pop_m4755_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&DisallowMultipleComponent_t593_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_10);
		ObjectU5BU5D_t194* L_12 = (ObjectU5BU5D_t194*)VirtFuncInvoker2< ObjectU5BU5D_t194*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m4750_MethodInfo, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t194* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t951 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Stack_1_get_Count_m4751_MethodInfo_var, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern MethodInfo AttributeHelperEngine_GetRequiredComponents_m4343_MethodInfo;
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t952_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4752_MethodInfo_var;
extern MethodInfo* List_1_Add_m4753_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m4756_MethodInfo_var;
extern "C" TypeU5BU5D_t207* AttributeHelperEngine_GetRequiredComponents_m4343 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	static bool AttributeHelperEngine_GetRequiredComponents_m4343_init;
	if (!AttributeHelperEngine_GetRequiredComponents_m4343_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		List_1_t952_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t952_0_0_0);
		List_1__ctor_m4752_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4752_GenericMethod);
		List_1_Add_m4753_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4753_GenericMethod);
		List_1_ToArray_m4756_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m4756_GenericMethod);
		AttributeHelperEngine_GetRequiredComponents_m4343_init = true;
	}
	List_1_t952 * V_0 = {0};
	ObjectU5BU5D_t194* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t236 * V_3 = {0};
	TypeU5BU5D_t207* V_4 = {0};
	{
		V_0 = (List_1_t952 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&RequireComponent_t236_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t194* L_2 = (ObjectU5BU5D_t194*)VirtFuncInvoker2< ObjectU5BU5D_t194*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m4750_MethodInfo, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t194* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t236 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), InitializedTypeInfo(&RequireComponent_t236_il2cpp_TypeInfo)));
		List_1_t952 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t194* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m4749_MethodInfo, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t5_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t207* L_11 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		RequireComponent_t236 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t207* L_14 = L_11;
		RequireComponent_t236 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t207* L_17 = L_14;
		RequireComponent_t236 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t207* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t952 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t952_il2cpp_TypeInfo_var);
		List_1_t952 * L_22 = (List_1_t952 *)il2cpp_codegen_object_new (List_1_t952_il2cpp_TypeInfo_var);
		List_1__ctor_m4752(L_22, /*hidden argument*/List_1__ctor_m4752_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t236 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t952 * L_25 = V_0;
		RequireComponent_t236 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m4753_MethodInfo_var, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t236 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t952 * L_30 = V_0;
		RequireComponent_t236 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m4753_MethodInfo_var, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t236 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t952 * L_35 = V_0;
		RequireComponent_t236 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(List_1_Add_m4753_MethodInfo_var, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t194* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m4749_MethodInfo, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_45 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t5_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t952 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t207*)NULL;
	}

IL_00f7:
	{
		List_1_t952 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t207* L_48 = List_1_ToArray_m4756(L_47, /*hidden argument*/List_1_ToArray_m4756_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern MethodInfo AttributeHelperEngine_CheckIsEditorScript_m4344_MethodInfo;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m4344 (Object_t * __this /* static, unused */, Type_t * ___klass, MethodInfo* method)
{
	ObjectU5BU5D_t194* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&ExecuteInEditMode_t229_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_0);
		ObjectU5BU5D_t194* L_2 = (ObjectU5BU5D_t194*)VirtFuncInvoker2< ObjectU5BU5D_t194*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m4750_MethodInfo, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t194* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m4749_MethodInfo, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&MonoBehaviour_t5_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern MethodInfo DisallowMultipleComponent__ctor_m3141_MethodInfo;
extern "C" void DisallowMultipleComponent__ctor_m3141 (DisallowMultipleComponent_t593 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern MethodInfo RequireComponent__ctor_m1100_MethodInfo;
extern "C" void RequireComponent__ctor_m1100 (RequireComponent_t236 * __this, Type_t * ___requiredComponent, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddComponentMenu_t564_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern MethodInfo AddComponentMenu__ctor_m3087_MethodInfo;
extern "C" void AddComponentMenu__ctor_m3087 (AddComponentMenu_t564 * __this, String_t* ___menuName, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern MethodInfo AddComponentMenu__ctor_m3140_MethodInfo;
extern "C" void AddComponentMenu__ctor_m3140 (AddComponentMenu_t564 * __this, String_t* ___menuName, int32_t ___order, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern MethodInfo ExecuteInEditMode__ctor_m1094_MethodInfo;
extern "C" void ExecuteInEditMode__ctor_m1094 (ExecuteInEditMode_t229 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideInInspector_t238_il2cpp_TypeInfo;
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern MethodInfo HideInInspector__ctor_m1101_MethodInfo;
extern "C" void HideInInspector__ctor_m1101 (HideInInspector_t238 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetupCoroutine_t843_il2cpp_TypeInfo;
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
extern TypeInfo Binder_t953_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t954_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t955_il2cpp_TypeInfo;
extern MethodInfo Type_InvokeMember_m4757_MethodInfo;


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern MethodInfo SetupCoroutine__ctor_m4345_MethodInfo;
extern "C" void SetupCoroutine__ctor_m4345 (SetupCoroutine_t843 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeMember_m4346_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m4346 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeMember_m4346_init;
	if (!SetupCoroutine_InvokeMember_m4346_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		SetupCoroutine_InvokeMember_m4346_init = true;
	}
	ObjectU5BU5D_t194* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t194*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t194* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2624(L_3, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t194* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t953 *, Object_t *, ObjectU5BU5D_t194*, ParameterModifierU5BU5D_t954*, CultureInfo_t919 *, StringU5BU5D_t215* >::Invoke(&Type_InvokeMember_m4757_MethodInfo, L_4, L_5, ((int32_t)308), (Binder_t953 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t954*)(ParameterModifierU5BU5D_t954*)NULL, (CultureInfo_t919 *)NULL, (StringU5BU5D_t215*)(StringU5BU5D_t215*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern MethodInfo SetupCoroutine_InvokeStatic_m4347_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m4347 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, MethodInfo* method)
{
	static bool SetupCoroutine_InvokeStatic_m4347_init;
	if (!SetupCoroutine_InvokeStatic_m4347_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		SetupCoroutine_InvokeStatic_m4347_init = true;
	}
	ObjectU5BU5D_t194* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t194*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t194* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t194* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t953 *, Object_t *, ObjectU5BU5D_t194*, ParameterModifierU5BU5D_t954*, CultureInfo_t919 *, StringU5BU5D_t215* >::Invoke(&Type_InvokeMember_m4757_MethodInfo, L_3, L_4, ((int32_t)312), (Binder_t953 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t954*)(ParameterModifierU5BU5D_t954*)NULL, (CultureInfo_t919 *)NULL, (StringU5BU5D_t215*)(StringU5BU5D_t215*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WritableAttribute_t844_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern MethodInfo WritableAttribute__ctor_m4348_MethodInfo;
extern "C" void WritableAttribute__ctor_m4348 (WritableAttribute_t844 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyIsEditorAssembly_t845_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern MethodInfo AssemblyIsEditorAssembly__ctor_m4349_MethodInfo;
extern "C" void AssemblyIsEditorAssembly__ctor_m4349 (AssemblyIsEditorAssembly_t845 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcUserProfileData_t665_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
extern TypeInfo UserProfile_t846_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern MethodInfo UserProfile__ctor_m4368_MethodInfo;
extern MethodInfo GcUserProfileData_ToUserProfile_m4350_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t846 * GcUserProfileData_ToUserProfile_m4350 (GcUserProfileData_t665 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t221 * L_3 = (__this->___image_3);
		UserProfile_t846 * L_4 = (UserProfile_t846 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UserProfile_t846_il2cpp_TypeInfo));
		UserProfile__ctor_m4368(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/&UserProfile__ctor_m4368_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern MethodInfo GcUserProfileData_AddToArray_m4351_MethodInfo;
extern "C" void GcUserProfileData_AddToArray_m4351 (GcUserProfileData_t665 * __this, UserProfileU5BU5D_t653** ___array, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t653** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t653**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t653**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t653** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t846 * L_5 = GcUserProfileData_ToUserProfile_m4350(__this, /*hidden argument*/&GcUserProfileData_ToUserProfile_m4350_MethodInfo);
		NullCheck((*((UserProfileU5BU5D_t653**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t653**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t653**)L_3)), L_5);
		*((UserProfile_t846 **)(UserProfile_t846 **)SZArrayLdElema((*((UserProfileU5BU5D_t653**)L_3)), L_4)) = (UserProfile_t846 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m922(NULL /*static, unused*/, (String_t*) &_stringLiteral407, /*hidden argument*/&Debug_Log_m922_MethodInfo);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementDescriptionData_t664_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
extern TypeInfo AchievementDescription_t847_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern MethodInfo AchievementDescription__ctor_m4388_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m4352_MethodInfo;
extern "C" AchievementDescription_t847 * GcAchievementDescriptionData_ToAchievementDescription_m4352 (GcAchievementDescriptionData_t664 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t221 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t221 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t221 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t221 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t847 * L_7 = (AchievementDescription_t847 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AchievementDescription_t847_il2cpp_TypeInfo));
		AchievementDescription__ctor_m4388(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/&AchievementDescription__ctor_m4388_MethodInfo);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcAchievementData_t659_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
extern TypeInfo Achievement_t848_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern MethodInfo DateTime__ctor_m4758_MethodInfo;
extern MethodInfo DateTime_AddSeconds_m4759_MethodInfo;
extern MethodInfo Achievement__ctor_m4377_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern MethodInfo GcAchievementData_ToAchievement_m4353_MethodInfo;
extern "C" Achievement_t848 * GcAchievementData_ToAchievement_m4353 (GcAchievementData_t659 * __this, MethodInfo* method)
{
	DateTime_t683  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m4758((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m4758_MethodInfo);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t683  L_5 = DateTime_AddSeconds_m4759((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m4759_MethodInfo);
		Achievement_t848 * L_6 = (Achievement_t848 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t848_il2cpp_TypeInfo));
		Achievement__ctor_m4377(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/&Achievement__ctor_m4377_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t659_marshal(const GcAchievementData_t659& unmarshaled, GcAchievementData_t659_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t659_marshal_back(const GcAchievementData_t659_marshaled& marshaled, GcAchievementData_t659& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t659_marshal_cleanup(GcAchievementData_t659_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GcScoreData_t661_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
extern TypeInfo Score_t849_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern MethodInfo Score__ctor_m4399_MethodInfo;


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern MethodInfo GcScoreData_ToScore_m4354_MethodInfo;
extern "C" Score_t849 * GcScoreData_ToScore_m4354 (GcScoreData_t661 * __this, MethodInfo* method)
{
	DateTime_t683  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m4758((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/&DateTime__ctor_m4758_MethodInfo);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t683  L_5 = DateTime_AddSeconds_m4759((&V_0), (((double)L_4)), /*hidden argument*/&DateTime_AddSeconds_m4759_MethodInfo);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t849 * L_8 = (Score_t849 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t849_il2cpp_TypeInfo));
		Score__ctor_m4399(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/&Score__ctor_m4399_MethodInfo);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t661_marshal(const GcScoreData_t661& unmarshaled, GcScoreData_t661_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t661_marshal_back(const GcScoreData_t661_marshaled& marshaled, GcScoreData_t661& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t661_marshal_cleanup(GcScoreData_t661_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Resolution_t850_il2cpp_TypeInfo;
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"



// System.Int32 UnityEngine.Resolution::get_width()
extern MethodInfo Resolution_get_width_m4355_MethodInfo;
extern "C" int32_t Resolution_get_width_m4355 (Resolution_t850 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern MethodInfo Resolution_set_width_m4356_MethodInfo;
extern "C" void Resolution_set_width_m4356 (Resolution_t850 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern MethodInfo Resolution_get_height_m4357_MethodInfo;
extern "C" int32_t Resolution_get_height_m4357 (Resolution_t850 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern MethodInfo Resolution_set_height_m4358_MethodInfo;
extern "C" void Resolution_set_height_m4358 (Resolution_t850 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern MethodInfo Resolution_get_refreshRate_m4359_MethodInfo;
extern "C" int32_t Resolution_get_refreshRate_m4359 (Resolution_t850 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern MethodInfo Resolution_set_refreshRate_m4360_MethodInfo;
extern "C" void Resolution_set_refreshRate_m4360 (Resolution_t850 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern MethodInfo Resolution_ToString_m4361_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m4361 (Resolution_t850 * __this, MethodInfo* method)
{
	static bool Resolution_ToString_m4361_init;
	if (!Resolution_ToString_m4361_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Resolution_ToString_m4361_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t194* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t194* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral408, L_8, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderBuffer_t735_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraClearFlags_t851_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DepthTextureMode_t852_il2cpp_TypeInfo;
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureModeMethodDeclarations.h"



// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ColorSpace_t853_il2cpp_TypeInfo;
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpaceMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextureFormat_t854_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTextureFormat_t855_il2cpp_TypeInfo;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbeBlendInfo_t856_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LocalUser_t654_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

extern TypeInfo UserProfileU5BU5D_t653_il2cpp_TypeInfo;
extern Il2CppType UserProfileU5BU5D_t653_0_0_0;
extern MethodInfo UserProfile__ctor_m4367_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern MethodInfo LocalUser__ctor_m4362_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t653_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m4362 (LocalUser_t654 * __this, MethodInfo* method)
{
	static bool LocalUser__ctor_m4362_init;
	if (!LocalUser__ctor_m4362_init)
	{
		UserProfileU5BU5D_t653_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t653_0_0_0);
		LocalUser__ctor_m4362_init = true;
	}
	{
		UserProfile__ctor_m4367(__this, /*hidden argument*/&UserProfile__ctor_m4367_MethodInfo);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t857*)((UserProfileU5BU5D_t653*)SZArrayNew(UserProfileU5BU5D_t653_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern MethodInfo LocalUser_SetFriends_m4363_MethodInfo;
extern "C" void LocalUser_SetFriends_m4363 (LocalUser_t654 * __this, IUserProfileU5BU5D_t857* ___friends, MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t857* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern MethodInfo LocalUser_SetAuthenticated_m4364_MethodInfo;
extern "C" void LocalUser_SetAuthenticated_m4364 (LocalUser_t654 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern MethodInfo LocalUser_SetUnderage_m4365_MethodInfo;
extern "C" void LocalUser_SetUnderage_m4365 (LocalUser_t654 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern MethodInfo LocalUser_get_authenticated_m4366_MethodInfo;
extern "C" bool LocalUser_get_authenticated_m4366 (LocalUser_t654 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Texture2D_t221_il2cpp_TypeInfo;
extern TypeInfo UserState_t864_il2cpp_TypeInfo;
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
extern MethodInfo Texture2D__ctor_m3346_MethodInfo;
extern MethodInfo UserProfile_get_id_m4374_MethodInfo;
extern MethodInfo UserProfile_get_userName_m4373_MethodInfo;
extern MethodInfo UserProfile_get_isFriend_m4375_MethodInfo;
extern MethodInfo UserProfile_get_state_m4376_MethodInfo;
extern MethodInfo String_Concat_m901_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C" void UserProfile__ctor_m4367 (UserProfile_t846 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral409;
		__this->___m_ID_1 = (String_t*) &_stringLiteral150;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t221 * L_0 = (Texture2D_t221 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t221_il2cpp_TypeInfo));
		Texture2D__ctor_m3346(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/&Texture2D__ctor_m3346_MethodInfo);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m4368 (UserProfile_t846 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t221 * ___image, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t221 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern MethodInfo UserProfile_ToString_m4369_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m4369 (UserProfile_t846 * __this, MethodInfo* method)
{
	static bool UserProfile_ToString_m4369_init;
	if (!UserProfile_ToString_m4369_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		UserProfile_ToString_m4369_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m4374_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_userName_m4373_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t194* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UserProfile_get_isFriend_m4375_MethodInfo, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t194* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&UserProfile_get_state_m4376_MethodInfo, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&UserState_t864_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m901(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m901_MethodInfo);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern MethodInfo UserProfile_SetUserName_m4370_MethodInfo;
extern "C" void UserProfile_SetUserName_m4370 (UserProfile_t846 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern MethodInfo UserProfile_SetUserID_m4371_MethodInfo;
extern "C" void UserProfile_SetUserID_m4371 (UserProfile_t846 * __this, String_t* ___id, MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern MethodInfo UserProfile_SetImage_m4372_MethodInfo;
extern "C" void UserProfile_SetImage_m4372 (UserProfile_t846 * __this, Texture2D_t221 * ___image, MethodInfo* method)
{
	{
		Texture2D_t221 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m4373 (UserProfile_t846 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m4374 (UserProfile_t846 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m4375 (UserProfile_t846 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m4376 (UserProfile_t846 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Achievement_set_id_m4382_MethodInfo;
extern MethodInfo Achievement_set_percentCompleted_m4384_MethodInfo;
extern MethodInfo Achievement__ctor_m4378_MethodInfo;
extern MethodInfo Achievement_get_id_m4381_MethodInfo;
extern MethodInfo Achievement_get_percentCompleted_m4383_MethodInfo;
extern MethodInfo Achievement_get_completed_m4385_MethodInfo;
extern MethodInfo Achievement_get_hidden_m4386_MethodInfo;
extern MethodInfo Achievement_get_lastReportedDate_m4387_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m4377 (Achievement_t848 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t683  ___lastReportedDate, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m4382_MethodInfo, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m4384_MethodInfo, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t683  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C" void Achievement__ctor_m4378 (Achievement_t848 * __this, String_t* ___id, double ___percent, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m4382_MethodInfo, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m4384_MethodInfo, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo));
		DateTime_t683  L_2 = ((DateTime_t683_StaticFields*)InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo)->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern MethodInfo Achievement__ctor_m4379_MethodInfo;
extern "C" void Achievement__ctor_m4379 (Achievement_t848 * __this, MethodInfo* method)
{
	{
		Achievement__ctor_m4378(__this, (String_t*) &_stringLiteral411, (0.0), /*hidden argument*/&Achievement__ctor_m4378_MethodInfo);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern MethodInfo Achievement_ToString_m4380_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m4380 (Achievement_t848 * __this, MethodInfo* method)
{
	static bool Achievement_ToString_m4380_init;
	if (!Achievement_ToString_m4380_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Achievement_ToString_m4380_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Achievement_get_id_m4381_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(&Achievement_get_percentCompleted_m4383_MethodInfo, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Double_t921_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t194* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_completed_m4385_MethodInfo, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t194* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_hidden_m4386_MethodInfo, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t194* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_18 = L_17;
		DateTime_t683  L_19 = (DateTime_t683 )VirtFuncInvoker0< DateTime_t683  >::Invoke(&Achievement_get_lastReportedDate_m4387_MethodInfo, __this);
		DateTime_t683  L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m901(NULL /*static, unused*/, L_18, /*hidden argument*/&String_Concat_m901_MethodInfo);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m4381 (Achievement_t848 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m4382 (Achievement_t848 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m4383 (Achievement_t848 * __this, MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m4384 (Achievement_t848 * __this, double ___value, MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m4385 (Achievement_t848 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m4386 (Achievement_t848 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t683  Achievement_get_lastReportedDate_m4387 (Achievement_t848 * __this, MethodInfo* method)
{
	{
		DateTime_t683  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo AchievementDescription_set_id_m4392_MethodInfo;
extern MethodInfo AchievementDescription_get_id_m4391_MethodInfo;
extern MethodInfo AchievementDescription_get_title_m4393_MethodInfo;
extern MethodInfo AchievementDescription_get_achievedDescription_m4394_MethodInfo;
extern MethodInfo AchievementDescription_get_unachievedDescription_m4395_MethodInfo;
extern MethodInfo AchievementDescription_get_points_m4397_MethodInfo;
extern MethodInfo AchievementDescription_get_hidden_m4396_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m4388 (AchievementDescription_t847 * __this, String_t* ___id, String_t* ___title, Texture2D_t221 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(&AchievementDescription_set_id_m4392_MethodInfo, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t221 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern MethodInfo AchievementDescription_ToString_m4389_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m4389 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	static bool AchievementDescription_ToString_m4389_init;
	if (!AchievementDescription_ToString_m4389_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		AchievementDescription_ToString_m4389_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_id_m4391_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_title_m4393_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t194* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_achievedDescription_m4394_MethodInfo, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t194* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_unachievedDescription_m4395_MethodInfo, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t194* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&AchievementDescription_get_points_m4397_MethodInfo, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t194* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral410);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral410;
		ObjectU5BU5D_t194* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&AchievementDescription_get_hidden_m4396_MethodInfo, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m901(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m901_MethodInfo);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern MethodInfo AchievementDescription_SetImage_m4390_MethodInfo;
extern "C" void AchievementDescription_SetImage_m4390 (AchievementDescription_t847 * __this, Texture2D_t221 * ___image, MethodInfo* method)
{
	{
		Texture2D_t221 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m4391 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m4392 (AchievementDescription_t847 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m4393 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m4394 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m4395 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m4396 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m4397 (AchievementDescription_t847 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo DateTime_get_Now_m4538_MethodInfo;
extern MethodInfo Score_set_leaderboardID_m4402_MethodInfo;
extern MethodInfo Score_set_value_m4404_MethodInfo;
extern MethodInfo Score_get_value_m4403_MethodInfo;
extern MethodInfo Score_get_leaderboardID_m4401_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern MethodInfo Score__ctor_m4398_MethodInfo;
extern "C" void Score__ctor_m4398 (Score_t849 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo));
		DateTime_t683  L_2 = DateTime_get_Now_m4538(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m4538_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		Score__ctor_m4399(__this, L_0, L_1, (String_t*) &_stringLiteral150, L_2, L_3, (-1), /*hidden argument*/&Score__ctor_m4399_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m4399 (Score_t849 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t683  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(&Score_set_leaderboardID_m4402_MethodInfo, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(&Score_set_value_m4404_MethodInfo, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t683  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern MethodInfo Score_ToString_m4400_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m4400 (Score_t849 * __this, MethodInfo* method)
{
	static bool Score_ToString_m4400_init;
	if (!Score_ToString_m4400_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Score_ToString_m4400_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral412);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral412;
		ObjectU5BU5D_t194* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t194* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral413);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral413;
		ObjectU5BU5D_t194* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Score_get_value_m4403_MethodInfo, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t922_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t194* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral414);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral414;
		ObjectU5BU5D_t194* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Score_get_leaderboardID_m4401_MethodInfo, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t194* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral415);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral415;
		ObjectU5BU5D_t194* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t194* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral416);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral416;
		ObjectU5BU5D_t194* L_17 = L_16;
		DateTime_t683  L_18 = (__this->___m_Date_0);
		DateTime_t683  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t683_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m901(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m901_MethodInfo);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m4401 (Score_t849 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m4402 (Score_t849 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m4403 (Score_t849 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m4404 (Score_t849 * __this, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Leaderboard_t666_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
extern TypeInfo Range_t860_il2cpp_TypeInfo;
extern TypeInfo UserScope_t865_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t866_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t900_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern Il2CppType ScoreU5BU5D_t900_0_0_0;
extern MethodInfo Leaderboard_set_id_m4413_MethodInfo;
extern MethodInfo Range__ctor_m4426_MethodInfo;
extern MethodInfo Leaderboard_set_range_m4417_MethodInfo;
extern MethodInfo Leaderboard_set_userScope_m4415_MethodInfo;
extern MethodInfo Leaderboard_set_timeScope_m4419_MethodInfo;
extern MethodInfo Leaderboard_get_id_m4412_MethodInfo;
extern MethodInfo Leaderboard_get_range_m4416_MethodInfo;
extern MethodInfo Leaderboard_get_userScope_m4414_MethodInfo;
extern MethodInfo Leaderboard_get_timeScope_m4418_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern MethodInfo Leaderboard__ctor_m4405_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t900_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t215_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m4405 (Leaderboard_t666 * __this, MethodInfo* method)
{
	static bool Leaderboard__ctor_m4405_init;
	if (!Leaderboard__ctor_m4405_init)
	{
		ScoreU5BU5D_t900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t900_0_0_0);
		StringU5BU5D_t215_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t215_0_0_0);
		Leaderboard__ctor_m4405_init = true;
	}
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Leaderboard_set_id_m4413_MethodInfo, __this, (String_t*) &_stringLiteral417);
		Range_t860  L_0 = {0};
		Range__ctor_m4426(&L_0, 1, ((int32_t)10), /*hidden argument*/&Range__ctor_m4426_MethodInfo);
		VirtActionInvoker1< Range_t860  >::Invoke(&Leaderboard_set_range_m4417_MethodInfo, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_userScope_m4415_MethodInfo, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_timeScope_m4419_MethodInfo, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t849 * L_1 = (Score_t849 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t849_il2cpp_TypeInfo));
		Score__ctor_m4398(L_1, (String_t*) &_stringLiteral417, (((int64_t)0)), /*hidden argument*/&Score__ctor_m4398_MethodInfo);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t859*)((ScoreU5BU5D_t900*)SZArrayNew(ScoreU5BU5D_t900_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral417;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t215*)SZArrayNew(StringU5BU5D_t215_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern MethodInfo Leaderboard_ToString_m4406_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m4406 (Leaderboard_t666 * __this, MethodInfo* method)
{
	static bool Leaderboard_ToString_m4406_init;
	if (!Leaderboard_ToString_m4406_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Leaderboard_ToString_m4406_init = true;
	}
	Range_t860  V_0 = {0};
	Range_t860  V_1 = {0};
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral418);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral418;
		ObjectU5BU5D_t194* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Leaderboard_get_id_m4412_MethodInfo, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t194* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral419);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral419;
		ObjectU5BU5D_t194* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t194* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral420);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral420;
		ObjectU5BU5D_t194* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t194* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral421);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral421;
		ObjectU5BU5D_t194* L_12 = L_11;
		Range_t860  L_13 = (Range_t860 )VirtFuncInvoker0< Range_t860  >::Invoke(&Leaderboard_get_range_m4416_MethodInfo, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t194* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral390);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral390;
		ObjectU5BU5D_t194* L_18 = L_17;
		Range_t860  L_19 = (Range_t860 )VirtFuncInvoker0< Range_t860  >::Invoke(&Leaderboard_get_range_m4416_MethodInfo, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t194* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral422);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral422;
		ObjectU5BU5D_t194* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&UInt32_t915_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t194* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral423);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral423;
		ObjectU5BU5D_t194* L_29 = L_28;
		IScoreU5BU5D_t859* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t194* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral424);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral424;
		ObjectU5BU5D_t194* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_userScope_m4414_MethodInfo, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&UserScope_t865_il2cpp_TypeInfo), &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t194* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral425);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral425;
		ObjectU5BU5D_t194* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_timeScope_m4418_MethodInfo, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&TimeScope_t866_il2cpp_TypeInfo), &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t194* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral426);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral426;
		ObjectU5BU5D_t194* L_44 = L_43;
		StringU5BU5D_t215* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Concat_m901(NULL /*static, unused*/, L_44, /*hidden argument*/&String_Concat_m901_MethodInfo);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern MethodInfo Leaderboard_SetLocalUserScore_m4407_MethodInfo;
extern "C" void Leaderboard_SetLocalUserScore_m4407 (Leaderboard_t666 * __this, Object_t * ___score, MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern MethodInfo Leaderboard_SetMaxRange_m4408_MethodInfo;
extern "C" void Leaderboard_SetMaxRange_m4408 (Leaderboard_t666 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern MethodInfo Leaderboard_SetScores_m4409_MethodInfo;
extern "C" void Leaderboard_SetScores_m4409 (Leaderboard_t666 * __this, IScoreU5BU5D_t859* ___scores, MethodInfo* method)
{
	{
		IScoreU5BU5D_t859* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern MethodInfo Leaderboard_SetTitle_m4410_MethodInfo;
extern "C" void Leaderboard_SetTitle_m4410 (Leaderboard_t666 * __this, String_t* ___title, MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern MethodInfo Leaderboard_GetUserFilter_m4411_MethodInfo;
extern "C" StringU5BU5D_t215* Leaderboard_GetUserFilter_m4411 (Leaderboard_t666 * __this, MethodInfo* method)
{
	{
		StringU5BU5D_t215* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m4412 (Leaderboard_t666 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m4413 (Leaderboard_t666 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m4414 (Leaderboard_t666 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m4415 (Leaderboard_t666 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t860  Leaderboard_get_range_m4416 (Leaderboard_t666 * __this, MethodInfo* method)
{
	{
		Range_t860  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m4417 (Leaderboard_t666 * __this, Range_t860  ___value, MethodInfo* method)
{
	{
		Range_t860  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m4418 (Leaderboard_t666 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m4419 (Leaderboard_t666 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HitInfo_t861_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo GameObject_SendMessage_m3870_MethodInfo;
extern MethodInfo Object_op_Equality_m576_MethodInfo;
extern MethodInfo Object_op_Inequality_m642_MethodInfo;


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern MethodInfo HitInfo_SendMessage_m4420_MethodInfo;
extern "C" void HitInfo_SendMessage_m4420 (HitInfo_t861 * __this, String_t* ___name, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m3870(L_0, L_1, NULL, 1, /*hidden argument*/&GameObject_SendMessage_m3870_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_Compare_m4421_MethodInfo;
extern "C" bool HitInfo_Compare_m4421 (Object_t * __this /* static, unused */, HitInfo_t861  ___lhs, HitInfo_t861  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t92 * L_0 = ((&___lhs)->___target_0);
		GameObject_t92 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t19 * L_3 = ((&___lhs)->___camera_1);
		Camera_t19 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m576(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_op_Implicit_m4422_MethodInfo;
extern "C" bool HitInfo_op_Implicit_m4422 (Object_t * __this /* static, unused */, HitInfo_t861  ___exists, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t92 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t19 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m642(NULL /*static, unused*/, L_2, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SendMouseEvents_t863_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
extern TypeInfo HitInfoU5BU5D_t862_il2cpp_TypeInfo;
extern TypeInfo Input_t187_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t269_il2cpp_TypeInfo;
extern TypeInfo Camera_t19_il2cpp_TypeInfo;
extern TypeInfo Vector3_t8_il2cpp_TypeInfo;
extern TypeInfo Mathf_t186_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern Il2CppType HitInfoU5BU5D_t862_0_0_0;
extern Il2CppType CameraU5BU5D_t269_0_0_0;
extern MethodInfo Input_get_mousePosition_m783_MethodInfo;
extern MethodInfo Camera_get_allCamerasCount_m1288_MethodInfo;
extern MethodInfo Camera_GetAllCameras_m1289_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m826_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m3784_MethodInfo;
extern MethodInfo Rect_Contains_m3613_MethodInfo;
extern MethodInfo Object_op_Implicit_m582_MethodInfo;
extern MethodInfo GUILayer_HitTest_m3360_MethodInfo;
extern MethodInfo Component_get_gameObject_m577_MethodInfo;
extern MethodInfo Camera_get_eventMask_m3780_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m947_MethodInfo;
extern MethodInfo Ray_get_direction_m953_MethodInfo;
extern MethodInfo Mathf_Approximately_m2641_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m886_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m888_MethodInfo;
extern MethodInfo Mathf_Abs_m596_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m2671_MethodInfo;
extern MethodInfo Camera_RaycastTry_m3795_MethodInfo;
extern MethodInfo Camera_get_clearFlags_m884_MethodInfo;
extern MethodInfo Camera_RaycastTry2D_m3797_MethodInfo;
extern MethodInfo SendMouseEvents_SendEvents_m4425_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m952_MethodInfo;
extern MethodInfo Input_GetMouseButton_m949_MethodInfo;
struct Component_t185;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.GUILayer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_29.h"
struct Component_t185;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m585_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m585(__this, method) (( Object_t * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t674_m4760(__this, method) (( GUILayer_t674 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisGUILayer_t674_m4760_GenericMethod;


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern MethodInfo SendMouseEvents__cctor_m4423_MethodInfo;
extern TypeInfo* HitInfoU5BU5D_t862_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m4423 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SendMouseEvents__cctor_m4423_init;
	if (!SendMouseEvents__cctor_m4423_init)
	{
		HitInfoU5BU5D_t862_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HitInfoU5BU5D_t862_0_0_0);
		SendMouseEvents__cctor_m4423_init = true;
	}
	HitInfo_t861  V_0 = {0};
	HitInfo_t861  V_1 = {0};
	HitInfo_t861  V_2 = {0};
	HitInfo_t861  V_3 = {0};
	HitInfo_t861  V_4 = {0};
	HitInfo_t861  V_5 = {0};
	HitInfo_t861  V_6 = {0};
	HitInfo_t861  V_7 = {0};
	HitInfo_t861  V_8 = {0};
	{
		HitInfoU5BU5D_t862* L_0 = ((HitInfoU5BU5D_t862*)SZArrayNew(HitInfoU5BU5D_t862_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_0));
		HitInfo_t861  L_1 = V_0;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t862* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_1));
		HitInfo_t861  L_3 = V_1;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t862* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_2));
		HitInfo_t861  L_5 = V_2;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t862* L_6 = ((HitInfoU5BU5D_t862*)SZArrayNew(HitInfoU5BU5D_t862_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_3));
		HitInfo_t861  L_7 = V_3;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t862* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_4));
		HitInfo_t861  L_9 = V_4;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t862* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_5));
		HitInfo_t861  L_11 = V_5;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t862* L_12 = ((HitInfoU5BU5D_t862*)SZArrayNew(HitInfoU5BU5D_t862_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_6));
		HitInfo_t861  L_13 = V_6;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t862* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_7));
		HitInfo_t861  L_15 = V_7;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t862* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_8));
		HitInfo_t861  L_17 = V_8;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern MethodInfo SendMouseEvents_DoSendMouseEvents_m4424_MethodInfo;
extern TypeInfo* CameraU5BU5D_t269_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisGUILayer_t674_m4760_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m4424 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method)
{
	static bool SendMouseEvents_DoSendMouseEvents_m4424_init;
	if (!SendMouseEvents_DoSendMouseEvents_m4424_init)
	{
		CameraU5BU5D_t269_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CameraU5BU5D_t269_0_0_0);
		Component_GetComponent_TisGUILayer_t674_m4760_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisGUILayer_t674_m4760_GenericMethod);
		SendMouseEvents_DoSendMouseEvents_m4424_init = true;
	}
	Vector3_t8  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t19 * V_3 = {0};
	CameraU5BU5D_t269* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t260  V_6 = {0};
	GUILayer_t674 * V_7 = {0};
	GUIElement_t673 * V_8 = {0};
	Ray_t18  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t92 * V_12 = {0};
	GameObject_t92 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t861  V_15 = {0};
	Vector3_t8  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_0 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m1288(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m1288_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		CameraU5BU5D_t269* L_2 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		CameraU5BU5D_t269* L_3 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t269*)SZArrayNew(CameraU5BU5D_t269_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		CameraU5BU5D_t269* L_6 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m1289(NULL /*static, unused*/, L_6, /*hidden argument*/&Camera_GetAllCameras_m1289_MethodInfo);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_7 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_15));
		HitInfo_t861  L_9 = V_15;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_12 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		CameraU5BU5D_t269* L_14 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t269* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t19 **)(Camera_t19 **)SZArrayLdElema(L_15, L_17));
		Camera_t19 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m576(NULL /*static, unused*/, L_18, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t19 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t80 * L_22 = Camera_get_targetTexture_m826(L_21, /*hidden argument*/&Camera_get_targetTexture_m826_MethodInfo);
		bool L_23 = Object_op_Inequality_m642(NULL /*static, unused*/, L_22, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t19 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t260  L_25 = Camera_get_pixelRect_m3784(L_24, /*hidden argument*/&Camera_get_pixelRect_m3784_MethodInfo);
		V_6 = L_25;
		Vector3_t8  L_26 = V_0;
		bool L_27 = Rect_Contains_m3613((&V_6), L_26, /*hidden argument*/&Rect_Contains_m3613_MethodInfo);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t19 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t674 * L_29 = Component_GetComponent_TisGUILayer_t674_m4760(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t674_m4760_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t674 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m582(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t674 * L_32 = V_7;
		Vector3_t8  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t673 * L_34 = GUILayer_HitTest_m3360(L_32, L_33, /*hidden argument*/&GUILayer_HitTest_m3360_MethodInfo);
		V_8 = L_34;
		GUIElement_t673 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m582(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_37 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t673 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t92 * L_39 = Component_get_gameObject_m577(L_38, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t862* L_40 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t19 * L_41 = V_3;
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_42 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t92 *)NULL;
		HitInfoU5BU5D_t862* L_43 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t19 *)NULL;
	}

IL_0141:
	{
		Camera_t19 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m3780(L_44, /*hidden argument*/&Camera_get_eventMask_m3780_MethodInfo);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t19 * L_46 = V_3;
		Vector3_t8  L_47 = V_0;
		NullCheck(L_46);
		Ray_t18  L_48 = Camera_ScreenPointToRay_m947(L_46, L_47, /*hidden argument*/&Camera_ScreenPointToRay_m947_MethodInfo);
		V_9 = L_48;
		Vector3_t8  L_49 = Ray_get_direction_m953((&V_9), /*hidden argument*/&Ray_get_direction_m953_MethodInfo);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		bool L_52 = Mathf_Approximately_m2641(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/&Mathf_Approximately_m2641_MethodInfo);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t19 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m886(L_53, /*hidden argument*/&Camera_get_farClipPlane_m886_MethodInfo);
		Camera_t19 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m888(L_55, /*hidden argument*/&Camera_get_nearClipPlane_m888_MethodInfo);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t19 * L_59 = V_3;
		Ray_t18  L_60 = V_9;
		float L_61 = V_11;
		Camera_t19 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m2671(L_62, /*hidden argument*/&Camera_get_cullingMask_m2671_MethodInfo);
		Camera_t19 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m3780(L_64, /*hidden argument*/&Camera_get_eventMask_m3780_MethodInfo);
		NullCheck(L_59);
		GameObject_t92 * L_66 = Camera_RaycastTry_m3795(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/&Camera_RaycastTry_m3795_MethodInfo);
		V_12 = L_66;
		GameObject_t92 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m642(NULL /*static, unused*/, L_67, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_69 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t92 * L_70 = V_12;
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t862* L_71 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t19 * L_72 = V_3;
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t19 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m884(L_73, /*hidden argument*/&Camera_get_clearFlags_m884_MethodInfo);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t19 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m884(L_75, /*hidden argument*/&Camera_get_clearFlags_m884_MethodInfo);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_77 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t92 *)NULL;
		HitInfoU5BU5D_t862* L_78 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t19 *)NULL;
	}

IL_0226:
	{
		Camera_t19 * L_79 = V_3;
		Ray_t18  L_80 = V_9;
		float L_81 = V_11;
		Camera_t19 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m2671(L_82, /*hidden argument*/&Camera_get_cullingMask_m2671_MethodInfo);
		Camera_t19 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m3780(L_84, /*hidden argument*/&Camera_get_eventMask_m3780_MethodInfo);
		NullCheck(L_79);
		GameObject_t92 * L_86 = Camera_RaycastTry2D_m3797(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/&Camera_RaycastTry2D_m3797_MethodInfo);
		V_13 = L_86;
		GameObject_t92 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m642(NULL /*static, unused*/, L_87, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_89 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t92 * L_90 = V_13;
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t862* L_91 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t19 * L_92 = V_3;
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t19 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m884(L_93, /*hidden argument*/&Camera_get_clearFlags_m884_MethodInfo);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t19 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m884(L_95, /*hidden argument*/&Camera_get_clearFlags_m884_MethodInfo);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_97 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t92 *)NULL;
		HitInfoU5BU5D_t862* L_98 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t19 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t269* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_103 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m4425(NULL /*static, unused*/, L_102, (*(HitInfo_t861 *)((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/&SendMouseEvents_SendEvents_m4425_MethodInfo);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_107 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" void SendMouseEvents_SendEvents_m4425 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t861  ___hit, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t861  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m952(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m952_MethodInfo);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m949(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m949_MethodInfo);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t861  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m4422(NULL /*static, unused*/, L_3, /*hidden argument*/&HitInfo_op_Implicit_m4422_MethodInfo);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_5 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t861  L_7 = ___hit;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t862* L_8 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m4420(((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral427, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_11 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m4422(NULL /*static, unused*/, (*(HitInfo_t861 *)((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/&HitInfo_op_Implicit_m4422_MethodInfo);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t861  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_15 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m4421(NULL /*static, unused*/, L_14, (*(HitInfo_t861 *)((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/&HitInfo_Compare_m4421_MethodInfo);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_18 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m4420(((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral428, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_20 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m4420(((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral429, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
		HitInfoU5BU5D_t862* L_22 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (InitializedTypeInfo(&HitInfo_t861_il2cpp_TypeInfo), (&V_2));
		HitInfo_t861  L_24 = V_2;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_25 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m4422(NULL /*static, unused*/, (*(HitInfo_t861 *)((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/&HitInfo_op_Implicit_m4422_MethodInfo);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_28 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m4420(((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral430, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
	}

IL_00fc:
	{
		HitInfo_t861  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_31 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m4421(NULL /*static, unused*/, L_30, (*(HitInfo_t861 *)((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/&HitInfo_Compare_m4421_MethodInfo);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t861  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m4422(NULL /*static, unused*/, L_34, /*hidden argument*/&HitInfo_op_Implicit_m4422_MethodInfo);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m4420((&___hit), (String_t*) &_stringLiteral431, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_36 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m4422(NULL /*static, unused*/, (*(HitInfo_t861 *)((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/&HitInfo_op_Implicit_m4422_MethodInfo);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_39 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m4420(((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral432, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
	}

IL_0162:
	{
		HitInfo_t861  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m4422(NULL /*static, unused*/, L_41, /*hidden argument*/&HitInfo_op_Implicit_m4422_MethodInfo);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m4420((&___hit), (String_t*) &_stringLiteral433, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
		HitInfo_SendMessage_m4420((&___hit), (String_t*) &_stringLiteral431, /*hidden argument*/&HitInfo_SendMessage_m4420_MethodInfo);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo));
		HitInfoU5BU5D_t862* L_43 = ((SendMouseEvents_t863_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t863_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t861  L_45 = ___hit;
		*((HitInfo_t861 *)(HitInfo_t861 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m4426 (Range_t860 * __this, int32_t ___fromValue, int32_t ___valueCount, MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttribute_t867_il2cpp_TypeInfo;
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern MethodInfo PropertyAttribute__ctor_m4427_MethodInfo;
extern "C" void PropertyAttribute__ctor_m4427 (PropertyAttribute_t867 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TooltipAttribute_t599_il2cpp_TypeInfo;
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern MethodInfo TooltipAttribute__ctor_m3151_MethodInfo;
extern "C" void TooltipAttribute__ctor_m3151 (TooltipAttribute_t599 * __this, String_t* ___tooltip, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m4427(__this, /*hidden argument*/&PropertyAttribute__ctor_m4427_MethodInfo);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpaceAttribute_t597_il2cpp_TypeInfo;
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern MethodInfo SpaceAttribute__ctor_m3147_MethodInfo;
extern "C" void SpaceAttribute__ctor_m3147 (SpaceAttribute_t597 * __this, float ___height, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m4427(__this, /*hidden argument*/&PropertyAttribute__ctor_m4427_MethodInfo);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RangeAttribute_t230_il2cpp_TypeInfo;
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern MethodInfo RangeAttribute__ctor_m1095_MethodInfo;
extern "C" void RangeAttribute__ctor_m1095 (RangeAttribute_t230 * __this, float ___min, float ___max, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m4427(__this, /*hidden argument*/&PropertyAttribute__ctor_m4427_MethodInfo);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAreaAttribute_t603_il2cpp_TypeInfo;
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TextAreaAttribute__ctor_m3154_MethodInfo;
extern "C" void TextAreaAttribute__ctor_m3154 (TextAreaAttribute_t603 * __this, int32_t ___minLines, int32_t ___maxLines, MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m4427(__this, /*hidden argument*/&PropertyAttribute__ctor_m4427_MethodInfo);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SelectionBaseAttribute_t598_il2cpp_TypeInfo;
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern MethodInfo SelectionBaseAttribute__ctor_m3150_MethodInfo;
extern "C" void SelectionBaseAttribute__ctor_m3150 (SelectionBaseAttribute_t598 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderState_t868_il2cpp_TypeInfo;
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern MethodInfo SliderState__ctor_m4428_MethodInfo;
extern "C" void SliderState__ctor_m4428 (SliderState_t868 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StackTraceUtility_t869_il2cpp_TypeInfo;
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
extern TypeInfo StackTrace_t870_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t553_il2cpp_TypeInfo;
extern TypeInfo Exception_t204_il2cpp_TypeInfo;
extern TypeInfo StackFrame_t956_il2cpp_TypeInfo;
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
extern MethodInfo StackTrace__ctor_m4761_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m4437_MethodInfo;
extern MethodInfo String_ToString_m4588_MethodInfo;
extern MethodInfo String_StartsWith_m4592_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m4435_MethodInfo;
extern MethodInfo String_Concat_m797_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3008_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m4762_MethodInfo;
extern MethodInfo String_get_Length_m2828_MethodInfo;
extern MethodInfo Exception_GetType_m4763_MethodInfo;
extern MethodInfo Exception_get_Message_m2810_MethodInfo;
extern MethodInfo String_Trim_m4583_MethodInfo;
extern MethodInfo Exception_get_InnerException_m4550_MethodInfo;
extern MethodInfo String_Concat_m4764_MethodInfo;
extern MethodInfo String_Split_m4765_MethodInfo;
extern MethodInfo String_get_Chars_m2843_MethodInfo;
extern MethodInfo StackTraceUtility_IsSystemStacktraceType_m4433_MethodInfo;
extern MethodInfo String_IndexOf_m4594_MethodInfo;
extern MethodInfo String_Substring_m2844_MethodInfo;
extern MethodInfo String_EndsWith_m4766_MethodInfo;
extern MethodInfo String_Remove_m2866_MethodInfo;
extern MethodInfo String_IndexOf_m4767_MethodInfo;
extern MethodInfo String_Replace_m4768_MethodInfo;
extern MethodInfo String_Replace_m4769_MethodInfo;
extern MethodInfo String_LastIndexOf_m4770_MethodInfo;
extern MethodInfo String_Insert_m2868_MethodInfo;
extern MethodInfo StackTrace_GetFrame_m4771_MethodInfo;
extern MethodInfo StackFrame_GetMethod_m4772_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m4773_MethodInfo;
extern MethodInfo Type_get_Namespace_m4774_MethodInfo;
extern MethodInfo StackFrame_GetFileName_m4775_MethodInfo;
extern MethodInfo StackFrame_GetFileLineNumber_m4776_MethodInfo;
extern MethodInfo Int32_ToString_m4612_MethodInfo;
extern MethodInfo StackTrace_get_FrameCount_m4777_MethodInfo;


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern MethodInfo StackTraceUtility__ctor_m4429_MethodInfo;
extern "C" void StackTraceUtility__ctor_m4429 (StackTraceUtility_t869 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern MethodInfo StackTraceUtility__cctor_m4430_MethodInfo;
extern "C" void StackTraceUtility__cctor_m4430 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		((StackTraceUtility_t869_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern MethodInfo StackTraceUtility_SetProjectFolder_m4431_MethodInfo;
extern "C" void StackTraceUtility_SetProjectFolder_m4431 (Object_t * __this /* static, unused */, String_t* ___folder, MethodInfo* method)
{
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		((StackTraceUtility_t869_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern MethodInfo StackTraceUtility_ExtractStackTrace_m4432_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m4432 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	StackTrace_t870 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t870 * L_0 = (StackTrace_t870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t870_il2cpp_TypeInfo));
		StackTrace__ctor_m4761(L_0, 1, 1, /*hidden argument*/&StackTrace__ctor_m4761_MethodInfo);
		V_0 = L_0;
		StackTrace_t870 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m4437(NULL /*static, unused*/, L_1, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m4437_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m4588_MethodInfo, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m4433 (Object_t * __this /* static, unused */, Object_t * ___name, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m4592(L_1, (String_t*) &_stringLiteral434, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m4592(L_3, (String_t*) &_stringLiteral435, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m4592(L_5, (String_t*) &_stringLiteral436, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m4592(L_7, (String_t*) &_stringLiteral437, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m4592(L_9, (String_t*) &_stringLiteral438, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m4592(L_11, (String_t*) &_stringLiteral439, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern MethodInfo StackTraceUtility_ExtractStringFromException_m4434_MethodInfo;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m4434 (Object_t * __this /* static, unused */, Object_t * ___exception, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		StackTraceUtility_ExtractStringFromExceptionInternal_m4435(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/&StackTraceUtility_ExtractStringFromExceptionInternal_m4435_MethodInfo);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m797(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral174, L_4, /*hidden argument*/&String_Concat_m797_MethodInfo);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m4435 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method)
{
	Exception_t204 * V_0 = {0};
	StringBuilder_t515 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t870 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t553 * L_1 = (ArgumentException_t553 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t553_il2cpp_TypeInfo));
		ArgumentException__ctor_m3008(L_1, (String_t*) &_stringLiteral440, /*hidden argument*/&ArgumentException__ctor_m3008_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t204 *)IsInst(L_2, InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo)));
		Exception_t204 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t553 * L_4 = (ArgumentException_t553 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t553_il2cpp_TypeInfo));
		ArgumentException__ctor_m3008(L_4, (String_t*) &_stringLiteral441, /*hidden argument*/&ArgumentException__ctor_m3008_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t204 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m4762_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t204 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m4762_MethodInfo, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2828(L_8, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t515 * L_10 = (StringBuilder_t515 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t515_il2cpp_TypeInfo));
		StringBuilder__ctor_m4670(L_10, G_B7_0, /*hidden argument*/&StringBuilder__ctor_m4670_MethodInfo);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m2828(L_14, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t204 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m4762_MethodInfo, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t204 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m4762_MethodInfo, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m797(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral174, L_20, /*hidden argument*/&String_Concat_m797_MethodInfo);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t204 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m4763_MethodInfo, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t204 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2810_MethodInfo, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t204 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2810_MethodInfo, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m4583(L_30, /*hidden argument*/&String_Trim_m4583_MethodInfo);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m2828(L_31, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m988(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral289, /*hidden argument*/&String_Concat_m988_MethodInfo);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m988(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&String_Concat_m988_MethodInfo);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t204 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t204 * L_41 = (Exception_t204 *)VirtFuncInvoker0< Exception_t204 * >::Invoke(&Exception_get_InnerException_m4550_MethodInfo, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m4764(NULL /*static, unused*/, (String_t*) &_stringLiteral442, L_42, (String_t*) &_stringLiteral174, L_43, /*hidden argument*/&String_Concat_m4764_MethodInfo);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t204 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t204 * L_46 = (Exception_t204 *)VirtFuncInvoker0< Exception_t204 * >::Invoke(&Exception_get_InnerException_m4550_MethodInfo, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t204 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t515 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = String_Concat_m988(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral174, /*hidden argument*/&String_Concat_m988_MethodInfo);
		NullCheck(L_48);
		StringBuilder_Append_m4676(L_48, L_50, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StackTrace_t870 * L_51 = (StackTrace_t870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t870_il2cpp_TypeInfo));
		StackTrace__ctor_m4761(L_51, 1, 1, /*hidden argument*/&StackTrace__ctor_m4761_MethodInfo);
		V_5 = L_51;
		StringBuilder_t515 * L_52 = V_1;
		StackTrace_t870 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m4437(NULL /*static, unused*/, L_53, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m4437_MethodInfo);
		NullCheck(L_52);
		StringBuilder_Append_m4676(L_52, L_54, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t515 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2541_MethodInfo, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern MethodInfo StackTraceUtility_PostprocessStacktrace_m4436_MethodInfo;
extern TypeInfo* CharU5BU5D_t432_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m4436 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method)
{
	static bool StackTraceUtility_PostprocessStacktrace_m4436_init;
	if (!StackTraceUtility_PostprocessStacktrace_m4436_init)
	{
		CharU5BU5D_t432_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t432_0_0_0);
		StackTraceUtility_PostprocessStacktrace_m4436_init = true;
	}
	StringU5BU5D_t215* V_0 = {0};
	StringBuilder_t515 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t432* L_3 = ((CharU5BU5D_t432*)SZArrayNew(CharU5BU5D_t432_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t215* L_4 = String_Split_m4765(L_2, L_3, /*hidden argument*/&String_Split_m4765_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2828(L_5, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		StringBuilder_t515 * L_7 = (StringBuilder_t515 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t515_il2cpp_TypeInfo));
		StringBuilder__ctor_m4670(L_7, L_6, /*hidden argument*/&StringBuilder__ctor_m4670_MethodInfo);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t215* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t215* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m4583((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/&String_Trim_m4583_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t215* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t215* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m2828(L_20, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m2843(L_22, 0, /*hidden argument*/&String_get_Chars_m2843_MethodInfo);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m4592(L_24, (String_t*) &_stringLiteral443, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m4592(L_27, (String_t*) &_stringLiteral444, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t215* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m4433(NULL /*static, unused*/, L_32, /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m4433_MethodInfo);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t215* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m4433(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m4433_MethodInfo);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m4594(L_38, (String_t*) &_stringLiteral445, /*hidden argument*/&String_IndexOf_m4594_MethodInfo);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2844(L_41, 0, L_42, /*hidden argument*/&String_Substring_m2844_MethodInfo);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m4594(L_44, (String_t*) &_stringLiteral446, /*hidden argument*/&String_IndexOf_m4594_MethodInfo);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m4594(L_46, (String_t*) &_stringLiteral447, /*hidden argument*/&String_IndexOf_m4594_MethodInfo);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m4594(L_48, (String_t*) &_stringLiteral448, /*hidden argument*/&String_IndexOf_m4594_MethodInfo);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m4592(L_51, (String_t*) &_stringLiteral392, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m4766(L_53, (String_t*) &_stringLiteral393, /*hidden argument*/&String_EndsWith_m4766_MethodInfo);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m4592(L_55, (String_t*) &_stringLiteral449, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m2866(L_57, 0, 3, /*hidden argument*/&String_Remove_m2866_MethodInfo);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m4594(L_59, (String_t*) &_stringLiteral450, /*hidden argument*/&String_IndexOf_m4594_MethodInfo);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m4767(L_62, (String_t*) &_stringLiteral393, L_63, /*hidden argument*/&String_IndexOf_m4767_MethodInfo);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m2866(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/&String_Remove_m2866_MethodInfo);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_74 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m4768(L_73, (String_t*) &_stringLiteral451, L_74, /*hidden argument*/&String_Replace_m4768_MethodInfo);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		String_t* L_77 = ((StackTraceUtility_t869_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m4768(L_76, L_77, L_78, /*hidden argument*/&String_Replace_m4768_MethodInfo);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m4769(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m4769_MethodInfo);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m4770(L_82, (String_t*) &_stringLiteral452, /*hidden argument*/&String_LastIndexOf_m4770_MethodInfo);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m2866(L_85, L_86, 5, /*hidden argument*/&String_Remove_m2866_MethodInfo);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m2868(L_88, L_89, (String_t*) &_stringLiteral453, /*hidden argument*/&String_Insert_m2868_MethodInfo);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m2828(L_92, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m2868(L_91, L_93, (String_t*) &_stringLiteral53, /*hidden argument*/&String_Insert_m2868_MethodInfo);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t515 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m988(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral174, /*hidden argument*/&String_Concat_m988_MethodInfo);
		NullCheck(L_95);
		StringBuilder_Append_m4676(L_95, L_97, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t215* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t515 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2541_MethodInfo, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m4437 (Object_t * __this /* static, unused */, StackTrace_t870 * ___stackTrace, MethodInfo* method)
{
	StringBuilder_t515 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t956 * V_2 = {0};
	MethodBase_t935 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t946* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t515 * L_0 = (StringBuilder_t515 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t515_il2cpp_TypeInfo));
		StringBuilder__ctor_m4670(L_0, ((int32_t)255), /*hidden argument*/&StringBuilder__ctor_m4670_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t870 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t956 * L_3 = (StackFrame_t956 *)VirtFuncInvoker1< StackFrame_t956 *, int32_t >::Invoke(&StackTrace_GetFrame_m4771_MethodInfo, L_1, L_2);
		V_2 = L_3;
		StackFrame_t956 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t935 * L_5 = (MethodBase_t935 *)VirtFuncInvoker0< MethodBase_t935 * >::Invoke(&StackFrame_GetMethod_m4772_MethodInfo, L_4);
		V_3 = L_5;
		MethodBase_t935 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t935 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m4773_MethodInfo, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m4774_MethodInfo, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m2828(L_13, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t515 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m4676(L_15, L_16, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m4676(L_17, (String_t*) &_stringLiteral132, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
	}

IL_0071:
	{
		StringBuilder_t515 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m4676(L_18, L_20, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m4676(L_21, (String_t*) &_stringLiteral391, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_22 = V_0;
		MethodBase_t935 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m4676(L_22, L_24, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m4676(L_25, (String_t*) &_stringLiteral454, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		V_6 = 0;
		MethodBase_t935 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t946* L_27 = (ParameterInfoU5BU5D_t946*)VirtFuncInvoker0< ParameterInfoU5BU5D_t946* >::Invoke(&MethodBase_GetParameters_m4742_MethodInfo, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t515 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m4676(L_29, (String_t*) &_stringLiteral455, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t515 * L_30 = V_0;
		ParameterInfoU5BU5D_t946* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t947 **)(ParameterInfo_t947 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4743_MethodInfo, (*(ParameterInfo_t947 **)(ParameterInfo_t947 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m4676(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t946* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t515 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m4676(L_39, (String_t*) &_stringLiteral53, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StackFrame_t956 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StackFrame_GetFileName_m4775_MethodInfo, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m4710_MethodInfo, L_43);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_45 = String_op_Equality_m751(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral456, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m4774_MethodInfo, L_46);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_48 = String_op_Equality_m751(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral457, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t515 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m4676(L_49, (String_t*) &_stringLiteral453, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		String_t* L_51 = ((StackTraceUtility_t869_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m4592(L_50, L_51, /*hidden argument*/&String_StartsWith_m4592_MethodInfo);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo));
		String_t* L_54 = ((StackTraceUtility_t869_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m2828(L_54, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m2828(L_56, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		String_t* L_58 = ((StackTraceUtility_t869_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t869_il2cpp_TypeInfo)->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m2828(L_58, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m2844(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/&String_Substring_m2844_MethodInfo);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t515 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m4676(L_61, L_62, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m4676(L_63, (String_t*) &_stringLiteral391, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_64 = V_0;
		StackFrame_t956 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackFrame_GetFileLineNumber_m4776_MethodInfo, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m4612((&V_10), /*hidden argument*/&Int32_ToString_m4612_MethodInfo);
		NullCheck(L_64);
		StringBuilder_Append_m4676(L_64, L_67, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
		StringBuilder_t515 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m4676(L_68, (String_t*) &_stringLiteral53, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
	}

IL_01b9:
	{
		StringBuilder_t515 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m4676(L_69, (String_t*) &_stringLiteral174, /*hidden argument*/&StringBuilder_Append_m4676_MethodInfo);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t870 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackTrace_get_FrameCount_m4777_MethodInfo, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t515 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2541_MethodInfo, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityException_t286_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo Exception__ctor_m782_MethodInfo;
extern MethodInfo Exception_set_HResult_m4778_MethodInfo;
extern MethodInfo Exception__ctor_m4779_MethodInfo;
extern MethodInfo Exception__ctor_m4780_MethodInfo;


// System.Void UnityEngine.UnityException::.ctor()
extern MethodInfo UnityException__ctor_m4438_MethodInfo;
extern "C" void UnityException__ctor_m4438 (UnityException_t286 * __this, MethodInfo* method)
{
	{
		Exception__ctor_m782(__this, (String_t*) &_stringLiteral458, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		Exception_set_HResult_m4778(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m4778_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern MethodInfo UnityException__ctor_m1270_MethodInfo;
extern "C" void UnityException__ctor_m1270 (UnityException_t286 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m782(__this, L_0, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		Exception_set_HResult_m4778(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m4778_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern MethodInfo UnityException__ctor_m4439_MethodInfo;
extern "C" void UnityException__ctor_m4439 (UnityException_t286 * __this, String_t* ___message, Exception_t204 * ___innerException, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t204 * L_1 = ___innerException;
		Exception__ctor_m4779(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m4779_MethodInfo);
		Exception_set_HResult_m4778(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m4778_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnityException__ctor_m4440_MethodInfo;
extern "C" void UnityException__ctor_m4440 (UnityException_t286 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t871 * L_0 = ___info;
		StreamingContext_t872  L_1 = ___context;
		Exception__ctor_m4780(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m4780_MethodInfo);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SharedBetweenAnimatorsAttribute_t873_il2cpp_TypeInfo;
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern MethodInfo SharedBetweenAnimatorsAttribute__ctor_m4441_MethodInfo;
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m4441 (SharedBetweenAnimatorsAttribute_t873 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StateMachineBehaviour_t874_il2cpp_TypeInfo;
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern MethodInfo ScriptableObject__ctor_m3243_MethodInfo;


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern MethodInfo StateMachineBehaviour__ctor_m4442_MethodInfo;
extern "C" void StateMachineBehaviour__ctor_m4442 (StateMachineBehaviour_t874 * __this, MethodInfo* method)
{
	{
		ScriptableObject__ctor_m3243(__this, /*hidden argument*/&ScriptableObject__ctor_m3243_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateEnter_m4443_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateEnter_m4443 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, AnimatorStateInfo_t198  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateUpdate_m4444_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateUpdate_m4444 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, AnimatorStateInfo_t198  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateExit_m4445_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateExit_m4445 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, AnimatorStateInfo_t198  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMove_m4446_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMove_m4446 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, AnimatorStateInfo_t198  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateIK_m4447_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateIK_m4447 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, AnimatorStateInfo_t198  ___stateInfo, int32_t ___layerIndex, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineEnter_m4448_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m4448 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineExit_m4449_MethodInfo;
extern "C" void StateMachineBehaviour_OnStateMachineExit_m4449 (StateMachineBehaviour_t874 * __this, Animator_t42 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DblClickSnapping_t875_il2cpp_TypeInfo;
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditOp_t876_il2cpp_TypeInfo;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditor_t539_il2cpp_TypeInfo;
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo GUIContent_t540_il2cpp_TypeInfo;
extern TypeInfo GUIStyle_t684_il2cpp_TypeInfo;
extern TypeInfo Rect_t260_il2cpp_TypeInfo;
extern TypeInfo Vector2_t13_il2cpp_TypeInfo;
extern TypeInfo GUIUtility_t697_il2cpp_TypeInfo;
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern MethodInfo GUIContent__ctor_m3492_MethodInfo;
extern MethodInfo GUIStyle_get_none_m3539_MethodInfo;
extern MethodInfo Vector2_get_zero_m696_MethodInfo;
extern MethodInfo TextEditor_SelectAll_m4451_MethodInfo;
extern MethodInfo GUIContent_get_text_m2832_MethodInfo;
extern MethodInfo TextEditor_ClearCursorPos_m4450_MethodInfo;
extern MethodInfo GUIContent_set_text_m3494_MethodInfo;
extern MethodInfo TextEditor_DeleteSelection_m4452_MethodInfo;
extern MethodInfo TextEditor_UpdateScrollOffset_m4454_MethodInfo;
extern MethodInfo Rect_get_width_m2724_MethodInfo;
extern MethodInfo Rect_get_height_m2725_MethodInfo;
extern MethodInfo Rect__ctor_m1276_MethodInfo;
extern MethodInfo GUIStyle_GetCursorPixelPosition_m3540_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m3528_MethodInfo;
extern MethodInfo RectOffset_Remove_m3515_MethodInfo;
extern MethodInfo GUIStyle_CalcSize_m3543_MethodInfo;
extern MethodInfo GUIStyle_CalcHeight_m3545_MethodInfo;
extern MethodInfo Vector2__ctor_m682_MethodInfo;
extern MethodInfo RectOffset_get_left_m3038_MethodInfo;
extern MethodInfo GUIStyle_get_lineHeight_m3537_MethodInfo;
extern MethodInfo RectOffset_get_top_m3039_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m3513_MethodInfo;
extern MethodInfo GUIUtility_set_systemCopyBuffer_m3424_MethodInfo;
extern MethodInfo GUIUtility_get_systemCopyBuffer_m3423_MethodInfo;
extern MethodInfo String_op_Inequality_m2842_MethodInfo;
extern MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m4455_MethodInfo;
extern MethodInfo TextEditor_ReplaceSelection_m4453_MethodInfo;


// System.Void UnityEngine.TextEditor::.ctor()
extern MethodInfo TextEditor__ctor_m2830_MethodInfo;
extern "C" void TextEditor__ctor_m2830 (TextEditor_t539 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t540_il2cpp_TypeInfo));
		GUIContent_t540 * L_0 = (GUIContent_t540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t540_il2cpp_TypeInfo));
		GUIContent__ctor_m3492(L_0, /*hidden argument*/&GUIContent__ctor_m3492_MethodInfo);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t684_il2cpp_TypeInfo));
		GUIStyle_t684 * L_1 = GUIStyle_get_none_m3539(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3539_MethodInfo);
		__this->___style_5 = L_1;
		Vector2_t13  L_2 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m4450 (TextEditor_t539 * __this, MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern MethodInfo TextEditor_OnFocus_m2834_MethodInfo;
extern "C" void TextEditor_OnFocus_m2834 (TextEditor_t539 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m4451(__this, /*hidden argument*/&TextEditor_SelectAll_m4451_MethodInfo);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m4451 (TextEditor_t539 * __this, MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t540 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2832(L_0, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2828(L_1, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m4450(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m4450_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m4452 (TextEditor_t539 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIContent_t540 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m2832(L_0, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2828(L_1, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t540 * L_13 = (__this->___content_4);
		GUIContent_t540 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m2832(L_14, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m2844(L_15, 0, L_16, /*hidden argument*/&String_Substring_m2844_MethodInfo);
		GUIContent_t540 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m2832(L_18, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t540 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m2832(L_21, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m2828(L_22, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m2844(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/&String_Substring_m2844_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Concat_m988(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/&String_Concat_m988_MethodInfo);
		NullCheck(L_13);
		GUIContent_set_text_m3494(L_13, L_26, /*hidden argument*/&GUIContent_set_text_m3494_MethodInfo);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t540 * L_28 = (__this->___content_4);
		GUIContent_t540 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m2832(L_29, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m2844(L_30, 0, L_31, /*hidden argument*/&String_Substring_m2844_MethodInfo);
		GUIContent_t540 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m2832(L_33, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t540 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m2832(L_36, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m2828(L_37, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m2844(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/&String_Substring_m2844_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_41 = String_Concat_m988(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/&String_Concat_m988_MethodInfo);
		NullCheck(L_28);
		GUIContent_set_text_m3494(L_28, L_41, /*hidden argument*/&GUIContent_set_text_m3494_MethodInfo);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m4450(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m4450_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m4453 (TextEditor_t539 * __this, String_t* ___replace, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m4452(__this, /*hidden argument*/&TextEditor_DeleteSelection_m4452_MethodInfo);
		GUIContent_t540 * L_0 = (__this->___content_4);
		GUIContent_t540 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m2832(L_1, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m2868(L_2, L_3, L_4, /*hidden argument*/&String_Insert_m2868_MethodInfo);
		NullCheck(L_0);
		GUIContent_set_text_m3494(L_0, L_5, /*hidden argument*/&GUIContent_set_text_m3494_MethodInfo);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m2828(L_7, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m4450(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m4450_MethodInfo);
		TextEditor_UpdateScrollOffset_m4454(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m4454_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m4454 (TextEditor_t539 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t260  V_1 = {0};
	Vector2_t13  V_2 = {0};
	Vector2_t13  V_3 = {0};
	Vector2_t13 * G_B17_0 = {0};
	Vector2_t13 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t13 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t684 * L_1 = (__this->___style_5);
		Rect_t260 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m2724(L_2, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		Rect_t260 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m2725(L_4, /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		Rect_t260  L_6 = {0};
		Rect__ctor_m1276(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/&Rect__ctor_m1276_MethodInfo);
		GUIContent_t540 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t13  L_9 = GUIStyle_GetCursorPixelPosition_m3540(L_1, L_6, L_7, L_8, /*hidden argument*/&GUIStyle_GetCursorPixelPosition_m3540_MethodInfo);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t684 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t492 * L_11 = GUIStyle_get_padding_m3528(L_10, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		Rect_t260  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t260  L_13 = RectOffset_Remove_m3515(L_11, L_12, /*hidden argument*/&RectOffset_Remove_m3515_MethodInfo);
		V_1 = L_13;
		GUIStyle_t684 * L_14 = (__this->___style_5);
		GUIContent_t540 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t13  L_16 = GUIStyle_CalcSize_m3543(L_14, L_15, /*hidden argument*/&GUIStyle_CalcSize_m3543_MethodInfo);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t684 * L_18 = (__this->___style_5);
		GUIContent_t540 * L_19 = (__this->___content_4);
		Rect_t260 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m2724(L_20, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m3545(L_18, L_19, L_21, /*hidden argument*/&GUIStyle_CalcHeight_m3545_MethodInfo);
		Vector2__ctor_m682((&V_2), L_17, L_22, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		float L_23 = ((&V_2)->___x_1);
		Rect_t260 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m2724(L_24, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t13 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t13 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t13 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m2724((&V_1), /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t13 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t13 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m2724((&V_1), /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t13 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t13 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t684 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t492 * L_41 = GUIStyle_get_padding_m3528(L_40, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m3038(L_41, /*hidden argument*/&RectOffset_get_left_m3038_MethodInfo);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t13 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t13 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t684 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t492 * L_47 = GUIStyle_get_padding_m3528(L_46, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m3038(L_47, /*hidden argument*/&RectOffset_get_left_m3038_MethodInfo);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m2725((&V_1), /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t13 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t13 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t684 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m3537(L_54, /*hidden argument*/&GUIStyle_get_lineHeight_m3537_MethodInfo);
		Vector2_t13 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m2725((&V_1), /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		GUIStyle_t684 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t492 * L_60 = GUIStyle_get_padding_m3528(L_59, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m3039(L_60, /*hidden argument*/&RectOffset_get_top_m3039_MethodInfo);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t13 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t13 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m2725((&V_1), /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		GUIStyle_t684 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t492 * L_67 = GUIStyle_get_padding_m3528(L_66, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m3039(L_67, /*hidden argument*/&RectOffset_get_top_m3039_MethodInfo);
		GUIStyle_t684 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m3537(L_69, /*hidden argument*/&GUIStyle_get_lineHeight_m3537_MethodInfo);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t13 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t13 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t684 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t492 * L_76 = GUIStyle_get_padding_m3528(L_75, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m3039(L_76, /*hidden argument*/&RectOffset_get_top_m3039_MethodInfo);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t13 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t13 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t684 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t492 * L_82 = GUIStyle_get_padding_m3528(L_81, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m3039(L_82, /*hidden argument*/&RectOffset_get_top_m3039_MethodInfo);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t13 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t13 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m2725((&V_1), /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t13 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m2725((&V_1), /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		GUIStyle_t684 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t492 * L_94 = GUIStyle_get_padding_m3528(L_93, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m3039(L_94, /*hidden argument*/&RectOffset_get_top_m3039_MethodInfo);
		GUIStyle_t684 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t492 * L_97 = GUIStyle_get_padding_m3528(L_96, /*hidden argument*/&GUIStyle_get_padding_m3528_MethodInfo);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m3513(L_97, /*hidden argument*/&RectOffset_get_bottom_m3513_MethodInfo);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t13 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t13 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t13 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern MethodInfo TextEditor_Copy_m2835_MethodInfo;
extern "C" void TextEditor_Copy_m2835 (TextEditor_t539 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t540 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m2832(L_5, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m2844(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/&String_Substring_m2844_MethodInfo);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t540 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m2832(L_11, /*hidden argument*/&GUIContent_get_text_m2832_MethodInfo);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m2844(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/&String_Substring_m2844_MethodInfo);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t697_il2cpp_TypeInfo));
		GUIUtility_set_systemCopyBuffer_m3424(NULL /*static, unused*/, L_17, /*hidden argument*/&GUIUtility_set_systemCopyBuffer_m3424_MethodInfo);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m4455 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m4768(L_0, (String_t*) &_stringLiteral295, (String_t*) &_stringLiteral165, /*hidden argument*/&String_Replace_m4768_MethodInfo);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m4769(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/&String_Replace_m4769_MethodInfo);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m4769(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/&String_Replace_m4769_MethodInfo);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern MethodInfo TextEditor_Paste_m2831_MethodInfo;
extern "C" bool TextEditor_Paste_m2831 (TextEditor_t539 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t697_il2cpp_TypeInfo));
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m3423(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_systemCopyBuffer_m3423_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m2842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Inequality_m2842_MethodInfo);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m4455(NULL /*static, unused*/, L_5, /*hidden argument*/&TextEditor_ReplaceNewlinesWithSpaces_m4455_MethodInfo);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m4453(__this, L_7, /*hidden argument*/&TextEditor_ReplaceSelection_m4453_MethodInfo);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerationSettings_t466_il2cpp_TypeInfo;
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern TypeInfo Color32_t514_il2cpp_TypeInfo;
extern TypeInfo ValueType_t249_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
extern MethodInfo Color32_op_Implicit_m2731_MethodInfo;
extern MethodInfo ValueType_Equals_m1103_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareColors_m4456_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareVector2_m4457_MethodInfo;


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C" bool TextGenerationSettings_CompareColors_m4456 (TextGenerationSettings_t466 * __this, Color_t79  ___left, Color_t79  ___right, MethodInfo* method)
{
	Color32_t514  V_0 = {0};
	Color32_t514  V_1 = {0};
	{
		Color_t79  L_0 = ___left;
		Color32_t514  L_1 = Color32_op_Implicit_m2731(NULL /*static, unused*/, L_0, /*hidden argument*/&Color32_op_Implicit_m2731_MethodInfo);
		V_0 = L_1;
		Color_t79  L_2 = ___right;
		Color32_t514  L_3 = Color32_op_Implicit_m2731(NULL /*static, unused*/, L_2, /*hidden argument*/&Color32_op_Implicit_m2731_MethodInfo);
		V_1 = L_3;
		Color32_t514  L_4 = V_0;
		Color32_t514  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Color32_t514_il2cpp_TypeInfo), &L_5);
		Color32_t514  L_7 = V_1;
		Color32_t514  L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Color32_t514_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m1103_MethodInfo, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool TextGenerationSettings_CompareVector2_m4457 (TextGenerationSettings_t466 * __this, Vector2_t13  ___left, Vector2_t13  ___right, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		bool L_2 = Mathf_Approximately_m2641(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Approximately_m2641_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		bool L_5 = Mathf_Approximately_m2641(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Approximately_m2641_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerationSettings_Equals_m4458_MethodInfo;
extern "C" bool TextGenerationSettings_Equals_m4458 (TextGenerationSettings_t466 * __this, TextGenerationSettings_t466  ___other, MethodInfo* method)
{
	int32_t G_B20_0 = 0;
	{
		Color_t79  L_0 = (__this->___color_1);
		Color_t79  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m4456(__this, L_0, L_1, /*hidden argument*/&TextGenerationSettings_CompareColors_m4456_MethodInfo);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		bool L_7 = Mathf_Approximately_m2641(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Mathf_Approximately_m2641_MethodInfo);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		bool L_14 = Mathf_Approximately_m2641(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Mathf_Approximately_m2641_MethodInfo);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t13  L_35 = (__this->___generationExtents_14);
		Vector2_t13  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m4457(__this, L_35, L_36, /*hidden argument*/&TextGenerationSettings_CompareVector2_m4457_MethodInfo);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t13  L_38 = (__this->___pivot_15);
		Vector2_t13  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m4457(__this, L_38, L_39, /*hidden argument*/&TextGenerationSettings_CompareVector2_m4457_MethodInfo);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t388 * L_41 = (__this->___font_0);
		Font_t388 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m576(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackedReference_t764_il2cpp_TypeInfo;
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo TrackedReference_op_Equality_m4461_MethodInfo;
extern MethodInfo IntPtr_op_Explicit_m4781_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m4782_MethodInfo;


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern MethodInfo TrackedReference_Equals_m4459_MethodInfo;
extern "C" bool TrackedReference_Equals_m4459 (TrackedReference_t764 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m4461(NULL /*static, unused*/, ((TrackedReference_t764 *)IsInst(L_0, InitializedTypeInfo(&TrackedReference_t764_il2cpp_TypeInfo))), __this, /*hidden argument*/&TrackedReference_op_Equality_m4461_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern MethodInfo TrackedReference_GetHashCode_m4460_MethodInfo;
extern "C" int32_t TrackedReference_GetHashCode_m4460 (TrackedReference_t764 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m4781(NULL /*static, unused*/, L_0, /*hidden argument*/&IntPtr_op_Explicit_m4781_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m4461 (Object_t * __this /* static, unused */, TrackedReference_t764 * ___x, TrackedReference_t764 * ___y, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t764 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t764 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t764 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m4782(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&IntPtr_op_Equality_m4782_MethodInfo);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t764 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m4782(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&IntPtr_op_Equality_m4782_MethodInfo);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t764 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t764 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m4782(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/&IntPtr_op_Equality_m4782_MethodInfo);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t764_marshal(const TrackedReference_t764& unmarshaled, TrackedReference_t764_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t764_marshal_back(const TrackedReference_t764_marshaled& marshaled, TrackedReference_t764& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t764_marshal_cleanup(TrackedReference_t764_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentListenerMode_t878_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgumentCache_t879_il2cpp_TypeInfo;
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

extern TypeInfo Regex_t957_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
extern MethodInfo String_IsNullOrEmpty_m2871_MethodInfo;
extern MethodInfo Regex_Replace_m4783_MethodInfo;
extern MethodInfo ArgumentCache_TidyAssemblyTypeName_m4469_MethodInfo;


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern MethodInfo ArgumentCache__ctor_m4462_MethodInfo;
extern "C" void ArgumentCache__ctor_m4462 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern MethodInfo ArgumentCache_get_unityObjectArgument_m4463_MethodInfo;
extern "C" Object_t91 * ArgumentCache_get_unityObjectArgument_m4463 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		Object_t91 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464_MethodInfo;
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern MethodInfo ArgumentCache_get_intArgument_m4465_MethodInfo;
extern "C" int32_t ArgumentCache_get_intArgument_m4465 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern MethodInfo ArgumentCache_get_floatArgument_m4466_MethodInfo;
extern "C" float ArgumentCache_get_floatArgument_m4466 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern MethodInfo ArgumentCache_get_stringArgument_m4467_MethodInfo;
extern "C" String_t* ArgumentCache_get_stringArgument_m4467 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern MethodInfo ArgumentCache_get_boolArgument_m4468_MethodInfo;
extern "C" bool ArgumentCache_get_boolArgument_m4468 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern "C" void ArgumentCache_TidyAssemblyTypeName_m4469 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t957_il2cpp_TypeInfo));
		String_t* L_4 = Regex_Replace_m4783(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral459, L_3, /*hidden argument*/&Regex_Replace_m4783_MethodInfo);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m4783(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral460, L_6, /*hidden argument*/&Regex_Replace_m4783_MethodInfo);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m4783(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral461, L_9, /*hidden argument*/&Regex_Replace_m4783_MethodInfo);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern MethodInfo ArgumentCache_OnBeforeSerialize_m4470_MethodInfo;
extern "C" void ArgumentCache_OnBeforeSerialize_m4470 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m4469(__this, /*hidden argument*/&ArgumentCache_TidyAssemblyTypeName_m4469_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern MethodInfo ArgumentCache_OnAfterDeserialize_m4471_MethodInfo;
extern "C" void ArgumentCache_OnAfterDeserialize_m4471 (ArgumentCache_t879 * __this, MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m4469(__this, /*hidden argument*/&ArgumentCache_TidyAssemblyTypeName_m4469_MethodInfo);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseInvokableCall_t880_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern MethodInfo Delegate_get_Method_m4784_MethodInfo;
extern MethodInfo Delegate_get_Target_m4785_MethodInfo;


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern MethodInfo BaseInvokableCall__ctor_m4472_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m4472 (BaseInvokableCall_t880 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo BaseInvokableCall__ctor_m4473_MethodInfo;
extern "C" void BaseInvokableCall__ctor_m4473 (BaseInvokableCall_t880 * __this, Object_t * ___target, MethodInfo_t * ___function, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral462, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t201 * L_3 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_3, (String_t*) &_stringLiteral463, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern MethodInfo BaseInvokableCall_AllowInvoke_m4474_MethodInfo;
extern "C" bool BaseInvokableCall_AllowInvoke_m4474 (Object_t * __this /* static, unused */, Delegate_t287 * ___delegate, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t287 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m4784(L_0, /*hidden argument*/&Delegate_get_Method_m4784_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m4708_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t287 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m4785(L_3, /*hidden argument*/&Delegate_get_Target_m4785_MethodInfo);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_t881_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo UnityAction_t394_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern Il2CppType UnityAction_t394_0_0_0;
extern MethodInfo Delegate_CreateDelegate_m4786_MethodInfo;
extern MethodInfo Delegate_Combine_m1268_MethodInfo;
extern MethodInfo UnityAction_Invoke_m2718_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall__ctor_m4475_MethodInfo;
extern "C" void InvokableCall__ctor_m4475 (InvokableCall_t881 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m4473(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m4473_MethodInfo);
		UnityAction_t394 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&UnityAction_t394_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t287 * L_6 = Delegate_CreateDelegate_m4786(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m4786_MethodInfo);
		Delegate_t287 * L_7 = Delegate_Combine_m1268(NULL /*static, unused*/, L_2, ((UnityAction_t394 *)IsInst(L_6, InitializedTypeInfo(&UnityAction_t394_il2cpp_TypeInfo))), /*hidden argument*/&Delegate_Combine_m1268_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_t394 *)Castclass(L_7, InitializedTypeInfo(&UnityAction_t394_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern MethodInfo InvokableCall_Invoke_m4476_MethodInfo;
extern "C" void InvokableCall_Invoke_m4476 (InvokableCall_t881 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method)
{
	{
		UnityAction_t394 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m4474(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m4474_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t394 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&UnityAction_Invoke_m2718_MethodInfo, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall_Find_m4477_MethodInfo;
extern "C" bool InvokableCall_Find_m4477 (InvokableCall_t881 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t394 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4785(L_0, /*hidden argument*/&Delegate_get_Target_m4785_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t394 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4784(L_3, /*hidden argument*/&Delegate_get_Method_m4784_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEventCallState_t882_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCall_t883_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
extern TypeInfo UnityEventBase_t884_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t958_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t959_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t960_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t961_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
extern Il2CppType CachedInvokableCall_1_t958_0_0_0;
extern Il2CppType CachedInvokableCall_1_t959_0_0_0;
extern Il2CppType CachedInvokableCall_1_t960_0_0_0;
extern Il2CppType CachedInvokableCall_1_t961_0_0_0;
extern Il2CppType Object_t91_0_0_0;
extern Il2CppType CachedInvokableCall_1_t962_0_0_0;
extern Il2CppType MethodInfo_t_0_0_0;
extern MethodInfo PersistentCall_get_target_m4479_MethodInfo;
extern MethodInfo PersistentCall_get_methodName_m4480_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m4495_MethodInfo;
extern MethodInfo UnityEventBase_GetDelegate_m4787_MethodInfo;
extern MethodInfo PersistentCall_GetObjectCall_m4485_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m4788_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m4789_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m4790_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m4791_MethodInfo;
extern MethodInfo Type_GetType_m4792_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4793_MethodInfo;
extern MethodInfo Type_GetConstructor_m4794_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4795_MethodInfo;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m4788_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m4789_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m4790_GenericMethod;
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m4791_GenericMethod;


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern MethodInfo PersistentCall__ctor_m4478_MethodInfo;
extern "C" void PersistentCall__ctor_m4478 (PersistentCall_t883 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t879 * L_0 = (ArgumentCache_t879 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentCache_t879_il2cpp_TypeInfo));
		ArgumentCache__ctor_m4462(L_0, /*hidden argument*/&ArgumentCache__ctor_m4462_MethodInfo);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t91 * PersistentCall_get_target_m4479 (PersistentCall_t883 * __this, MethodInfo* method)
{
	{
		Object_t91 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m4480 (PersistentCall_t883 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern MethodInfo PersistentCall_get_mode_m4481_MethodInfo;
extern "C" int32_t PersistentCall_get_mode_m4481 (PersistentCall_t883 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern MethodInfo PersistentCall_get_arguments_m4482_MethodInfo;
extern "C" ArgumentCache_t879 * PersistentCall_get_arguments_m4482 (PersistentCall_t883 * __this, MethodInfo* method)
{
	{
		ArgumentCache_t879 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern MethodInfo PersistentCall_IsValid_m4483_MethodInfo;
extern "C" bool PersistentCall_IsValid_m4483 (PersistentCall_t883 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t91 * L_0 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m4480(__this, /*hidden argument*/&PersistentCall_get_methodName_m4480_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCall_GetRuntimeCall_m4484_MethodInfo;
extern TypeInfo* CachedInvokableCall_1_t958_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t959_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t960_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t961_il2cpp_TypeInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m4788_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m4789_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m4790_MethodInfo_var;
extern MethodInfo* CachedInvokableCall_1__ctor_m4791_MethodInfo_var;
extern "C" BaseInvokableCall_t880 * PersistentCall_GetRuntimeCall_m4484 (PersistentCall_t883 * __this, UnityEventBase_t884 * ___theEvent, MethodInfo* method)
{
	static bool PersistentCall_GetRuntimeCall_m4484_init;
	if (!PersistentCall_GetRuntimeCall_m4484_init)
	{
		CachedInvokableCall_1_t958_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t958_0_0_0);
		CachedInvokableCall_1_t959_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t959_0_0_0);
		CachedInvokableCall_1_t960_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t960_0_0_0);
		CachedInvokableCall_1_t961_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CachedInvokableCall_1_t961_0_0_0);
		CachedInvokableCall_1__ctor_m4788_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m4788_GenericMethod);
		CachedInvokableCall_1__ctor_m4789_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m4789_GenericMethod);
		CachedInvokableCall_1__ctor_m4790_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m4790_GenericMethod);
		CachedInvokableCall_1__ctor_m4791_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&CachedInvokableCall_1__ctor_m4791_GenericMethod);
		PersistentCall_GetRuntimeCall_m4484_init = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t884 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t880 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t884 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m4495(L_2, __this, /*hidden argument*/&UnityEventBase_FindMethod_m4495_MethodInfo);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t880 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t884 * L_7 = ___theEvent;
		Object_t91 * L_8 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t880 * L_10 = (BaseInvokableCall_t880 *)VirtFuncInvoker2< BaseInvokableCall_t880 *, Object_t *, MethodInfo_t * >::Invoke(&UnityEventBase_GetDelegate_m4787_MethodInfo, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t91 * L_11 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t879 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t880 * L_14 = PersistentCall_GetObjectCall_m4485(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&PersistentCall_GetObjectCall_m4485_MethodInfo);
		return L_14;
	}

IL_0072:
	{
		Object_t91 * L_15 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t879 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m4466(L_17, /*hidden argument*/&ArgumentCache_get_floatArgument_m4466_MethodInfo);
		CachedInvokableCall_1_t958 * L_19 = (CachedInvokableCall_1_t958 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t958_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4788(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m4788_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t91 * L_20 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t879 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m4465(L_22, /*hidden argument*/&ArgumentCache_get_intArgument_m4465_MethodInfo);
		CachedInvokableCall_1_t959 * L_24 = (CachedInvokableCall_1_t959 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t959_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4789(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m4789_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t91 * L_25 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t879 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m4467(L_27, /*hidden argument*/&ArgumentCache_get_stringArgument_m4467_MethodInfo);
		CachedInvokableCall_1_t960 * L_29 = (CachedInvokableCall_1_t960 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t960_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4790(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m4790_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t91 * L_30 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t879 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m4468(L_32, /*hidden argument*/&ArgumentCache_get_boolArgument_m4468_MethodInfo);
		CachedInvokableCall_1_t961 * L_34 = (CachedInvokableCall_1_t961 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t961_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m4791(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m4791_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t91 * L_35 = PersistentCall_get_target_m4479(__this, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t881 * L_37 = (InvokableCall_t881 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t881_il2cpp_TypeInfo));
		InvokableCall__ctor_m4475(L_37, L_35, L_36, /*hidden argument*/&InvokableCall__ctor_m4475_MethodInfo);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t880 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t880 * PersistentCall_GetObjectCall_m4485 (Object_t * __this /* static, unused */, Object_t91 * ___target, MethodInfo_t * ___method, ArgumentCache_t879 * ___arguments, MethodInfo* method)
{
	static bool PersistentCall_GetObjectCall_m4485_init;
	if (!PersistentCall_GetObjectCall_m4485_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		PersistentCall_GetObjectCall_m4485_init = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t827 * V_3 = {0};
	Object_t91 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t91_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		V_0 = L_0;
		ArgumentCache_t879 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464(L_1, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t879 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464(L_4, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetType_m4792(NULL /*static, unused*/, L_5, 0, /*hidden argument*/&Type_GetType_m4792_MethodInfo);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t91_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&CachedInvokableCall_1_t962_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t207* L_11 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t207* >::Invoke(&Type_MakeGenericType_m4793_MethodInfo, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t207* L_15 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t91_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t207* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&MethodInfo_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t207* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t827 * L_21 = (ConstructorInfo_t827 *)VirtFuncInvoker1< ConstructorInfo_t827 *, TypeU5BU5D_t207* >::Invoke(&Type_GetConstructor_m4794_MethodInfo, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t879 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t91 * L_23 = ArgumentCache_get_unityObjectArgument_m4463(L_22, /*hidden argument*/&ArgumentCache_get_unityObjectArgument_m4463_MethodInfo);
		V_4 = L_23;
		Object_t91 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m642(NULL /*static, unused*/, L_24, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t91 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m2624(L_27, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4795_MethodInfo, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t91 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t827 * L_30 = V_3;
		ObjectU5BU5D_t194* L_31 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 3));
		Object_t91 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t194* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t194* L_35 = L_33;
		Object_t91 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m4735(L_30, L_35, /*hidden argument*/&ConstructorInfo_Invoke_m4735_MethodInfo);
		return ((BaseInvokableCall_t880 *)IsInst(L_37, InitializedTypeInfo(&BaseInvokableCall_t880_il2cpp_TypeInfo)));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCallGroup_t886_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
extern TypeInfo List_1_t885_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t963_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern Il2CppType List_1_t885_0_0_0;
extern Il2CppType Enumerator_t963_0_0_0;
extern MethodInfo List_1__ctor_m4796_MethodInfo;
extern MethodInfo InvokableCallList_AddPersistentInvokableCall_m4489_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m4796_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m4797_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m4798_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m4799_GenericMethod;


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern MethodInfo PersistentCallGroup__ctor_m4486_MethodInfo;
extern TypeInfo* List_1_t885_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4796_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m4486 (PersistentCallGroup_t886 * __this, MethodInfo* method)
{
	static bool PersistentCallGroup__ctor_m4486_init;
	if (!PersistentCallGroup__ctor_m4486_init)
	{
		List_1_t885_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t885_0_0_0);
		List_1__ctor_m4796_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4796_GenericMethod);
		PersistentCallGroup__ctor_m4486_init = true;
	}
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t885_il2cpp_TypeInfo_var);
		List_1_t885 * L_0 = (List_1_t885 *)il2cpp_codegen_object_new (List_1_t885_il2cpp_TypeInfo_var);
		List_1__ctor_m4796(L_0, /*hidden argument*/List_1__ctor_m4796_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCallGroup_Initialize_m4487_MethodInfo;
extern TypeInfo* Enumerator_t963_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m4797_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m4798_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m4799_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m4487 (PersistentCallGroup_t886 * __this, InvokableCallList_t887 * ___invokableList, UnityEventBase_t884 * ___unityEventBase, MethodInfo* method)
{
	static bool PersistentCallGroup_Initialize_m4487_init;
	if (!PersistentCallGroup_Initialize_m4487_init)
	{
		Enumerator_t963_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t963_0_0_0);
		List_1_GetEnumerator_m4797_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m4797_GenericMethod);
		Enumerator_get_Current_m4798_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m4798_GenericMethod);
		Enumerator_MoveNext_m4799_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m4799_GenericMethod);
		PersistentCallGroup_Initialize_m4487_init = true;
	}
	PersistentCall_t883 * V_0 = {0};
	Enumerator_t963  V_1 = {0};
	BaseInvokableCall_t880 * V_2 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t885 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t963  L_1 = List_1_GetEnumerator_m4797(L_0, /*hidden argument*/List_1_GetEnumerator_m4797_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t883 * L_2 = Enumerator_get_Current_m4798((&V_1), /*hidden argument*/Enumerator_get_Current_m4798_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t883 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m4483(L_3, /*hidden argument*/&PersistentCall_IsValid_m4483_MethodInfo);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t883 * L_5 = V_0;
			UnityEventBase_t884 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t880 * L_7 = PersistentCall_GetRuntimeCall_m4484(L_5, L_6, /*hidden argument*/&PersistentCall_GetRuntimeCall_m4484_MethodInfo);
			V_2 = L_7;
			BaseInvokableCall_t880 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t887 * L_9 = ___invokableList;
			BaseInvokableCall_t880 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m4489(L_9, L_10, /*hidden argument*/&InvokableCallList_AddPersistentInvokableCall_m4489_MethodInfo);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m4799((&V_1), /*hidden argument*/Enumerator_MoveNext_m4799_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t963  L_12 = V_1;
		Enumerator_t963  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t963_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCallList_t887_il2cpp_TypeInfo;

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
extern TypeInfo List_1_t888_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t964_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern Il2CppType List_1_t888_0_0_0;
extern Il2CppType Predicate_1_t964_0_0_0;
extern MethodInfo List_1__ctor_m4800_MethodInfo;
extern MethodInfo List_1_Add_m4801_MethodInfo;
extern MethodInfo List_1_get_Item_m4802_MethodInfo;
extern MethodInfo BaseInvokableCall_Find_m4803_MethodInfo;
extern MethodInfo List_1_get_Count_m4804_MethodInfo;
extern MethodInfo List_1_Contains_m4805_MethodInfo;
extern MethodInfo Predicate_1__ctor_m4806_MethodInfo;
extern MethodInfo List_1_Clear_m4807_MethodInfo;
extern MethodInfo BaseInvokableCall_Invoke_m4808_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m4800_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m4801_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m4802_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m4804_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m4805_GenericMethod;
extern Il2CppGenericMethod Predicate_1__ctor_m4806_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAll_m4809_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m4807_GenericMethod;
extern Il2CppGenericMethod List_1_AddRange_m4810_GenericMethod;


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern MethodInfo InvokableCallList__ctor_m4488_MethodInfo;
extern TypeInfo* List_1_t888_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4800_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m4488 (InvokableCallList_t887 * __this, MethodInfo* method)
{
	static bool InvokableCallList__ctor_m4488_init;
	if (!InvokableCallList__ctor_m4488_init)
	{
		List_1_t888_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t888_0_0_0);
		List_1__ctor_m4800_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4800_GenericMethod);
		InvokableCallList__ctor_m4488_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t888_il2cpp_TypeInfo_var);
		List_1_t888 * L_0 = (List_1_t888 *)il2cpp_codegen_object_new (List_1_t888_il2cpp_TypeInfo_var);
		List_1__ctor_m4800(L_0, /*hidden argument*/List_1__ctor_m4800_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t888 * L_1 = (List_1_t888 *)il2cpp_codegen_object_new (List_1_t888_il2cpp_TypeInfo_var);
		List_1__ctor_m4800(L_1, /*hidden argument*/List_1__ctor_m4800_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t888 * L_2 = (List_1_t888 *)il2cpp_codegen_object_new (List_1_t888_il2cpp_TypeInfo_var);
		List_1__ctor_m4800(L_2, /*hidden argument*/List_1__ctor_m4800_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo* List_1_Add_m4801_MethodInfo_var;
extern "C" void InvokableCallList_AddPersistentInvokableCall_m4489 (InvokableCallList_t887 * __this, BaseInvokableCall_t880 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddPersistentInvokableCall_m4489_init;
	if (!InvokableCallList_AddPersistentInvokableCall_m4489_init)
	{
		List_1_Add_m4801_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4801_GenericMethod);
		InvokableCallList_AddPersistentInvokableCall_m4489_init = true;
	}
	{
		List_1_t888 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t880 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t880 * >::Invoke(List_1_Add_m4801_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo InvokableCallList_AddListener_m4490_MethodInfo;
extern MethodInfo* List_1_Add_m4801_MethodInfo_var;
extern "C" void InvokableCallList_AddListener_m4490 (InvokableCallList_t887 * __this, BaseInvokableCall_t880 * ___call, MethodInfo* method)
{
	static bool InvokableCallList_AddListener_m4490_init;
	if (!InvokableCallList_AddListener_m4490_init)
	{
		List_1_Add_m4801_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4801_GenericMethod);
		InvokableCallList_AddListener_m4490_init = true;
	}
	{
		List_1_t888 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t880 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t880 * >::Invoke(List_1_Add_m4801_MethodInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCallList_RemoveListener_m4491_MethodInfo;
extern TypeInfo* List_1_t888_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t964_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4800_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m4802_MethodInfo_var;
extern MethodInfo* List_1_Add_m4801_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m4804_MethodInfo_var;
extern MethodInfo* List_1_Contains_m4805_MethodInfo_var;
extern MethodInfo* Predicate_1__ctor_m4806_MethodInfo_var;
extern MethodInfo* List_1_RemoveAll_m4809_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m4491 (InvokableCallList_t887 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool InvokableCallList_RemoveListener_m4491_init;
	if (!InvokableCallList_RemoveListener_m4491_init)
	{
		List_1_t888_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t888_0_0_0);
		Predicate_1_t964_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Predicate_1_t964_0_0_0);
		List_1__ctor_m4800_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4800_GenericMethod);
		List_1_get_Item_m4802_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m4802_GenericMethod);
		List_1_Add_m4801_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4801_GenericMethod);
		List_1_get_Count_m4804_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m4804_GenericMethod);
		List_1_Contains_m4805_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m4805_GenericMethod);
		Predicate_1__ctor_m4806_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Predicate_1__ctor_m4806_GenericMethod);
		List_1_RemoveAll_m4809_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_RemoveAll_m4809_GenericMethod);
		InvokableCallList_RemoveListener_m4491_init = true;
	}
	List_1_t888 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t888_il2cpp_TypeInfo_var);
		List_1_t888 * L_0 = (List_1_t888 *)il2cpp_codegen_object_new (List_1_t888_il2cpp_TypeInfo_var);
		List_1__ctor_m4800(L_0, /*hidden argument*/List_1__ctor_m4800_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t888 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t880 * L_3 = (BaseInvokableCall_t880 *)VirtFuncInvoker1< BaseInvokableCall_t880 *, int32_t >::Invoke(List_1_get_Item_m4802_MethodInfo_var, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(&BaseInvokableCall_Find_m4803_MethodInfo, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t888 * L_7 = V_0;
		List_1_t888 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t880 * L_10 = (BaseInvokableCall_t880 *)VirtFuncInvoker1< BaseInvokableCall_t880 *, int32_t >::Invoke(List_1_get_Item_m4802_MethodInfo_var, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t880 * >::Invoke(List_1_Add_m4801_MethodInfo_var, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t888 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m4804_MethodInfo_var, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t888 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t888 * L_16 = V_0;
		List_1_t888 * L_17 = L_16;
		IntPtr_t L_18 = { GetVirtualMethodInfo(L_17, List_1_Contains_m4805_MethodInfo_var) };
		Predicate_1_t964 * L_19 = (Predicate_1_t964 *)il2cpp_codegen_object_new (Predicate_1_t964_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4806(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m4806_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m4809(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m4809_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern MethodInfo InvokableCallList_ClearPersistent_m4492_MethodInfo;
extern MethodInfo* List_1_Clear_m4807_MethodInfo_var;
extern "C" void InvokableCallList_ClearPersistent_m4492 (InvokableCallList_t887 * __this, MethodInfo* method)
{
	static bool InvokableCallList_ClearPersistent_m4492_init;
	if (!InvokableCallList_ClearPersistent_m4492_init)
	{
		List_1_Clear_m4807_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m4807_GenericMethod);
		InvokableCallList_ClearPersistent_m4492_init = true;
	}
	{
		List_1_t888 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(List_1_Clear_m4807_MethodInfo_var, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern MethodInfo InvokableCallList_Invoke_m4493_MethodInfo;
extern MethodInfo* List_1_AddRange_m4810_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m4802_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m4804_MethodInfo_var;
extern MethodInfo* List_1_Clear_m4807_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m4493 (InvokableCallList_t887 * __this, ObjectU5BU5D_t194* ___parameters, MethodInfo* method)
{
	static bool InvokableCallList_Invoke_m4493_init;
	if (!InvokableCallList_Invoke_m4493_init)
	{
		List_1_AddRange_m4810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_AddRange_m4810_GenericMethod);
		List_1_get_Item_m4802_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m4802_GenericMethod);
		List_1_get_Count_m4804_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m4804_GenericMethod);
		List_1_Clear_m4807_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m4807_GenericMethod);
		InvokableCallList_Invoke_m4493_init = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t888 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t888 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m4810(L_0, L_1, /*hidden argument*/List_1_AddRange_m4810_MethodInfo_var);
		List_1_t888 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t888 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m4810(L_2, L_3, /*hidden argument*/List_1_AddRange_m4810_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t888 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t880 * L_6 = (BaseInvokableCall_t880 *)VirtFuncInvoker1< BaseInvokableCall_t880 *, int32_t >::Invoke(List_1_get_Item_m4802_MethodInfo_var, L_4, L_5);
		ObjectU5BU5D_t194* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t194* >::Invoke(&BaseInvokableCall_Invoke_m4808_MethodInfo, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t888 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m4804_MethodInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t888 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(List_1_Clear_m4807_MethodInfo_var, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppType Single_t184_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Type_get_AssemblyQualifiedName_m4811_MethodInfo;
extern MethodInfo UnityEventBase_DirtyPersistentCalls_m4497_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m4496_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_Impl_m4812_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m4502_MethodInfo;
extern MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m4498_MethodInfo;
extern MethodInfo Type_GetMethod_m4813_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m4814_MethodInfo;


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern MethodInfo UnityEventBase__ctor_m4494_MethodInfo;
extern "C" void UnityEventBase__ctor_m4494 (UnityEventBase_t884 * __this, MethodInfo* method)
{
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		InvokableCallList_t887 * L_0 = (InvokableCallList_t887 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCallList_t887_il2cpp_TypeInfo));
		InvokableCallList__ctor_m4488(L_0, /*hidden argument*/&InvokableCallList__ctor_m4488_MethodInfo);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t886 * L_1 = (PersistentCallGroup_t886 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PersistentCallGroup_t886_il2cpp_TypeInfo));
		PersistentCallGroup__ctor_m4486(L_1, /*hidden argument*/&PersistentCallGroup__ctor_m4486_MethodInfo);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m2624(__this, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4811_MethodInfo, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3091_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3091 (UnityEventBase_t884 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3092_MethodInfo;
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3092 (UnityEventBase_t884 * __this, MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m4497(__this, /*hidden argument*/&UnityEventBase_DirtyPersistentCalls_m4497_MethodInfo);
		Type_t * L_0 = Object_GetType_m2624(__this, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4811_MethodInfo, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m4495 (UnityEventBase_t884 * __this, PersistentCall_t883 * ___call, MethodInfo* method)
{
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t91_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		V_0 = L_0;
		PersistentCall_t883 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t879 * L_2 = PersistentCall_get_arguments_m4482(L_1, /*hidden argument*/&PersistentCall_get_arguments_m4482_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464(L_2, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_3, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t883 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t879 * L_6 = PersistentCall_get_arguments_m4482(L_5, /*hidden argument*/&PersistentCall_get_arguments_m4482_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464(L_6, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m4464_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetType_m4792(NULL /*static, unused*/, L_7, 0, /*hidden argument*/&Type_GetType_m4792_MethodInfo);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_10 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t91_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t883 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m4480(L_11, /*hidden argument*/&PersistentCall_get_methodName_m4480_MethodInfo);
		PersistentCall_t883 * L_13 = ___call;
		NullCheck(L_13);
		Object_t91 * L_14 = PersistentCall_get_target_m4479(L_13, /*hidden argument*/&PersistentCall_get_target_m4479_MethodInfo);
		PersistentCall_t883 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m4481(L_15, /*hidden argument*/&PersistentCall_get_mode_m4481_MethodInfo);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m4496(__this, L_12, L_14, L_16, L_17, /*hidden argument*/&UnityEventBase_FindMethod_m4496_MethodInfo);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m4496 (UnityEventBase_t884 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method)
{
	static bool UnityEventBase_FindMethod_m4496_init;
	if (!UnityEventBase_FindMethod_m4496_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		UnityEventBase_FindMethod_m4496_init = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t207* G_B10_2 = {0};
	TypeU5BU5D_t207* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t207* G_B9_2 = {0};
	TypeU5BU5D_t207* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(&UnityEventBase_FindMethod_Impl_m4812_MethodInfo, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t207* L_10 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Single_t184_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t207* L_15 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Int32_t188_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t207* L_20 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Boolean_t202_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t207* L_25 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t207* L_30 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_33 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t91_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m4497 (UnityEventBase_t884 * __this, MethodInfo* method)
{
	{
		InvokableCallList_t887 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m4492(L_0, /*hidden argument*/&InvokableCallList_ClearPersistent_m4492_MethodInfo);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m4498 (UnityEventBase_t884 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t886 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t887 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m4487(L_1, L_2, __this, /*hidden argument*/&PersistentCallGroup_Initialize_m4487_MethodInfo);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo UnityEventBase_AddCall_m4499_MethodInfo;
extern "C" void UnityEventBase_AddCall_m4499 (UnityEventBase_t884 * __this, BaseInvokableCall_t880 * ___call, MethodInfo* method)
{
	{
		InvokableCallList_t887 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t880 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m4490(L_0, L_1, /*hidden argument*/&InvokableCallList_AddListener_m4490_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEventBase_RemoveListener_m4500_MethodInfo;
extern "C" void UnityEventBase_RemoveListener_m4500 (UnityEventBase_t884 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	{
		InvokableCallList_t887 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m4491(L_0, L_1, L_2, /*hidden argument*/&InvokableCallList_RemoveListener_m4491_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern MethodInfo UnityEventBase_Invoke_m4501_MethodInfo;
extern "C" void UnityEventBase_Invoke_m4501 (UnityEventBase_t884 * __this, ObjectU5BU5D_t194* ___parameters, MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m4498(__this, /*hidden argument*/&UnityEventBase_RebuildPersistentCallsIfNeeded_m4498_MethodInfo);
		InvokableCallList_t887 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t194* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m4493(L_0, L_1, /*hidden argument*/&InvokableCallList_Invoke_m4493_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern MethodInfo UnityEventBase_ToString_m3090_MethodInfo;
extern "C" String_t* UnityEventBase_ToString_m3090 (UnityEventBase_t884 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Object_ToString_m1098(__this, /*hidden argument*/&Object_ToString_m1098_MethodInfo);
		Type_t * L_1 = Object_GetType_m2624(__this, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m4728_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m797(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral165, L_2, /*hidden argument*/&String_Concat_m797_MethodInfo);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4502 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t207* ___argumentTypes, MethodInfo* method)
{
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t946* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t947 * V_5 = {0};
	ParameterInfoU5BU5D_t946* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2624(L_0, /*hidden argument*/&Object_GetType_m2624_MethodInfo);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t207* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t953 *, TypeU5BU5D_t207*, ParameterModifierU5BU5D_t954* >::Invoke(&Type_GetMethod_m4813_MethodInfo, L_2, L_3, ((int32_t)52), (Binder_t953 *)NULL, L_4, (ParameterModifierU5BU5D_t954*)(ParameterModifierU5BU5D_t954*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t946* L_8 = (ParameterInfoU5BU5D_t946*)VirtFuncInvoker0< ParameterInfoU5BU5D_t946* >::Invoke(&MethodBase_GetParameters_m4742_MethodInfo, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t946* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t946* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t947 **)(ParameterInfo_t947 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t207* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t947 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m4743_MethodInfo, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m4814_MethodInfo, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m4814_MethodInfo, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t946* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m4749_MethodInfo, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_t378_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern MethodInfo UnityEvent__ctor_m2678_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m2678 (UnityEvent_t378 * __this, MethodInfo* method)
{
	static bool UnityEvent__ctor_m2678_init;
	if (!UnityEvent__ctor_m2678_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		UnityEvent__ctor_m2678_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m4494(__this, /*hidden argument*/&UnityEventBase__ctor_m4494_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern MethodInfo UnityEvent_FindMethod_Impl_m3138_MethodInfo;
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m3138 (UnityEvent_t378 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_FindMethod_Impl_m3138_init;
	if (!UnityEvent_FindMethod_Impl_m3138_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		UnityEvent_FindMethod_Impl_m3138_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m4502(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4502_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEvent_GetDelegate_m3139_MethodInfo;
extern "C" BaseInvokableCall_t880 * UnityEvent_GetDelegate_m3139 (UnityEvent_t378 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t881 * L_2 = (InvokableCall_t881 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t881_il2cpp_TypeInfo));
		InvokableCall__ctor_m4475(L_2, L_0, L_1, /*hidden argument*/&InvokableCall__ctor_m4475_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern MethodInfo UnityEvent_Invoke_m2680_MethodInfo;
extern "C" void UnityEvent_Invoke_m2680 (UnityEvent_t378 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t194* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m4501(__this, L_0, /*hidden argument*/&UnityEventBase_Invoke_m4501_MethodInfo);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorizationDialog_t889_il2cpp_TypeInfo;
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"



// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern MethodInfo UserAuthorizationDialog__ctor_m4503_MethodInfo;
extern "C" void UserAuthorizationDialog__ctor_m4503 (UserAuthorizationDialog_t889 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern MethodInfo UserAuthorizationDialog_Start_m4504_MethodInfo;
extern "C" void UserAuthorizationDialog_Start_m4504 (UserAuthorizationDialog_t889 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern MethodInfo UserAuthorizationDialog_OnGUI_m4505_MethodInfo;
extern "C" void UserAuthorizationDialog_OnGUI_m4505 (UserAuthorizationDialog_t889 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m4506_MethodInfo;
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m4506 (UserAuthorizationDialog_t889 * __this, int32_t ___windowID, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultValueAttribute_t890_il2cpp_TypeInfo;
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
extern TypeInfo Attribute_t714_il2cpp_TypeInfo;
extern MethodInfo DefaultValueAttribute_get_Value_m4508_MethodInfo;
extern MethodInfo Object_Equals_m1096_MethodInfo;
extern MethodInfo Attribute_GetHashCode_m4815_MethodInfo;
extern MethodInfo Object_GetHashCode_m1097_MethodInfo;


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern MethodInfo DefaultValueAttribute__ctor_m4507_MethodInfo;
extern "C" void DefaultValueAttribute__ctor_m4507 (DefaultValueAttribute_t890 * __this, String_t* ___value, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m4508 (DefaultValueAttribute_t890 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern MethodInfo DefaultValueAttribute_Equals_m4509_MethodInfo;
extern "C" bool DefaultValueAttribute_Equals_m4509 (DefaultValueAttribute_t890 * __this, Object_t * ___obj, MethodInfo* method)
{
	DefaultValueAttribute_t890 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t890 *)IsInst(L_0, InitializedTypeInfo(&DefaultValueAttribute_t890_il2cpp_TypeInfo)));
		DefaultValueAttribute_t890 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t890 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m4508(L_3, /*hidden argument*/&DefaultValueAttribute_get_Value_m4508_MethodInfo);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t890 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m4508(L_6, /*hidden argument*/&DefaultValueAttribute_get_Value_m4508_MethodInfo);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1096_MethodInfo, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern MethodInfo DefaultValueAttribute_GetHashCode_m4510_MethodInfo;
extern "C" int32_t DefaultValueAttribute_GetHashCode_m4510 (DefaultValueAttribute_t890 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m4815(__this, /*hidden argument*/&Attribute_GetHashCode_m4815_MethodInfo);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1097_MethodInfo, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExcludeFromDocsAttribute_t891_il2cpp_TypeInfo;
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern MethodInfo ExcludeFromDocsAttribute__ctor_m4511_MethodInfo;
extern "C" void ExcludeFromDocsAttribute__ctor_m4511 (ExcludeFromDocsAttribute_t891 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormerlySerializedAsAttribute_t565_il2cpp_TypeInfo;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern MethodInfo FormerlySerializedAsAttribute__ctor_m3088_MethodInfo;
extern "C" void FormerlySerializedAsAttribute__ctor_m3088 (FormerlySerializedAsAttribute_t565 * __this, String_t* ___oldName, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRules_t892_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRuleAttribute_t893_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

extern MethodInfo TypeInferenceRuleAttribute__ctor_m4513_MethodInfo;


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern MethodInfo TypeInferenceRuleAttribute__ctor_m4512_MethodInfo;
extern "C" void TypeInferenceRuleAttribute__ctor_m4512 (TypeInferenceRuleAttribute_t893 * __this, int32_t ___rule, MethodInfo* method)
{
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeInferenceRules_t892_il2cpp_TypeInfo), &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1070_MethodInfo, L_2);
		TypeInferenceRuleAttribute__ctor_m4513(__this, L_3, /*hidden argument*/&TypeInferenceRuleAttribute__ctor_m4513_MethodInfo);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m4513 (TypeInferenceRuleAttribute_t893 * __this, String_t* ___rule, MethodInfo* method)
{
	{
		Attribute__ctor_m4577(__this, /*hidden argument*/&Attribute__ctor_m4577_MethodInfo);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern MethodInfo TypeInferenceRuleAttribute_ToString_m4514_MethodInfo;
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m4514 (TypeInferenceRuleAttribute_t893 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericStack_t681_il2cpp_TypeInfo;
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo Stack__ctor_m4816_MethodInfo;


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern MethodInfo GenericStack__ctor_m4515_MethodInfo;
extern "C" void GenericStack__ctor_m4515 (GenericStack_t681 * __this, MethodInfo* method)
{
	{
		Stack__ctor_m4816(__this, /*hidden argument*/&Stack__ctor_m4816_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m2838_MethodInfo;
extern "C" void UnityAction__ctor_m2838 (UnityAction_t394 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m2718 (UnityAction_t394 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m2718((UnityAction_t394 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t394(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m4516_MethodInfo;
extern "C" Object_t * UnityAction_BeginInvoke_m4516 (UnityAction_t394 * __this, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m4517_MethodInfo;
extern "C" void UnityAction_EndInvoke_m4517 (UnityAction_t394 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
