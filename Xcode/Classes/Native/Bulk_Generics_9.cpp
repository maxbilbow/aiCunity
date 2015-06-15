#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.CastHelper`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_25.h"
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
extern TypeInfo CastHelper_1_t2985_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_25MethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t372_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m2684_GenericMethod;
extern "C" void Comparison_1__ctor_m2684_gshared (Comparison_1_t372 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m16110_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m16110_gshared (Comparison_1_t372 * __this, RaycastHit_t16  ___x, RaycastHit_t16  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m16110((Comparison_1_t372 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t16  ___x, RaycastHit_t16  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t16  ___x, RaycastHit_t16  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m16111_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m16111_gshared (Comparison_1_t372 * __this, RaycastHit_t16  ___x, RaycastHit_t16  ___y, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastHit_t16_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&RaycastHit_t16_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m16112_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m16112_gshared (Comparison_1_t372 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t375_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0MethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo ObjectU5BU5D_t194_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2986_il2cpp_TypeInfo;
extern TypeInfo Color_t79_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t194_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType Color_t79_0_0_0;
extern Il2CppType InvokableCall_1_t2986_0_0_0;
extern MethodInfo UnityEventBase__ctor_m4505_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m4510_MethodInfo;
extern MethodInfo Delegate_get_Target_m4796_MethodInfo;
extern MethodInfo Delegate_get_Method_m4795_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m4511_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m4513_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m16118_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m16119_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m4512_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m16114_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m16118_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m16119_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m2686_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m2686_gshared (UnityEvent_1_t375 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m2686_init;
	if (!UnityEvent_1__ctor_m2686_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		UnityEvent_1__ctor_m2686_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m4505(__this, /*hidden argument*/&UnityEventBase__ctor_m4505_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m2688_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m2688_gshared (UnityEvent_1_t375 * __this, UnityAction_1_t377 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t377 * L_0 = ___call;
		BaseInvokableCall_t882 * L_1 = (( BaseInvokableCall_t882 * (*) (Object_t * /* static, unused */, UnityAction_1_t377 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m4510(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m4510_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m16113_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m16113_gshared (UnityEvent_1_t375 * __this, UnityAction_1_t377 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t377 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4796(L_0, /*hidden argument*/&Delegate_get_Target_m4796_MethodInfo);
		UnityAction_1_t377 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m4795(L_2, /*hidden argument*/&Delegate_get_Method_m4795_MethodInfo);
		UnityEventBase_RemoveListener_m4511(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m4511_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m3135_GenericMethod;
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3135_gshared (UnityEvent_1_t375 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m3135_init;
	if (!UnityEvent_1_FindMethod_Impl_m3135_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		UnityEvent_1_FindMethod_Impl_m3135_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t207* L_2 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m4513(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m4513_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m3136_GenericMethod;
extern "C" BaseInvokableCall_t882 * UnityEvent_1_GetDelegate_m3136_gshared (UnityEvent_1_t375 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2986 * L_2 = (InvokableCall_1_t2986 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2986 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t882 * UnityEvent_1_GetDelegate_m16114_gshared (Object_t * __this /* static, unused */, UnityAction_1_t377 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t377 * L_0 = ___action;
		InvokableCall_1_t2986 * L_1 = (InvokableCall_1_t2986 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2986 *, UnityAction_1_t377 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m2687_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m2687_gshared (UnityEvent_1_t375 * __this, Color_t79  ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t194* L_0 = (__this->___m_InvokeArray_4);
		Color_t79  L_1 = ___arg0;
		Color_t79  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t194* L_4 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m4512(__this, L_4, /*hidden argument*/&UnityEventBase_Invoke_m4512_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t377_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m2752_GenericMethod;
extern "C" void UnityAction_1__ctor_m2752_gshared (UnityAction_1_t377 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m16115_GenericMethod;
extern "C" void UnityAction_1_Invoke_m16115_gshared (UnityAction_1_t377 * __this, Color_t79  ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m16115((UnityAction_1_t377 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t79  ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, Color_t79  ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16116_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m16116_gshared (UnityAction_1_t377 * __this, Color_t79  ___arg0, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Color_t79_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16117_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m16117_gshared (UnityAction_1_t377 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo ArgumentException_t555_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType UnityAction_1_t377_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m4484_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m4797_MethodInfo;
extern MethodInfo Delegate_Combine_m1278_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m4483_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3019_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m4485_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m16115_MethodInfo;
struct BaseInvokableCall_t882;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t79_m24986_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisColor_t79_m24986(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisColor_t79_m24986_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisColor_t79_m24986_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16118_gshared (InvokableCall_1_t2986 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m4484(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m4484_MethodInfo);
		UnityAction_1_t377 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t289 * L_6 = Delegate_CreateDelegate_m4797(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m4797_MethodInfo);
		Delegate_t289 * L_7 = Delegate_Combine_m1278(NULL /*static, unused*/, L_2, ((UnityAction_1_t377 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t377 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16119_gshared (InvokableCall_1_t2986 * __this, UnityAction_1_t377 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m4483(__this, /*hidden argument*/&BaseInvokableCall__ctor_m4483_MethodInfo);
		UnityAction_1_t377 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t377 * L_1 = ___callback;
		Delegate_t289 * L_2 = Delegate_Combine_m1278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t377 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16120_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m16120_gshared (InvokableCall_1_t2986 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t194* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t555 * L_1 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m3019(L_1, (String_t*) &_stringLiteral465, /*hidden argument*/&ArgumentException__ctor_m3019_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t194* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t377 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m4485(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m4485_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t377 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t194* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< Color_t79  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(Color_t79 *)((Color_t79 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m16121_GenericMethod;
extern "C" bool InvokableCall_1_Find_m16121_gshared (InvokableCall_1_t2986 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t377 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4796(L_0, /*hidden argument*/&Delegate_get_Target_m4796_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t377 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4795(L_3, /*hidden argument*/&Delegate_get_Method_m4795_MethodInfo);
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
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IndexedSet_1_t385_il2cpp_TypeInfo;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_genMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_gen.h"
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1.h"
extern TypeInfo List_1_t2987_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
extern TypeInfo ICanvasElement_t388_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t540_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3843_il2cpp_TypeInfo;
extern TypeInfo NotImplementedException_t1338_il2cpp_TypeInfo;
extern TypeInfo ICanvasElementU5BU5D_t2990_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t387_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
extern Il2CppType List_1_t2987_0_0_0;
extern Il2CppType Dictionary_2_t540_0_0_0;
extern Il2CppType IndexedSet_1_t385_0_0_0;
extern Il2CppType Predicate_1_t387_0_0_0;
extern MethodInfo List_1_get_Count_m16200_MethodInfo;
extern MethodInfo List_1_get_Item_m16201_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m16336_MethodInfo;
extern MethodInfo List_1_set_Item_m16202_MethodInfo;
extern MethodInfo Dictionary_2_Add_m16330_MethodInfo;
extern MethodInfo List_1__ctor_m16153_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m16295_MethodInfo;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo IndexedSet_1_GetEnumerator_m16127_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m16332_MethodInfo;
extern MethodInfo List_1_Add_m16172_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m16337_MethodInfo;
extern MethodInfo IndexedSet_1_RemoveAt_m16141_MethodInfo;
extern MethodInfo NotImplementedException__ctor_m11385_MethodInfo;
extern MethodInfo List_1_Clear_m16178_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m16331_MethodInfo;
extern MethodInfo List_1_CopyTo_m16180_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5993_MethodInfo;
extern MethodInfo List_1_RemoveAt_m16192_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m16321_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m16283_MethodInfo;
extern MethodInfo IndexedSet_1_Remove_m2704_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m16200_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m16201_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m16336_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m16202_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m16330_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m16153_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m16295_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_GetEnumerator_m16127_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m16332_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m16172_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m16337_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_RemoveAt_m16141_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m16178_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m16331_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m16180_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m16192_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m16321_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m16283_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_Remove_m2704_GenericMethod;
extern Il2CppGenericMethod List_1_Sort_m16195_GenericMethod;


// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IndexedSet_1_t2988_il2cpp_TypeInfo;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
extern TypeInfo List_1_t518_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t2814_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t246_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2691_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
extern Il2CppType List_1_t518_0_0_0;
extern Il2CppType Dictionary_2_t2814_0_0_0;
extern Il2CppType IndexedSet_1_t2988_0_0_0;
extern Il2CppType Predicate_1_t2691_0_0_0;
extern MethodInfo List_1_get_Count_m4881_MethodInfo;
extern MethodInfo List_1_get_Item_m4903_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m14315_MethodInfo;
extern MethodInfo List_1_set_Item_m4904_MethodInfo;
extern MethodInfo Dictionary_2_Add_m14303_MethodInfo;
extern MethodInfo List_1__ctor_m4664_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m14235_MethodInfo;
extern MethodInfo IndexedSet_1_GetEnumerator_m16128_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m14307_MethodInfo;
extern MethodInfo List_1_Add_m4683_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m14316_MethodInfo;
extern MethodInfo IndexedSet_1_RemoveAt_m16142_MethodInfo;
extern MethodInfo List_1_Clear_m4890_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m14305_MethodInfo;
extern MethodInfo List_1_CopyTo_m4898_MethodInfo;
extern MethodInfo List_1_RemoveAt_m4895_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m14286_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13264_MethodInfo;
extern MethodInfo IndexedSet_1_Remove_m16126_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m4881_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m4903_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m14315_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m4904_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m14303_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m4664_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m14235_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_GetEnumerator_m16128_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m14307_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m4683_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m14316_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_RemoveAt_m16142_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m4890_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m14305_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m4898_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m4895_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m14286_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13264_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_Remove_m16126_GenericMethod;
extern Il2CppGenericMethod List_1_Sort_m13182_GenericMethod;


// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern Il2CppGenericMethod IndexedSet_1__ctor_m16122_GenericMethod;
extern TypeInfo* List_1_t518_il2cpp_TypeInfo_var;
extern "C" void IndexedSet_1__ctor_m16122_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method)
{
	static bool IndexedSet_1__ctor_m16122_init;
	if (!IndexedSet_1__ctor_m16122_init)
	{
		List_1_t518_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t518_0_0_0);
		IndexedSet_1__ctor_m16122_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t518_il2cpp_TypeInfo_var);
		List_1_t518 * L_0 = (List_1_t518 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_List_0 = L_0;
		Dictionary_2_t2814 * L_1 = (Dictionary_2_t2814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Dictionary_2_t2814 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Dictionary_1 = L_1;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16124_GenericMethod;
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16124_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern Il2CppGenericMethod IndexedSet_1_Add_m16125_GenericMethod;
extern "C" void IndexedSet_1_Add_m16125_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2814 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t518 * L_3 = (__this->___m_List_0);
		Object_t * L_4 = ___item;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_3, L_4);
		Dictionary_2_t2814 * L_5 = (__this->___m_Dictionary_1);
		Object_t * L_6 = ___item;
		List_1_t518 * L_7 = (__this->___m_List_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_7);
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_5, L_6, ((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m16126_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Dictionary_2_t2814 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_3);
		return 1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m16128_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method)
{
	{
		NotImplementedException_t1338 * L_0 = (NotImplementedException_t1338 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotImplementedException_t1338_il2cpp_TypeInfo));
		NotImplementedException__ctor_m11385(L_0, /*hidden argument*/&NotImplementedException__ctor_m11385_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern Il2CppGenericMethod IndexedSet_1_Clear_m16129_GenericMethod;
extern "C" void IndexedSet_1_Clear_m16129_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method)
{
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_0);
		Dictionary_2_t2814 * L_1 = (__this->___m_Dictionary_1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_1);
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern Il2CppGenericMethod IndexedSet_1_Contains_m16131_GenericMethod;
extern "C" bool IndexedSet_1_Contains_m16131_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2814 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod IndexedSet_1_CopyTo_m16133_GenericMethod;
extern "C" void IndexedSet_1_CopyTo_m16133_gshared (IndexedSet_1_t2988 * __this, ObjectU5BU5D_t194* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		ObjectU5BU5D_t194* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		NullCheck(L_0);
		VirtActionInvoker2< ObjectU5BU5D_t194*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), L_0, L_1, L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern Il2CppGenericMethod IndexedSet_1_get_Count_m16134_GenericMethod;
extern "C" int32_t IndexedSet_1_get_Count_m16134_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method)
{
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern Il2CppGenericMethod IndexedSet_1_get_IsReadOnly_m16136_GenericMethod;
extern "C" bool IndexedSet_1_get_IsReadOnly_m16136_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod IndexedSet_1_IndexOf_m16138_GenericMethod;
extern "C" int32_t IndexedSet_1_IndexOf_m16138_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Dictionary_2_t2814 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1, (&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod IndexedSet_1_Insert_m16140_GenericMethod;
extern "C" void IndexedSet_1_Insert_m16140_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5993(L_0, (String_t*) &_stringLiteral145, /*hidden argument*/&NotSupportedException__ctor_m5993_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m16142_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_0 = L_2;
		Dictionary_2_t2814 * L_3 = (__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_3, L_4);
		int32_t L_5 = ___index;
		List_1_t518 * L_6 = (__this->___m_List_0);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t518 * L_8 = (__this->___m_List_0);
		int32_t L_9 = ___index;
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_8, L_9);
		goto IL_007f;
	}

IL_003e:
	{
		List_1_t518 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_10);
		V_1 = ((int32_t)((int32_t)L_11-(int32_t)1));
		List_1_t518 * L_12 = (__this->___m_List_0);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_12, L_13);
		V_2 = L_14;
		List_1_t518 * L_15 = (__this->___m_List_0);
		int32_t L_16 = ___index;
		Object_t * L_17 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_15, L_16, L_17);
		Dictionary_2_t2814 * L_18 = (__this->___m_Dictionary_1);
		Object_t * L_19 = V_2;
		int32_t L_20 = ___index;
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_18, L_19, L_20);
		List_1_t518 * L_21 = (__this->___m_List_0);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_21, L_22);
	}

IL_007f:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod IndexedSet_1_get_Item_m16143_GenericMethod;
extern "C" Object_t * IndexedSet_1_get_Item_m16143_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, MethodInfo* method)
{
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod IndexedSet_1_set_Item_m16145_GenericMethod;
extern "C" void IndexedSet_1_set_Item_m16145_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_0 = L_2;
		Dictionary_2_t2814 * L_3 = (__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_3, L_4);
		List_1_t518 * L_5 = (__this->___m_List_0);
		int32_t L_6 = ___index;
		Object_t * L_7 = ___value;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_5, L_6, L_7);
		Dictionary_2_t2814 * L_8 = (__this->___m_Dictionary_1);
		Object_t * L_9 = V_0;
		int32_t L_10 = ___index;
		NullCheck(L_8);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_8, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod IndexedSet_1_RemoveAll_m16146_GenericMethod;
extern "C" void IndexedSet_1_RemoveAll_m16146_gshared (IndexedSet_1_t2988 * __this, Predicate_1_t2691 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_1 = L_2;
		Predicate_1_t2691 * L_3 = ___match;
		Object_t * L_4 = V_1;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_3, L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = V_1;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), __this, L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t518 * L_9 = (__this->___m_List_0);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod IndexedSet_1_Sort_m16147_GenericMethod;
extern "C" void IndexedSet_1_Sort_m16147_gshared (IndexedSet_1_t2988 * __this, Comparison_1_t2703 * ___sortLayoutFunction, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		List_1_t518 * L_0 = (__this->___m_List_0);
		Comparison_1_t2703 * L_1 = ___sortLayoutFunction;
		NullCheck(L_0);
		(( void (*) (List_1_t518 *, Comparison_1_t2703 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = 0;
		goto IL_0031;
	}

IL_0013:
	{
		List_1_t518 * L_2 = (__this->___m_List_0);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_2, L_3);
		V_1 = L_4;
		Dictionary_2_t2814 * L_5 = (__this->___m_Dictionary_1);
		Object_t * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_5, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		List_1_t518 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2992_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3845_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3844_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_97.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2989_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_97MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1332_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2989_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5972_MethodInfo;
extern MethodInfo Array_get_Length_m5976_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m23569_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m23569(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ICanvasElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ICanvasElement>(System.Int32)
#define Array_InternalArray__get_Item_TisICanvasElement_t388_m24988(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16152_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICanvasElement_t388_m24988_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_11.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_11.h"
extern TypeInfo NullReferenceException_t897_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2032_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t922_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2991_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2993_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2997_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_11MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_11MethodDeclarations.h"
extern Il2CppType ICollection_1_t3845_0_0_0;
extern Il2CppType ICanvasElementU5BU5D_t2990_0_0_0;
extern Il2CppType Enumerator_t2991_0_0_0;
extern Il2CppType IEnumerable_1_t3844_0_0_0;
extern Il2CppType IEnumerator_1_t3843_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2993_0_0_0;
extern Il2CppType Comparer_1_t2997_0_0_0;
extern MethodInfo ArgumentOutOfRangeException__ctor_m6157_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5980_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27714_MethodInfo;
extern MethodInfo Array_Copy_m7944_MethodInfo;
extern MethodInfo List_1_Contains_m16179_MethodInfo;
extern MethodInfo List_1_IndexOf_m16185_MethodInfo;
extern MethodInfo List_1_Insert_m16188_MethodInfo;
extern MethodInfo List_1_Remove_m16190_MethodInfo;
extern MethodInfo Math_Max_m7134_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27715_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27716_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27717_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m16209_MethodInfo;
extern MethodInfo Array_Clear_m7125_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo Enumerator__ctor_m16203_MethodInfo;
extern MethodInfo Array_Reverse_m7166_MethodInfo;
extern MethodInfo Array_Copy_m6198_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m24065_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m24065(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.UI.ICanvasElement>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.ICanvasElement>(!!0[]&,System.Int32)
#define Array_Resize_TisICanvasElement_t388_m24999(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2990**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_18.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11699_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11699(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.ICanvasElement>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.ICanvasElement>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisICanvasElement_t388_m25001(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2990*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m24068(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisICanvasElement_t388_m25003(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2990*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24175_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, Comparison_1_t2703 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m24175(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, Comparison_1_t2703 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisICanvasElement_t388_m25011(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2990*, int32_t, Comparison_1_t386 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod Array_Resize_TisICanvasElement_t388_m24999_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m16187_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m16189_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m16175_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27714_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m16174_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m16184_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m16179_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m16185_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m16188_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m16190_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m16173_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m16198_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m16199_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27715_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27716_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27717_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m16209_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisICanvasElement_t388_m25001_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m16182_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m16183_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16203_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m16186_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m16289_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisICanvasElement_t388_m25003_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisICanvasElement_t388_m25011_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1508_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m5979_MethodInfo;
extern MethodInfo Object_GetType_m2635_MethodInfo;
extern MethodInfo Type_get_FullName_m4739_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m7142_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m16206_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo ICollection_t1030_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t620_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_11MethodDeclarations.h"
extern Il2CppType IList_1_t2992_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m16238_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;
extern MethodInfo IList_1_get_Item_m27718_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5968_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4697_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27719_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27720_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m16238_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27718_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m16270_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27719_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27720_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2994_il2cpp_TypeInfo;

extern TypeInfo IList_t1031_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2994_0_0_0;
extern Il2CppType ICanvasElement_t388_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27721_MethodInfo;
extern MethodInfo Collection_1_SetItem_m16269_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11698_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m16262_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m16260_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m16265_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m16256_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27722_MethodInfo;
extern MethodInfo IList_1_Insert_m27723_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27724_MethodInfo;
extern MethodInfo IList_1_set_Item_m27725_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7994_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11978_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11979_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27721_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m16273_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m16274_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m16271_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m16269_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m16262_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m16272_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m16260_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m16265_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m16256_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27722_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27723_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27724_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27725_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2995_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_18MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_18.h"
extern TypeInfo DefaultComparer_t2996_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_18MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2995_0_0_0;
extern Il2CppType IEquatable_1_t4483_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2447_0_0_0;
extern Il2CppType DefaultComparer_t2996_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m4806_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4804_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10839_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m16280_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27726_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25000_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16280_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27726_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25000_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t2999_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4483_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.ICanvasElement>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1097_MethodInfo;
extern MethodInfo Object_Equals_m1096_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m16275_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.UI.ICanvasElement>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.ICanvasElement>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_11.h"
extern TypeInfo DefaultComparer_t2998_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_11MethodDeclarations.h"
extern Il2CppType IComparable_1_t4103_0_0_0;
extern Il2CppType GenericComparer_1_t2358_0_0_0;
extern Il2CppType DefaultComparer_t2998_0_0_0;
extern MethodInfo DefaultComparer__ctor_m16290_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27727_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10863_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16290_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27727_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4102_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4103_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UI.ICanvasElement>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t226_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m25009_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11669_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m16286_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m25009_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t386_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.UI.ICanvasElement>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.UI.ICanvasElement>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_20.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_45.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_9.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
extern TypeInfo Link_t1636_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1637_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3003_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3007_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4484_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4485_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3848_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3001_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3847_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t4011_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1156_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3000_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3010_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3005_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3012_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1266_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2428_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1149_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2826_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2945_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_20MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_46MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_9MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType IEqualityComparer_1_t2999_0_0_0;
extern Il2CppType KeyCollection_t3003_0_0_0;
extern Il2CppType ValueCollection_t3007_0_0_0;
extern Il2CppType ICollection_1_t4484_0_0_0;
extern Il2CppType IEnumerable_1_t4485_0_0_0;
extern Il2CppType IEnumerator_1_t3848_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3847_0_0_0;
extern Il2CppType KeyValuePair_2_t3001_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t4011_0_0_0;
extern Il2CppType Transform_1_t3000_0_0_0;
extern Il2CppType Transform_1_t3010_0_0_0;
extern Il2CppType Enumerator_t3005_0_0_0;
extern Il2CppType ShimEnumerator_t3012_0_0_0;
extern Il2CppType Int32U5BU5D_t1266_0_0_0;
extern Il2CppType LinkU5BU5D_t2428_0_0_0;
extern Il2CppType EqualityComparer_1_t2826_0_0_0;
extern Il2CppType IEqualityComparer_1_t2945_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m16320_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m27728_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27729_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m8560_MethodInfo;
extern MethodInfo KeyCollection__ctor_m16356_MethodInfo;
extern MethodInfo ValueCollection__ctor_m16391_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27730_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27731_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27732_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m16344_MethodInfo;
extern MethodInfo Transform_1__ctor_m16414_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m16325_MethodInfo;
extern MethodInfo Transform_1__ctor_m16418_MethodInfo;
extern MethodInfo Enumerator__ctor_m16375_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m16426_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m16319_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m16345_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m8727_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27585_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5989_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m6002_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m6001_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m5990_MethodInfo;
extern MethodInfo Type_ToString_m8025_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5978_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m27586_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m5973_MethodInfo;
struct Dictionary_2_t540;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1156_TisDictionaryEntry_t1156_m25030 (Dictionary_2_t540 * __this, DictionaryEntryU5BU5D_t4011* p0, int32_t p1, Transform_1_t3000 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t540;
struct Dictionary_2_t2814;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3001_m25033_gshared (Dictionary_2_t2814 * __this, Array_t * p0, int32_t p1, Transform_1_t3011 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3001_m25033(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2814 *, Array_t *, int32_t, Transform_1_t3011 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3001_m25033_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3001_m25032(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t540 *, Array_t *, int32_t, Transform_1_t3010 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3001_m25033_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t540;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3001_TisKeyValuePair_2_t3001_m25035 (Dictionary_2_t540 * __this, KeyValuePair_2U5BU5D_t3847* p0, int32_t p1, Transform_1_t3010 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m16338_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m16339_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m16340_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m16320_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m16341_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m27728_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27729_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m16329_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m16356_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m16391_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m16322_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m16299_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27730_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27731_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27732_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m16346_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m16348_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m16342_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m16328_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m16324_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m16344_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m16414_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1156_TisDictionaryEntry_t1156_m25030_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m16325_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m16418_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3001_m25032_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16375_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m16426_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16279_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m16323_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m16319_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m16345_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3001_TisKeyValuePair_2_t3001_m25035_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m14418_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27585_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m27586_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern MethodInfo Object_ToString_m1098_MethodInfo;
extern MethodInfo String_Concat_m932_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m16347_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m16349_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_98.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3002_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_98MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3002_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t3001  Array_InternalArray__get_Item_TisKeyValuePair_2_t3001_m25014_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3001_m25014(__this, p0, method) (( KeyValuePair_2_t3001  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3001_m25014_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16355_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3001_m25014_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16351_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m16351_gshared (InternalEnumerator_1_t3002 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16352_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16352_gshared (InternalEnumerator_1_t3002 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3001  L_0 = (( KeyValuePair_2_t3001  (*) (InternalEnumerator_1_t3002 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3001  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16353_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m16353_gshared (InternalEnumerator_1_t3002 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16354_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m16354_gshared (InternalEnumerator_1_t3002 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5976(L_1, /*hidden argument*/&Array_get_Length_m5976_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t3001  InternalEnumerator_1_get_Current_m16355_gshared (InternalEnumerator_1_t3002 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1332 * L_1 = (InvalidOperationException_t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1332_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5972(L_1, (String_t*) &_stringLiteral1304, /*hidden argument*/&InvalidOperationException__ctor_m5972_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1332 * L_3 = (InvalidOperationException_t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1332_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5972(L_3, (String_t*) &_stringLiteral1305, /*hidden argument*/&InvalidOperationException__ctor_m5972_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5976(L_5, /*hidden argument*/&Array_get_Length_m5976_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t3001  L_8 = (( KeyValuePair_2_t3001  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4486_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3846_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_21.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43.h"
extern TypeInfo Enumerator_t3004_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3006_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_21MethodDeclarations.h"
extern Il2CppType Enumerator_t3004_0_0_0;
extern Il2CppType Transform_1_t3006_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m16367_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m16326_MethodInfo;
extern MethodInfo Transform_1__ctor_m16387_MethodInfo;
extern MethodInfo Enumerator__ctor_m16370_MethodInfo;
struct Dictionary_2_t540;
struct Dictionary_2_t2814;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_25.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24537_gshared (Dictionary_2_t2814 * __this, Array_t * p0, int32_t p1, Transform_1_t2820 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24537(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2814 *, Array_t *, int32_t, Transform_1_t2820 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24537_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<UnityEngine.UI.ICanvasElement>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<UnityEngine.UI.ICanvasElement>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisICanvasElement_t388_m25025(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t540 *, Array_t *, int32_t, Transform_1_t3006 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24537_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t540;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisICanvasElement_t388_TisICanvasElement_t388_m25026 (Dictionary_2_t540 * __this, ICanvasElementU5BU5D_t2990* p0, int32_t p1, Transform_1_t3006 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m16368_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m16367_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m16326_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m16387_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisICanvasElement_t388_m25025_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisICanvasElement_t388_TisICanvasElement_t388_m25026_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16370_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m16382_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m16343_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m16386_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m16380_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m16385_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m16383_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m16384_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44.h"
extern TypeInfo Enumerator_t3008_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3009_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23MethodDeclarations.h"
extern Il2CppType Enumerator_t3008_0_0_0;
extern Il2CppType Transform_1_t3009_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m16402_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m16327_MethodInfo;
extern MethodInfo Transform_1__ctor_m16410_MethodInfo;
extern MethodInfo Enumerator__ctor_m16405_MethodInfo;
struct Dictionary_2_t540;
struct Dictionary_2_t2814;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_26.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24539_gshared (Dictionary_2_t2814 * __this, Array_t * p0, int32_t p1, Transform_1_t2823 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24539(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2814 *, Array_t *, int32_t, Transform_1_t2823 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24539_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m25028(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t540 *, Array_t *, int32_t, Transform_1_t3009 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24539_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t540;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t188_TisInt32_t188_m25029 (Dictionary_2_t540 * __this, Int32U5BU5D_t1266* p0, int32_t p1, Transform_1_t3009 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m16333_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m16403_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m16402_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m16327_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m16410_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m25028_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t188_TisInt32_t188_m25029_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16405_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3011_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_47MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m16419_GenericMethod;
extern "C" void Transform_1__ctor_m16419_gshared (Transform_1_t3011 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m16421_GenericMethod;
extern "C" KeyValuePair_2_t3001  Transform_1_Invoke_m16421_gshared (Transform_1_t3011 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m16421((Transform_1_t3011 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3001  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3001  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3001  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m16423_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m16423_gshared (Transform_1_t3011 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m16425_GenericMethod;
extern "C" KeyValuePair_2_t3001  Transform_1_EndInvoke_m16425_gshared (Transform_1_t3011 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3001 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t1153_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11701_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m16428_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m16381_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m16428_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t392_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_22.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_51.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_10.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_20.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_21.h"
extern TypeInfo Font_t390_il2cpp_TypeInfo;
extern TypeInfo List_1_t531_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3015_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3037_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3041_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4487_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4488_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3853_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3017_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3852_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3016_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3044_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3039_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3046_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3047_il2cpp_TypeInfo;
extern TypeInfo FontU5BU5D_t3013_il2cpp_TypeInfo;
extern TypeInfo List_1U5BU5D_t3014_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3049_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4489_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_22MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_51MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_10MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_20MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_21MethodDeclarations.h"
extern Il2CppType Dictionary_2_t392_0_0_0;
extern Il2CppType List_1_t531_0_0_0;
extern Il2CppType IEqualityComparer_1_t3015_0_0_0;
extern Il2CppType KeyCollection_t3037_0_0_0;
extern Il2CppType ValueCollection_t3041_0_0_0;
extern Il2CppType ICollection_1_t4487_0_0_0;
extern Il2CppType IEnumerable_1_t4488_0_0_0;
extern Il2CppType IEnumerator_1_t3853_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3852_0_0_0;
extern Il2CppType KeyValuePair_2_t3017_0_0_0;
extern Il2CppType Transform_1_t3016_0_0_0;
extern Il2CppType Transform_1_t3044_0_0_0;
extern Il2CppType Enumerator_t3039_0_0_0;
extern Il2CppType ShimEnumerator_t3046_0_0_0;
extern Il2CppType EqualityComparer_1_t3047_0_0_0;
extern Il2CppType FontU5BU5D_t3013_0_0_0;
extern Il2CppType List_1U5BU5D_t3014_0_0_0;
extern Il2CppType EqualityComparer_1_t3049_0_0_0;
extern Il2CppType IEqualityComparer_1_t4489_0_0_0;
extern Il2CppType Font_t390_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m16467_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m16456_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m16457_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m27733_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27734_MethodInfo;
extern MethodInfo KeyCollection__ctor_m16664_MethodInfo;
extern MethodInfo ValueCollection__ctor_m16699_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27735_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27736_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27737_MethodInfo;
extern MethodInfo Dictionary_2_Add_m2713_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m16471_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m16478_MethodInfo;
extern MethodInfo Transform_1__ctor_m16722_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m16461_MethodInfo;
extern MethodInfo Transform_1__ctor_m16726_MethodInfo;
extern MethodInfo Enumerator__ctor_m16683_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m16734_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m16455_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m16479_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27738_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m2711_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m27739_MethodInfo;
struct Dictionary_2_t392;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1156_TisDictionaryEntry_t1156_m25145 (Dictionary_2_t392 * __this, DictionaryEntryU5BU5D_t4011* p0, int32_t p1, Transform_1_t3016 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t392;
struct Dictionary_2_t2621;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3017_m25148_gshared (Dictionary_2_t2621 * __this, Array_t * p0, int32_t p1, Transform_1_t3045 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3017_m25148(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2621 *, Array_t *, int32_t, Transform_1_t3045 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3017_m25148_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3017_m25147(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t392 *, Array_t *, int32_t, Transform_1_t3044 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3017_m25148_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t392;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3017_TisKeyValuePair_2_t3017_m25150 (Dictionary_2_t392 * __this, KeyValuePair_2U5BU5D_t3852* p0, int32_t p1, Transform_1_t3044 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m16472_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m16473_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m16467_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m16474_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m16456_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m16475_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m16457_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m27733_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27734_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m16465_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m16664_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m16699_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m16458_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m16435_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27735_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27736_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27737_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m16480_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m16482_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m2713_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m16471_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m16476_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m16464_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m16460_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m16478_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m16722_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1156_TisDictionaryEntry_t1156_m25145_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m16461_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m16726_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3017_m25147_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16683_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m16734_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16744_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m16459_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m16455_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m16479_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3017_TisKeyValuePair_2_t3017_m25150_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16752_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27738_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m2711_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m27739_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m16481_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m16483_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToString()
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_gen_10MethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_12.h"
// System.Predicate`1<UnityEngine.UI.Text>
#include "mscorlib_System_Predicate_1_gen_14.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_12.h"
// System.Comparison`1<UnityEngine.UI.Text>
#include "mscorlib_System_Comparison_1_gen_14.h"
extern TypeInfo Text_t301_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3856_il2cpp_TypeInfo;
extern TypeInfo TextU5BU5D_t3018_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3024_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3854_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3855_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3026_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3030_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3031_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_12MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.Text>
#include "mscorlib_System_Predicate_1_gen_14MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_12MethodDeclarations.h"
extern Il2CppType ICollection_1_t3856_0_0_0;
extern Il2CppType TextU5BU5D_t3018_0_0_0;
extern Il2CppType Enumerator_t3024_0_0_0;
extern Il2CppType IEnumerable_1_t3854_0_0_0;
extern Il2CppType IEnumerator_1_t3855_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3026_0_0_0;
extern Il2CppType Predicate_1_t3030_0_0_0;
extern Il2CppType Comparer_1_t3031_0_0_0;
extern MethodInfo List_1_get_Item_m2716_MethodInfo;
extern MethodInfo List_1_set_Item_m16529_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27740_MethodInfo;
extern MethodInfo List_1_Add_m2718_MethodInfo;
extern MethodInfo List_1_Contains_m16509_MethodInfo;
extern MethodInfo List_1_IndexOf_m16515_MethodInfo;
extern MethodInfo List_1_Insert_m16518_MethodInfo;
extern MethodInfo List_1_Remove_m2719_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27741_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27742_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27743_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m16561_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m16636_MethodInfo;
extern MethodInfo Enumerator__ctor_m16555_MethodInfo;
extern MethodInfo List_1_RemoveAt_m16521_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.UI.Text>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.Text>(!!0[]&,System.Int32)
#define Array_Resize_TisText_t301_m25092(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t3018**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_19.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.Text>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.Text>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisText_t301_m25094(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, TextU5BU5D_t3018*, Text_t301 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisText_t301_m25096(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t3018*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisText_t301_m25104(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t3018*, int32_t, Comparison_1_t3033 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2716_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m16529_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisText_t301_m25092_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m16517_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m16519_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m16505_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27740_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m16504_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m16514_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2718_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m16509_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m16515_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m16518_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m2719_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m16503_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m16527_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m16528_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27741_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27742_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27743_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m16561_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisText_t301_m25094_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m16512_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m16513_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m16636_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m16555_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m16516_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m16521_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m16642_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisText_t301_m25096_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisText_t301_m25104_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3019_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3019_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Text>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Text>(System.Int32)
#define Array_InternalArray__get_Item_TisText_t301_m25037(__this, p0, method) (( Text_t301 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16534_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisText_t301_m25037_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3025_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4490_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4491_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutElement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4492_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutElement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3020_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100MethodDeclarations.h"

extern TypeInfo ILayoutElement_t502_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3020_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ILayoutElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ILayoutElement>(System.Int32)
#define Array_InternalArray__get_Item_TisILayoutElement_t502_m25048(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16539_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisILayoutElement_t502_m25048_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4493_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4494_il2cpp_TypeInfo;

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4495_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.MaskableGraphic>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4496_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.MaskableGraphic>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3021_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101MethodDeclarations.h"

extern TypeInfo MaskableGraphic_t299_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3021_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.MaskableGraphic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.MaskableGraphic>(System.Int32)
#define Array_InternalArray__get_Item_TisMaskableGraphic_t299_m25059(__this, p0, method) (( MaskableGraphic_t299 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16544_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMaskableGraphic_t299_m25059_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4497_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4498_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4499_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaskable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4500_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaskable>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3022_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_102MethodDeclarations.h"

extern TypeInfo IMaskable_t565_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3022_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.IMaskable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.IMaskable>(System.Int32)
#define Array_InternalArray__get_Item_TisIMaskable_t565_m25070(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16549_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIMaskable_t565_m25070_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4501_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t537_il2cpp_TypeInfo;

// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3865_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3866_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3023_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_103MethodDeclarations.h"

extern TypeInfo Graphic_t399_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3023_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Graphic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Graphic>(System.Int32)
#define Array_InternalArray__get_Item_TisGraphic_t399_m25081(__this, p0, method) (( Graphic_t399 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16554_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGraphic_t399_m25081_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t407_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m16558_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_12MethodDeclarations.h"
extern Il2CppType IList_1_t3025_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m16590_MethodInfo;
extern MethodInfo IList_1_get_Item_m27744_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27745_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27746_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m16590_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27744_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m16622_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27745_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27746_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3027_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3027_0_0_0;
extern Il2CppType Text_t301_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27747_MethodInfo;
extern MethodInfo Collection_1_SetItem_m16621_MethodInfo;
extern MethodInfo List_1__ctor_m2712_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m16614_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m16612_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m16617_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m16608_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27748_MethodInfo;
extern MethodInfo IList_1_Insert_m27749_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27750_MethodInfo;
extern MethodInfo IList_1_set_Item_m27751_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27747_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m16625_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m16626_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m16623_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m16621_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2712_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m16614_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m16624_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m16612_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m16617_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m16608_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27748_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27749_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27750_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27751_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3028_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_19MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_19.h"
extern TypeInfo DefaultComparer_t3029_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_19MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3028_0_0_0;
extern Il2CppType IEquatable_1_t4502_0_0_0;
extern Il2CppType DefaultComparer_t3029_0_0_0;
extern MethodInfo DefaultComparer__ctor_m16632_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27752_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25093_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16632_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27752_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25093_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4503_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Text>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Text>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4502_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.Text>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m16627_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UI.Text>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.UI.Text>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.Text>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.UI.Text>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_12.h"
extern TypeInfo DefaultComparer_t3032_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_12MethodDeclarations.h"
extern Il2CppType IComparable_1_t4105_0_0_0;
extern Il2CppType DefaultComparer_t3032_0_0_0;
extern MethodInfo DefaultComparer__ctor_m16643_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27753_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m16643_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27753_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4104_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4105_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UI.Text>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m25102_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m16639_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m25102_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Text>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Text>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3033_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UI.Text>
#include "mscorlib_System_Comparison_1_gen_14MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UI.Text>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.UI.Text>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.UI.Text>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.UI.Text>::EndInvoke(System.IAsyncResult)
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3034_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_104MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3034_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Int32)
extern "C" KeyValuePair_2_t3017  Array_InternalArray__get_Item_TisKeyValuePair_2_t3017_m25107_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3017_m25107(__this, p0, method) (( KeyValuePair_2_t3017  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3017_m25107_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16653_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3017_m25107_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16649_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m16649_gshared (InternalEnumerator_1_t3034 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16650_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16650_gshared (InternalEnumerator_1_t3034 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3017  L_0 = (( KeyValuePair_2_t3017  (*) (InternalEnumerator_1_t3034 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3017  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16651_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m16651_gshared (InternalEnumerator_1_t3034 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16652_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m16652_gshared (InternalEnumerator_1_t3034 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5976(L_1, /*hidden argument*/&Array_get_Length_m5976_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Current()
extern "C" KeyValuePair_2_t3017  InternalEnumerator_1_get_Current_m16653_gshared (InternalEnumerator_1_t3034 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1332 * L_1 = (InvalidOperationException_t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1332_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5972(L_1, (String_t*) &_stringLiteral1304, /*hidden argument*/&InvalidOperationException__ctor_m5972_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1332 * L_3 = (InvalidOperationException_t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1332_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5972(L_3, (String_t*) &_stringLiteral1305, /*hidden argument*/&InvalidOperationException__ctor_m5972_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5976(L_5, /*hidden argument*/&Array_get_Length_m5976_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t3017  L_8 = (( KeyValuePair_2_t3017  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4504_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3851_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3849_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Font>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Font>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Font>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Font>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Font>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Font>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Font>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4505_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Font>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3857_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Font>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Font>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3035_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Font>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3035_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Font>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Font>(System.Int32)
#define Array_InternalArray__get_Item_TisFont_t390_m25118(__this, p0, method) (( Font_t390 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16658_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisFont_t390_m25118_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Font>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Font>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Font>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Font>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Font>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4506_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Font>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Font>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Font>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Font>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Font>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3850_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4507_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3858_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
