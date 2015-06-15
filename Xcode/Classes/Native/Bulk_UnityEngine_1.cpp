#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
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
extern TypeInfo UnityString_t725_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo String_Format_m3007_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern MethodInfo UnityString_Format_m3765_MethodInfo;
extern "C" String_t* UnityString_Format_m3765 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t194* ___args, MethodInfo* method)
{
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t194* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m3007(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Format_m3007_MethodInfo);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncOperation_t636_il2cpp_TypeInfo;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo YieldInstruction__ctor_m3899_MethodInfo;
extern MethodInfo AsyncOperation_InternalDestroy_m3767_MethodInfo;
extern MethodInfo Object_Finalize_m1068_MethodInfo;


// System.Void UnityEngine.AsyncOperation::.ctor()
extern MethodInfo AsyncOperation__ctor_m3766_MethodInfo;
extern "C" void AsyncOperation__ctor_m3766 (AsyncOperation_t636 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m3899(__this, /*hidden argument*/&YieldInstruction__ctor_m3899_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3767 (AsyncOperation_t636 * __this, MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m3767_ftn) (AsyncOperation_t636 *);
	static AsyncOperation_InternalDestroy_m3767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m3767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern MethodInfo AsyncOperation_Finalize_m3768_MethodInfo;
extern "C" void AsyncOperation_Finalize_m3768 (AsyncOperation_t636 * __this, MethodInfo* method)
{
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m3767(__this, /*hidden argument*/&AsyncOperation_InternalDestroy_m3767_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1068(__this, /*hidden argument*/&Object_Finalize_m1068_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t636_marshal(const AsyncOperation_t636& unmarshaled, AsyncOperation_t636_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t636_marshal_back(const AsyncOperation_t636_marshaled& marshaled, AsyncOperation_t636& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t636_marshal_cleanup(AsyncOperation_t636_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogCallback_t726_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo LogCallback__ctor_m3769_MethodInfo;
extern "C" void LogCallback__ctor_m3769 (LogCallback_t726 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern MethodInfo LogCallback_Invoke_m3770_MethodInfo;
extern "C" void LogCallback_Invoke_m3770 (LogCallback_t726 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m3770((LogCallback_t726 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t726(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern MethodInfo LogCallback_BeginInvoke_m3771_MethodInfo;
extern "C" Object_t * LogCallback_BeginInvoke_m3771 (LogCallback_t726 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(InitializedTypeInfo(&LogType_t641_il2cpp_TypeInfo), &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo LogCallback_EndInvoke_m3772_MethodInfo;
extern "C" void LogCallback_EndInvoke_m3772 (LogCallback_t726 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Application_t727_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
extern TypeInfo LogType_t641_il2cpp_TypeInfo;
extern MethodInfo Application_LoadLevelAsync_m3773_MethodInfo;


// System.Void UnityEngine.Application::Quit()
extern MethodInfo Application_Quit_m1296_MethodInfo;
extern "C" void Application_Quit_m1296 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*Application_Quit_m1296_ftn) ();
	static Application_Quit_m1296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m1296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern MethodInfo Application_get_loadedLevel_m997_MethodInfo;
extern "C" int32_t Application_get_loadedLevel_m997 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_loadedLevel_m997_ftn) ();
	static Application_get_loadedLevel_m997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevel_m997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_loadedLevelName()
extern MethodInfo Application_get_loadedLevelName_m975_MethodInfo;
extern "C" String_t* Application_get_loadedLevelName_m975 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_loadedLevelName_m975_ftn) ();
	static Application_get_loadedLevelName_m975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevelName_m975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevelName()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern MethodInfo Application_LoadLevel_m998_MethodInfo;
extern "C" void Application_LoadLevel_m998 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m3773(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/&Application_LoadLevelAsync_m3773_MethodInfo);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String)
extern MethodInfo Application_LoadLevelAsync_m976_MethodInfo;
extern "C" AsyncOperation_t636 * Application_LoadLevelAsync_m976 (Object_t * __this /* static, unused */, String_t* ___levelName, MethodInfo* method)
{
	{
		String_t* L_0 = ___levelName;
		AsyncOperation_t636 * L_1 = Application_LoadLevelAsync_m3773(NULL /*static, unused*/, L_0, (-1), 0, 0, /*hidden argument*/&Application_LoadLevelAsync_m3773_MethodInfo);
		return L_1;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t636 * Application_LoadLevelAsync_m3773 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method)
{
	typedef AsyncOperation_t636 * (*Application_LoadLevelAsync_m3773_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m3773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m3773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m589_MethodInfo;
extern "C" bool Application_get_isPlaying_m589 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m589_ftn) ();
	static Application_get_isPlaying_m589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m1347_MethodInfo;
extern "C" bool Application_get_isEditor_m1347 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m1347_ftn) ();
	static Application_get_isEditor_m1347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m1347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern MethodInfo Application_get_platform_m2824_MethodInfo;
extern "C" int32_t Application_get_platform_m2824 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m2824_ftn) ();
	static Application_get_platform_m2824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m2824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern MethodInfo Application_CallLogCallback_m3774_MethodInfo;
extern "C" void Application_CallLogCallback_m3774 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method)
{
	LogCallback_t726 * V_0 = {0};
	LogCallback_t726 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t726 * L_1 = ((Application_t727_StaticFields*)InitializedTypeInfo(&Application_t727_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t726 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t726 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m3770_MethodInfo, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t726 * L_7 = ((Application_t727_StaticFields*)InitializedTypeInfo(&Application_t727_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t726 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t726 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m3770_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t212_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern MethodInfo Component__ctor_m3859_MethodInfo;


// System.Void UnityEngine.Behaviour::.ctor()
extern MethodInfo Behaviour__ctor_m3775_MethodInfo;
extern "C" void Behaviour__ctor_m3775 (Behaviour_t212 * __this, MethodInfo* method)
{
	{
		Component__ctor_m3859(__this, /*hidden argument*/&Component__ctor_m3859_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m811_MethodInfo;
extern "C" bool Behaviour_get_enabled_m811 (Behaviour_t212 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m811_ftn) (Behaviour_t212 *);
	static Behaviour_get_enabled_m811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m832_MethodInfo;
extern "C" void Behaviour_set_enabled_m832 (Behaviour_t212 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m832_ftn) (Behaviour_t212 *, bool);
	static Behaviour_set_enabled_m832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m2600_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m2600 (Behaviour_t212 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2600_ftn) (Behaviour_t212 *);
	static Behaviour_get_isActiveAndEnabled_m2600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RenderingPath
#include "UnityEngine_UnityEngine_RenderingPath.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderingPath_t728_il2cpp_TypeInfo;
// UnityEngine.RenderingPath
#include "UnityEngine_UnityEngine_RenderingPathMethodDeclarations.h"



// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraCallback_t729_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CameraCallback__ctor_m3776_MethodInfo;
extern "C" void CameraCallback__ctor_m3776 (CameraCallback_t729 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern MethodInfo CameraCallback_Invoke_m3777_MethodInfo;
extern "C" void CameraCallback_Invoke_m3777 (CameraCallback_t729 * __this, Camera_t19 * ___cam, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m3777((CameraCallback_t729 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t19 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t19 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t729(Il2CppObject* delegate, Camera_t19 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t19 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern MethodInfo CameraCallback_BeginInvoke_m3778_MethodInfo;
extern "C" Object_t * CameraCallback_BeginInvoke_m3778 (CameraCallback_t729 * __this, Camera_t19 * ___cam, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CameraCallback_EndInvoke_m3779_MethodInfo;
extern "C" void CameraCallback_EndInvoke_m3779 (CameraCallback_t729 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t19_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern MethodInfo Camera_INTERNAL_get_backgroundColor_m3781_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_backgroundColor_m3782_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_pixelRect_m3783_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_worldToCameraMatrix_m3785_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_worldToCameraMatrix_m3786_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m3787_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_projectionMatrix_m3788_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m3791_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m3796_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m3798_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799_MethodInfo;


// System.Single UnityEngine.Camera::get_fieldOfView()
extern MethodInfo Camera_get_fieldOfView_m654_MethodInfo;
extern "C" float Camera_get_fieldOfView_m654 (Camera_t19 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m654_ftn) (Camera_t19 *);
	static Camera_get_fieldOfView_m654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern MethodInfo Camera_set_fieldOfView_m655_MethodInfo;
extern "C" void Camera_set_fieldOfView_m655 (Camera_t19 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_fieldOfView_m655_ftn) (Camera_t19 *, float);
	static Camera_set_fieldOfView_m655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_fieldOfView_m655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m888_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m888 (Camera_t19 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m888_ftn) (Camera_t19 *);
	static Camera_get_nearClipPlane_m888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern MethodInfo Camera_set_nearClipPlane_m889_MethodInfo;
extern "C" void Camera_set_nearClipPlane_m889 (Camera_t19 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_nearClipPlane_m889_ftn) (Camera_t19 *, float);
	static Camera_set_nearClipPlane_m889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_nearClipPlane_m889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_nearClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m886_MethodInfo;
extern "C" float Camera_get_farClipPlane_m886 (Camera_t19 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m886_ftn) (Camera_t19 *);
	static Camera_get_farClipPlane_m886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern MethodInfo Camera_set_farClipPlane_m887_MethodInfo;
extern "C" void Camera_set_farClipPlane_m887 (Camera_t19 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_farClipPlane_m887_ftn) (Camera_t19 *, float);
	static Camera_set_farClipPlane_m887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_farClipPlane_m887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_farClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
extern MethodInfo Camera_set_renderingPath_m861_MethodInfo;
extern "C" void Camera_set_renderingPath_m861 (Camera_t19 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_renderingPath_m861_ftn) (Camera_t19 *, int32_t);
	static Camera_set_renderingPath_m861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_renderingPath_m861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern MethodInfo Camera_get_orthographicSize_m894_MethodInfo;
extern "C" float Camera_get_orthographicSize_m894 (Camera_t19 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m894_ftn) (Camera_t19 *);
	static Camera_get_orthographicSize_m894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern MethodInfo Camera_set_orthographicSize_m895_MethodInfo;
extern "C" void Camera_set_orthographicSize_m895 (Camera_t19 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m895_ftn) (Camera_t19 *, float);
	static Camera_set_orthographicSize_m895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Camera::get_orthographic()
extern MethodInfo Camera_get_orthographic_m890_MethodInfo;
extern "C" bool Camera_get_orthographic_m890 (Camera_t19 * __this, MethodInfo* method)
{
	typedef bool (*Camera_get_orthographic_m890_ftn) (Camera_t19 *);
	static Camera_get_orthographic_m890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographic_m890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographic()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern MethodInfo Camera_set_orthographic_m891_MethodInfo;
extern "C" void Camera_set_orthographic_m891 (Camera_t19 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographic_m891_ftn) (Camera_t19 *, bool);
	static Camera_set_orthographic_m891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographic_m891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m2531_MethodInfo;
extern "C" float Camera_get_depth_m2531 (Camera_t19 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2531_ftn) (Camera_t19 *);
	static Camera_get_depth_m2531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_aspect()
extern MethodInfo Camera_get_aspect_m892_MethodInfo;
extern "C" float Camera_get_aspect_m892 (Camera_t19 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_aspect_m892_ftn) (Camera_t19 *);
	static Camera_get_aspect_m892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_aspect_m892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_aspect()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern MethodInfo Camera_set_aspect_m893_MethodInfo;
extern "C" void Camera_set_aspect_m893 (Camera_t19 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_aspect_m893_ftn) (Camera_t19 *, float);
	static Camera_set_aspect_m893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_aspect_m893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_aspect(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m2671_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m2671 (Camera_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2671_ftn) (Camera_t19 *);
	static Camera_get_cullingMask_m2671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern MethodInfo Camera_set_cullingMask_m830_MethodInfo;
extern "C" void Camera_set_cullingMask_m830 (Camera_t19 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m830_ftn) (Camera_t19 *, int32_t);
	static Camera_set_cullingMask_m830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m3780_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m3780 (Camera_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m3780_ftn) (Camera_t19 *);
	static Camera_get_eventMask_m3780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m3780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_get_backgroundColor_m3781 (Camera_t19 * __this, Color_t79 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_backgroundColor_m3781_ftn) (Camera_t19 *, Color_t79 *);
	static Camera_INTERNAL_get_backgroundColor_m3781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_backgroundColor_m3781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m3782 (Camera_t19 * __this, Color_t79 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_backgroundColor_m3782_ftn) (Camera_t19 *, Color_t79 *);
	static Camera_INTERNAL_set_backgroundColor_m3782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_backgroundColor_m3782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
extern MethodInfo Camera_get_backgroundColor_m885_MethodInfo;
extern "C" Color_t79  Camera_get_backgroundColor_m885 (Camera_t19 * __this, MethodInfo* method)
{
	Color_t79  V_0 = {0};
	{
		Camera_INTERNAL_get_backgroundColor_m3781(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_backgroundColor_m3781_MethodInfo);
		Color_t79  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern MethodInfo Camera_set_backgroundColor_m824_MethodInfo;
extern "C" void Camera_set_backgroundColor_m824 (Camera_t19 * __this, Color_t79  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_backgroundColor_m3782(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_backgroundColor_m3782_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3783 (Camera_t19 * __this, Rect_t260 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m3783_ftn) (Camera_t19 *, Rect_t260 *);
	static Camera_INTERNAL_get_pixelRect_m3783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m3783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m3784_MethodInfo;
extern "C" Rect_t260  Camera_get_pixelRect_m3784 (Camera_t19 * __this, MethodInfo* method)
{
	Rect_t260  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m3783(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m3783_MethodInfo);
		Rect_t260  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m826_MethodInfo;
extern "C" RenderTexture_t80 * Camera_get_targetTexture_m826 (Camera_t19 * __this, MethodInfo* method)
{
	typedef RenderTexture_t80 * (*Camera_get_targetTexture_m826_ftn) (Camera_t19 *);
	static Camera_get_targetTexture_m826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern MethodInfo Camera_set_targetTexture_m827_MethodInfo;
extern "C" void Camera_set_targetTexture_m827 (Camera_t19 * __this, RenderTexture_t80 * ___value, MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m827_ftn) (Camera_t19 *, RenderTexture_t80 *);
	static Camera_set_targetTexture_m827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern MethodInfo Camera_get_pixelWidth_m833_MethodInfo;
extern "C" int32_t Camera_get_pixelWidth_m833 (Camera_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_pixelWidth_m833_ftn) (Camera_t19 *);
	static Camera_get_pixelWidth_m833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_pixelWidth_m833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_pixelWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern MethodInfo Camera_get_pixelHeight_m835_MethodInfo;
extern "C" int32_t Camera_get_pixelHeight_m835 (Camera_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_pixelHeight_m835_ftn) (Camera_t19 *);
	static Camera_get_pixelHeight_m835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_pixelHeight_m835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_pixelHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m3785 (Camera_t19 * __this, Matrix4x4_t81 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_worldToCameraMatrix_m3785_ftn) (Camera_t19 *, Matrix4x4_t81 *);
	static Camera_INTERNAL_get_worldToCameraMatrix_m3785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_worldToCameraMatrix_m3785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_worldToCameraMatrix_m3786 (Camera_t19 * __this, Matrix4x4_t81 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_worldToCameraMatrix_m3786_ftn) (Camera_t19 *, Matrix4x4_t81 *);
	static Camera_INTERNAL_set_worldToCameraMatrix_m3786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_worldToCameraMatrix_m3786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern MethodInfo Camera_get_worldToCameraMatrix_m854_MethodInfo;
extern "C" Matrix4x4_t81  Camera_get_worldToCameraMatrix_m854 (Camera_t19 * __this, MethodInfo* method)
{
	Matrix4x4_t81  V_0 = {0};
	{
		Camera_INTERNAL_get_worldToCameraMatrix_m3785(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_worldToCameraMatrix_m3785_MethodInfo);
		Matrix4x4_t81  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_worldToCameraMatrix_m856_MethodInfo;
extern "C" void Camera_set_worldToCameraMatrix_m856 (Camera_t19 * __this, Matrix4x4_t81  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_worldToCameraMatrix_m3786(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_worldToCameraMatrix_m3786_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3787 (Camera_t19 * __this, Matrix4x4_t81 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m3787_ftn) (Camera_t19 *, Matrix4x4_t81 *);
	static Camera_INTERNAL_get_projectionMatrix_m3787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m3787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m3788 (Camera_t19 * __this, Matrix4x4_t81 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_projectionMatrix_m3788_ftn) (Camera_t19 *, Matrix4x4_t81 *);
	static Camera_INTERNAL_set_projectionMatrix_m3788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_projectionMatrix_m3788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m857_MethodInfo;
extern "C" Matrix4x4_t81  Camera_get_projectionMatrix_m857 (Camera_t19 * __this, MethodInfo* method)
{
	Matrix4x4_t81  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m3787(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m3787_MethodInfo);
		Matrix4x4_t81  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_projectionMatrix_m858_MethodInfo;
extern "C" void Camera_set_projectionMatrix_m858 (Camera_t19 * __this, Matrix4x4_t81  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_projectionMatrix_m3788(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_projectionMatrix_m3788_MethodInfo);
		return;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m884_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m884 (Camera_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m884_ftn) (Camera_t19 *);
	static Camera_get_clearFlags_m884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern MethodInfo Camera_set_clearFlags_m825_MethodInfo;
extern "C" void Camera_set_clearFlags_m825 (Camera_t19 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m825_ftn) (Camera_t19 *, int32_t);
	static Camera_set_clearFlags_m825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToWorldPoint_m1279_MethodInfo;
extern "C" Vector3_t8  Camera_ScreenToWorldPoint_m1279 (Camera_t19 * __this, Vector3_t8  ___position, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t8  Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789 (Object_t * __this /* static, unused */, Camera_t19 * ___self, Vector3_t8 * ___position, MethodInfo* method)
{
	typedef Vector3_t8  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789_ftn) (Camera_t19 *, Vector3_t8 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m3789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2758_MethodInfo;
extern "C" Vector3_t8  Camera_ScreenToViewportPoint_m2758 (Camera_t19 * __this, Vector3_t8  ___position, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t8  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790 (Object_t * __this /* static, unused */, Camera_t19 * ___self, Vector3_t8 * ___position, MethodInfo* method)
{
	typedef Vector3_t8  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790_ftn) (Camera_t19 *, Vector3_t8 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m3790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m947_MethodInfo;
extern "C" Ray_t18  Camera_ScreenPointToRay_m947 (Camera_t19 * __this, Vector3_t8  ___position, MethodInfo* method)
{
	{
		Ray_t18  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m3791(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m3791_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t18  Camera_INTERNAL_CALL_ScreenPointToRay_m3791 (Object_t * __this /* static, unused */, Camera_t19 * ___self, Vector3_t8 * ___position, MethodInfo* method)
{
	typedef Ray_t18  (*Camera_INTERNAL_CALL_ScreenPointToRay_m3791_ftn) (Camera_t19 *, Vector3_t8 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m3791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m3791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m663_MethodInfo;
extern "C" Camera_t19 * Camera_get_main_m663 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t19 * (*Camera_get_main_m663_ftn) ();
	static Camera_get_main_m663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern MethodInfo Camera_get_current_m875_MethodInfo;
extern "C" Camera_t19 * Camera_get_current_m875 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t19 * (*Camera_get_current_m875_ftn) ();
	static Camera_get_current_m875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_current_m875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_current()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m1288_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m1288 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m1288_ftn) ();
	static Camera_get_allCamerasCount_m1288_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m1288_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m1289_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m1289 (Object_t * __this /* static, unused */, CameraU5BU5D_t269* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m1289_ftn) (CameraU5BU5D_t269*);
	static Camera_GetAllCameras_m1289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m1289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m3792_MethodInfo;
extern "C" void Camera_FireOnPreCull_m3792 (Object_t * __this /* static, unused */, Camera_t19 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t729 * L_0 = ((Camera_t19_StaticFields*)InitializedTypeInfo(&Camera_t19_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t729 * L_1 = ((Camera_t19_StaticFields*)InitializedTypeInfo(&Camera_t19_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t19 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t19 * >::Invoke(&CameraCallback_Invoke_m3777_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m3793_MethodInfo;
extern "C" void Camera_FireOnPreRender_m3793 (Object_t * __this /* static, unused */, Camera_t19 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t729 * L_0 = ((Camera_t19_StaticFields*)InitializedTypeInfo(&Camera_t19_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t729 * L_1 = ((Camera_t19_StaticFields*)InitializedTypeInfo(&Camera_t19_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t19 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t19 * >::Invoke(&CameraCallback_Invoke_m3777_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m3794_MethodInfo;
extern "C" void Camera_FireOnPostRender_m3794 (Object_t * __this /* static, unused */, Camera_t19 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t729 * L_0 = ((Camera_t19_StaticFields*)InitializedTypeInfo(&Camera_t19_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t729 * L_1 = ((Camera_t19_StaticFields*)InitializedTypeInfo(&Camera_t19_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t19 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t19 * >::Invoke(&CameraCallback_Invoke_m3777_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::Render()
extern MethodInfo Camera_Render_m859_MethodInfo;
extern "C" void Camera_Render_m859 (Camera_t19 * __this, MethodInfo* method)
{
	typedef void (*Camera_Render_m859_ftn) (Camera_t19 *);
	static Camera_Render_m859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_Render_m859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::Render()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern MethodInfo Camera_get_depthTextureMode_m914_MethodInfo;
extern "C" int32_t Camera_get_depthTextureMode_m914 (Camera_t19 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_depthTextureMode_m914_ftn) (Camera_t19 *);
	static Camera_get_depthTextureMode_m914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depthTextureMode_m914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depthTextureMode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern MethodInfo Camera_set_depthTextureMode_m860_MethodInfo;
extern "C" void Camera_set_depthTextureMode_m860 (Camera_t19 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_depthTextureMode_m860_ftn) (Camera_t19 *, int32_t);
	static Camera_set_depthTextureMode_m860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depthTextureMode_m860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m3795_MethodInfo;
extern "C" GameObject_t92 * Camera_RaycastTry_m3795 (Camera_t19 * __this, Ray_t18  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t92 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m3796(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m3796_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t92 * Camera_INTERNAL_CALL_RaycastTry_m3796 (Object_t * __this /* static, unused */, Camera_t19 * ___self, Ray_t18 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t92 * (*Camera_INTERNAL_CALL_RaycastTry_m3796_ftn) (Camera_t19 *, Ray_t18 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m3796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m3796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m3797_MethodInfo;
extern "C" GameObject_t92 * Camera_RaycastTry2D_m3797 (Camera_t19 * __this, Ray_t18  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t92 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m3798(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m3798_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t92 * Camera_INTERNAL_CALL_RaycastTry2D_m3798 (Object_t * __this /* static, unused */, Camera_t19 * ___self, Ray_t18 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t92 * (*Camera_INTERNAL_CALL_RaycastTry2D_m3798_ftn) (Camera_t19 *, Ray_t18 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m3798_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m3798_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::CalculateObliqueMatrix(UnityEngine.Vector4)
extern MethodInfo Camera_CalculateObliqueMatrix_m878_MethodInfo;
extern "C" Matrix4x4_t81  Camera_CalculateObliqueMatrix_m878 (Camera_t19 * __this, Vector4_t82  ___clipPlane, MethodInfo* method)
{
	{
		Matrix4x4_t81  L_0 = Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799(NULL /*static, unused*/, __this, (&___clipPlane), /*hidden argument*/&Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&)
extern "C" Matrix4x4_t81  Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799 (Object_t * __this /* static, unused */, Camera_t19 * ___self, Vector4_t82 * ___clipPlane, MethodInfo* method)
{
	typedef Matrix4x4_t81  (*Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799_ftn) (Camera_t19 *, Vector4_t82 *);
	static Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_CalculateObliqueMatrix_m3799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&)");
	return _il2cpp_icall_func(___self, ___clipPlane);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t730_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo Debug_INTERNAL_CALL_DrawLine_m3801_MethodInfo;
extern MethodInfo Debug_DrawRay_m3802_MethodInfo;
extern MethodInfo Vector3_op_Addition_m634_MethodInfo;
extern MethodInfo Debug_DrawLine_m3800_MethodInfo;
extern MethodInfo Object_ToString_m1098_MethodInfo;
extern MethodInfo Debug_Internal_Log_m3803_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m3804_MethodInfo;


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void Debug_DrawLine_m3800 (Object_t * __this /* static, unused */, Vector3_t8  ___start, Vector3_t8  ___end, Color_t79  ___color, float ___duration, bool ___depthTest, MethodInfo* method)
{
	{
		float L_0 = ___duration;
		bool L_1 = ___depthTest;
		Debug_INTERNAL_CALL_DrawLine_m3801(NULL /*static, unused*/, (&___start), (&___end), (&___color), L_0, L_1, /*hidden argument*/&Debug_INTERNAL_CALL_DrawLine_m3801_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m3801 (Object_t * __this /* static, unused */, Vector3_t8 * ___start, Vector3_t8 * ___end, Color_t79 * ___color, float ___duration, bool ___depthTest, MethodInfo* method)
{
	typedef void (*Debug_INTERNAL_CALL_DrawLine_m3801_ftn) (Vector3_t8 *, Vector3_t8 *, Color_t79 *, float, bool);
	static Debug_INTERNAL_CALL_DrawLine_m3801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_INTERNAL_CALL_DrawLine_m3801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)");
	_il2cpp_icall_func(___start, ___end, ___color, ___duration, ___depthTest);
}
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern MethodInfo Debug_DrawRay_m650_MethodInfo;
extern "C" void Debug_DrawRay_m650 (Object_t * __this /* static, unused */, Vector3_t8  ___start, Vector3_t8  ___dir, Color_t79  ___color, MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = 1;
		V_1 = (0.0f);
		Vector3_t8  L_0 = ___start;
		Vector3_t8  L_1 = ___dir;
		Color_t79  L_2 = ___color;
		float L_3 = V_1;
		bool L_4 = V_0;
		Debug_DrawRay_m3802(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Debug_DrawRay_m3802_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void Debug_DrawRay_m3802 (Object_t * __this /* static, unused */, Vector3_t8  ___start, Vector3_t8  ___dir, Color_t79  ___color, float ___duration, bool ___depthTest, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___start;
		Vector3_t8  L_1 = ___start;
		Vector3_t8  L_2 = ___dir;
		Vector3_t8  L_3 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Color_t79  L_4 = ___color;
		float L_5 = ___duration;
		bool L_6 = ___depthTest;
		Debug_DrawLine_m3800(NULL /*static, unused*/, L_0, L_3, L_4, L_5, L_6, /*hidden argument*/&Debug_DrawLine_m3800_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m3803 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t91 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m3803_ftn) (int32_t, String_t*, Object_t91 *);
	static Debug_Internal_Log_m3803_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m3803_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m3804 (Object_t * __this /* static, unused */, Exception_t204 * ___exception, Object_t91 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m3804_ftn) (Exception_t204 *, Object_t91 *);
	static Debug_Internal_LogException_m3804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m3804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m922_MethodInfo;
extern "C" void Debug_Log_m922 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral309;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3803(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t91 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3803_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m798_MethodInfo;
extern "C" void Debug_LogError_m798 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral309;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3803(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t91 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3803_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2811_MethodInfo;
extern "C" void Debug_LogError_m2811 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t91 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_0);
		Object_t91 * L_2 = ___context;
		Debug_Internal_Log_m3803(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3803_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m3805_MethodInfo;
extern "C" void Debug_LogException_m3805 (Object_t * __this /* static, unused */, Exception_t204 * ___exception, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = ___exception;
		Debug_Internal_LogException_m3804(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m3804_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m2689_MethodInfo;
extern "C" void Debug_LogException_m2689 (Object_t * __this /* static, unused */, Exception_t204 * ___exception, Object_t91 * ___context, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = ___exception;
		Object_t91 * L_1 = ___context;
		Debug_Internal_LogException_m3804(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m3804_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m715_MethodInfo;
extern "C" void Debug_LogWarning_m715 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_0);
		Debug_Internal_Log_m3803(NULL /*static, unused*/, 1, L_1, (Object_t91 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3803_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m2984_MethodInfo;
extern "C" void Debug_LogWarning_m2984 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t91 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_0);
		Object_t91 * L_2 = ___context;
		Debug_Internal_Log_m3803(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3803_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t731_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m3806_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m3806 (DisplaysUpdatedDelegate_t731 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m3807_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m3807 (DisplaysUpdatedDelegate_t731 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m3807((DisplaysUpdatedDelegate_t731 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t731(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m3808_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m3808 (DisplaysUpdatedDelegate_t731 * __this, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m3809_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m3809 (DisplaysUpdatedDelegate_t731 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t733_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo DisplayU5BU5D_t732_il2cpp_TypeInfo;
extern TypeInfo Vector3_t8_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t732_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m3831_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m3830_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m3832_MethodInfo;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo IntPtr__ctor_m4615_MethodInfo;
extern MethodInfo Display__ctor_m3810_MethodInfo;
extern MethodInfo Delegate_Combine_m1268_MethodInfo;
extern MethodInfo Delegate_Remove_m1269_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m3834_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m3835_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m3833_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m3836_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m3837_MethodInfo;
extern MethodInfo Display__ctor_m3811_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m3810 (Display_t733 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m4615(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m4615_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m3811 (Display_t733 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m3812_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t732_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m3812 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m3812_init;
	if (!Display__cctor_m3812_init)
	{
		DisplayU5BU5D_t732_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t732_0_0_0);
		Display__cctor_m3812_init = true;
	}
	{
		DisplayU5BU5D_t732* L_0 = ((DisplayU5BU5D_t732*)SZArrayNew(DisplayU5BU5D_t732_il2cpp_TypeInfo_var, 1));
		Display_t733 * L_1 = (Display_t733 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display__ctor_m3810(L_1, /*hidden argument*/&Display__ctor_m3810_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t733 **)(Display_t733 **)SZArrayLdElema(L_0, 0)) = (Display_t733 *)L_1;
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t732* L_2 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t733 **)(Display_t733 **)SZArrayLdElema(L_2, L_3));
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t731 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m3813_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m3813 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t731 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t731 * L_0 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t731 * L_1 = ___value;
		Delegate_t287 * L_2 = Delegate_Combine_m1268(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1268_MethodInfo);
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t731 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t731_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m3814_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m3814 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t731 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t731 * L_0 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t731 * L_1 = ___value;
		Delegate_t287 * L_2 = Delegate_Remove_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1269_MethodInfo);
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t731 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t731_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m3815_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m3815 (Display_t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3831(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3831_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m3816_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m3816 (Display_t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3831(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3831_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m3817_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m3817 (Display_t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3830(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3830_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m3818_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m3818 (Display_t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3830(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3830_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m3819_MethodInfo;
extern "C" RenderBuffer_t735  Display_get_colorBuffer_m3819 (Display_t733 * __this, MethodInfo* method)
{
	RenderBuffer_t735  V_0 = {0};
	RenderBuffer_t735  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3832(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3832_MethodInfo);
		RenderBuffer_t735  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m3820_MethodInfo;
extern "C" RenderBuffer_t735  Display_get_depthBuffer_m3820 (Display_t733 * __this, MethodInfo* method)
{
	RenderBuffer_t735  V_0 = {0};
	RenderBuffer_t735  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3832(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3832_MethodInfo);
		RenderBuffer_t735  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m3821_MethodInfo;
extern "C" void Display_Activate_m3821 (Display_t733 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3834(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m3834_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m3822_MethodInfo;
extern "C" void Display_Activate_m3822 (Display_t733 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3834(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m3834_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m3823_MethodInfo;
extern "C" void Display_SetParams_m3823 (Display_t733 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_SetParamsImpl_m3835(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m3835_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m3824_MethodInfo;
extern "C" void Display_SetRenderingResolution_m3824 (Display_t733 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m3833(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m3833_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m3825_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m3825 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m3836(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m3836_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m3826_MethodInfo;
extern "C" Vector3_t8  Display_RelativeMouseAt_m3826 (Object_t * __this /* static, unused */, Vector3_t8  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m3837(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m3837_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t8  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m3827_MethodInfo;
extern "C" Display_t733 * Display_get_main_m3827 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display_t733 * L_0 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m3828_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t732_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m3828 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t734* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m3828_init;
	if (!Display_RecreateDisplayList_m3828_init)
	{
		DisplayU5BU5D_t732_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t732_0_0_0);
		Display_RecreateDisplayList_m3828_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t734* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t732*)SZArrayNew(DisplayU5BU5D_t732_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		DisplayU5BU5D_t732* L_1 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t734* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t733 * L_6 = (Display_t733 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		Display__ctor_m3811(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m3811_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t733 **)(Display_t733 **)SZArrayLdElema(L_1, L_2)) = (Display_t733 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t734* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		DisplayU5BU5D_t732* L_10 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t733 **)(Display_t733 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m3829_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m3829 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t731 * L_0 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t731 * L_1 = ((Display_t733_StaticFields*)InitializedTypeInfo(&Display_t733_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m3807_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m3830 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m3830_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m3830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m3830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m3831 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m3831_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m3831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m3831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m3832 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t735 * ___color, RenderBuffer_t735 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m3832_ftn) (IntPtr_t, RenderBuffer_t735 *, RenderBuffer_t735 *);
	static Display_GetRenderingBuffersImpl_m3832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m3832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m3833 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m3833_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m3833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m3833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m3834 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m3834_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m3834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m3834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m3835 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m3835_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m3835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m3835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m3836 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m3836_ftn) ();
	static Display_MultiDisplayLicenseImpl_m3836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m3836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m3837 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m3837_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m3837_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m3837_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t5_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m3838_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m3841_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m575_MethodInfo;
extern "C" void MonoBehaviour__ctor_m575 (MonoBehaviour_t5 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m3775(__this, /*hidden argument*/&Behaviour__ctor_m3775_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern MethodInfo MonoBehaviour_Invoke_m1000_MethodInfo;
extern "C" void MonoBehaviour_Invoke_m1000 (MonoBehaviour_t5 * __this, String_t* ___methodName, float ___time, MethodInfo* method)
{
	typedef void (*MonoBehaviour_Invoke_m1000_ftn) (MonoBehaviour_t5 *, String_t*, float);
	static MonoBehaviour_Invoke_m1000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Invoke_m1000_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m665_MethodInfo;
extern "C" Coroutine_t435 * MonoBehaviour_StartCoroutine_m665 (MonoBehaviour_t5 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t435 * L_1 = MonoBehaviour_StartCoroutine_Auto_m3838(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m3838_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t435 * MonoBehaviour_StartCoroutine_Auto_m3838 (MonoBehaviour_t5 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t435 * (*MonoBehaviour_StartCoroutine_Auto_m3838_ftn) (MonoBehaviour_t5 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m3838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m3838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern MethodInfo MonoBehaviour_StartCoroutine_m962_MethodInfo;
extern "C" Coroutine_t435 * MonoBehaviour_StartCoroutine_m962 (MonoBehaviour_t5 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method)
{
	typedef Coroutine_t435 * (*MonoBehaviour_StartCoroutine_m962_ftn) (MonoBehaviour_t5 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern MethodInfo MonoBehaviour_StopCoroutine_m1267_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m1267 (MonoBehaviour_t5 * __this, String_t* ___methodName, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m1267_ftn) (MonoBehaviour_t5 *, String_t*);
	static MonoBehaviour_StopCoroutine_m1267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m1267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m3839_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m3839 (MonoBehaviour_t5 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2925_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2925 (MonoBehaviour_t5 * __this, Coroutine_t435 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t435 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m3841(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m3841_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840 (MonoBehaviour_t5 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840_ftn) (MonoBehaviour_t5 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m3841 (MonoBehaviour_t5 * __this, Coroutine_t435 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m3841_ftn) (MonoBehaviour_t5 *, Coroutine_t435 *);
	static MonoBehaviour_StopCoroutine_Auto_m3841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m3841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern MethodInfo MonoBehaviour_StopAllCoroutines_m685_MethodInfo;
extern "C" void MonoBehaviour_StopAllCoroutines_m685 (MonoBehaviour_t5 * __this, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopAllCoroutines_m685_ftn) (MonoBehaviour_t5 *);
	static MonoBehaviour_StopAllCoroutines_m685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopAllCoroutines_m685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopAllCoroutines()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern MethodInfo MonoBehaviour_print_m1287_MethodInfo;
extern "C" void MonoBehaviour_print_m1287 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m922(NULL /*static, unused*/, L_0, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t736_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t737_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t206_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m1272_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m1272 (Touch_t206 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m791_MethodInfo;
extern "C" Vector2_t13  Touch_get_position_m791 (Touch_t206 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_rawPosition()
extern MethodInfo Touch_get_rawPosition_m3842_MethodInfo;
extern "C" Vector2_t13  Touch_get_rawPosition_m3842 (Touch_t206 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->___m_RawPosition_2);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern MethodInfo Touch_get_deltaPosition_m3843_MethodInfo;
extern "C" Vector2_t13  Touch_get_deltaPosition_m3843 (Touch_t206 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->___m_PositionDelta_3);
		return L_0;
	}
}
// System.Single UnityEngine.Touch::get_deltaTime()
extern MethodInfo Touch_get_deltaTime_m3844_MethodInfo;
extern "C" float Touch_get_deltaTime_m3844 (Touch_t206 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_TimeDelta_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.Touch::get_tapCount()
extern MethodInfo Touch_get_tapCount_m3845_MethodInfo;
extern "C" int32_t Touch_get_tapCount_m3845 (Touch_t206 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TapCount_5);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m1277_MethodInfo;
extern "C" int32_t Touch_get_phase_m1277 (Touch_t206 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t206_marshal(const Touch_t206& unmarshaled, Touch_t206_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t206_marshal_back(const Touch_t206_marshaled& marshaled, Touch_t206& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t206_marshal_cleanup(Touch_t206_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t187_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern TypeInfo TouchU5BU5D_t205_il2cpp_TypeInfo;
extern Il2CppType TouchU5BU5D_t205_0_0_0;
extern MethodInfo Input_get_touchCount_m789_MethodInfo;
extern MethodInfo Input_GetTouch_m1271_MethodInfo;
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m3848_MethodInfo;
extern MethodInfo Input_GetKeyInt_m3847_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m3846_MethodInfo;
extern "C" void Input__cctor_m3846 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C" bool Input_GetKeyInt_m3847 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m3847_ftn) (int32_t);
	static Input_GetKeyInt_m3847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m3847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern MethodInfo Input_GetAxis_m778_MethodInfo;
extern "C" float Input_GetAxis_m778 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxis_m778_ftn) (String_t*);
	static Input_GetAxis_m778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m777_MethodInfo;
extern "C" float Input_GetAxisRaw_m777 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m777_ftn) (String_t*);
	static Input_GetAxisRaw_m777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern MethodInfo Input_GetButton_m779_MethodInfo;
extern "C" bool Input_GetButton_m779 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButton_m779_ftn) (String_t*);
	static Input_GetButton_m779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButton_m779_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButton(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m780_MethodInfo;
extern "C" bool Input_GetButtonDown_m780 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m780_ftn) (String_t*);
	static Input_GetButtonDown_m780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern MethodInfo Input_GetButtonUp_m781_MethodInfo;
extern "C" bool Input_GetButtonUp_m781 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonUp_m781_ftn) (String_t*);
	static Input_GetButtonUp_m781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonUp_m781_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonUp(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern MethodInfo Input_GetKey_m748_MethodInfo;
extern "C" bool Input_GetKey_m748 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_1 = Input_GetKeyInt_m3847(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetKeyInt_m3847_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m949_MethodInfo;
extern "C" bool Input_GetMouseButton_m949 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m949_ftn) (int32_t);
	static Input_GetMouseButton_m949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m952_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m952 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m952_ftn) (int32_t);
	static Input_GetMouseButtonDown_m952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m612_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m612 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m612_ftn) (int32_t);
	static Input_GetMouseButtonUp_m612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m783_MethodInfo;
extern "C" Vector3_t8  Input_get_mousePosition_m783 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t8  (*Input_get_mousePosition_m783_ftn) ();
	static Input_get_mousePosition_m783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m2622_MethodInfo;
extern "C" Vector2_t13  Input_get_mouseScrollDelta_m2622 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t13  (*Input_get_mouseScrollDelta_m2622_ftn) ();
	static Input_get_mouseScrollDelta_m2622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m2622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m2640_MethodInfo;
extern "C" bool Input_get_mousePresent_m2640 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m2640_ftn) ();
	static Input_get_mousePresent_m2640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m2640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern MethodInfo Input_get_acceleration_m784_MethodInfo;
extern "C" Vector3_t8  Input_get_acceleration_m784 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t8  (*Input_get_acceleration_m784_ftn) ();
	static Input_get_acceleration_m784_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_acceleration_m784_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_acceleration()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern MethodInfo Input_get_touches_m790_MethodInfo;
extern TypeInfo* TouchU5BU5D_t205_il2cpp_TypeInfo_var;
extern "C" TouchU5BU5D_t205* Input_get_touches_m790 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Input_get_touches_m790_init;
	if (!Input_get_touches_m790_init)
	{
		TouchU5BU5D_t205_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TouchU5BU5D_t205_0_0_0);
		Input_get_touches_m790_init = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t205* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		int32_t L_0 = Input_get_touchCount_m789(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m789_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((TouchU5BU5D_t205*)SZArrayNew(TouchU5BU5D_t205_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		TouchU5BU5D_t205* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Touch_t206  L_5 = Input_GetTouch_m1271(NULL /*static, unused*/, L_4, /*hidden argument*/&Input_GetTouch_m1271_MethodInfo);
		*((Touch_t206 *)(Touch_t206 *)SZArrayLdElema(L_2, L_3)) = L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		TouchU5BU5D_t205* L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t206  Input_GetTouch_m1271 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t206  (*Input_GetTouch_m1271_ftn) (int32_t);
	static Input_GetTouch_m1271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m1271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m789 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m789_ftn) ();
	static Input_get_touchCount_m789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern MethodInfo Input_get_touchSupported_m2658_MethodInfo;
extern "C" bool Input_get_touchSupported_m2658 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2904_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2904 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2904_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2829_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2829 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2829_ftn) ();
	static Input_get_compositionString_m2829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m3848 (Object_t * __this /* static, unused */, Vector2_t13 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m3848_ftn) (Vector2_t13 *);
	static Input_INTERNAL_set_compositionCursorPos_m3848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m3848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2892_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2892 (Object_t * __this /* static, unused */, Vector2_t13  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m3848(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m3848_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t738_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t91_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo ArgumentException_t553_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852_MethodInfo;
extern MethodInfo Object_Destroy_m999_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m3853_MethodInfo;
extern MethodInfo Object_DestroyObject_m3854_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m3855_MethodInfo;
extern MethodInfo Object_GetInstanceID_m896_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m3856_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m3857_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m4616_MethodInfo;
extern MethodInfo Object_CheckNullArgument_m3858_MethodInfo;
extern MethodInfo Object_Internal_InstantiateSingle_m3851_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3008_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m3849_MethodInfo;
extern "C" void Object__ctor_m3849 (Object_t91 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern MethodInfo Object_Internal_CloneSingle_m3850_MethodInfo;
extern "C" Object_t91 * Object_Internal_CloneSingle_m3850 (Object_t * __this /* static, unused */, Object_t91 * ___data, MethodInfo* method)
{
	typedef Object_t91 * (*Object_Internal_CloneSingle_m3850_ftn) (Object_t91 *);
	static Object_Internal_CloneSingle_m3850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m3850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t91 * Object_Internal_InstantiateSingle_m3851 (Object_t * __this /* static, unused */, Object_t91 * ___data, Vector3_t8  ___pos, Quaternion_t10  ___rot, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___data;
		Object_t91 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/&Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t91 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852 (Object_t * __this /* static, unused */, Object_t91 * ___data, Vector3_t8 * ___pos, Quaternion_t10 * ___rot, MethodInfo* method)
{
	typedef Object_t91 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852_ftn) (Object_t91 *, Vector3_t8 *, Quaternion_t10 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m3852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m999 (Object_t * __this /* static, unused */, Object_t91 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m999_ftn) (Object_t91 *, float);
	static Object_Destroy_m999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m991_MethodInfo;
extern "C" void Object_Destroy_m991 (Object_t * __this /* static, unused */, Object_t91 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t91 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m999(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m999_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3853 (Object_t * __this /* static, unused */, Object_t91 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m3853_ftn) (Object_t91 *, bool);
	static Object_DestroyImmediate_m3853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m3853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m880_MethodInfo;
extern "C" void Object_DestroyImmediate_m880 (Object_t * __this /* static, unused */, Object_t91 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t91 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m3853(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m3853_MethodInfo);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern MethodInfo Object_FindObjectsOfType_m750_MethodInfo;
extern "C" ObjectU5BU5D_t200* Object_FindObjectsOfType_m750 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef ObjectU5BU5D_t200* (*Object_FindObjectsOfType_m750_ftn) (Type_t *);
	static Object_FindObjectsOfType_m750_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m750_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m820_MethodInfo;
extern "C" String_t* Object_get_name_m820 (Object_t91 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m820_ftn) (Object_t91 *);
	static Object_get_name_m820_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m820_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m898_MethodInfo;
extern "C" void Object_set_name_m898 (Object_t91 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m898_ftn) (Object_t91 *, String_t*);
	static Object_set_name_m898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m837_MethodInfo;
extern "C" void Object_set_hideFlags_m837 (Object_t91 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m837_ftn) (Object_t91 *, int32_t);
	static Object_set_hideFlags_m837_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m837_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m3854 (Object_t * __this /* static, unused */, Object_t91 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_DestroyObject_m3854_ftn) (Object_t91 *, float);
	static Object_DestroyObject_m3854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyObject_m3854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern MethodInfo Object_DestroyObject_m919_MethodInfo;
extern "C" void Object_DestroyObject_m919 (Object_t * __this /* static, unused */, Object_t91 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t91 * L_0 = ___obj;
		float L_1 = V_0;
		Object_DestroyObject_m3854(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyObject_m3854_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m1092_MethodInfo;
extern "C" String_t* Object_ToString_m1092 (Object_t91 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m1092_ftn) (Object_t91 *);
	static Object_ToString_m1092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m1092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m1090_MethodInfo;
extern "C" bool Object_Equals_m1090 (Object_t91 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m3855(NULL /*static, unused*/, __this, ((Object_t91 *)IsInst(L_0, InitializedTypeInfo(&Object_t91_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m3855_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m1091_MethodInfo;
extern "C" int32_t Object_GetHashCode_m1091 (Object_t91 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m896(__this, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3855 (Object_t * __this /* static, unused */, Object_t91 * ___lhs, Object_t91 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t91 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t91 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t91 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t91 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t91 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m3856(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m3856_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t91 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m3856(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m3856_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t91 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t91 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3856 (Object_t * __this /* static, unused */, Object_t91 * ___o, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m3857(L_0, /*hidden argument*/&Object_GetCachedPtr_m3857_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m4616(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m4616_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m896 (Object_t91 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3857 (Object_t91 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo Object_Instantiate_m918_MethodInfo;
extern "C" Object_t91 * Object_Instantiate_m918 (Object_t * __this /* static, unused */, Object_t91 * ___original, Vector3_t8  ___position, Quaternion_t10  ___rotation, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___original;
		Object_CheckNullArgument_m3858(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral310, /*hidden argument*/&Object_CheckNullArgument_m3858_MethodInfo);
		Object_t91 * L_1 = ___original;
		Vector3_t8  L_2 = ___position;
		Quaternion_t10  L_3 = ___rotation;
		Object_t91 * L_4 = Object_Internal_InstantiateSingle_m3851(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&Object_Internal_InstantiateSingle_m3851_MethodInfo);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m3858 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t553 * L_2 = (ArgumentException_t553 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t553_il2cpp_TypeInfo));
		ArgumentException__ctor_m3008(L_2, L_1, /*hidden argument*/&ArgumentException__ctor_m3008_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m582_MethodInfo;
extern "C" bool Object_op_Implicit_m582 (Object_t * __this /* static, unused */, Object_t91 * ___exists, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m3855(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m3855_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m576_MethodInfo;
extern "C" bool Object_op_Equality_m576 (Object_t * __this /* static, unused */, Object_t91 * ___x, Object_t91 * ___y, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___x;
		Object_t91 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3855(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3855_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m642_MethodInfo;
extern "C" bool Object_op_Inequality_m642 (Object_t * __this /* static, unused */, Object_t91 * ___x, Object_t91 * ___y, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___x;
		Object_t91 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3855(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3855_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t91_marshal(const Object_t91& unmarshaled, Object_t91_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t91_marshal_back(const Object_t91_marshaled& marshaled, Object_t91& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t91_marshal_cleanup(Object_t91_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t185_il2cpp_TypeInfo;

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m577_MethodInfo;
extern MethodInfo GameObject_GetComponent_m819_MethodInfo;
extern MethodInfo GameObject_GetComponentInChildren_m3868_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m3862_MethodInfo;
extern MethodInfo Component_SendMessage_m3863_MethodInfo;
extern MethodInfo Component_BroadcastMessage_m3864_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3859 (Component_t185 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3849(__this, /*hidden argument*/&Object__ctor_m3849_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m598_MethodInfo;
extern "C" Transform_t2 * Component_get_transform_m598 (Component_t185 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*Component_get_transform_m598_ftn) (Component_t185 *);
	static Component_get_transform_m598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t92 * Component_get_gameObject_m577 (Component_t185 * __this, MethodInfo* method)
{
	typedef GameObject_t92 * (*Component_get_gameObject_m577_ftn) (Component_t185 *);
	static Component_get_gameObject_m577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m846_MethodInfo;
extern "C" Component_t185 * Component_GetComponent_m846 (Component_t185 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t185 * L_2 = GameObject_GetComponent_m819(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m3860_MethodInfo;
extern "C" void Component_GetComponentFastPath_m3860 (Component_t185 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m3860_ftn) (Component_t185 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m3860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m3860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern MethodInfo Component_GetComponentInChildren_m3861_MethodInfo;
extern "C" Component_t185 * Component_GetComponentInChildren_m3861 (Component_t185 * __this, Type_t * ___t, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t185 * L_2 = GameObject_GetComponentInChildren_m3868(L_0, L_1, /*hidden argument*/&GameObject_GetComponentInChildren_m3868_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3862 (Component_t185 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m3862_ftn) (Component_t185 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m3862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m3862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m2711_MethodInfo;
extern "C" void Component_GetComponents_m2711 (Component_t185 * __this, Type_t * ___type, List_1_t497 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t497 * L_1 = ___results;
		Component_GetComponentsForListInternal_m3862(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m3862_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern MethodInfo Component_CompareTag_m643_MethodInfo;
extern "C" bool Component_CompareTag_m643 (Component_t185 * __this, String_t* ___tag, MethodInfo* method)
{
	typedef bool (*Component_CompareTag_m643_ftn) (Component_t185 *, String_t*);
	static Component_CompareTag_m643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_CompareTag_m643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::CompareTag(System.String)");
	return _il2cpp_icall_func(__this, ___tag);
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m3863 (Component_t185 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*Component_SendMessage_m3863_ftn) (Component_t185 *, String_t*, Object_t *, int32_t);
	static Component_SendMessage_m3863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_SendMessage_m3863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.Component::SendMessage(System.String)
extern MethodInfo Component_SendMessage_m982_MethodInfo;
extern "C" void Component_SendMessage_m982 (Component_t185 * __this, String_t* ___methodName, MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		Component_SendMessage_m3863(__this, L_0, L_1, L_2, /*hidden argument*/&Component_SendMessage_m3863_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m3864 (Component_t185 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method)
{
	typedef void (*Component_BroadcastMessage_m3864_ftn) (Component_t185 *, String_t*, Object_t *, int32_t);
	static Component_BroadcastMessage_m3864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_BroadcastMessage_m3864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern MethodInfo Component_BroadcastMessage_m990_MethodInfo;
extern "C" void Component_BroadcastMessage_m990 (Component_t185 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_BroadcastMessage_m3864(__this, L_0, NULL, L_1, /*hidden argument*/&Component_BroadcastMessage_m3864_MethodInfo);
		return;
	}
}
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Light_t107_il2cpp_TypeInfo;
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"

extern MethodInfo Light_INTERNAL_get_color_m3865_MethodInfo;
extern MethodInfo Light_INTERNAL_set_color_m3866_MethodInfo;


// System.Void UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_get_color_m3865 (Light_t107 * __this, Color_t79 * ___value, MethodInfo* method)
{
	typedef void (*Light_INTERNAL_get_color_m3865_ftn) (Light_t107 *, Color_t79 *);
	static Light_INTERNAL_get_color_m3865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_INTERNAL_get_color_m3865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_set_color_m3866 (Light_t107 * __this, Color_t79 * ___value, MethodInfo* method)
{
	typedef void (*Light_INTERNAL_set_color_m3866_ftn) (Light_t107 *, Color_t79 *);
	static Light_INTERNAL_set_color_m3866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_INTERNAL_set_color_m3866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.Light::get_color()
extern MethodInfo Light_get_color_m1299_MethodInfo;
extern "C" Color_t79  Light_get_color_m1299 (Light_t107 * __this, MethodInfo* method)
{
	Color_t79  V_0 = {0};
	{
		Light_INTERNAL_get_color_m3865(__this, (&V_0), /*hidden argument*/&Light_INTERNAL_get_color_m3865_MethodInfo);
		Color_t79  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern MethodInfo Light_set_color_m1302_MethodInfo;
extern "C" void Light_set_color_m1302 (Light_t107 * __this, Color_t79  ___value, MethodInfo* method)
{
	{
		Light_INTERNAL_set_color_m3866(__this, (&___value), /*hidden argument*/&Light_INTERNAL_set_color_m3866_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.Light::get_shadowStrength()
extern MethodInfo Light_get_shadowStrength_m966_MethodInfo;
extern "C" float Light_get_shadowStrength_m966 (Light_t107 * __this, MethodInfo* method)
{
	typedef float (*Light_get_shadowStrength_m966_ftn) (Light_t107 *);
	static Light_get_shadowStrength_m966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_get_shadowStrength_m966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::get_shadowStrength()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
extern MethodInfo Light_set_shadowStrength_m970_MethodInfo;
extern "C" void Light_set_shadowStrength_m970 (Light_t107 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Light_set_shadowStrength_m970_ftn) (Light_t107 *, float);
	static Light_set_shadowStrength_m970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_set_shadowStrength_m970_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::set_shadowStrength(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
extern MethodInfo Light_set_shadowBias_m969_MethodInfo;
extern "C" void Light_set_shadowBias_m969 (Light_t107 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Light_set_shadowBias_m969_ftn) (Light_t107 *, float);
	static Light_set_shadowBias_m969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_set_shadowBias_m969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::set_shadowBias(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t92_il2cpp_TypeInfo;

extern TypeInfo Transform_t2_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m3873_MethodInfo;
extern MethodInfo GameObject_AddComponent_m823_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m2601_MethodInfo;
extern MethodInfo GameObject_get_transform_m583_MethodInfo;
extern MethodInfo Transform_GetEnumerator_m768_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m769_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern MethodInfo GameObject_BroadcastMessage_m3871_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m3872_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m956_MethodInfo;
extern "C" void GameObject__ctor_m956 (GameObject_t92 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m3849(__this, /*hidden argument*/&Object__ctor_m3849_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3873(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m3873_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern MethodInfo GameObject__ctor_m822_MethodInfo;
extern "C" void GameObject__ctor_m822 (GameObject_t92 * __this, String_t* ___name, TypeU5BU5D_t207* ___components, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t207* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m3849(__this, /*hidden argument*/&Object__ctor_m3849_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3873(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m3873_MethodInfo);
		TypeU5BU5D_t207* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t207* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m823(__this, L_5, /*hidden argument*/&GameObject_AddComponent_m823_MethodInfo);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t207* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t185 * GameObject_GetComponent_m819 (GameObject_t92 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t185 * (*GameObject_GetComponent_m819_ftn) (GameObject_t92 *, Type_t *);
	static GameObject_GetComponent_m819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m3867_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m3867 (GameObject_t92 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m3867_ftn) (GameObject_t92 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m3867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m3867_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern "C" Component_t185 * GameObject_GetComponentInChildren_m3868 (GameObject_t92 * __this, Type_t * ___type, MethodInfo* method)
{
	Component_t185 * V_0 = {0};
	Transform_t2 * V_1 = {0};
	Transform_t2 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t185 * V_4 = {0};
	Component_t185 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m2601(__this, /*hidden argument*/&GameObject_get_activeInHierarchy_m2601_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t185 * L_2 = GameObject_GetComponent_m819(__this, L_1, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		V_0 = L_2;
		Component_t185 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m642(NULL /*static, unused*/, L_3, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t185 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t2 * L_6 = GameObject_get_transform_m583(__this, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		V_1 = L_6;
		Transform_t2 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m642(NULL /*static, unused*/, L_7, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t2 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m768_MethodInfo, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_11);
			V_2 = ((Transform_t2 *)Castclass(L_12, InitializedTypeInfo(&Transform_t2_il2cpp_TypeInfo)));
			Transform_t2 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t92 * L_14 = Component_get_gameObject_m577(L_13, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t185 * L_16 = GameObject_GetComponentInChildren_m3868(L_14, L_15, /*hidden argument*/&GameObject_GetComponentInChildren_m3868_MethodInfo);
			V_4 = L_16;
			Component_t185 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m642(NULL /*static, unused*/, L_17, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t185 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, InitializedTypeInfo(&IDisposable_t203_il2cpp_TypeInfo)));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0095:
	{
		return (Component_t185 *)NULL;
	}

IL_0097:
	{
		Component_t185 * L_25 = V_5;
		return L_25;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m3869_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m3869 (GameObject_t92 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m3869_ftn) (GameObject_t92 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m3869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m3869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t2 * GameObject_get_transform_m583 (GameObject_t92 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*GameObject_get_transform_m583_ftn) (GameObject_t92 *);
	static GameObject_get_transform_m583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m2877_MethodInfo;
extern "C" int32_t GameObject_get_layer_m2877 (GameObject_t92 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2877_ftn) (GameObject_t92 *);
	static GameObject_get_layer_m2877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m2878_MethodInfo;
extern "C" void GameObject_set_layer_m2878 (GameObject_t92 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2878_ftn) (GameObject_t92 *, int32_t);
	static GameObject_set_layer_m2878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern MethodInfo GameObject_SetActive_m770_MethodInfo;
extern "C" void GameObject_SetActive_m770 (GameObject_t92 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m770_ftn) (GameObject_t92 *, bool);
	static GameObject_SetActive_m770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern MethodInfo GameObject_get_activeSelf_m578_MethodInfo;
extern "C" bool GameObject_get_activeSelf_m578 (GameObject_t92 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m578_ftn) (GameObject_t92 *);
	static GameObject_get_activeSelf_m578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m2601 (GameObject_t92 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m2601_ftn) (GameObject_t92 *);
	static GameObject_get_activeInHierarchy_m2601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m2601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern MethodInfo GameObject_FindGameObjectWithTag_m581_MethodInfo;
extern "C" GameObject_t92 * GameObject_FindGameObjectWithTag_m581 (Object_t * __this /* static, unused */, String_t* ___tag, MethodInfo* method)
{
	typedef GameObject_t92 * (*GameObject_FindGameObjectWithTag_m581_ftn) (String_t*);
	static GameObject_FindGameObjectWithTag_m581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectWithTag_m581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m3870_MethodInfo;
extern "C" void GameObject_SendMessage_m3870 (GameObject_t92 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m3870_ftn) (GameObject_t92 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m3870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m3871 (GameObject_t92 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_BroadcastMessage_m3871_ftn) (GameObject_t92 *, String_t*, Object_t *, int32_t);
	static GameObject_BroadcastMessage_m3871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_BroadcastMessage_m3871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
extern MethodInfo GameObject_BroadcastMessage_m917_MethodInfo;
extern "C" void GameObject_BroadcastMessage_m917 (GameObject_t92 * __this, String_t* ___methodName, MethodInfo* method)
{
	int32_t V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_1;
		int32_t L_2 = V_0;
		GameObject_BroadcastMessage_m3871(__this, L_0, L_1, L_2, /*hidden argument*/&GameObject_BroadcastMessage_m3871_MethodInfo);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t185 * GameObject_Internal_AddComponentWithType_m3872 (GameObject_t92 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t185 * (*GameObject_Internal_AddComponentWithType_m3872_ftn) (GameObject_t92 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m3872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m3872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t185 * GameObject_AddComponent_m823 (GameObject_t92 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t185 * L_1 = GameObject_Internal_AddComponentWithType_m3872(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m3872_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m3873 (Object_t * __this /* static, unused */, GameObject_t92 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m3873_ftn) (GameObject_t92 *, String_t*);
	static GameObject_Internal_CreateGameObject_m3873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m3873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern MethodInfo GameObject_Find_m821_MethodInfo;
extern "C" GameObject_t92 * GameObject_Find_m821 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef GameObject_t92 * (*GameObject_Find_m821_ftn) (String_t*);
	static GameObject_Find_m821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern MethodInfo GameObject_get_gameObject_m1285_MethodInfo;
extern "C" GameObject_t92 * GameObject_get_gameObject_m1285 (GameObject_t92 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t739_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

extern MethodInfo Transform_GetChild_m1019_MethodInfo;
extern MethodInfo Transform_get_childCount_m1021_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m3874_MethodInfo;
extern "C" void Enumerator__ctor_m3874 (Enumerator_t739 * __this, Transform_t2 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Transform_t2 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m3875_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m3875 (Enumerator_t739 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t2 * L_2 = Transform_GetChild_m1019(L_0, L_1, /*hidden argument*/&Transform_GetChild_m1019_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m3876_MethodInfo;
extern "C" bool Enumerator_MoveNext_m3876 (Enumerator_t739 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t2 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m1021(L_0, /*hidden argument*/&Transform_get_childCount_m1021_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern TypeInfo RectTransform_t275_il2cpp_TypeInfo;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m3877_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m3878_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m3879_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m3880_MethodInfo;
extern MethodInfo Transform_get_rotation_m605_MethodInfo;
extern MethodInfo Quaternion_get_eulerAngles_m610_MethodInfo;
extern MethodInfo Quaternion_Euler_m3605_MethodInfo;
extern MethodInfo Transform_set_rotation_m607_MethodInfo;
extern MethodInfo Vector3_get_right_m718_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m709_MethodInfo;
extern MethodInfo Vector3_get_up_m586_MethodInfo;
extern MethodInfo Vector3_get_forward_m651_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m3881_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m3882_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m3883_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m3884_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m3885_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m3886_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m3887_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m3888_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m3889_MethodInfo;
extern MethodInfo Transform_SetParent_m1304_MethodInfo;
extern MethodInfo Transform_get_position_m599_MethodInfo;
extern MethodInfo Transform_set_position_m601_MethodInfo;
extern MethodInfo Transform_TransformDirection_m1266_MethodInfo;
extern MethodInfo Quaternion_Euler_m614_MethodInfo;
extern MethodInfo Transform_get_localRotation_m611_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m623_MethodInfo;
extern MethodInfo Transform_set_localRotation_m618_MethodInfo;
extern MethodInfo Quaternion_Inverse_m2967_MethodInfo;
extern MethodInfo Transform_Rotate_m1263_MethodInfo;
extern MethodInfo Vector3__ctor_m700_MethodInfo;
extern MethodInfo Transform_Rotate_m938_MethodInfo;
extern MethodInfo Transform_LookAt_m3890_MethodInfo;
extern MethodInfo Transform_LookAt_m3891_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_LookAt_m3892_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformDirection_m3893_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformDirection_m3894_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m3895_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m3896_MethodInfo;
extern MethodInfo Transform_Find_m3897_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3877 (Transform_t2 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m3877_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_get_position_m3877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m3877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3878 (Transform_t2 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m3878_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_set_position_m3878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m3878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t8  Transform_get_position_m599 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m3877(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m3877_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m601 (Transform_t2 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m3878(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m3878_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3879 (Transform_t2 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m3879_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_get_localPosition_m3879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m3879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3880 (Transform_t2 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m3880_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_set_localPosition_m3880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m3880_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m632_MethodInfo;
extern "C" Vector3_t8  Transform_get_localPosition_m632 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m3879(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m3879_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m652_MethodInfo;
extern "C" void Transform_set_localPosition_m652 (Transform_t2 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m3880(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m3880_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern MethodInfo Transform_get_eulerAngles_m707_MethodInfo;
extern "C" Vector3_t8  Transform_get_eulerAngles_m707 (Transform_t2 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		V_0 = L_0;
		Vector3_t8  L_1 = Quaternion_get_eulerAngles_m610((&V_0), /*hidden argument*/&Quaternion_get_eulerAngles_m610_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern MethodInfo Transform_set_eulerAngles_m850_MethodInfo;
extern "C" void Transform_set_eulerAngles_m850 (Transform_t2 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___value;
		Quaternion_t10  L_1 = Quaternion_Euler_m3605(NULL /*static, unused*/, L_0, /*hidden argument*/&Quaternion_Euler_m3605_MethodInfo);
		Transform_set_rotation_m607(__this, L_1, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern MethodInfo Transform_get_right_m668_MethodInfo;
extern "C" Vector3_t8  Transform_get_right_m668 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Vector3_t8  L_1 = Vector3_get_right_m718(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m718_MethodInfo);
		Vector3_t8  L_2 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern MethodInfo Transform_get_up_m588_MethodInfo;
extern "C" Vector3_t8  Transform_get_up_m588 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Vector3_t8  L_1 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_2 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m587_MethodInfo;
extern "C" Vector3_t8  Transform_get_forward_m587 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Vector3_t8  L_1 = Vector3_get_forward_m651(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m651_MethodInfo);
		Vector3_t8  L_2 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3881 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m3881_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_get_rotation_m3881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m3881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3882 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m3882_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_set_rotation_m3882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m3882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t10  Transform_get_rotation_m605 (Transform_t2 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m3881(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m3881_MethodInfo);
		Quaternion_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m607 (Transform_t2 * __this, Quaternion_t10  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m3882(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m3882_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3883 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m3883_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_get_localRotation_m3883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m3883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3884 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m3884_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_set_localRotation_m3884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m3884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t10  Transform_get_localRotation_m611 (Transform_t2 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m3883(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m3883_MethodInfo);
		Quaternion_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m618 (Transform_t2 * __this, Quaternion_t10  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m3884(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m3884_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3885 (Transform_t2 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m3885_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_get_localScale_m3885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m3885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3886 (Transform_t2 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m3886_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_set_localScale_m3886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m3886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m2881_MethodInfo;
extern "C" Vector3_t8  Transform_get_localScale_m2881 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m3885(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m3885_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m2885_MethodInfo;
extern "C" void Transform_set_localScale_m2885 (Transform_t2 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m3886(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m3886_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern MethodInfo Transform_get_parent_m626_MethodInfo;
extern "C" Transform_t2 * Transform_get_parent_m626 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Transform_get_parentInternal_m3887(__this, /*hidden argument*/&Transform_get_parentInternal_m3887_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m980_MethodInfo;
extern "C" void Transform_set_parent_m980 (Transform_t2 * __this, Transform_t2 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t275 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t275_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2984(NULL /*static, unused*/, (String_t*) &_stringLiteral311, __this, /*hidden argument*/&Debug_LogWarning_m2984_MethodInfo);
	}

IL_0016:
	{
		Transform_t2 * L_0 = ___value;
		Transform_set_parentInternal_m3888(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m3888_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t2 * Transform_get_parentInternal_m3887 (Transform_t2 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_get_parentInternal_m3887_ftn) (Transform_t2 *);
	static Transform_get_parentInternal_m3887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m3887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3888 (Transform_t2 * __this, Transform_t2 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m3888_ftn) (Transform_t2 *, Transform_t2 *);
	static Transform_set_parentInternal_m3888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m3888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m2875_MethodInfo;
extern "C" void Transform_SetParent_m2875 (Transform_t2 * __this, Transform_t2 * ___parent, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___parent;
		Transform_SetParent_m1304(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m1304_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m1304 (Transform_t2 * __this, Transform_t2 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m1304_ftn) (Transform_t2 *, Transform_t2 *, bool);
	static Transform_SetParent_m1304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m1304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3889 (Transform_t2 * __this, Matrix4x4_t81 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m3889_ftn) (Transform_t2 *, Matrix4x4_t81 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m3889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m3889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2949_MethodInfo;
extern "C" Matrix4x4_t81  Transform_get_worldToLocalMatrix_m2949 (Transform_t2 * __this, MethodInfo* method)
{
	Matrix4x4_t81  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m3889(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m3889_MethodInfo);
		Matrix4x4_t81  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern MethodInfo Transform_Translate_m937_MethodInfo;
extern "C" void Transform_Translate_m937 (Transform_t2 * __this, Vector3_t8  ___translation, int32_t ___relativeTo, MethodInfo* method)
{
	{
		int32_t L_0 = ___relativeTo;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t8  L_1 = Transform_get_position_m599(__this, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_2 = ___translation;
		Vector3_t8  L_3 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Transform_set_position_m601(__this, L_3, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		goto IL_0035;
	}

IL_001d:
	{
		Vector3_t8  L_4 = Transform_get_position_m599(__this, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_5 = ___translation;
		Vector3_t8  L_6 = Transform_TransformDirection_m1266(__this, L_5, /*hidden argument*/&Transform_TransformDirection_m1266_MethodInfo);
		Vector3_t8  L_7 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Transform_set_position_m601(__this, L_7, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m938 (Transform_t2 * __this, Vector3_t8  ___eulerAngles, int32_t ___relativeTo, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t10  L_3 = Quaternion_Euler_m614(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t10  L_5 = Transform_get_localRotation_m611(__this, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		Quaternion_t10  L_6 = V_0;
		Quaternion_t10  L_7 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		Transform_set_localRotation_m618(__this, L_7, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t10  L_8 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Quaternion_t10  L_9 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Quaternion_t10  L_10 = Quaternion_Inverse_m2967(NULL /*static, unused*/, L_9, /*hidden argument*/&Quaternion_Inverse_m2967_MethodInfo);
		Quaternion_t10  L_11 = V_0;
		Quaternion_t10  L_12 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		Quaternion_t10  L_13 = Transform_get_rotation_m605(__this, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Quaternion_t10  L_14 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		Quaternion_t10  L_15 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		Transform_set_rotation_m607(__this, L_15, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern MethodInfo Transform_Rotate_m621_MethodInfo;
extern "C" void Transform_Rotate_m621 (Transform_t2 * __this, float ___xAngle, float ___yAngle, float ___zAngle, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		float L_0 = ___xAngle;
		float L_1 = ___yAngle;
		float L_2 = ___zAngle;
		int32_t L_3 = V_0;
		Transform_Rotate_m1263(__this, L_0, L_1, L_2, L_3, /*hidden argument*/&Transform_Rotate_m1263_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C" void Transform_Rotate_m1263 (Transform_t2 * __this, float ___xAngle, float ___yAngle, float ___zAngle, int32_t ___relativeTo, MethodInfo* method)
{
	{
		float L_0 = ___xAngle;
		float L_1 = ___yAngle;
		float L_2 = ___zAngle;
		Vector3_t8  L_3 = {0};
		Vector3__ctor_m700(&L_3, L_0, L_1, L_2, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		int32_t L_4 = ___relativeTo;
		Transform_Rotate_m938(__this, L_3, L_4, /*hidden argument*/&Transform_Rotate_m938_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern MethodInfo Transform_LookAt_m996_MethodInfo;
extern "C" void Transform_LookAt_m996 (Transform_t2 * __this, Transform_t2 * ___target, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		V_0 = L_0;
		Transform_t2 * L_1 = ___target;
		Vector3_t8  L_2 = V_0;
		Transform_LookAt_m3890(__this, L_1, L_2, /*hidden argument*/&Transform_LookAt_m3890_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m3890 (Transform_t2 * __this, Transform_t2 * ___target, Vector3_t8  ___worldUp, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___target;
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_t2 * L_2 = ___target;
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_4 = ___worldUp;
		Transform_LookAt_m3891(__this, L_3, L_4, /*hidden argument*/&Transform_LookAt_m3891_MethodInfo);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m3891 (Transform_t2 * __this, Vector3_t8  ___worldPosition, Vector3_t8  ___worldUp, MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m3892(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/&Transform_INTERNAL_CALL_LookAt_m3892_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern MethodInfo Transform_LookAt_m939_MethodInfo;
extern "C" void Transform_LookAt_m939 (Transform_t2 * __this, Vector3_t8  ___worldPosition, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		V_0 = L_0;
		Transform_INTERNAL_CALL_LookAt_m3892(NULL /*static, unused*/, __this, (&___worldPosition), (&V_0), /*hidden argument*/&Transform_INTERNAL_CALL_LookAt_m3892_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m3892 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t8 * ___worldPosition, Vector3_t8 * ___worldUp, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m3892_ftn) (Transform_t2 *, Vector3_t8 *, Vector3_t8 *);
	static Transform_INTERNAL_CALL_LookAt_m3892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m3892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t8  Transform_TransformDirection_m1266 (Transform_t2 * __this, Vector3_t8  ___direction, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Transform_INTERNAL_CALL_TransformDirection_m3893(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/&Transform_INTERNAL_CALL_TransformDirection_m3893_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t8  Transform_INTERNAL_CALL_TransformDirection_m3893 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t8 * ___direction, MethodInfo* method)
{
	typedef Vector3_t8  (*Transform_INTERNAL_CALL_TransformDirection_m3893_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_CALL_TransformDirection_m3893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m3893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformDirection_m729_MethodInfo;
extern "C" Vector3_t8  Transform_InverseTransformDirection_m729 (Transform_t2 * __this, Vector3_t8  ___direction, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Transform_INTERNAL_CALL_InverseTransformDirection_m3894(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformDirection_m3894_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t8  Transform_INTERNAL_CALL_InverseTransformDirection_m3894 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t8 * ___direction, MethodInfo* method)
{
	typedef Vector3_t8  (*Transform_INTERNAL_CALL_InverseTransformDirection_m3894_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_CALL_InverseTransformDirection_m3894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformDirection_m3894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m2968_MethodInfo;
extern "C" Vector3_t8  Transform_TransformPoint_m2968 (Transform_t2 * __this, Vector3_t8  ___position, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Transform_INTERNAL_CALL_TransformPoint_m3895(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m3895_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t8  Transform_INTERNAL_CALL_TransformPoint_m3895 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t8 * ___position, MethodInfo* method)
{
	typedef Vector3_t8  (*Transform_INTERNAL_CALL_TransformPoint_m3895_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_CALL_TransformPoint_m3895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m3895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m622_MethodInfo;
extern "C" Vector3_t8  Transform_InverseTransformPoint_m622 (Transform_t2 * __this, Vector3_t8  ___position, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m3896(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m3896_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t8  Transform_INTERNAL_CALL_InverseTransformPoint_m3896 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t8 * ___position, MethodInfo* method)
{
	typedef Vector3_t8  (*Transform_INTERNAL_CALL_InverseTransformPoint_m3896_ftn) (Transform_t2 *, Vector3_t8 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m3896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m3896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern MethodInfo Transform_get_root_m1061_MethodInfo;
extern "C" Transform_t2 * Transform_get_root_m1061 (Transform_t2 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_get_root_m1061_ftn) (Transform_t2 *);
	static Transform_get_root_m1061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_root_m1061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_root()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m1021 (Transform_t2 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m1021_ftn) (Transform_t2 *);
	static Transform_get_childCount_m1021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m1021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::DetachChildren()
extern MethodInfo Transform_DetachChildren_m1001_MethodInfo;
extern "C" void Transform_DetachChildren_m1001 (Transform_t2 * __this, MethodInfo* method)
{
	typedef void (*Transform_DetachChildren_m1001_ftn) (Transform_t2 *);
	static Transform_DetachChildren_m1001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_DetachChildren_m1001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::DetachChildren()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2876_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2876 (Transform_t2 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2876_ftn) (Transform_t2 *);
	static Transform_SetAsFirstSibling_m2876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsLastSibling()
extern MethodInfo Transform_SetAsLastSibling_m1305_MethodInfo;
extern "C" void Transform_SetAsLastSibling_m1305 (Transform_t2 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsLastSibling_m1305_ftn) (Transform_t2 *);
	static Transform_SetAsLastSibling_m1305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsLastSibling_m1305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsLastSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t2 * Transform_Find_m3897 (Transform_t2 * __this, String_t* ___name, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_Find_m3897_ftn) (Transform_t2 *, String_t*);
	static Transform_Find_m3897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m3897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern MethodInfo Transform_FindChild_m1265_MethodInfo;
extern "C" Transform_t2 * Transform_FindChild_m1265 (Transform_t2 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Transform_t2 * L_1 = Transform_Find_m3897(__this, L_0, /*hidden argument*/&Transform_Find_m3897_MethodInfo);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m768 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Enumerator_t739 * L_0 = (Enumerator_t739 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t739_il2cpp_TypeInfo));
		Enumerator__ctor_m3874(L_0, __this, /*hidden argument*/&Enumerator__ctor_m3874_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t2 * Transform_GetChild_m1019 (Transform_t2 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_GetChild_m1019_ftn) (Transform_t2 *, int32_t);
	static Transform_GetChild_m1019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t740_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern MethodInfo Time_get_time_m619_MethodInfo;
extern "C" float Time_get_time_m619 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_time_m619_ftn) ();
	static Time_get_time_m619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern MethodInfo Time_get_timeSinceLevelLoad_m882_MethodInfo;
extern "C" float Time_get_timeSinceLevelLoad_m882 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_timeSinceLevelLoad_m882_ftn) ();
	static Time_get_timeSinceLevelLoad_m882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeSinceLevelLoad_m882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeSinceLevelLoad()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m579_MethodInfo;
extern "C" float Time_get_deltaTime_m579 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m579_ftn) ();
	static Time_get_deltaTime_m579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m2642_MethodInfo;
extern "C" float Time_get_unscaledTime_m2642 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m2642_ftn) ();
	static Time_get_unscaledTime_m2642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m2642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m2679_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m2679 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2679_ftn) ();
	static Time_get_unscaledDeltaTime_m2679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern MethodInfo Time_get_fixedDeltaTime_m676_MethodInfo;
extern "C" float Time_get_fixedDeltaTime_m676 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_fixedDeltaTime_m676_ftn) ();
	static Time_get_fixedDeltaTime_m676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_fixedDeltaTime_m676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_fixedDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern MethodInfo Time_get_timeScale_m613_MethodInfo;
extern "C" float Time_get_timeScale_m613 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m613_ftn) ();
	static Time_get_timeScale_m613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern MethodInfo Time_get_frameCount_m753_MethodInfo;
extern "C" int32_t Time_get_frameCount_m753 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m753_ftn) ();
	static Time_get_frameCount_m753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern MethodInfo Time_get_realtimeSinceStartup_m936_MethodInfo;
extern "C" float Time_get_realtimeSinceStartup_m936 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m936_ftn) ();
	static Time_get_realtimeSinceStartup_m936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m936_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t741_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"

extern MethodInfo Random_RandomRangeInt_m3898_MethodInfo;


// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern MethodInfo Random_Range_m987_MethodInfo;
extern "C" float Random_Range_m987 (Object_t * __this /* static, unused */, float ___min, float ___max, MethodInfo* method)
{
	typedef float (*Random_Range_m987_ftn) (float, float);
	static Random_Range_m987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern MethodInfo Random_Range_m679_MethodInfo;
extern "C" int32_t Random_Range_m679 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m3898(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Random_RandomRangeInt_m3898_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3898 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m3898_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m3898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m3898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern MethodInfo Random_get_value_m1039_MethodInfo;
extern "C" float Random_get_value_m1039 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Random_get_value_m1039_ftn) ();
	static Random_get_value_m1039_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m1039_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t643_il2cpp_TypeInfo;



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m3899 (YieldInstruction_t643 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t643_marshal(const YieldInstruction_t643& unmarshaled, YieldInstruction_t643_marshaled& marshaled)
{
}
void YieldInstruction_t643_marshal_back(const YieldInstruction_t643_marshaled& marshaled, YieldInstruction_t643& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t643_marshal_cleanup(YieldInstruction_t643_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerPrefs_t742_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

extern MethodInfo PlayerPrefs_GetString_m3900_MethodInfo;


// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3900 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m3900_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m3900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m3900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern MethodInfo PlayerPrefs_GetString_m3901_MethodInfo;
extern "C" String_t* PlayerPrefs_GetString_m3901 (Object_t * __this /* static, unused */, String_t* ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m3900(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&PlayerPrefs_GetString_m3900_MethodInfo);
		return L_3;
	}
}
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParticleSystem_t121_il2cpp_TypeInfo;
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
extern TypeInfo List_1_t743_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
extern Il2CppType List_1_t743_0_0_0;
extern MethodInfo ParticleSystem_INTERNAL_get_startColor_m3902_MethodInfo;
extern MethodInfo ParticleSystem_INTERNAL_set_startColor_m3903_MethodInfo;
extern MethodInfo ParticleSystem_Stop_m3905_MethodInfo;
extern MethodInfo ParticleSystem_GetParticleSystems_m3907_MethodInfo;
extern MethodInfo ParticleSystem_Internal_Stop_m3904_MethodInfo;
extern MethodInfo ParticleSystem_INTERNAL_CALL_Emit_m3906_MethodInfo;
extern MethodInfo List_1__ctor_m4617_MethodInfo;
extern MethodInfo List_1_Add_m4618_MethodInfo;
extern MethodInfo ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908_MethodInfo;
struct GameObject_t92;
// UnityEngine.CastHelper`1<UnityEngine.ParticleSystem>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_16.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
struct GameObject_t92;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m870_gshared (GameObject_t92 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m870(__this, method) (( Object_t * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
#define GameObject_GetComponent_TisParticleSystem_t121_m4619(__this, method) (( ParticleSystem_t121 * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
extern Il2CppGenericMethod List_1__ctor_m4617_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m4618_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m4620_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisParticleSystem_t121_m4619_GenericMethod;


// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern MethodInfo ParticleSystem_set_enableEmission_m989_MethodInfo;
extern "C" void ParticleSystem_set_enableEmission_m989 (ParticleSystem_t121 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_set_enableEmission_m989_ftn) (ParticleSystem_t121 *, bool);
	static ParticleSystem_set_enableEmission_m989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_enableEmission_m989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern MethodInfo ParticleSystem_get_startSize_m1031_MethodInfo;
extern "C" float ParticleSystem_get_startSize_m1031 (ParticleSystem_t121 * __this, MethodInfo* method)
{
	typedef float (*ParticleSystem_get_startSize_m1031_ftn) (ParticleSystem_t121 *);
	static ParticleSystem_get_startSize_m1031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startSize_m1031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern MethodInfo ParticleSystem_set_startSize_m1034_MethodInfo;
extern "C" void ParticleSystem_set_startSize_m1034 (ParticleSystem_t121 * __this, float ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_set_startSize_m1034_ftn) (ParticleSystem_t121 *, float);
	static ParticleSystem_set_startSize_m1034_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSize_m1034_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_get_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_get_startColor_m3902 (ParticleSystem_t121 * __this, Color_t79 * ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_get_startColor_m3902_ftn) (ParticleSystem_t121 *, Color_t79 *);
	static ParticleSystem_INTERNAL_get_startColor_m3902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_get_startColor_m3902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_get_startColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C" void ParticleSystem_INTERNAL_set_startColor_m3903 (ParticleSystem_t121 * __this, Color_t79 * ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_set_startColor_m3903_ftn) (ParticleSystem_t121 *, Color_t79 *);
	static ParticleSystem_INTERNAL_set_startColor_m3903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_set_startColor_m3903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.ParticleSystem::get_startColor()
extern MethodInfo ParticleSystem_get_startColor_m1032_MethodInfo;
extern "C" Color_t79  ParticleSystem_get_startColor_m1032 (ParticleSystem_t121 * __this, MethodInfo* method)
{
	Color_t79  V_0 = {0};
	{
		ParticleSystem_INTERNAL_get_startColor_m3902(__this, (&V_0), /*hidden argument*/&ParticleSystem_INTERNAL_get_startColor_m3902_MethodInfo);
		Color_t79  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
extern MethodInfo ParticleSystem_set_startColor_m1036_MethodInfo;
extern "C" void ParticleSystem_set_startColor_m1036 (ParticleSystem_t121 * __this, Color_t79  ___value, MethodInfo* method)
{
	{
		ParticleSystem_INTERNAL_set_startColor_m3903(__this, (&___value), /*hidden argument*/&ParticleSystem_INTERNAL_set_startColor_m3903_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern MethodInfo ParticleSystem_get_startLifetime_m985_MethodInfo;
extern "C" float ParticleSystem_get_startLifetime_m985 (ParticleSystem_t121 * __this, MethodInfo* method)
{
	typedef float (*ParticleSystem_get_startLifetime_m985_ftn) (ParticleSystem_t121 *);
	static ParticleSystem_get_startLifetime_m985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startLifetime_m985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern MethodInfo ParticleSystem_set_startLifetime_m1033_MethodInfo;
extern "C" void ParticleSystem_set_startLifetime_m1033 (ParticleSystem_t121 * __this, float ___value, MethodInfo* method)
{
	typedef void (*ParticleSystem_set_startLifetime_m1033_ftn) (ParticleSystem_t121 *, float);
	static ParticleSystem_set_startLifetime_m1033_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startLifetime_m1033_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startLifetime(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m3904 (ParticleSystem_t121 * __this, MethodInfo* method)
{
	typedef void (*ParticleSystem_Internal_Stop_m3904_ftn) (ParticleSystem_t121 *);
	static ParticleSystem_Internal_Stop_m3904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Stop_m3904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.ParticleSystem::Stop()
extern MethodInfo ParticleSystem_Stop_m1062_MethodInfo;
extern "C" void ParticleSystem_Stop_m1062 (ParticleSystem_t121 * __this, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		ParticleSystem_Stop_m3905(__this, L_0, /*hidden argument*/&ParticleSystem_Stop_m3905_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m3905 (ParticleSystem_t121 * __this, bool ___withChildren, MethodInfo* method)
{
	ParticleSystemU5BU5D_t120* V_0 = {0};
	ParticleSystem_t121 * V_1 = {0};
	ParticleSystemU5BU5D_t120* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ___withChildren;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		ParticleSystemU5BU5D_t120* L_1 = ParticleSystem_GetParticleSystems_m3907(NULL /*static, unused*/, __this, /*hidden argument*/&ParticleSystem_GetParticleSystems_m3907_MethodInfo);
		V_0 = L_1;
		ParticleSystemU5BU5D_t120* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		ParticleSystemU5BU5D_t120* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(ParticleSystem_t121 **)(ParticleSystem_t121 **)SZArrayLdElema(L_3, L_5));
		ParticleSystem_t121 * L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_Internal_Stop_m3904(L_6, /*hidden argument*/&ParticleSystem_Internal_Stop_m3904_MethodInfo);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_3;
		ParticleSystemU5BU5D_t120* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		ParticleSystem_Internal_Stop_m3904(__this, /*hidden argument*/&ParticleSystem_Internal_Stop_m3904_MethodInfo);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern MethodInfo ParticleSystem_Emit_m1063_MethodInfo;
extern "C" void ParticleSystem_Emit_m1063 (ParticleSystem_t121 * __this, int32_t ___count, MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		ParticleSystem_INTERNAL_CALL_Emit_m3906(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&ParticleSystem_INTERNAL_CALL_Emit_m3906_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C" void ParticleSystem_INTERNAL_CALL_Emit_m3906 (Object_t * __this /* static, unused */, ParticleSystem_t121 * ___self, int32_t ___count, MethodInfo* method)
{
	typedef void (*ParticleSystem_INTERNAL_CALL_Emit_m3906_ftn) (ParticleSystem_t121 *, int32_t);
	static ParticleSystem_INTERNAL_CALL_Emit_m3906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_CALL_Emit_m3906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)");
	_il2cpp_icall_func(___self, ___count);
}
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern TypeInfo* List_1_t743_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4617_MethodInfo_var;
extern MethodInfo* List_1_Add_m4618_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m4620_MethodInfo_var;
extern "C" ParticleSystemU5BU5D_t120* ParticleSystem_GetParticleSystems_m3907 (Object_t * __this /* static, unused */, ParticleSystem_t121 * ___root, MethodInfo* method)
{
	static bool ParticleSystem_GetParticleSystems_m3907_init;
	if (!ParticleSystem_GetParticleSystems_m3907_init)
	{
		List_1_t743_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t743_0_0_0);
		List_1__ctor_m4617_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4617_GenericMethod);
		List_1_Add_m4618_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4618_GenericMethod);
		List_1_ToArray_m4620_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m4620_GenericMethod);
		ParticleSystem_GetParticleSystems_m3907_init = true;
	}
	List_1_t743 * V_0 = {0};
	{
		ParticleSystem_t121 * L_0 = ___root;
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (ParticleSystemU5BU5D_t120*)NULL;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t743_il2cpp_TypeInfo_var);
		List_1_t743 * L_2 = (List_1_t743 *)il2cpp_codegen_object_new (List_1_t743_il2cpp_TypeInfo_var);
		List_1__ctor_m4617(L_2, /*hidden argument*/List_1__ctor_m4617_MethodInfo_var);
		V_0 = L_2;
		List_1_t743 * L_3 = V_0;
		ParticleSystem_t121 * L_4 = ___root;
		NullCheck(L_3);
		VirtActionInvoker1< ParticleSystem_t121 * >::Invoke(List_1_Add_m4618_MethodInfo_var, L_3, L_4);
		ParticleSystem_t121 * L_5 = ___root;
		NullCheck(L_5);
		Transform_t2 * L_6 = Component_get_transform_m598(L_5, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		List_1_t743 * L_7 = V_0;
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908_MethodInfo);
		List_1_t743 * L_8 = V_0;
		NullCheck(L_8);
		ParticleSystemU5BU5D_t120* L_9 = List_1_ToArray_m4620(L_8, /*hidden argument*/List_1_ToArray_m4620_MethodInfo_var);
		return L_9;
	}
}
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern MethodInfo* GameObject_GetComponent_TisParticleSystem_t121_m4619_MethodInfo_var;
extern MethodInfo* List_1_Add_m4618_MethodInfo_var;
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908 (Object_t * __this /* static, unused */, Transform_t2 * ___transform, List_1_t743 * ___particleSystems, MethodInfo* method)
{
	static bool ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908_init;
	if (!ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908_init)
	{
		GameObject_GetComponent_TisParticleSystem_t121_m4619_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisParticleSystem_t121_m4619_GenericMethod);
		List_1_Add_m4618_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m4618_GenericMethod);
		ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908_init = true;
	}
	Transform_t2 * V_0 = {0};
	Object_t * V_1 = {0};
	ParticleSystem_t121 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t2 * L_0 = ___transform;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m768_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_2);
			V_0 = ((Transform_t2 *)Castclass(L_3, InitializedTypeInfo(&Transform_t2_il2cpp_TypeInfo)));
			Transform_t2 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t92 * L_5 = Component_get_gameObject_m577(L_4, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
			NullCheck(L_5);
			ParticleSystem_t121 * L_6 = GameObject_GetComponent_TisParticleSystem_t121_m4619(L_5, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t121_m4619_MethodInfo_var);
			V_2 = L_6;
			ParticleSystem_t121 * L_7 = V_2;
			bool L_8 = Object_op_Inequality_m642(NULL /*static, unused*/, L_7, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0030:
		{
			List_1_t743 * L_9 = ___particleSystems;
			ParticleSystem_t121 * L_10 = V_2;
			NullCheck(L_9);
			VirtActionInvoker1< ParticleSystem_t121 * >::Invoke(List_1_Add_m4618_MethodInfo_var, L_9, L_10);
			Transform_t2 * L_11 = V_0;
			List_1_t743 * L_12 = ___particleSystems;
			ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3908_MethodInfo);
		}

IL_003e:
		{
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_13);
			if (L_14)
			{
				goto IL_000c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_1;
			V_3 = ((Object_t *)IsInst(L_15, InitializedTypeInfo(&IDisposable_t203_il2cpp_TypeInfo)));
			Object_t * L_16 = V_3;
			if (L_16)
			{
				goto IL_0059;
			}
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(78)
		}

IL_0059:
		{
			Object_t * L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_17);
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0060:
	{
		return;
	}
}
// UnityEngine.ParticleSystemRenderer
#include "UnityEngine_UnityEngine_ParticleSystemRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParticleSystemRenderer_t193_il2cpp_TypeInfo;
// UnityEngine.ParticleSystemRenderer
#include "UnityEngine_UnityEngine_ParticleSystemRendererMethodDeclarations.h"



// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t744_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m3909_MethodInfo;
extern "C" Vector3_t8  Particle_get_position_m3909 (Particle_t744 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m3910_MethodInfo;
extern "C" void Particle_set_position_m3910 (Particle_t744 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m3911_MethodInfo;
extern "C" Vector3_t8  Particle_get_velocity_m3911 (Particle_t744 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m3912_MethodInfo;
extern "C" void Particle_set_velocity_m3912 (Particle_t744 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m3913_MethodInfo;
extern "C" float Particle_get_energy_m3913 (Particle_t744 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m3914_MethodInfo;
extern "C" void Particle_set_energy_m3914 (Particle_t744 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m3915_MethodInfo;
extern "C" float Particle_get_startEnergy_m3915 (Particle_t744 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m3916_MethodInfo;
extern "C" void Particle_set_startEnergy_m3916 (Particle_t744 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m3917_MethodInfo;
extern "C" float Particle_get_size_m3917 (Particle_t744 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m3918_MethodInfo;
extern "C" void Particle_set_size_m3918 (Particle_t744 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m3919_MethodInfo;
extern "C" float Particle_get_rotation_m3919 (Particle_t744 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m3920_MethodInfo;
extern "C" void Particle_set_rotation_m3920 (Particle_t744 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m3921_MethodInfo;
extern "C" float Particle_get_angularVelocity_m3921 (Particle_t744 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m3922_MethodInfo;
extern "C" void Particle_set_angularVelocity_m3922 (Particle_t744 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m3923_MethodInfo;
extern "C" Color_t79  Particle_get_color_m3923 (Particle_t744 * __this, MethodInfo* method)
{
	{
		Color_t79  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m3924_MethodInfo;
extern "C" void Particle_set_color_m3924 (Particle_t744 * __this, Color_t79  ___value, MethodInfo* method)
{
	{
		Color_t79  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.ParticleRenderer
#include "UnityEngine_UnityEngine_ParticleRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParticleRenderer_t192_il2cpp_TypeInfo;
// UnityEngine.ParticleRenderer
#include "UnityEngine_UnityEngine_ParticleRendererMethodDeclarations.h"



// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ForceMode_t745_il2cpp_TypeInfo;
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceModeMethodDeclarations.h"



// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t746_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_get_gravity_m3925_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m3927_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_Internal_RaycastTest_m3931_MethodInfo;
extern MethodInfo Physics_Raycast_m3932_MethodInfo;
extern MethodInfo Physics_Internal_RaycastTest_m3930_MethodInfo;
extern MethodInfo Physics_Raycast_m954_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m3926_MethodInfo;
extern MethodInfo Physics_Raycast_m2759_MethodInfo;
extern MethodInfo Ray_get_origin_m638_MethodInfo;
extern MethodInfo Ray_get_direction_m953_MethodInfo;
extern MethodInfo Physics_RaycastAll_m2672_MethodInfo;
extern MethodInfo Physics_RaycastAll_m3933_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m3934_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_OverlapSphere_m3935_MethodInfo;
extern MethodInfo Physics_SphereCast_m3936_MethodInfo;
extern MethodInfo Physics_Internal_CapsuleCast_m3928_MethodInfo;
extern MethodInfo Physics_SphereCast_m3937_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_CapsuleCastAll_m3939_MethodInfo;
extern MethodInfo Physics_SphereCastAll_m3940_MethodInfo;
extern MethodInfo Physics_CapsuleCastAll_m3938_MethodInfo;


// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" void Physics_INTERNAL_get_gravity_m3925 (Object_t * __this /* static, unused */, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Physics_INTERNAL_get_gravity_m3925_ftn) (Vector3_t8 *);
	static Physics_INTERNAL_get_gravity_m3925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_get_gravity_m3925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern MethodInfo Physics_get_gravity_m675_MethodInfo;
extern "C" Vector3_t8  Physics_get_gravity_m675 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Physics_INTERNAL_get_gravity_m3925(NULL /*static, unused*/, (&V_0), /*hidden argument*/&Physics_INTERNAL_get_gravity_m3925_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3926 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t16 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m3927(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m3927_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3927 (Object_t * __this /* static, unused */, Vector3_t8 * ___origin, Vector3_t8 * ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m3927_ftn) (Vector3_t8 *, Vector3_t8 *, RaycastHit_t16 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m3927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m3927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_CapsuleCast_m3928 (Object_t * __this /* static, unused */, Vector3_t8  ___point1, Vector3_t8  ___point2, float ___radius, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___radius;
		RaycastHit_t16 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layermask;
		bool L_4 = Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929(NULL /*static, unused*/, (&___point1), (&___point2), L_0, (&___direction), L_1, L_2, L_3, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929 (Object_t * __this /* static, unused */, Vector3_t8 * ___point1, Vector3_t8 * ___point2, float ___radius, Vector3_t8 * ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929_ftn) (Vector3_t8 *, Vector3_t8 *, float, Vector3_t8 *, RaycastHit_t16 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_CapsuleCast_m3929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___point1, ___point2, ___radius, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_Internal_RaycastTest_m3930 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		bool L_2 = Physics_INTERNAL_CALL_Internal_RaycastTest_m3931(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_RaycastTest_m3931_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_RaycastTest_m3931 (Object_t * __this /* static, unused */, Vector3_t8 * ___origin, Vector3_t8 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_RaycastTest_m3931_ftn) (Vector3_t8 *, Vector3_t8 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_RaycastTest_m3931_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_RaycastTest_m3931_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Physics_Raycast_m714_MethodInfo;
extern "C" bool Physics_Raycast_m714 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Vector3_t8  L_0 = ___origin;
		Vector3_t8  L_1 = ___direction;
		float L_2 = ___maxDistance;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m3932(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_Raycast_m3932_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m3932 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___origin;
		Vector3_t8  L_1 = ___direction;
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		bool L_4 = Physics_Internal_RaycastTest_m3930(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_Internal_RaycastTest_m3930_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern MethodInfo Physics_Raycast_m746_MethodInfo;
extern "C" bool Physics_Raycast_m746 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Vector3_t8  L_0 = ___origin;
		Vector3_t8  L_1 = ___direction;
		RaycastHit_t16 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m954(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m954_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m954 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___origin;
		Vector3_t8  L_1 = ___direction;
		RaycastHit_t16 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m3926(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m3926_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern MethodInfo Physics_Raycast_m967_MethodInfo;
extern "C" bool Physics_Raycast_m967 (Object_t * __this /* static, unused */, Ray_t18  ___ray, RaycastHit_t16 * ___hitInfo, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		Ray_t18  L_0 = ___ray;
		RaycastHit_t16 * L_1 = ___hitInfo;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m2759(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_Raycast_m2759_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2759 (Object_t * __this /* static, unused */, Ray_t18  ___ray, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Ray_get_origin_m638((&___ray), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Vector3_t8  L_1 = Ray_get_direction_m953((&___ray), /*hidden argument*/&Ray_get_direction_m953_MethodInfo);
		RaycastHit_t16 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m954(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m954_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern MethodInfo Physics_RaycastAll_m644_MethodInfo;
extern "C" RaycastHitU5BU5D_t15* Physics_RaycastAll_m644 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___maxDistance, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Ray_t18  L_0 = ___ray;
		float L_1 = ___maxDistance;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t15* L_3 = Physics_RaycastAll_m2672(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Physics_RaycastAll_m2672_MethodInfo);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_RaycastAll_m2672 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Ray_get_origin_m638((&___ray), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Vector3_t8  L_1 = Ray_get_direction_m953((&___ray), /*hidden argument*/&Ray_get_direction_m953_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t15* L_4 = Physics_RaycastAll_m3933(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m3933_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_RaycastAll_m3933 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t15* L_2 = Physics_INTERNAL_CALL_RaycastAll_m3934(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m3934_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_INTERNAL_CALL_RaycastAll_m3934 (Object_t * __this /* static, unused */, Vector3_t8 * ___origin, Vector3_t8 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t15* (*Physics_INTERNAL_CALL_RaycastAll_m3934_ftn) (Vector3_t8 *, Vector3_t8 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m3934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m3934_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern MethodInfo Physics_OverlapSphere_m639_MethodInfo;
extern "C" ColliderU5BU5D_t189* Physics_OverlapSphere_m639 (Object_t * __this /* static, unused */, Vector3_t8  ___position, float ___radius, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		float L_0 = ___radius;
		int32_t L_1 = V_0;
		ColliderU5BU5D_t189* L_2 = Physics_INTERNAL_CALL_OverlapSphere_m3935(NULL /*static, unused*/, (&___position), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_OverlapSphere_m3935_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" ColliderU5BU5D_t189* Physics_INTERNAL_CALL_OverlapSphere_m3935 (Object_t * __this /* static, unused */, Vector3_t8 * ___position, float ___radius, int32_t ___layerMask, MethodInfo* method)
{
	typedef ColliderU5BU5D_t189* (*Physics_INTERNAL_CALL_OverlapSphere_m3935_ftn) (Vector3_t8 *, float, int32_t);
	static Physics_INTERNAL_CALL_OverlapSphere_m3935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapSphere_m3935_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___position, ___radius, ___layerMask);
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern MethodInfo Physics_SphereCast_m672_MethodInfo;
extern "C" bool Physics_SphereCast_m672 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, float ___radius, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Vector3_t8  L_0 = ___origin;
		float L_1 = ___radius;
		Vector3_t8  L_2 = ___direction;
		RaycastHit_t16 * L_3 = ___hitInfo;
		float L_4 = ___maxDistance;
		int32_t L_5 = V_0;
		bool L_6 = Physics_SphereCast_m3936(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics_SphereCast_m3936_MethodInfo);
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m3936 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, float ___radius, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___origin;
		Vector3_t8  L_1 = ___origin;
		float L_2 = ___radius;
		Vector3_t8  L_3 = ___direction;
		RaycastHit_t16 * L_4 = ___hitInfo;
		float L_5 = ___maxDistance;
		int32_t L_6 = ___layerMask;
		bool L_7 = Physics_Internal_CapsuleCast_m3928(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/&Physics_Internal_CapsuleCast_m3928_MethodInfo);
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single)
extern MethodInfo Physics_SphereCast_m735_MethodInfo;
extern "C" bool Physics_SphereCast_m735 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Ray_t18  L_0 = ___ray;
		float L_1 = ___radius;
		float L_2 = ___maxDistance;
		int32_t L_3 = V_0;
		bool L_4 = Physics_SphereCast_m3937(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_SphereCast_m3937_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m3937 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	RaycastHit_t16  V_0 = {0};
	{
		Vector3_t8  L_0 = Ray_get_origin_m638((&___ray), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Vector3_t8  L_1 = Ray_get_origin_m638((&___ray), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		float L_2 = ___radius;
		Vector3_t8  L_3 = Ray_get_direction_m953((&___ray), /*hidden argument*/&Ray_get_direction_m953_MethodInfo);
		float L_4 = ___maxDistance;
		int32_t L_5 = ___layerMask;
		bool L_6 = Physics_Internal_CapsuleCast_m3928(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), L_4, L_5, /*hidden argument*/&Physics_Internal_CapsuleCast_m3928_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_CapsuleCastAll_m3938 (Object_t * __this /* static, unused */, Vector3_t8  ___point1, Vector3_t8  ___point2, float ___radius, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___radius;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		RaycastHitU5BU5D_t15* L_3 = Physics_INTERNAL_CALL_CapsuleCastAll_m3939(NULL /*static, unused*/, (&___point1), (&___point2), L_0, (&___direction), L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_CapsuleCastAll_m3939_MethodInfo);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_INTERNAL_CALL_CapsuleCastAll_m3939 (Object_t * __this /* static, unused */, Vector3_t8 * ___point1, Vector3_t8 * ___point2, float ___radius, Vector3_t8 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t15* (*Physics_INTERNAL_CALL_CapsuleCastAll_m3939_ftn) (Vector3_t8 *, Vector3_t8 *, float, Vector3_t8 *, float, int32_t);
	static Physics_INTERNAL_CALL_CapsuleCastAll_m3939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_CapsuleCastAll_m3939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___point1, ___point2, ___radius, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single)
extern MethodInfo Physics_SphereCastAll_m645_MethodInfo;
extern "C" RaycastHitU5BU5D_t15* Physics_SphereCastAll_m645 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Ray_t18  L_0 = ___ray;
		float L_1 = ___radius;
		float L_2 = ___maxDistance;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t15* L_4 = Physics_SphereCastAll_m3940(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_SphereCastAll_m3940_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_SphereCastAll_m3940 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Ray_get_origin_m638((&___ray), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Vector3_t8  L_1 = Ray_get_origin_m638((&___ray), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		float L_2 = ___radius;
		Vector3_t8  L_3 = Ray_get_direction_m953((&___ray), /*hidden argument*/&Ray_get_direction_m953_MethodInfo);
		float L_4 = ___maxDistance;
		int32_t L_5 = ___layerMask;
		RaycastHitU5BU5D_t15* L_6 = Physics_CapsuleCastAll_m3938(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics_CapsuleCastAll_m3938_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RigidbodyConstraints
#include "UnityEngine_UnityEngine_RigidbodyConstraints.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RigidbodyConstraints_t747_il2cpp_TypeInfo;
// UnityEngine.RigidbodyConstraints
#include "UnityEngine_UnityEngine_RigidbodyConstraintsMethodDeclarations.h"



// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody_t3_il2cpp_TypeInfo;
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"

extern MethodInfo Rigidbody_INTERNAL_get_velocity_m3941_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_set_velocity_m3942_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_get_angularVelocity_m3943_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_set_angularVelocity_m3944_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_set_centerOfMass_m3948_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_get_position_m3949_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_get_rotation_m3950_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_set_rotation_m3951_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_CALL_AddForce_m3945_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_CALL_AddTorque_m3946_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_CALL_Sleep_m3952_MethodInfo;


// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m3941 (Rigidbody_t3 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m3941_ftn) (Rigidbody_t3 *, Vector3_t8 *);
	static Rigidbody_INTERNAL_get_velocity_m3941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m3941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m3942 (Rigidbody_t3 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m3942_ftn) (Rigidbody_t3 *, Vector3_t8 *);
	static Rigidbody_INTERNAL_set_velocity_m3942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m3942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern MethodInfo Rigidbody_get_velocity_m590_MethodInfo;
extern "C" Vector3_t8  Rigidbody_get_velocity_m590 (Rigidbody_t3 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_velocity_m3941(__this, (&V_0), /*hidden argument*/&Rigidbody_INTERNAL_get_velocity_m3941_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern MethodInfo Rigidbody_set_velocity_m701_MethodInfo;
extern "C" void Rigidbody_set_velocity_m701 (Rigidbody_t3 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m3942(__this, (&___value), /*hidden argument*/&Rigidbody_INTERNAL_set_velocity_m3942_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_angularVelocity_m3943 (Rigidbody_t3 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_angularVelocity_m3943_ftn) (Rigidbody_t3 *, Vector3_t8 *);
	static Rigidbody_INTERNAL_get_angularVelocity_m3943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_angularVelocity_m3943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m3944 (Rigidbody_t3 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m3944_ftn) (Rigidbody_t3 *, Vector3_t8 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m3944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m3944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern MethodInfo Rigidbody_get_angularVelocity_m1040_MethodInfo;
extern "C" Vector3_t8  Rigidbody_get_angularVelocity_m1040 (Rigidbody_t3 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_angularVelocity_m3943(__this, (&V_0), /*hidden argument*/&Rigidbody_INTERNAL_get_angularVelocity_m3943_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern MethodInfo Rigidbody_set_angularVelocity_m981_MethodInfo;
extern "C" void Rigidbody_set_angularVelocity_m981 (Rigidbody_t3 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m3944(__this, (&___value), /*hidden argument*/&Rigidbody_INTERNAL_set_angularVelocity_m3944_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.Rigidbody::get_drag()
extern MethodInfo Rigidbody_get_drag_m944_MethodInfo;
extern "C" float Rigidbody_get_drag_m944 (Rigidbody_t3 * __this, MethodInfo* method)
{
	typedef float (*Rigidbody_get_drag_m944_ftn) (Rigidbody_t3 *);
	static Rigidbody_get_drag_m944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_drag_m944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern MethodInfo Rigidbody_set_drag_m699_MethodInfo;
extern "C" void Rigidbody_set_drag_m699 (Rigidbody_t3 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_drag_m699_ftn) (Rigidbody_t3 *, float);
	static Rigidbody_set_drag_m699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_drag_m699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern MethodInfo Rigidbody_get_angularDrag_m945_MethodInfo;
extern "C" float Rigidbody_get_angularDrag_m945 (Rigidbody_t3 * __this, MethodInfo* method)
{
	typedef float (*Rigidbody_get_angularDrag_m945_ftn) (Rigidbody_t3 *);
	static Rigidbody_get_angularDrag_m945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularDrag_m945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern MethodInfo Rigidbody_set_angularDrag_m946_MethodInfo;
extern "C" void Rigidbody_set_angularDrag_m946 (Rigidbody_t3 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_angularDrag_m946_ftn) (Rigidbody_t3 *, float);
	static Rigidbody_set_angularDrag_m946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularDrag_m946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern MethodInfo Rigidbody_get_isKinematic_m687_MethodInfo;
extern "C" bool Rigidbody_get_isKinematic_m687 (Rigidbody_t3 * __this, MethodInfo* method)
{
	typedef bool (*Rigidbody_get_isKinematic_m687_ftn) (Rigidbody_t3 *);
	static Rigidbody_get_isKinematic_m687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_isKinematic_m687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_isKinematic()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern MethodInfo Rigidbody_set_isKinematic_m957_MethodInfo;
extern "C" void Rigidbody_set_isKinematic_m957 (Rigidbody_t3 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_isKinematic_m957_ftn) (Rigidbody_t3 *, bool);
	static Rigidbody_set_isKinematic_m957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern MethodInfo Rigidbody_set_constraints_m727_MethodInfo;
extern "C" void Rigidbody_set_constraints_m727 (Rigidbody_t3 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_constraints_m727_ftn) (Rigidbody_t3 *, int32_t);
	static Rigidbody_set_constraints_m727_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_constraints_m727_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern MethodInfo Rigidbody_AddForce_m698_MethodInfo;
extern "C" void Rigidbody_AddForce_m698 (Rigidbody_t3 * __this, Vector3_t8  ___force, int32_t ___mode, MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		Rigidbody_INTERNAL_CALL_AddForce_m3945(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddForce_m3945_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern MethodInfo Rigidbody_AddForce_m713_MethodInfo;
extern "C" void Rigidbody_AddForce_m713 (Rigidbody_t3 * __this, Vector3_t8  ___force, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddForce_m3945(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddForce_m3945_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m3945 (Object_t * __this /* static, unused */, Rigidbody_t3 * ___self, Vector3_t8 * ___force, int32_t ___mode, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m3945_ftn) (Rigidbody_t3 *, Vector3_t8 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m3945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m3945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern MethodInfo Rigidbody_AddTorque_m712_MethodInfo;
extern "C" void Rigidbody_AddTorque_m712 (Rigidbody_t3 * __this, Vector3_t8  ___torque, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Rigidbody_INTERNAL_CALL_AddTorque_m3946(NULL /*static, unused*/, __this, (&___torque), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddTorque_m3946_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddTorque_m3946 (Object_t * __this /* static, unused */, Rigidbody_t3 * ___self, Vector3_t8 * ___torque, int32_t ___mode, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddTorque_m3946_ftn) (Rigidbody_t3 *, Vector3_t8 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddTorque_m3946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddTorque_m3946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___torque, ___mode);
}
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern MethodInfo Rigidbody_AddForceAtPosition_m689_MethodInfo;
extern "C" void Rigidbody_AddForceAtPosition_m689 (Rigidbody_t3 * __this, Vector3_t8  ___force, Vector3_t8  ___position, int32_t ___mode, MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947(NULL /*static, unused*/, __this, (&___force), (&___position), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947 (Object_t * __this /* static, unused */, Rigidbody_t3 * ___self, Vector3_t8 * ___force, Vector3_t8 * ___position, int32_t ___mode, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947_ftn) (Rigidbody_t3 *, Vector3_t8 *, Vector3_t8 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___position, ___mode);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_centerOfMass(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_centerOfMass_m3948 (Rigidbody_t3 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_centerOfMass_m3948_ftn) (Rigidbody_t3 *, Vector3_t8 *);
	static Rigidbody_INTERNAL_set_centerOfMass_m3948_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_centerOfMass_m3948_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_centerOfMass(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
extern MethodInfo Rigidbody_set_centerOfMass_m1050_MethodInfo;
extern "C" void Rigidbody_set_centerOfMass_m1050 (Rigidbody_t3 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_centerOfMass_m3948(__this, (&___value), /*hidden argument*/&Rigidbody_INTERNAL_set_centerOfMass_m3948_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_position_m3949 (Rigidbody_t3 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_position_m3949_ftn) (Rigidbody_t3 *, Vector3_t8 *);
	static Rigidbody_INTERNAL_get_position_m3949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_position_m3949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern MethodInfo Rigidbody_get_position_m733_MethodInfo;
extern "C" Vector3_t8  Rigidbody_get_position_m733 (Rigidbody_t3 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_position_m3949(__this, (&V_0), /*hidden argument*/&Rigidbody_INTERNAL_get_position_m3949_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_get_rotation_m3950 (Rigidbody_t3 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_rotation_m3950_ftn) (Rigidbody_t3 *, Quaternion_t10 *);
	static Rigidbody_INTERNAL_get_rotation_m3950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_rotation_m3950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_set_rotation_m3951 (Rigidbody_t3 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_rotation_m3951_ftn) (Rigidbody_t3 *, Quaternion_t10 *);
	static Rigidbody_INTERNAL_set_rotation_m3951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_rotation_m3951_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern MethodInfo Rigidbody_get_rotation_m1025_MethodInfo;
extern "C" Quaternion_t10  Rigidbody_get_rotation_m1025 (Rigidbody_t3 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_rotation_m3950(__this, (&V_0), /*hidden argument*/&Rigidbody_INTERNAL_get_rotation_m3950_MethodInfo);
		Quaternion_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern MethodInfo Rigidbody_set_rotation_m1026_MethodInfo;
extern "C" void Rigidbody_set_rotation_m1026 (Rigidbody_t3 * __this, Quaternion_t10  ___value, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_rotation_m3951(__this, (&___value), /*hidden argument*/&Rigidbody_INTERNAL_set_rotation_m3951_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::Sleep()
extern MethodInfo Rigidbody_Sleep_m702_MethodInfo;
extern "C" void Rigidbody_Sleep_m702 (Rigidbody_t3 * __this, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_CALL_Sleep_m3952(NULL /*static, unused*/, __this, /*hidden argument*/&Rigidbody_INTERNAL_CALL_Sleep_m3952_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C" void Rigidbody_INTERNAL_CALL_Sleep_m3952 (Object_t * __this /* static, unused */, Rigidbody_t3 * ___self, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_Sleep_m3952_ftn) (Rigidbody_t3 *);
	static Rigidbody_INTERNAL_CALL_Sleep_m3952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_Sleep_m3952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(___self);
}
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern MethodInfo Rigidbody_set_maxAngularVelocity_m711_MethodInfo;
extern "C" void Rigidbody_set_maxAngularVelocity_m711 (Rigidbody_t3 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_maxAngularVelocity_m711_ftn) (Rigidbody_t3 *, float);
	static Rigidbody_set_maxAngularVelocity_m711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_maxAngularVelocity_m711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_Joint.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Joint_t748_il2cpp_TypeInfo;
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"

extern MethodInfo Joint_INTERNAL_set_anchor_m3953_MethodInfo;


// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern MethodInfo Joint_get_connectedBody_m943_MethodInfo;
extern "C" Rigidbody_t3 * Joint_get_connectedBody_m943 (Joint_t748 * __this, MethodInfo* method)
{
	typedef Rigidbody_t3 * (*Joint_get_connectedBody_m943_ftn) (Joint_t748 *);
	static Joint_get_connectedBody_m943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_get_connectedBody_m943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::get_connectedBody()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern MethodInfo Joint_set_connectedBody_m950_MethodInfo;
extern "C" void Joint_set_connectedBody_m950 (Joint_t748 * __this, Rigidbody_t3 * ___value, MethodInfo* method)
{
	typedef void (*Joint_set_connectedBody_m950_ftn) (Joint_t748 *, Rigidbody_t3 *);
	static Joint_set_connectedBody_m950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_connectedBody_m950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C" void Joint_INTERNAL_set_anchor_m3953 (Joint_t748 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*Joint_INTERNAL_set_anchor_m3953_ftn) (Joint_t748 *, Vector3_t8 *);
	static Joint_INTERNAL_set_anchor_m3953_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_INTERNAL_set_anchor_m3953_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern MethodInfo Joint_set_anchor_m958_MethodInfo;
extern "C" void Joint_set_anchor_m958 (Joint_t748 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Joint_INTERNAL_set_anchor_m3953(__this, (&___value), /*hidden argument*/&Joint_INTERNAL_set_anchor_m3953_MethodInfo);
		return;
	}
}
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJoint.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpringJoint_t105_il2cpp_TypeInfo;
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"



// System.Void UnityEngine.SpringJoint::set_spring(System.Single)
extern MethodInfo SpringJoint_set_spring_m959_MethodInfo;
extern "C" void SpringJoint_set_spring_m959 (SpringJoint_t105 * __this, float ___value, MethodInfo* method)
{
	typedef void (*SpringJoint_set_spring_m959_ftn) (SpringJoint_t105 *, float);
	static SpringJoint_set_spring_m959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_spring_m959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_spring(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpringJoint::set_damper(System.Single)
extern MethodInfo SpringJoint_set_damper_m960_MethodInfo;
extern "C" void SpringJoint_set_damper_m960 (SpringJoint_t105 * __this, float ___value, MethodInfo* method)
{
	typedef void (*SpringJoint_set_damper_m960_ftn) (SpringJoint_t105 *, float);
	static SpringJoint_set_damper_m960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_damper_m960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_damper(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpringJoint::set_maxDistance(System.Single)
extern MethodInfo SpringJoint_set_maxDistance_m961_MethodInfo;
extern "C" void SpringJoint_set_maxDistance_m961 (SpringJoint_t105 * __this, float ___value, MethodInfo* method)
{
	typedef void (*SpringJoint_set_maxDistance_m961_ftn) (SpringJoint_t105 *, float);
	static SpringJoint_set_maxDistance_m961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpringJoint_set_maxDistance_m961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t94_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern MethodInfo Collider_get_attachedRigidbody_m641_MethodInfo;
extern "C" Rigidbody_t3 * Collider_get_attachedRigidbody_m641 (Collider_t94 * __this, MethodInfo* method)
{
	typedef Rigidbody_t3 * (*Collider_get_attachedRigidbody_m641_ftn) (Collider_t94 *);
	static Collider_get_attachedRigidbody_m641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m641_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern MethodInfo Collider_get_isTrigger_m640_MethodInfo;
extern "C" bool Collider_get_isTrigger_m640 (Collider_t94 * __this, MethodInfo* method)
{
	typedef bool (*Collider_get_isTrigger_m640_ftn) (Collider_t94 *);
	static Collider_get_isTrigger_m640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_isTrigger_m640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_isTrigger()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleCollider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CapsuleCollider_t36_il2cpp_TypeInfo;
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleColliderMethodDeclarations.h"

extern MethodInfo CapsuleCollider_INTERNAL_get_center_m3954_MethodInfo;
extern MethodInfo CapsuleCollider_INTERNAL_set_center_m3955_MethodInfo;


// System.Void UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" void CapsuleCollider_INTERNAL_get_center_m3954 (CapsuleCollider_t36 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*CapsuleCollider_INTERNAL_get_center_m3954_ftn) (CapsuleCollider_t36 *, Vector3_t8 *);
	static CapsuleCollider_INTERNAL_get_center_m3954_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_INTERNAL_get_center_m3954_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" void CapsuleCollider_INTERNAL_set_center_m3955 (CapsuleCollider_t36 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*CapsuleCollider_INTERNAL_set_center_m3955_ftn) (CapsuleCollider_t36 *, Vector3_t8 *);
	static CapsuleCollider_INTERNAL_set_center_m3955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_INTERNAL_set_center_m3955_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
extern MethodInfo CapsuleCollider_get_center_m726_MethodInfo;
extern "C" Vector3_t8  CapsuleCollider_get_center_m726 (CapsuleCollider_t36 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		CapsuleCollider_INTERNAL_get_center_m3954(__this, (&V_0), /*hidden argument*/&CapsuleCollider_INTERNAL_get_center_m3954_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
extern MethodInfo CapsuleCollider_set_center_m732_MethodInfo;
extern "C" void CapsuleCollider_set_center_m732 (CapsuleCollider_t36 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		CapsuleCollider_INTERNAL_set_center_m3955(__this, (&___value), /*hidden argument*/&CapsuleCollider_INTERNAL_set_center_m3955_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.CapsuleCollider::get_radius()
extern MethodInfo CapsuleCollider_get_radius_m705_MethodInfo;
extern "C" float CapsuleCollider_get_radius_m705 (CapsuleCollider_t36 * __this, MethodInfo* method)
{
	typedef float (*CapsuleCollider_get_radius_m705_ftn) (CapsuleCollider_t36 *);
	static CapsuleCollider_get_radius_m705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_radius_m705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_radius()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
extern MethodInfo CapsuleCollider_get_height_m706_MethodInfo;
extern "C" float CapsuleCollider_get_height_m706 (CapsuleCollider_t36 * __this, MethodInfo* method)
{
	typedef float (*CapsuleCollider_get_height_m706_ftn) (CapsuleCollider_t36 *);
	static CapsuleCollider_get_height_m706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_height_m706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_height()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
extern MethodInfo CapsuleCollider_set_height_m730_MethodInfo;
extern "C" void CapsuleCollider_set_height_m730 (CapsuleCollider_t36 * __this, float ___value, MethodInfo* method)
{
	typedef void (*CapsuleCollider_set_height_m730_ftn) (CapsuleCollider_t36 *, float);
	static CapsuleCollider_set_height_m730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_height_m730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_height(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WheelHit
#include "UnityEngine_UnityEngine_WheelHit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WheelHit_t223_il2cpp_TypeInfo;
// UnityEngine.WheelHit
#include "UnityEngine_UnityEngine_WheelHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern MethodInfo WheelHit_get_normal_m1055_MethodInfo;
extern "C" Vector3_t8  WheelHit_get_normal_m1055 (WheelHit_t223 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.WheelHit::get_forwardSlip()
extern MethodInfo WheelHit_get_forwardSlip_m1057_MethodInfo;
extern "C" float WheelHit_get_forwardSlip_m1057 (WheelHit_t223 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_ForwardSlip_5);
		return L_0;
	}
}
// System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern MethodInfo WheelHit_get_sidewaysSlip_m1058_MethodInfo;
extern "C" float WheelHit_get_sidewaysSlip_m1058 (WheelHit_t223 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_SidewaysSlip_6);
		return L_0;
	}
}
// UnityEngine.WheelCollider
#include "UnityEngine_UnityEngine_WheelCollider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WheelCollider_t182_il2cpp_TypeInfo;
// UnityEngine.WheelCollider
#include "UnityEngine_UnityEngine_WheelColliderMethodDeclarations.h"



// System.Single UnityEngine.WheelCollider::get_radius()
extern MethodInfo WheelCollider_get_radius_m1059_MethodInfo;
extern "C" float WheelCollider_get_radius_m1059 (WheelCollider_t182 * __this, MethodInfo* method)
{
	typedef float (*WheelCollider_get_radius_m1059_ftn) (WheelCollider_t182 *);
	static WheelCollider_get_radius_m1059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_get_radius_m1059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::get_radius()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern MethodInfo WheelCollider_set_motorTorque_m1020_MethodInfo;
extern "C" void WheelCollider_set_motorTorque_m1020 (WheelCollider_t182 * __this, float ___value, MethodInfo* method)
{
	typedef void (*WheelCollider_set_motorTorque_m1020_ftn) (WheelCollider_t182 *, float);
	static WheelCollider_set_motorTorque_m1020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_set_motorTorque_m1020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::set_motorTorque(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern MethodInfo WheelCollider_set_brakeTorque_m1053_MethodInfo;
extern "C" void WheelCollider_set_brakeTorque_m1053 (WheelCollider_t182 * __this, float ___value, MethodInfo* method)
{
	typedef void (*WheelCollider_set_brakeTorque_m1053_ftn) (WheelCollider_t182 *, float);
	static WheelCollider_set_brakeTorque_m1053_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_set_brakeTorque_m1053_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::set_brakeTorque(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern MethodInfo WheelCollider_set_steerAngle_m1052_MethodInfo;
extern "C" void WheelCollider_set_steerAngle_m1052 (WheelCollider_t182 * __this, float ___value, MethodInfo* method)
{
	typedef void (*WheelCollider_set_steerAngle_m1052_ftn) (WheelCollider_t182 *, float);
	static WheelCollider_set_steerAngle_m1052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_set_steerAngle_m1052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::set_steerAngle(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern MethodInfo WheelCollider_GetGroundHit_m1054_MethodInfo;
extern "C" bool WheelCollider_GetGroundHit_m1054 (WheelCollider_t182 * __this, WheelHit_t223 * ___hit, MethodInfo* method)
{
	typedef bool (*WheelCollider_GetGroundHit_m1054_ftn) (WheelCollider_t182 *, WheelHit_t223 *);
	static WheelCollider_GetGroundHit_m1054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_GetGroundHit_m1054_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)");
	return _il2cpp_icall_func(__this, ___hit);
}
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern MethodInfo WheelCollider_GetWorldPose_m1051_MethodInfo;
extern "C" void WheelCollider_GetWorldPose_m1051 (WheelCollider_t182 * __this, Vector3_t8 * ___pos, Quaternion_t10 * ___quat, MethodInfo* method)
{
	typedef void (*WheelCollider_GetWorldPose_m1051_ftn) (WheelCollider_t182 *, Vector3_t8 *, Quaternion_t10 *);
	static WheelCollider_GetWorldPose_m1051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_GetWorldPose_m1051_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___pos, ___quat);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t16_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"

extern MethodInfo RaycastHit_get_collider_m647_MethodInfo;


// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m648_MethodInfo;
extern "C" Vector3_t8  RaycastHit_get_point_m648 (RaycastHit_t16 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m673_MethodInfo;
extern "C" Vector3_t8  RaycastHit_get_normal_m673 (RaycastHit_t16 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m630_MethodInfo;
extern "C" float RaycastHit_get_distance_m630 (RaycastHit_t16 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t94 * RaycastHit_get_collider_m647 (RaycastHit_t16 * __this, MethodInfo* method)
{
	{
		Collider_t94 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern MethodInfo RaycastHit_get_rigidbody_m955_MethodInfo;
extern "C" Rigidbody_t3 * RaycastHit_get_rigidbody_m955 (RaycastHit_t16 * __this, MethodInfo* method)
{
	Rigidbody_t3 * G_B3_0 = {0};
	{
		Collider_t94 * L_0 = RaycastHit_get_collider_m647(__this, /*hidden argument*/&RaycastHit_get_collider_m647_MethodInfo);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t94 * L_2 = RaycastHit_get_collider_m647(__this, /*hidden argument*/&RaycastHit_get_collider_m647_MethodInfo);
		NullCheck(L_2);
		Rigidbody_t3 * L_3 = Collider_get_attachedRigidbody_m641(L_2, /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody_t3 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContactPoint_t749_il2cpp_TypeInfo;
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPointMethodDeclarations.h"



// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collision_t167_il2cpp_TypeInfo;
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"



// UnityEngine.Rigidbody UnityEngine.Collision::get_rigidbody()
extern MethodInfo Collision_get_rigidbody_m1042_MethodInfo;
extern "C" Rigidbody_t3 * Collision_get_rigidbody_m1042 (Collision_t167 * __this, MethodInfo* method)
{
	{
		Rigidbody_t3 * L_0 = (__this->___m_Rigidbody_1);
		return L_0;
	}
}
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollisionFlags_t235_il2cpp_TypeInfo;
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlagsMethodDeclarations.h"



// UnityEngine.ControllerColliderHit
#include "UnityEngine_UnityEngine_ControllerColliderHit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ControllerColliderHit_t30_il2cpp_TypeInfo;
// UnityEngine.ControllerColliderHit
#include "UnityEngine_UnityEngine_ControllerColliderHitMethodDeclarations.h"



// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
extern MethodInfo ControllerColliderHit_get_collider_m686_MethodInfo;
extern "C" Collider_t94 * ControllerColliderHit_get_collider_m686 (ControllerColliderHit_t30 * __this, MethodInfo* method)
{
	{
		Collider_t94 * L_0 = (__this->___m_Collider_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_point()
extern MethodInfo ControllerColliderHit_get_point_m688_MethodInfo;
extern "C" Vector3_t8  ControllerColliderHit_get_point_m688 (ControllerColliderHit_t30 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___m_Point_2);
		return L_0;
	}
}
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterController.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterController_t27_il2cpp_TypeInfo;
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"

extern MethodInfo CharacterController_INTERNAL_get_velocity_m3957_MethodInfo;
extern MethodInfo CharacterController_INTERNAL_CALL_Move_m3956_MethodInfo;


// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern MethodInfo CharacterController_Move_m677_MethodInfo;
extern "C" int32_t CharacterController_Move_m677 (CharacterController_t27 * __this, Vector3_t8  ___motion, MethodInfo* method)
{
	{
		int32_t L_0 = CharacterController_INTERNAL_CALL_Move_m3956(NULL /*static, unused*/, __this, (&___motion), /*hidden argument*/&CharacterController_INTERNAL_CALL_Move_m3956_MethodInfo);
		return L_0;
	}
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" int32_t CharacterController_INTERNAL_CALL_Move_m3956 (Object_t * __this /* static, unused */, CharacterController_t27 * ___self, Vector3_t8 * ___motion, MethodInfo* method)
{
	typedef int32_t (*CharacterController_INTERNAL_CALL_Move_m3956_ftn) (CharacterController_t27 *, Vector3_t8 *);
	static CharacterController_INTERNAL_CALL_Move_m3956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_CALL_Move_m3956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___motion);
}
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern MethodInfo CharacterController_get_isGrounded_m664_MethodInfo;
extern "C" bool CharacterController_get_isGrounded_m664 (CharacterController_t27 * __this, MethodInfo* method)
{
	typedef bool (*CharacterController_get_isGrounded_m664_ftn) (CharacterController_t27 *);
	static CharacterController_get_isGrounded_m664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_isGrounded_m664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_isGrounded()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void CharacterController_INTERNAL_get_velocity_m3957 (CharacterController_t27 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*CharacterController_INTERNAL_get_velocity_m3957_ftn) (CharacterController_t27 *, Vector3_t8 *);
	static CharacterController_INTERNAL_get_velocity_m3957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_get_velocity_m3957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern MethodInfo CharacterController_get_velocity_m678_MethodInfo;
extern "C" Vector3_t8  CharacterController_get_velocity_m678 (CharacterController_t27 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		CharacterController_INTERNAL_get_velocity_m3957(__this, (&V_0), /*hidden argument*/&CharacterController_INTERNAL_get_velocity_m3957_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.CharacterController::get_radius()
extern MethodInfo CharacterController_get_radius_m669_MethodInfo;
extern "C" float CharacterController_get_radius_m669 (CharacterController_t27 * __this, MethodInfo* method)
{
	typedef float (*CharacterController_get_radius_m669_ftn) (CharacterController_t27 *);
	static CharacterController_get_radius_m669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_radius_m669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_radius()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.CharacterController::get_height()
extern MethodInfo CharacterController_get_height_m671_MethodInfo;
extern "C" float CharacterController_get_height_m671 (CharacterController_t27 * __this, MethodInfo* method)
{
	typedef float (*CharacterController_get_height_m671_ftn) (CharacterController_t27 *);
	static CharacterController_get_height_m671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_get_height_m671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::get_height()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t523_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
extern TypeInfo List_1_t751_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
extern Il2CppType List_1_t751_0_0_0;
extern MethodInfo List_1__ctor_m4621_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m3960_MethodInfo;
extern MethodInfo Physics2D_Raycast_m3961_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m3959_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m3962_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m4621_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m3958_MethodInfo;
extern TypeInfo* List_1_t751_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4621_MethodInfo_var;
extern "C" void Physics2D__cctor_m3958 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m3958_init;
	if (!Physics2D__cctor_m3958_init)
	{
		List_1_t751_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t751_0_0_0);
		List_1__ctor_m4621_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4621_GenericMethod);
		Physics2D__cctor_m3958_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t751_il2cpp_TypeInfo_var);
		List_1_t751 * L_0 = (List_1_t751 *)il2cpp_codegen_object_new (List_1_t751_il2cpp_TypeInfo_var);
		List_1__ctor_m4621(L_0, /*hidden argument*/List_1__ctor_m4621_MethodInfo_var);
		((Physics2D_t523_StaticFields*)InitializedTypeInfo(&Physics2D_t523_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3959 (Object_t * __this /* static, unused */, Vector2_t13  ___origin, Vector2_t13  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t526 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t526 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t523_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m3960(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m3960_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3960 (Object_t * __this /* static, unused */, Vector2_t13 * ___origin, Vector2_t13 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t526 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m3960_ftn) (Vector2_t13 *, Vector2_t13 *, float, int32_t, float, float, RaycastHit2D_t526 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m3960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m3960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m2760_MethodInfo;
extern "C" RaycastHit2D_t526  Physics2D_Raycast_m2760 (Object_t * __this /* static, unused */, Vector2_t13  ___origin, Vector2_t13  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t13  L_0 = ___origin;
		Vector2_t13  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t523_il2cpp_TypeInfo));
		RaycastHit2D_t526  L_6 = Physics2D_Raycast_m3961(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m3961_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t526  Physics2D_Raycast_m3961 (Object_t * __this /* static, unused */, Vector2_t13  ___origin, Vector2_t13  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t526  V_0 = {0};
	{
		Vector2_t13  L_0 = ___origin;
		Vector2_t13  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t523_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m3959(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m3959_MethodInfo);
		RaycastHit2D_t526  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m2661_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t525* Physics2D_RaycastAll_m2661 (Object_t * __this /* static, unused */, Vector2_t13  ___origin, Vector2_t13  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t523_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t525* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m3962(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m3962_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t525* Physics2D_INTERNAL_CALL_RaycastAll_m3962 (Object_t * __this /* static, unused */, Vector2_t13 * ___origin, Vector2_t13 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t525* (*Physics2D_INTERNAL_CALL_RaycastAll_m3962_ftn) (Vector2_t13 *, Vector2_t13 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m3962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m3962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t526_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m2662_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m3964_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m3963_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m2665_MethodInfo;
extern "C" Vector2_t13  RaycastHit2D_get_point_m2665 (RaycastHit2D_t526 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m2666_MethodInfo;
extern "C" Vector2_t13  RaycastHit2D_get_normal_m2666 (RaycastHit2D_t526 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m2761_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m2761 (RaycastHit2D_t526 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t527 * RaycastHit2D_get_collider_m2662 (RaycastHit2D_t526 * __this, MethodInfo* method)
{
	{
		Collider2D_t527 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t752 * RaycastHit2D_get_rigidbody_m3963 (RaycastHit2D_t526 * __this, MethodInfo* method)
{
	Rigidbody2D_t752 * G_B3_0 = {0};
	{
		Collider2D_t527 * L_0 = RaycastHit2D_get_collider_m2662(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2662_MethodInfo);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t527 * L_2 = RaycastHit2D_get_collider_m2662(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2662_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t752 * L_3 = Collider2D_get_attachedRigidbody_m3964(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m3964_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t752 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m2663_MethodInfo;
extern "C" Transform_t2 * RaycastHit2D_get_transform_m2663 (RaycastHit2D_t526 * __this, MethodInfo* method)
{
	Rigidbody2D_t752 * V_0 = {0};
	{
		Rigidbody2D_t752 * L_0 = RaycastHit2D_get_rigidbody_m3963(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m3963_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t752 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m642(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t752 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_4 = Component_get_transform_m598(L_3, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t527 * L_5 = RaycastHit2D_get_collider_m2662(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2662_MethodInfo);
		bool L_6 = Object_op_Inequality_m642(NULL /*static, unused*/, L_5, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t527 * L_7 = RaycastHit2D_get_collider_m2662(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2662_MethodInfo);
		NullCheck(L_7);
		Transform_t2 * L_8 = Component_get_transform_m598(L_7, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t2 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t752_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t527_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t752 * Collider2D_get_attachedRigidbody_m3964 (Collider2D_t527 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t752 * (*Collider2D_get_attachedRigidbody_m3964_ftn) (Collider2D_t527 *);
	static Collider2D_get_attachedRigidbody_m3964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m3964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.NavMeshAgent
#include "UnityEngine_UnityEngine_NavMeshAgent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NavMeshAgent_t39_il2cpp_TypeInfo;
// UnityEngine.NavMeshAgent
#include "UnityEngine_UnityEngine_NavMeshAgentMethodDeclarations.h"

extern MethodInfo NavMeshAgent_INTERNAL_get_desiredVelocity_m3966_MethodInfo;
extern MethodInfo NavMeshAgent_INTERNAL_CALL_SetDestination_m3965_MethodInfo;


// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern MethodInfo NavMeshAgent_SetDestination_m722_MethodInfo;
extern "C" bool NavMeshAgent_SetDestination_m722 (NavMeshAgent_t39 * __this, Vector3_t8  ___target, MethodInfo* method)
{
	{
		bool L_0 = NavMeshAgent_INTERNAL_CALL_SetDestination_m3965(NULL /*static, unused*/, __this, (&___target), /*hidden argument*/&NavMeshAgent_INTERNAL_CALL_SetDestination_m3965_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m3965 (Object_t * __this /* static, unused */, NavMeshAgent_t39 * ___self, Vector3_t8 * ___target, MethodInfo* method)
{
	typedef bool (*NavMeshAgent_INTERNAL_CALL_SetDestination_m3965_ftn) (NavMeshAgent_t39 *, Vector3_t8 *);
	static NavMeshAgent_INTERNAL_CALL_SetDestination_m3965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_CALL_SetDestination_m3965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___target);
}
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C" void NavMeshAgent_INTERNAL_get_desiredVelocity_m3966 (NavMeshAgent_t39 * __this, Vector3_t8 * ___value, MethodInfo* method)
{
	typedef void (*NavMeshAgent_INTERNAL_get_desiredVelocity_m3966_ftn) (NavMeshAgent_t39 *, Vector3_t8 *);
	static NavMeshAgent_INTERNAL_get_desiredVelocity_m3966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_get_desiredVelocity_m3966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_desiredVelocity()
extern MethodInfo NavMeshAgent_get_desiredVelocity_m723_MethodInfo;
extern "C" Vector3_t8  NavMeshAgent_get_desiredVelocity_m723 (NavMeshAgent_t39 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		NavMeshAgent_INTERNAL_get_desiredVelocity_m3966(__this, (&V_0), /*hidden argument*/&NavMeshAgent_INTERNAL_get_desiredVelocity_m3966_MethodInfo);
		Vector3_t8  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)
extern MethodInfo NavMeshAgent_set_updatePosition_m721_MethodInfo;
extern "C" void NavMeshAgent_set_updatePosition_m721 (NavMeshAgent_t39 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*NavMeshAgent_set_updatePosition_m721_ftn) (NavMeshAgent_t39 *, bool);
	static NavMeshAgent_set_updatePosition_m721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updatePosition_m721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)
extern MethodInfo NavMeshAgent_set_updateRotation_m720_MethodInfo;
extern "C" void NavMeshAgent_set_updateRotation_m720 (NavMeshAgent_t39 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*NavMeshAgent_set_updateRotation_m720_ftn) (NavMeshAgent_t39 *, bool);
	static NavMeshAgent_set_updateRotation_m720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateRotation_m720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t753_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m3967_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m3967 (AudioConfigurationChangeHandler_t753 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m3968_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m3968 (AudioConfigurationChangeHandler_t753 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m3968((AudioConfigurationChangeHandler_t753 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t753(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m3969_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m3969 (AudioConfigurationChangeHandler_t753 * __this, bool ___deviceWasChanged, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m3970_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m3970 (AudioConfigurationChangeHandler_t753 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t754_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m3971_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m3971 (AudioSettings_t754 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t753 * L_0 = ((AudioSettings_t754_StaticFields*)InitializedTypeInfo(&AudioSettings_t754_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t753 * L_1 = ((AudioSettings_t754_StaticFields*)InitializedTypeInfo(&AudioSettings_t754_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m3968_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMReaderCallback_t755_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m3972_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m3972 (PCMReaderCallback_t755 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m3973_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m3973 (PCMReaderCallback_t755 * __this, SingleU5BU5D_t143* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m3973((PCMReaderCallback_t755 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t143* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t143* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t184_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t755(Il2CppObject* delegate, SingleU5BU5D_t143* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern MethodInfo PCMReaderCallback_BeginInvoke_m3974_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m3974 (PCMReaderCallback_t755 * __this, SingleU5BU5D_t143* ___data, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m3975_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m3975 (PCMReaderCallback_t755 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t756_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m3976_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m3976 (PCMSetPositionCallback_t756 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m3977_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m3977 (PCMSetPositionCallback_t756 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m3977((PCMSetPositionCallback_t756 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t756(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m3978_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m3978 (PCMSetPositionCallback_t756 * __this, int32_t ___position, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m3979_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m3979 (PCMSetPositionCallback_t756 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t26_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t143_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;


// System.Single UnityEngine.AudioClip::get_length()
extern MethodInfo AudioClip_get_length_m1046_MethodInfo;
extern "C" float AudioClip_get_length_m1046 (AudioClip_t26 * __this, MethodInfo* method)
{
	typedef float (*AudioClip_get_length_m1046_ftn) (AudioClip_t26 *);
	static AudioClip_get_length_m1046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m1046_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m3980_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3980 (AudioClip_t26 * __this, SingleU5BU5D_t143* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t755 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t755 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t143* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t143* >::Invoke(&PCMReaderCallback_Invoke_m3973_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m3981_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3981 (AudioClip_t26 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t756 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t756 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m3977_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSource_t28_il2cpp_TypeInfo;
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"
extern MethodInfo AudioSource_Play_m3982_MethodInfo;
extern MethodInfo AudioSource_PlayOneShot_m3983_MethodInfo;


// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern MethodInfo AudioSource_set_volume_m1017_MethodInfo;
extern "C" void AudioSource_set_volume_m1017 (AudioSource_t28 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m1017_ftn) (AudioSource_t28 *, float);
	static AudioSource_set_volume_m1017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m1017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.AudioSource::get_pitch()
extern MethodInfo AudioSource_get_pitch_m1016_MethodInfo;
extern "C" float AudioSource_get_pitch_m1016 (AudioSource_t28 * __this, MethodInfo* method)
{
	typedef float (*AudioSource_get_pitch_m1016_ftn) (AudioSource_t28 *);
	static AudioSource_get_pitch_m1016_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_pitch_m1016_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_pitch()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern MethodInfo AudioSource_set_pitch_m1015_MethodInfo;
extern "C" void AudioSource_set_pitch_m1015 (AudioSource_t28 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_pitch_m1015_ftn) (AudioSource_t28 *, float);
	static AudioSource_set_pitch_m1015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_pitch_m1015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_pitch(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_time(System.Single)
extern MethodInfo AudioSource_set_time_m1047_MethodInfo;
extern "C" void AudioSource_set_time_m1047 (AudioSource_t28 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_time_m1047_ftn) (AudioSource_t28 *, float);
	static AudioSource_set_time_m1047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_time_m1047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern MethodInfo AudioSource_get_clip_m680_MethodInfo;
extern "C" AudioClip_t26 * AudioSource_get_clip_m680 (AudioSource_t28 * __this, MethodInfo* method)
{
	typedef AudioClip_t26 * (*AudioSource_get_clip_m680_ftn) (AudioSource_t28 *);
	static AudioSource_get_clip_m680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern MethodInfo AudioSource_set_clip_m666_MethodInfo;
extern "C" void AudioSource_set_clip_m666 (AudioSource_t28 * __this, AudioClip_t26 * ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m666_ftn) (AudioSource_t28 *, AudioClip_t26 *);
	static AudioSource_set_clip_m666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m3982 (AudioSource_t28 * __this, uint64_t ___delay, MethodInfo* method)
{
	typedef void (*AudioSource_Play_m3982_ftn) (AudioSource_t28 *, uint64_t);
	static AudioSource_Play_m3982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m3982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern MethodInfo AudioSource_Play_m667_MethodInfo;
extern "C" void AudioSource_Play_m667 (AudioSource_t28 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m3982(__this, L_0, /*hidden argument*/&AudioSource_Play_m3982_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
extern MethodInfo AudioSource_Stop_m1064_MethodInfo;
extern "C" void AudioSource_Stop_m1064 (AudioSource_t28 * __this, MethodInfo* method)
{
	typedef void (*AudioSource_Stop_m1064_ftn) (AudioSource_t28 *);
	static AudioSource_Stop_m1064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m1064_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m3983 (AudioSource_t28 * __this, AudioClip_t26 * ___clip, float ___volumeScale, MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m3983_ftn) (AudioSource_t28 *, AudioClip_t26 *, float);
	static AudioSource_PlayOneShot_m3983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m3983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern MethodInfo AudioSource_PlayOneShot_m681_MethodInfo;
extern "C" void AudioSource_PlayOneShot_m681 (AudioSource_t28 * __this, AudioClip_t26 * ___clip, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t26 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m3983(__this, L_0, L_1, /*hidden argument*/&AudioSource_PlayOneShot_m3983_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern MethodInfo AudioSource_set_loop_m1013_MethodInfo;
extern "C" void AudioSource_set_loop_m1013 (AudioSource_t28 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_loop_m1013_ftn) (AudioSource_t28 *, bool);
	static AudioSource_set_loop_m1013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m1013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern MethodInfo AudioSource_set_playOnAwake_m1010_MethodInfo;
extern "C" void AudioSource_set_playOnAwake_m1010 (AudioSource_t28 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_playOnAwake_m1010_ftn) (AudioSource_t28 *, bool);
	static AudioSource_set_playOnAwake_m1010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m1010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
extern MethodInfo AudioSource_set_dopplerLevel_m1014_MethodInfo;
extern "C" void AudioSource_set_dopplerLevel_m1014 (AudioSource_t28 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_dopplerLevel_m1014_ftn) (AudioSource_t28 *, float);
	static AudioSource_set_dopplerLevel_m1014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_m1014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
extern MethodInfo AudioSource_set_minDistance_m1011_MethodInfo;
extern "C" void AudioSource_set_minDistance_m1011 (AudioSource_t28 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_minDistance_m1011_ftn) (AudioSource_t28 *, float);
	static AudioSource_set_minDistance_m1011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_m1011_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
extern MethodInfo AudioSource_set_maxDistance_m1012_MethodInfo;
extern "C" void AudioSource_set_maxDistance_m1012 (AudioSource_t28 * __this, float ___value, MethodInfo* method)
{
	typedef void (*AudioSource_set_maxDistance_m1012_ftn) (AudioSource_t28 *, float);
	static AudioSource_set_maxDistance_m1012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_m1012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t757_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m3984_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m3984 (WebCamDevice_t757 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m3985_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m3985 (WebCamDevice_t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t757_marshal(const WebCamDevice_t757& unmarshaled, WebCamDevice_t757_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t757_marshal_back(const WebCamDevice_t757_marshaled& marshaled, WebCamDevice_t757& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t757_marshal_cleanup(WebCamDevice_t757_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t758_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t760_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m4003_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m4004_MethodInfo;
extern MethodInfo AnimationEvent_get_functionName_m3997_MethodInfo;
extern MethodInfo String_GetHashCode_m4537_MethodInfo;
extern MethodInfo AnimationEvent_get_time_m3999_MethodInfo;
extern MethodInfo Single_GetHashCode_m4535_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m3986_MethodInfo;
extern "C" void AnimationEvent__ctor_m3986 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t91 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t759 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m3987_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m3987 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m3988_MethodInfo;
extern "C" void AnimationEvent_set_data_m3988 (AnimationEvent_t760 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m3989_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m3989 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m3990_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m3990 (AnimationEvent_t760 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m3991_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m3991 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m3992_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m3992 (AnimationEvent_t760 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m3993_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m3993 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m3994_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m3994 (AnimationEvent_t760 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m3995_MethodInfo;
extern "C" Object_t91 * AnimationEvent_get_objectReferenceParameter_m3995 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		Object_t91 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m3996_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m3996 (AnimationEvent_t760 * __this, Object_t91 * ___value, MethodInfo* method)
{
	{
		Object_t91 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m3997 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m3998_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m3998 (AnimationEvent_t760 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m3999 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m4000_MethodInfo;
extern "C" void AnimationEvent_set_time_m4000 (AnimationEvent_t760 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m4001_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m4001 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m4002_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m4002 (AnimationEvent_t760 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m4003 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m4004 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m4005_MethodInfo;
extern "C" AnimationState_t759 * AnimationEvent_get_animationState_m4005 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m4003(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m4003_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral312, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t759 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m4006_MethodInfo;
extern "C" AnimatorStateInfo_t198  AnimationEvent_get_animatorStateInfo_m4006 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m4004(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m4004_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral313, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t198  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m4007_MethodInfo;
extern "C" AnimatorClipInfo_t761  AnimationEvent_get_animatorClipInfo_m4007 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m4004(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m4004_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral314, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t761  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern MethodInfo AnimationEvent_GetHash_m4008_MethodInfo;
extern "C" int32_t AnimationEvent_GetHash_m4008 (AnimationEvent_t760 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m3997(__this, /*hidden argument*/&AnimationEvent_get_functionName_m3997_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m4537_MethodInfo, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m3999(__this, /*hidden argument*/&AnimationEvent_get_time_m3999_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m4535((&V_1), /*hidden argument*/&Single_GetHashCode_m4535_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t197_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern MethodInfo Keyframe__ctor_m694_MethodInfo;
extern "C" void Keyframe__ctor_m694 (Keyframe_t197 * __this, float ___time, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		__this->___m_InTangent_2 = (0.0f);
		__this->___m_OutTangent_3 = (0.0f);
		return;
	}
}
// System.Single UnityEngine.Keyframe::get_time()
extern MethodInfo Keyframe_get_time_m942_MethodInfo;
extern "C" float Keyframe_get_time_m942 (Keyframe_t197 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t33_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern MethodInfo AnimationCurve_GetKey_Internal_m4012_MethodInfo;
extern MethodInfo AnimationCurve_Init_m4013_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m4010_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m695_MethodInfo;
extern "C" void AnimationCurve__ctor_m695 (AnimationCurve_t33 * __this, KeyframeU5BU5D_t196* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		KeyframeU5BU5D_t196* L_0 = ___keys;
		AnimationCurve_Init_m4013(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m4013_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m4009_MethodInfo;
extern "C" void AnimationCurve__ctor_m4009 (AnimationCurve_t33 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		AnimationCurve_Init_m4013(__this, (KeyframeU5BU5D_t196*)(KeyframeU5BU5D_t196*)NULL, /*hidden argument*/&AnimationCurve_Init_m4013_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4010 (AnimationCurve_t33 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m4010_ftn) (AnimationCurve_t33 *);
	static AnimationCurve_Cleanup_m4010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m4010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m4011_MethodInfo;
extern "C" void AnimationCurve_Finalize_m4011 (AnimationCurve_t33 * __this, MethodInfo* method)
{
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m4010(__this, /*hidden argument*/&AnimationCurve_Cleanup_m4010_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1068(__this, /*hidden argument*/&Object_Finalize_m1068_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern MethodInfo AnimationCurve_Evaluate_m704_MethodInfo;
extern "C" float AnimationCurve_Evaluate_m704 (AnimationCurve_t33 * __this, float ___time, MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m704_ftn) (AnimationCurve_t33 *, float);
	static AnimationCurve_Evaluate_m704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern MethodInfo AnimationCurve_get_Item_m941_MethodInfo;
extern "C" Keyframe_t197  AnimationCurve_get_Item_m941 (AnimationCurve_t33 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Keyframe_t197  L_1 = AnimationCurve_GetKey_Internal_m4012(__this, L_0, /*hidden argument*/&AnimationCurve_GetKey_Internal_m4012_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern MethodInfo AnimationCurve_get_length_m940_MethodInfo;
extern "C" int32_t AnimationCurve_get_length_m940 (AnimationCurve_t33 * __this, MethodInfo* method)
{
	typedef int32_t (*AnimationCurve_get_length_m940_ftn) (AnimationCurve_t33 *);
	static AnimationCurve_get_length_m940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_get_length_m940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::get_length()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t197  AnimationCurve_GetKey_Internal_m4012 (AnimationCurve_t33 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Keyframe_t197  (*AnimationCurve_GetKey_Internal_m4012_ftn) (AnimationCurve_t33 *, int32_t);
	static AnimationCurve_GetKey_Internal_m4012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_GetKey_Internal_m4012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4013 (AnimationCurve_t33 * __this, KeyframeU5BU5D_t196* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m4013_ftn) (AnimationCurve_t33 *, KeyframeU5BU5D_t196*);
	static AnimationCurve_Init_m4013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m4013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t33_marshal(const AnimationCurve_t33& unmarshaled, AnimationCurve_t33_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t33_marshal_back(const AnimationCurve_t33_marshaled& marshaled, AnimationCurve_t33& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t33_marshal_cleanup(AnimationCurve_t33_marshaled& marshaled)
{
}
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayMode_t762_il2cpp_TypeInfo;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayModeMethodDeclarations.h"



// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t763_il2cpp_TypeInfo;
// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_EnumeratorMethodDeclarations.h"

// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
extern MethodInfo Animation_GetStateAtIndex_m4020_MethodInfo;
extern MethodInfo Animation_GetStateCount_m4021_MethodInfo;


// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern MethodInfo Enumerator__ctor_m4014_MethodInfo;
extern "C" void Enumerator__ctor_m4014 (Enumerator_t763 * __this, Animation_t213 * ___outer, MethodInfo* method)
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Animation_t213 * L_0 = ___outer;
		__this->___m_Outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m4015_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m4015 (Enumerator_t763 * __this, MethodInfo* method)
{
	{
		Animation_t213 * L_0 = (__this->___m_Outer_0);
		int32_t L_1 = (__this->___m_CurrentIndex_1);
		NullCheck(L_0);
		AnimationState_t759 * L_2 = Animation_GetStateAtIndex_m4020(L_0, L_1, /*hidden argument*/&Animation_GetStateAtIndex_m4020_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m4016_MethodInfo;
extern "C" bool Enumerator_MoveNext_m4016 (Enumerator_t763 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Animation_t213 * L_0 = (__this->___m_Outer_0);
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m4021(L_0, /*hidden argument*/&Animation_GetStateCount_m4021_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___m_CurrentIndex_1);
		__this->___m_CurrentIndex_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = (__this->___m_CurrentIndex_1);
		int32_t L_4 = V_0;
		return ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animation_t213_il2cpp_TypeInfo;

extern MethodInfo Animation_Play_m4017_MethodInfo;
extern MethodInfo Animation_PlayDefaultAnimation_m4018_MethodInfo;


// System.Boolean UnityEngine.Animation::Play()
extern MethodInfo Animation_Play_m920_MethodInfo;
extern "C" bool Animation_Play_m920 (Animation_t213 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = Animation_Play_m4017(__this, L_0, /*hidden argument*/&Animation_Play_m4017_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m4017 (Animation_t213 * __this, int32_t ___mode, MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		bool L_1 = Animation_PlayDefaultAnimation_m4018(__this, L_0, /*hidden argument*/&Animation_PlayDefaultAnimation_m4018_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m4018 (Animation_t213 * __this, int32_t ___mode, MethodInfo* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_m4018_ftn) (Animation_t213 *, int32_t);
	static Animation_PlayDefaultAnimation_m4018_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_m4018_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, ___mode);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern MethodInfo Animation_GetEnumerator_m4019_MethodInfo;
extern "C" Object_t * Animation_GetEnumerator_m4019 (Animation_t213 * __this, MethodInfo* method)
{
	{
		Enumerator_t763 * L_0 = (Enumerator_t763 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t763_il2cpp_TypeInfo));
		Enumerator__ctor_m4014(L_0, __this, /*hidden argument*/&Enumerator__ctor_m4014_MethodInfo);
		return L_0;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t759 * Animation_GetStateAtIndex_m4020 (Animation_t213 * __this, int32_t ___index, MethodInfo* method)
{
	typedef AnimationState_t759 * (*Animation_GetStateAtIndex_m4020_ftn) (Animation_t213 *, int32_t);
	static Animation_GetStateAtIndex_m4020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m4020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m4021 (Animation_t213 * __this, MethodInfo* method)
{
	typedef int32_t (*Animation_GetStateCount_m4021_ftn) (Animation_t213 *);
	static Animation_GetStateCount_m4021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m4021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t759_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t761_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t198_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m1329_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m743_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m743 (AnimatorStateInfo_t198 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m1329(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m1329_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m4022_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m4022 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m4023_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m4023 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m4024_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m4024 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m740_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m740 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m4025_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m4025 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m4026_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m4026 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m4027_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m4027 (AnimatorStateInfo_t198 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m1329(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m1329_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m4028_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m4028 (AnimatorStateInfo_t198 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorTransitionInfo_t765_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m4029_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m4029 (AnimatorTransitionInfo_t765 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m1329(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m1329_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m1329(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m1329_MethodInfo);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsUserName_m4030_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m4030 (AnimatorTransitionInfo_t765 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m1329(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m1329_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m4031_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m4031 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m4032_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m4032 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m4033_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m4033 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m4034_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m4034 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m4035_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m4035 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m4036_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m4036 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m4037_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m4037 (AnimatorTransitionInfo_t765 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t765_marshal(const AnimatorTransitionInfo_t765& unmarshaled, AnimatorTransitionInfo_t765_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t765_marshal_back(const AnimatorTransitionInfo_t765_marshaled& marshaled, AnimatorTransitionInfo_t765& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t765_marshal_cleanup(AnimatorTransitionInfo_t765_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t42_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetFloatString_m4038_MethodInfo;
extern MethodInfo Animator_SetFloatStringDamp_m4045_MethodInfo;
extern MethodInfo Animator_GetBoolID_m4041_MethodInfo;
extern MethodInfo Animator_SetBoolString_m4039_MethodInfo;
extern MethodInfo Animator_SetBoolID_m4040_MethodInfo;
extern MethodInfo Animator_SetIntegerString_m4042_MethodInfo;
extern MethodInfo Animator_SetTriggerString_m4043_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m4044_MethodInfo;


// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern MethodInfo Animator_SetFloat_m738_MethodInfo;
extern "C" void Animator_SetFloat_m738 (Animator_t42 * __this, String_t* ___name, float ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		Animator_SetFloatString_m4038(__this, L_0, L_1, /*hidden argument*/&Animator_SetFloatString_m4038_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern MethodInfo Animator_SetFloat_m736_MethodInfo;
extern "C" void Animator_SetFloat_m736 (Animator_t42 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		float L_2 = ___dampTime;
		float L_3 = ___deltaTime;
		Animator_SetFloatStringDamp_m4045(__this, L_0, L_1, L_2, L_3, /*hidden argument*/&Animator_SetFloatStringDamp_m4045_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern MethodInfo Animator_GetBool_m1328_MethodInfo;
extern "C" bool Animator_GetBool_m1328 (Animator_t42 * __this, int32_t ___id, MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		bool L_1 = Animator_GetBoolID_m4041(__this, L_0, /*hidden argument*/&Animator_GetBoolID_m4041_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern MethodInfo Animator_SetBool_m737_MethodInfo;
extern "C" void Animator_SetBool_m737 (Animator_t42 * __this, String_t* ___name, bool ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		Animator_SetBoolString_m4039(__this, L_0, L_1, /*hidden argument*/&Animator_SetBoolString_m4039_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern MethodInfo Animator_SetBool_m1332_MethodInfo;
extern "C" void Animator_SetBool_m1332 (Animator_t42 * __this, int32_t ___id, bool ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___id;
		bool L_1 = ___value;
		Animator_SetBoolID_m4040(__this, L_0, L_1, /*hidden argument*/&Animator_SetBoolID_m4040_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern MethodInfo Animator_SetInteger_m1038_MethodInfo;
extern "C" void Animator_SetInteger_m1038 (Animator_t42 * __this, String_t* ___name, int32_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		Animator_SetIntegerString_m4042(__this, L_0, L_1, /*hidden argument*/&Animator_SetIntegerString_m4042_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m2974_MethodInfo;
extern "C" void Animator_SetTrigger_m2974 (Animator_t42 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m4043(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m4043_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m2973_MethodInfo;
extern "C" void Animator_ResetTrigger_m2973 (Animator_t42 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m4044(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m4044_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern MethodInfo Animator_get_deltaPosition_m745_MethodInfo;
extern "C" Vector3_t8  Animator_get_deltaPosition_m745 (Animator_t42 * __this, MethodInfo* method)
{
	typedef Vector3_t8  (*Animator_get_deltaPosition_m745_ftn) (Animator_t42 *);
	static Animator_get_deltaPosition_m745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_m745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern MethodInfo Animator_set_applyRootMotion_m744_MethodInfo;
extern "C" void Animator_set_applyRootMotion_m744 (Animator_t42 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Animator_set_applyRootMotion_m744_ftn) (Animator_t42 *, bool);
	static Animator_set_applyRootMotion_m744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_m744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern MethodInfo Animator_GetCurrentAnimatorStateInfo_m739_MethodInfo;
extern "C" AnimatorStateInfo_t198  Animator_GetCurrentAnimatorStateInfo_m739 (Animator_t42 * __this, int32_t ___layerIndex, MethodInfo* method)
{
	typedef AnimatorStateInfo_t198  (*Animator_GetCurrentAnimatorStateInfo_m739_ftn) (Animator_t42 *, int32_t);
	static Animator_GetCurrentAnimatorStateInfo_m739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorStateInfo_m739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern MethodInfo Animator_IsInTransition_m1327_MethodInfo;
extern "C" bool Animator_IsInTransition_m1327 (Animator_t42 * __this, int32_t ___layerIndex, MethodInfo* method)
{
	typedef bool (*Animator_IsInTransition_m1327_ftn) (Animator_t42 *, int32_t);
	static Animator_IsInTransition_m1327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_m1327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	return _il2cpp_icall_func(__this, ___layerIndex);
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern MethodInfo Animator_set_speed_m742_MethodInfo;
extern "C" void Animator_set_speed_m742 (Animator_t42 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Animator_set_speed_m742_ftn) (Animator_t42 *, float);
	static Animator_set_speed_m742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m2972_MethodInfo;
extern "C" RuntimeAnimatorController_t550 * Animator_get_runtimeAnimatorController_m2972 (Animator_t42 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t550 * (*Animator_get_runtimeAnimatorController_m2972_ftn) (Animator_t42 *);
	static Animator_get_runtimeAnimatorController_m2972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m1329 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m1329_ftn) (String_t*);
	static Animator_StringToHash_m1329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m1329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m4038 (Animator_t42 * __this, String_t* ___name, float ___value, MethodInfo* method)
{
	typedef void (*Animator_SetFloatString_m4038_ftn) (Animator_t42 *, String_t*, float);
	static Animator_SetFloatString_m4038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m4038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m4039 (Animator_t42 * __this, String_t* ___name, bool ___value, MethodInfo* method)
{
	typedef void (*Animator_SetBoolString_m4039_ftn) (Animator_t42 *, String_t*, bool);
	static Animator_SetBoolString_m4039_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m4039_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" void Animator_SetBoolID_m4040 (Animator_t42 * __this, int32_t ___id, bool ___value, MethodInfo* method)
{
	typedef void (*Animator_SetBoolID_m4040_ftn) (Animator_t42 *, int32_t, bool);
	static Animator_SetBoolID_m4040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_m4040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id, ___value);
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" bool Animator_GetBoolID_m4041 (Animator_t42 * __this, int32_t ___id, MethodInfo* method)
{
	typedef bool (*Animator_GetBoolID_m4041_ftn) (Animator_t42 *, int32_t);
	static Animator_GetBoolID_m4041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_m4041_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	return _il2cpp_icall_func(__this, ___id);
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" void Animator_SetIntegerString_m4042 (Animator_t42 * __this, String_t* ___name, int32_t ___value, MethodInfo* method)
{
	typedef void (*Animator_SetIntegerString_m4042_ftn) (Animator_t42 *, String_t*, int32_t);
	static Animator_SetIntegerString_m4042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m4042_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m4043 (Animator_t42 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m4043_ftn) (Animator_t42 *, String_t*);
	static Animator_SetTriggerString_m4043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m4043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m4044 (Animator_t42 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m4044_ftn) (Animator_t42 *, String_t*);
	static Animator_ResetTriggerString_m4044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m4044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloatStringDamp_m4045 (Animator_t42 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, MethodInfo* method)
{
	typedef void (*Animator_SetFloatStringDamp_m4045_ftn) (Animator_t42 *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m4045_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m4045_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name, ___value, ___dampTime, ___deltaTime);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t766_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t766_marshal(const SkeletonBone_t766& unmarshaled, SkeletonBone_t766_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t766_marshal_back(const SkeletonBone_t766_marshaled& marshaled, SkeletonBone_t766& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t766_marshal_cleanup(SkeletonBone_t766_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t767_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t768_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m4046_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m4046 (HumanBone_t768 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m4047_MethodInfo;
extern "C" void HumanBone_set_boneName_m4047 (HumanBone_t768 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m4048_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m4048 (HumanBone_t768 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m4049_MethodInfo;
extern "C" void HumanBone_set_humanName_m4049 (HumanBone_t768 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t768_marshal(const HumanBone_t768& unmarshaled, HumanBone_t768_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t768_marshal_back(const HumanBone_t768_marshaled& marshaled, HumanBone_t768& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t768_marshal_cleanup(HumanBone_t768_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t550_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t559_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t591_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t592_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIText_t111_il2cpp_TypeInfo;
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"



// System.Void UnityEngine.GUIText::set_text(System.String)
extern MethodInfo GUIText_set_text_m973_MethodInfo;
extern "C" void GUIText_set_text_m973 (GUIText_t111 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIText_set_text_m973_ftn) (GUIText_t111 *, String_t*);
	static GUIText_set_text_m973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_set_text_m973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t769_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

extern TypeInfo Vector2_t13_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m2724_MethodInfo;
extern MethodInfo Rect_get_height_m2725_MethodInfo;
extern MethodInfo Rect_get_x_m2729_MethodInfo;
extern MethodInfo Rect_get_y_m2730_MethodInfo;
extern MethodInfo Vector2__ctor_m682_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m4058_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m4061_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m4059_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m4060_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m4050_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m4050 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m4051_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m4051 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m2724(L_0, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m4052_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m4052 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m2725(L_0, /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m4053_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m4053 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m4054_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m4054 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t260 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2730(L_1, /*hidden argument*/&Rect_get_y_m2730_MethodInfo);
		Rect_t260 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m2725(L_3, /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m4055_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m4055 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t260 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m2730(L_1, /*hidden argument*/&Rect_get_y_m2730_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m4056_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m4056 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m4057_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m4057 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		Rect_t260 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m2724(L_2, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvBottomLeftUnFlipped_m4058 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		Rect_t260 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2730(L_2, /*hidden argument*/&Rect_get_y_m2730_MethodInfo);
		Vector2_t13  L_4 = {0};
		Vector2__ctor_m682(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvBottomRightUnFlipped_m4059 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		Rect_t260 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2724(L_2, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		Rect_t260 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2730(L_4, /*hidden argument*/&Rect_get_y_m2730_MethodInfo);
		Vector2_t13  L_6 = {0};
		Vector2__ctor_m682(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvTopRightUnFlipped_m4060 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		Rect_t260 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m2724(L_2, /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		Rect_t260 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m2730(L_4, /*hidden argument*/&Rect_get_y_m2730_MethodInfo);
		Rect_t260 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m2725(L_6, /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		Vector2_t13  L_8 = {0};
		Vector2__ctor_m682(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvTopLeftUnFlipped_m4061 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	{
		Rect_t260 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m2729(L_0, /*hidden argument*/&Rect_get_x_m2729_MethodInfo);
		Rect_t260 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m2730(L_2, /*hidden argument*/&Rect_get_y_m2730_MethodInfo);
		Rect_t260 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m2725(L_4, /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		Vector2_t13  L_6 = {0};
		Vector2__ctor_m682(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m4062_MethodInfo;
extern "C" Vector2_t13  CharacterInfo_get_uvBottomLeft_m4062 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m4058(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m4058_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m4058(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m4058_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m4063_MethodInfo;
extern "C" Vector2_t13  CharacterInfo_get_uvBottomRight_m4063 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m4061(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m4061_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m4059(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m4059_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m4064_MethodInfo;
extern "C" Vector2_t13  CharacterInfo_get_uvTopRight_m4064 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m4060(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m4060_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m4060(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m4060_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m4065_MethodInfo;
extern "C" Vector2_t13  CharacterInfo_get_uvTopLeft_m4065 (CharacterInfo_t769 * __this, MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m4059(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m4059_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m4061(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m4061_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t769_marshal(const CharacterInfo_t769& unmarshaled, CharacterInfo_t769_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t769_marshal_back(const CharacterInfo_t769_marshaled& marshaled, CharacterInfo_t769& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t769_marshal_cleanup(CharacterInfo_t769_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t770_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m4066_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m4066 (FontTextureRebuildCallback_t770 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m4067_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m4067 (FontTextureRebuildCallback_t770 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m4067((FontTextureRebuildCallback_t770 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t770(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m4068_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m4068 (FontTextureRebuildCallback_t770 * __this, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m4069_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m4069 (FontTextureRebuildCallback_t770 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t388_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t530_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
extern Il2CppType Action_1_t530_0_0_0;
extern MethodInfo Action_1_Invoke_m4622_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m4622_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m2704_MethodInfo;
extern TypeInfo* Action_1_t530_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2704 (Object_t * __this /* static, unused */, Action_1_t530 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m2704_init;
	if (!Font_add_textureRebuilt_m2704_init)
	{
		Action_1_t530_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t530_0_0_0);
		Font_add_textureRebuilt_m2704_init = true;
	}
	{
		Action_1_t530 * L_0 = ((Font_t388_StaticFields*)InitializedTypeInfo(&Font_t388_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t530 * L_1 = ___value;
		Delegate_t287 * L_2 = Delegate_Combine_m1268(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1268_MethodInfo);
		((Font_t388_StaticFields*)InitializedTypeInfo(&Font_t388_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t530 *)Castclass(L_2, Action_1_t530_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m4070_MethodInfo;
extern TypeInfo* Action_1_t530_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m4070 (Object_t * __this /* static, unused */, Action_1_t530 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m4070_init;
	if (!Font_remove_textureRebuilt_m4070_init)
	{
		Action_1_t530_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t530_0_0_0);
		Font_remove_textureRebuilt_m4070_init = true;
	}
	{
		Action_1_t530 * L_0 = ((Font_t388_StaticFields*)InitializedTypeInfo(&Font_t388_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t530 * L_1 = ___value;
		Delegate_t287 * L_2 = Delegate_Remove_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1269_MethodInfo);
		((Font_t388_StaticFields*)InitializedTypeInfo(&Font_t388_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t530 *)Castclass(L_2, Action_1_t530_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m2992_MethodInfo;
extern "C" Material_t75 * Font_get_material_m2992 (Font_t388 * __this, MethodInfo* method)
{
	typedef Material_t75 * (*Font_get_material_m2992_ftn) (Font_t388 *);
	static Font_get_material_m2992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m2858_MethodInfo;
extern "C" bool Font_HasCharacter_m2858 (Font_t388 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2858_ftn) (Font_t388 *, uint16_t);
	static Font_HasCharacter_m2858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m4071_MethodInfo;
extern MethodInfo* Action_1_Invoke_m4622_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m4071 (Object_t * __this /* static, unused */, Font_t388 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m4071_init;
	if (!Font_InvokeTextureRebuilt_Internal_m4071_init)
	{
		Action_1_Invoke_m4622_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m4622_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m4071_init = true;
	}
	Action_1_t530 * V_0 = {0};
	{
		Action_1_t530 * L_0 = ((Font_t388_StaticFields*)InitializedTypeInfo(&Font_t388_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t530 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t530 * L_2 = V_0;
		Font_t388 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t388 * >::Invoke(Action_1_Invoke_m4622_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t388 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t770 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t388 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t770 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m4067_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m2994_MethodInfo;
extern "C" bool Font_get_dynamic_m2994 (Font_t388 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2994_ftn) (Font_t388 *);
	static Font_get_dynamic_m2994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m2996_MethodInfo;
extern "C" int32_t Font_get_fontSize_m2996 (Font_t388 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2996_ftn) (Font_t388 *);
	static Font_get_fontSize_m2996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t544_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t542_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t434_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
extern TypeInfo Mathf_t186_il2cpp_TypeInfo;
extern TypeInfo List_1_t398_il2cpp_TypeInfo;
extern TypeInfo List_1_t771_il2cpp_TypeInfo;
extern TypeInfo List_1_t772_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t466_il2cpp_TypeInfo;
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern Il2CppType List_1_t398_0_0_0;
extern Il2CppType List_1_t771_0_0_0;
extern Il2CppType List_1_t772_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m2871_MethodInfo;
extern MethodInfo String_get_Length_m2828_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m4078_MethodInfo;
extern MethodInfo Mathf_Max_m2863_MethodInfo;
extern MethodInfo Mathf_Min_m2865_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m4090_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m4088_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m4089_MethodInfo;
extern MethodInfo TextGenerator__ctor_m2990_MethodInfo;
extern MethodInfo List_1__ctor_m4623_MethodInfo;
extern MethodInfo List_1__ctor_m4624_MethodInfo;
extern MethodInfo List_1__ctor_m4625_MethodInfo;
extern MethodInfo TextGenerator_Init_m4073_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m4074_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m4076_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m4082_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m4084_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m4079_MethodInfo;
extern MethodInfo TextGenerator_Populate_m2872_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m2874_MethodInfo;
extern MethodInfo String_op_Equality_m751_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m4458_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m4091_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m4087_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m4075_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m4623_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m4624_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m4625_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m2823_MethodInfo;
extern "C" void TextGenerator__ctor_m2823 (TextGenerator_t434 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m2990(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m2990_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t398_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t771_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t772_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m4623_MethodInfo_var;
extern MethodInfo* List_1__ctor_m4624_MethodInfo_var;
extern MethodInfo* List_1__ctor_m4625_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2990 (TextGenerator_t434 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m2990_init;
	if (!TextGenerator__ctor_m2990_init)
	{
		List_1_t398_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t398_0_0_0);
		List_1_t771_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t771_0_0_0);
		List_1_t772_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t772_0_0_0);
		List_1__ctor_m4623_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4623_GenericMethod);
		List_1__ctor_m4624_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4624_GenericMethod);
		List_1__ctor_m4625_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m4625_GenericMethod);
		TextGenerator__ctor_m2990_init = true;
	}
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t398_il2cpp_TypeInfo_var);
		List_1_t398 * L_1 = (List_1_t398 *)il2cpp_codegen_object_new (List_1_t398_il2cpp_TypeInfo_var);
		List_1__ctor_m4623(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m4623_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t771_il2cpp_TypeInfo_var);
		List_1_t771 * L_3 = (List_1_t771 *)il2cpp_codegen_object_new (List_1_t771_il2cpp_TypeInfo_var);
		List_1__ctor_m4624(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m4624_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t772_il2cpp_TypeInfo_var);
		List_1_t772 * L_4 = (List_1_t772 *)il2cpp_codegen_object_new (List_1_t772_il2cpp_TypeInfo_var);
		List_1__ctor_m4625(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m4625_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m4073(__this, /*hidden argument*/&TextGenerator_Init_m4073_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m4072_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m4072 (TextGenerator_t434 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m4074(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m4074_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m4073 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m4073_ftn) (TextGenerator_t434 *);
	static TextGenerator_Init_m4073_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m4073_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m4074 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m4074_ftn) (TextGenerator_t434 *);
	static TextGenerator_Dispose_cpp_m4074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m4074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m4075 (TextGenerator_t434 * __this, String_t* ___str, Font_t388 * ___font, Color_t79  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t13  ___extents, Vector2_t13  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t388 * L_1 = ___font;
		Color_t79  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m4076(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m4076_MethodInfo);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m4076 (TextGenerator_t434 * __this, String_t* ___str, Font_t388 * ___font, Color_t79  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t388 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077 (Object_t * __this /* static, unused */, TextGenerator_t434 * ___self, String_t* ___str, Font_t388 * ___font, Color_t79 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077_ftn) (TextGenerator_t434 *, String_t*, Font_t388 *, Color_t79 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4077_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t260  TextGenerator_get_rectExtents_m2874 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef Rect_t260  (*TextGenerator_get_rectExtents_m2874_ftn) (TextGenerator_t434 *);
	static TextGenerator_get_rectExtents_m2874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m2874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m4078 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m4078_ftn) (TextGenerator_t434 *);
	static TextGenerator_get_vertexCount_m4078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m4078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m4079 (TextGenerator_t434 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m4079_ftn) (TextGenerator_t434 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m4079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m4079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m4080_MethodInfo;
extern "C" UIVertexU5BU5D_t433* TextGenerator_GetVerticesArray_m4080 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t433* (*TextGenerator_GetVerticesArray_m4080_ftn) (TextGenerator_t434 *);
	static TextGenerator_GetVerticesArray_m4080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m4080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m4081_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m4081 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m4081_ftn) (TextGenerator_t434 *);
	static TextGenerator_get_characterCount_m4081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m4081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m2851_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2851 (TextGenerator_t434 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2828(L_2, /*hidden argument*/&String_get_Length_m2828_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m4078(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m4078_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m2863(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m2863_MethodInfo);
		int32_t L_6 = Mathf_Min_m2865(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m2865_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m4082 (TextGenerator_t434 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m4082_ftn) (TextGenerator_t434 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m4082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m4082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m4083_MethodInfo;
extern "C" UICharInfoU5BU5D_t773* TextGenerator_GetCharactersArray_m4083 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t773* (*TextGenerator_GetCharactersArray_m4083_ftn) (TextGenerator_t434 *);
	static TextGenerator_GetCharactersArray_m4083_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m4083_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m2850_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m2850 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2850_ftn) (TextGenerator_t434 *);
	static TextGenerator_get_lineCount_m2850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m4084 (TextGenerator_t434 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m4084_ftn) (TextGenerator_t434 *, Object_t *);
	static TextGenerator_GetLinesInternal_m4084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m4084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m4085_MethodInfo;
extern "C" UILineInfoU5BU5D_t774* TextGenerator_GetLinesArray_m4085 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t774* (*TextGenerator_GetLinesArray_m4085_ftn) (TextGenerator_t434 *);
	static TextGenerator_GetLinesArray_m4085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m4085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m2891_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2891 (TextGenerator_t434 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2891_ftn) (TextGenerator_t434 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m4086_MethodInfo;
extern "C" void TextGenerator_Finalize_m4086 (TextGenerator_t434 * __this, MethodInfo* method)
{
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1068(__this, /*hidden argument*/&Object_Finalize_m1068_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t466  TextGenerator_ValidatedSettings_m4087 (TextGenerator_t434 * __this, TextGenerationSettings_t466  ___settings, MethodInfo* method)
{
	{
		Font_t388 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t388 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2994(L_2, /*hidden argument*/&Font_get_dynamic_m2994_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t466  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m715(NULL /*static, unused*/, (String_t*) &_stringLiteral315, /*hidden argument*/&Debug_LogWarning_m715_MethodInfo);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m715(NULL /*static, unused*/, (String_t*) &_stringLiteral316, /*hidden argument*/&Debug_LogWarning_m715_MethodInfo);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t466  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m2999_MethodInfo;
extern "C" void TextGenerator_Invalidate_m2999 (TextGenerator_t434 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m4088 (TextGenerator_t434 * __this, List_1_t771 * ___characters, MethodInfo* method)
{
	{
		List_1_t771 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m4082(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m4082_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m4089 (TextGenerator_t434 * __this, List_1_t772 * ___lines, MethodInfo* method)
{
	{
		List_1_t772 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m4084(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m4084_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m4090 (TextGenerator_t434 * __this, List_1_t398 * ___vertices, MethodInfo* method)
{
	{
		List_1_t398 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m4079(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m4079_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m2997_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m2997 (TextGenerator_t434 * __this, String_t* ___str, TextGenerationSettings_t466  ___settings, MethodInfo* method)
{
	Rect_t260  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t466  L_1 = ___settings;
		TextGenerator_Populate_m2872(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2872_MethodInfo);
		Rect_t260  L_2 = TextGenerator_get_rectExtents_m2874(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2874_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2724((&V_0), /*hidden argument*/&Rect_get_width_m2724_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m2998_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m2998 (TextGenerator_t434 * __this, String_t* ___str, TextGenerationSettings_t466  ___settings, MethodInfo* method)
{
	Rect_t260  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t466  L_1 = ___settings;
		TextGenerator_Populate_m2872(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2872_MethodInfo);
		Rect_t260  L_2 = TextGenerator_get_rectExtents_m2874(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2874_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m2725((&V_0), /*hidden argument*/&Rect_get_height_m2725_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2872 (TextGenerator_t434 * __this, String_t* ___str, TextGenerationSettings_t466  ___settings, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m751(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t466  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m4458((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m4458_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t466  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m4091(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m4091_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m4091 (TextGenerator_t434 * __this, String_t* ___str, TextGenerationSettings_t466  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t466  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t466  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t466  L_2 = ___settings;
		TextGenerationSettings_t466  L_3 = TextGenerator_ValidatedSettings_m4087(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m4087_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t388 * L_5 = ((&V_0)->___font_0);
		Color_t79  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t13  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t13  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m4075(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/&TextGenerator_Populate_Internal_m4075_MethodInfo);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m3000_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m3000 (TextGenerator_t434 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t398 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m4090(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m4090_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t398 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m2852_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m2852 (TextGenerator_t434 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t771 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m4088(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m4088_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t771 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m2848_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m2848 (TextGenerator_t434 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t772 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m4089(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m4089_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t772 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t775_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t528_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m2682_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m2682 (WillRenderCanvases_t528 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m4092_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m4092 (WillRenderCanvases_t528 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m4092((WillRenderCanvases_t528 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t528(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m4093_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m4093 (WillRenderCanvases_t528 * __this, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m4094_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m4094 (WillRenderCanvases_t528 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t289_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

extern MethodInfo Canvas_SendWillRenderCanvases_m4096_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m2683_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m2683 (Object_t * __this /* static, unused */, WillRenderCanvases_t528 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t528 * L_0 = ((Canvas_t289_StaticFields*)InitializedTypeInfo(&Canvas_t289_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t528 * L_1 = ___value;
		Delegate_t287 * L_2 = Delegate_Combine_m1268(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1268_MethodInfo);
		((Canvas_t289_StaticFields*)InitializedTypeInfo(&Canvas_t289_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t528 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t528_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m4095_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m4095 (Object_t * __this /* static, unused */, WillRenderCanvases_t528 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t528 * L_0 = ((Canvas_t289_StaticFields*)InitializedTypeInfo(&Canvas_t289_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t528 * L_1 = ___value;
		Delegate_t287 * L_2 = Delegate_Remove_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1269_MethodInfo);
		((Canvas_t289_StaticFields*)InitializedTypeInfo(&Canvas_t289_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t528 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t528_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m2753_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m2753 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2753_ftn) (Canvas_t289 *);
	static Canvas_get_renderMode_m2753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m3020_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m3020 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m3020_ftn) (Canvas_t289 *);
	static Canvas_get_isRootCanvas_m3020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m3020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m2756_MethodInfo;
extern "C" Camera_t19 * Canvas_get_worldCamera_m2756 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef Camera_t19 * (*Canvas_get_worldCamera_m2756_ftn) (Canvas_t289 *);
	static Canvas_get_worldCamera_m2756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m2995_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m2995 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2995_ftn) (Canvas_t289 *);
	static Canvas_get_scaleFactor_m2995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m3023_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m3023 (Canvas_t289 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m3023_ftn) (Canvas_t289 *, float);
	static Canvas_set_scaleFactor_m3023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m3023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m2783_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m2783 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2783_ftn) (Canvas_t289 *);
	static Canvas_get_referencePixelsPerUnit_m2783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m3024_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m3024 (Canvas_t289 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m3024_ftn) (Canvas_t289 *, float);
	static Canvas_set_referencePixelsPerUnit_m3024_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m3024_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m2735_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m2735 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2735_ftn) (Canvas_t289 *);
	static Canvas_get_pixelPerfect_m2735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m2755_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m2755 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2755_ftn) (Canvas_t289 *);
	static Canvas_get_renderOrder_m2755_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2755_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m2754_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m2754 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2754_ftn) (Canvas_t289 *);
	static Canvas_get_sortingOrder_m2754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern MethodInfo Canvas_get_cachedSortingLayerValue_m2764_MethodInfo;
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m2764 (Canvas_t289 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m2764_ftn) (Canvas_t289 *);
	static Canvas_get_cachedSortingLayerValue_m2764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m2764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m2709_MethodInfo;
extern "C" Material_t75 * Canvas_GetDefaultCanvasMaterial_m2709 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t75 * (*Canvas_GetDefaultCanvasMaterial_m2709_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m2991_MethodInfo;
extern "C" Material_t75 * Canvas_GetDefaultCanvasTextMaterial_m2991 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t75 * (*Canvas_GetDefaultCanvasTextMaterial_m2991_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m4096 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t528 * L_0 = ((Canvas_t289_StaticFields*)InitializedTypeInfo(&Canvas_t289_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t528 * L_1 = ((Canvas_t289_StaticFields*)InitializedTypeInfo(&Canvas_t289_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m4092_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m2939_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m2939 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m4096(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m4096_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t290_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m4097_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m2962_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m2962 (CanvasGroup_t290 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2962_ftn) (CanvasGroup_t290 *);
	static CanvasGroup_get_interactable_m2962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2962_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m4097 (CanvasGroup_t290 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m4097_ftn) (CanvasGroup_t290 *);
	static CanvasGroup_get_blocksRaycasts_m4097_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m4097_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
extern MethodInfo CanvasGroup_set_blocksRaycasts_m1306_MethodInfo;
extern "C" void CanvasGroup_set_blocksRaycasts_m1306 (CanvasGroup_t290 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasGroup_set_blocksRaycasts_m1306_ftn) (CanvasGroup_t290 *, bool);
	static CanvasGroup_set_blocksRaycasts_m1306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_set_blocksRaycasts_m1306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m2733_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2733 (CanvasGroup_t290 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2733_ftn) (CanvasGroup_t290 *);
	static CanvasGroup_get_ignoreParentGroups_m2733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m4098_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m4098 (CanvasGroup_t290 * __this, Vector2_t13  ___sp, Camera_t19 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m4097(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m4097_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t414_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Color32_t514_il2cpp_TypeInfo;
extern TypeInfo Vector4_t82_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m2697_MethodInfo;
extern MethodInfo Vector4__ctor_m808_MethodInfo;
extern MethodInfo Vector3_get_zero_m662_MethodInfo;
extern MethodInfo Vector3_get_back_m3591_MethodInfo;
extern MethodInfo Vector2_get_zero_m696_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m4099_MethodInfo;
extern "C" void UIVertex__cctor_m4099 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t414  V_0 = {0};
	{
		Color32_t514  L_0 = {0};
		Color32__ctor_m2697(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m2697_MethodInfo);
		((UIVertex_t414_StaticFields*)InitializedTypeInfo(&UIVertex_t414_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t82  L_1 = {0};
		Vector4__ctor_m808(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		((UIVertex_t414_StaticFields*)InitializedTypeInfo(&UIVertex_t414_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t414_il2cpp_TypeInfo), (&V_0));
		Vector3_t8  L_2 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t8  L_3 = Vector3_get_back_m3591(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m3591_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t82  L_4 = ((UIVertex_t414_StaticFields*)InitializedTypeInfo(&UIVertex_t414_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t514  L_5 = ((UIVertex_t414_StaticFields*)InitializedTypeInfo(&UIVertex_t414_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t13  L_6 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t13  L_7 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t414  L_8 = V_0;
		((UIVertex_t414_StaticFields*)InitializedTypeInfo(&UIVertex_t414_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t393_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t194_il2cpp_TypeInfo;
extern TypeInfo UInt16_t913_il2cpp_TypeInfo;
extern Il2CppType ObjectU5BU5D_t194_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m4100_MethodInfo;
extern MethodInfo List_1_get_Count_m2879_MethodInfo;
extern MethodInfo List_1_Clear_m2742_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m4101_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m4102_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m2879_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m2742_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m2740_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m2740 (CanvasRenderer_t393 * __this, Color_t79  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m4100(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m4100_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m4100 (Object_t * __this /* static, unused */, CanvasRenderer_t393 * ___self, Color_t79 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m4100_ftn) (CanvasRenderer_t393 *, Color_t79 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m4100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m4100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m2738_MethodInfo;
extern "C" Color_t79  CanvasRenderer_GetColor_m2738 (CanvasRenderer_t393 * __this, MethodInfo* method)
{
	typedef Color_t79  (*CanvasRenderer_GetColor_m2738_ftn) (CanvasRenderer_t393 *);
	static CanvasRenderer_GetColor_m2738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m3071_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m3071 (CanvasRenderer_t393 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m3071_ftn) (CanvasRenderer_t393 *, bool);
	static CanvasRenderer_set_isMask_m3071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m3071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m2728_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m2728 (CanvasRenderer_t393 * __this, Material_t75 * ___material, Texture_t298 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2728_ftn) (CanvasRenderer_t393 *, Material_t75 *, Texture_t298 *);
	static CanvasRenderer_SetMaterial_m2728_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2728_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m2727_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m2879_MethodInfo_var;
extern MethodInfo* List_1_Clear_m2742_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2727 (CanvasRenderer_t393 * __this, List_1_t398 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2727_init;
	if (!CanvasRenderer_SetVertices_m2727_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		List_1_get_Count_m2879_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m2879_GenericMethod);
		List_1_Clear_m2742_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m2742_GenericMethod);
		CanvasRenderer_SetVertices_m2727_init = true;
	}
	{
		List_1_t398 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m2879_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t194* L_2 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t913_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral317, L_2, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		Debug_LogWarning_m2984(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m2984_MethodInfo);
		List_1_t398 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m2742_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t398 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m4101(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m4101_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m4101 (CanvasRenderer_t393 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m4101_ftn) (CanvasRenderer_t393 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m4101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m4101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m2839_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2839 (CanvasRenderer_t393 * __this, UIVertexU5BU5D_t433* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2839_init;
	if (!CanvasRenderer_SetVertices_m2839_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		CanvasRenderer_SetVertices_m2839_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t194* L_1 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t913_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral317, L_1, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		Debug_LogWarning_m2984(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m2984_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t433* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m4102(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m4102_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m4102 (CanvasRenderer_t393 * __this, UIVertexU5BU5D_t433* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m4102_ftn) (CanvasRenderer_t393 *, UIVertexU5BU5D_t433*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m4102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m4102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m2722_MethodInfo;
extern "C" void CanvasRenderer_Clear_m2722 (CanvasRenderer_t393 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2722_ftn) (CanvasRenderer_t393 *);
	static CanvasRenderer_Clear_m2722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m2710_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2710 (CanvasRenderer_t393 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2710_ftn) (CanvasRenderer_t393 *);
	static CanvasRenderer_get_absoluteDepth_m2710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t288_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t73_il2cpp_TypeInfo;
extern TypeInfo Ray_t18_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t73_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m4105_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m788_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m4107_MethodInfo;
extern MethodInfo Plane__ctor_m2846_MethodInfo;
extern MethodInfo Plane_Raycast_m2847_MethodInfo;
extern MethodInfo Ray_GetPoint_m948_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m1312_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m993_MethodInfo;
extern MethodInfo Ray__ctor_m734_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m2931_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2790_MethodInfo;
extern MethodInfo Vector2_get_Item_m2801_MethodInfo;
extern MethodInfo Vector2_set_Item_m2812_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m2888_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2884_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2887_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2794_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2883_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2886_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2795_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m2930_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m4108_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m1340_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m1342_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m4103_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t73_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m4103 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m4103_init;
	if (!RectTransformUtility__cctor_m4103_init)
	{
		Vector3U5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t73_0_0_0);
		RectTransformUtility__cctor_m4103_init = true;
	}
	{
		((RectTransformUtility_t288_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t73*)SZArrayNew(Vector3U5BU5D_t73_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m2767_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2767 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rect, Vector2_t13  ___screenPoint, Camera_t19 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t275 * L_0 = ___rect;
		Camera_t19 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rect, Vector2_t13 * ___screenPoint, Camera_t19 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104_ftn) (RectTransform_t275 *, Vector2_t13 *, Camera_t19 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2736_MethodInfo;
extern "C" Vector2_t13  RectTransformUtility_PixelAdjustPoint_m2736 (Object_t * __this /* static, unused */, Vector2_t13  ___point, Transform_t2 * ___elementTransform, Canvas_t289 * ___canvas, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	{
		Vector2_t13  L_0 = ___point;
		Transform_t2 * L_1 = ___elementTransform;
		Canvas_t289 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m4105(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m4105_MethodInfo);
		Vector2_t13  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m4105 (Object_t * __this /* static, unused */, Vector2_t13  ___point, Transform_t2 * ___elementTransform, Canvas_t289 * ___canvas, Vector2_t13 * ___output, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___elementTransform;
		Canvas_t289 * L_1 = ___canvas;
		Vector2_t13 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106 (Object_t * __this /* static, unused */, Vector2_t13 * ___point, Transform_t2 * ___elementTransform, Canvas_t289 * ___canvas, Vector2_t13 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106_ftn) (Vector2_t13 *, Transform_t2 *, Canvas_t289 *, Vector2_t13 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m2737_MethodInfo;
extern "C" Rect_t260  RectTransformUtility_PixelAdjustRect_m2737 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rectTransform, Canvas_t289 * ___canvas, MethodInfo* method)
{
	typedef Rect_t260  (*RectTransformUtility_PixelAdjustRect_m2737_ftn) (RectTransform_t275 *, Canvas_t289 *);
	static RectTransformUtility_PixelAdjustRect_m2737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m1312 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rect, Vector2_t13  ___screenPoint, Camera_t19 * ___cam, Vector3_t8 * ___worldPoint, MethodInfo* method)
{
	Ray_t18  V_0 = {0};
	Plane_t547  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t8 * L_0 = ___worldPoint;
		Vector2_t13  L_1 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		Vector3_t8  L_2 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		*L_0 = L_2;
		Camera_t19 * L_3 = ___cam;
		Vector2_t13  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		Ray_t18  L_5 = RectTransformUtility_ScreenPointToRay_m4107(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m4107_MethodInfo);
		V_0 = L_5;
		RectTransform_t275 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t10  L_7 = Transform_get_rotation_m605(L_6, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Vector3_t8  L_8 = Vector3_get_back_m3591(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m3591_MethodInfo);
		Vector3_t8  L_9 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		RectTransform_t275 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t8  L_11 = Transform_get_position_m599(L_10, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Plane__ctor_m2846((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m2846_MethodInfo);
		Ray_t18  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2847((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m2847_MethodInfo);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t8 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t8  L_16 = Ray_GetPoint_m948((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m948_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m1317_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1317 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rect, Vector2_t13  ___screenPoint, Camera_t19 * ___cam, Vector2_t13 * ___localPoint, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector2_t13 * L_0 = ___localPoint;
		Vector2_t13  L_1 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		*L_0 = L_1;
		RectTransform_t275 * L_2 = ___rect;
		Vector2_t13  L_3 = ___screenPoint;
		Camera_t19 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m1312(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m1312_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t13 * L_6 = ___localPoint;
		RectTransform_t275 * L_7 = ___rect;
		Vector3_t8  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t8  L_9 = Transform_InverseTransformPoint_m622(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		Vector2_t13  L_10 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t18  RectTransformUtility_ScreenPointToRay_m4107 (Object_t * __this /* static, unused */, Camera_t19 * ___cam, Vector2_t13  ___screenPos, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Camera_t19 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t19 * L_2 = ___cam;
		Vector2_t13  L_3 = ___screenPos;
		Vector3_t8  L_4 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_2);
		Ray_t18  L_5 = Camera_ScreenPointToRay_m947(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m947_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t13  L_6 = ___screenPos;
		Vector3_t8  L_7 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		V_0 = L_7;
		Vector3_t8 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t8  L_10 = V_0;
		Vector3_t8  L_11 = Vector3_get_forward_m651(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m651_MethodInfo);
		Ray_t18  L_12 = {0};
		Ray__ctor_m734(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m734_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2931 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t275 * V_1 = {0};
	Vector2_t13  V_2 = {0};
	Vector2_t13  V_3 = {0};
	Vector2_t13  V_4 = {0};
	Vector2_t13  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t275 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t275 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_5 = Transform_GetChild_m1019(L_3, L_4, /*hidden argument*/&Transform_GetChild_m1019_MethodInfo);
		V_1 = ((RectTransform_t275 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t275_il2cpp_TypeInfo)));
		RectTransform_t275 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m642(NULL /*static, unused*/, L_6, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t275 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m2931(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m2931_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t275 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m1021(L_12, /*hidden argument*/&Transform_get_childCount_m1021_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t275 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t13  L_15 = RectTransform_get_pivot_m2790(L_14, /*hidden argument*/&RectTransform_get_pivot_m2790_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2801((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m2801_MethodInfo);
		Vector2_set_Item_m2812((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m2812_MethodInfo);
		RectTransform_t275 * L_19 = ___rect;
		Vector2_t13  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2888(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m2888_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t275 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t13  L_23 = RectTransform_get_anchoredPosition_m2884(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m2884_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2801((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m2801_MethodInfo);
		Vector2_set_Item_m2812((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m2812_MethodInfo);
		RectTransform_t275 * L_27 = ___rect;
		Vector2_t13  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2887(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m2887_MethodInfo);
		RectTransform_t275 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t13  L_30 = RectTransform_get_anchorMin_m2794(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m2794_MethodInfo);
		V_4 = L_30;
		RectTransform_t275 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t13  L_32 = RectTransform_get_anchorMax_m2883(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2883_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2801((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m2801_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2801((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m2801_MethodInfo);
		Vector2_set_Item_m2812((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m2812_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2812((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m2812_MethodInfo);
		RectTransform_t275 * L_40 = ___rect;
		Vector2_t13  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2886(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m2886_MethodInfo);
		RectTransform_t275 * L_42 = ___rect;
		Vector2_t13  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2795(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m2795_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2930 (Object_t * __this /* static, unused */, RectTransform_t275 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t275 * V_1 = {0};
	{
		RectTransform_t275 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t275 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_5 = Transform_GetChild_m1019(L_3, L_4, /*hidden argument*/&Transform_GetChild_m1019_MethodInfo);
		V_1 = ((RectTransform_t275 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t275_il2cpp_TypeInfo)));
		RectTransform_t275 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m642(NULL /*static, unused*/, L_6, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t275 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m2930(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m2930_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t275 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m1021(L_11, /*hidden argument*/&Transform_get_childCount_m1021_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t275 * L_13 = ___rect;
		RectTransform_t275 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t13  L_15 = RectTransform_get_pivot_m2790(L_14, /*hidden argument*/&RectTransform_get_pivot_m2790_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		Vector2_t13  L_16 = RectTransformUtility_GetTransposed_m4108(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m4108_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m2888(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m2888_MethodInfo);
		RectTransform_t275 * L_17 = ___rect;
		RectTransform_t275 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t13  L_19 = RectTransform_get_sizeDelta_m1340(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m1340_MethodInfo);
		Vector2_t13  L_20 = RectTransformUtility_GetTransposed_m4108(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m4108_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m1342(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m1342_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t275 * L_22 = ___rect;
		RectTransform_t275 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t13  L_24 = RectTransform_get_anchoredPosition_m2884(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m2884_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t288_il2cpp_TypeInfo));
		Vector2_t13  L_25 = RectTransformUtility_GetTransposed_m4108(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m4108_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2887(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m2887_MethodInfo);
		RectTransform_t275 * L_26 = ___rect;
		RectTransform_t275 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t13  L_28 = RectTransform_get_anchorMin_m2794(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m2794_MethodInfo);
		Vector2_t13  L_29 = RectTransformUtility_GetTransposed_m4108(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m4108_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2886(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m2886_MethodInfo);
		RectTransform_t275 * L_30 = ___rect;
		RectTransform_t275 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t13  L_32 = RectTransform_get_anchorMax_m2883(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2883_MethodInfo);
		Vector2_t13  L_33 = RectTransformUtility_GetTransposed_m4108(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m4108_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2795(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m2795_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t13  RectTransformUtility_GetTransposed_m4108 (Object_t * __this /* static, unused */, Vector2_t13  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t13  L_2 = {0};
		Vector2__ctor_m682(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Request_t776_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo SourceID_t795_il2cpp_TypeInfo;
extern TypeInfo AppID_t794_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Request_get_sourceId_m4110_MethodInfo;
extern MethodInfo Enum_ToString_m4626_MethodInfo;
extern MethodInfo Request_get_appId_m4111_MethodInfo;
extern MethodInfo Request_get_domain_m4112_MethodInfo;


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern MethodInfo Request__ctor_m4109_MethodInfo;
extern "C" void Request__ctor_m4109 (Request_t776 * __this, MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m4110 (Request_t776 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m4111 (Request_t776 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m4112 (Request_t776 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern MethodInfo Request_ToString_m4113_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m4113 (Request_t776 * __this, MethodInfo* method)
{
	static bool Request_ToString_m4113_init;
	if (!Request_ToString_m4113_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Request_ToString_m4113_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1098(__this, /*hidden argument*/&Object_ToString_m1098_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m4110(__this, /*hidden argument*/&Request_get_sourceId_m4110_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&SourceID_t795_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4626(L_5, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t194* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m4111(__this, /*hidden argument*/&Request_get_appId_m4111_MethodInfo);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&AppID_t794_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m4626(L_10, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t194* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m4112(__this, /*hidden argument*/&Request_get_domain_m4112_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral318, L_12, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseBase_t777_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
extern TypeInfo IDictionary_2_t778_il2cpp_TypeInfo;
extern TypeInfo FormatException_t914_il2cpp_TypeInfo;
extern TypeInfo Convert_t907_il2cpp_TypeInfo;
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType IDictionary_2_t778_0_0_0;
extern MethodInfo IDictionary_2_TryGetValue_m4627_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo FormatException__ctor_m4628_MethodInfo;
extern MethodInfo Convert_ToInt32_m4629_MethodInfo;
extern MethodInfo Convert_ToUInt16_m4630_MethodInfo;
extern MethodInfo Convert_ToUInt64_m4631_MethodInfo;
extern MethodInfo Convert_ToBoolean_m4632_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_TryGetValue_m4627_GenericMethod;


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern MethodInfo ResponseBase__ctor_m4114_MethodInfo;
extern "C" void ResponseBase__ctor_m4114 (ResponseBase_t777 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONString_m4115_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m4627_MethodInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m4115 (ResponseBase_t777 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONString_m4115_init;
	if (!ResponseBase_ParseJSONString_m4115_init)
	{
		IDictionary_2_TryGetValue_m4627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m4627_GenericMethod);
		ResponseBase_ParseJSONString_m4115_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m4627_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, (&String_t_il2cpp_TypeInfo)));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m988(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral320, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_6 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_6, L_5, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONInt32_m4116_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m4627_MethodInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m4116 (ResponseBase_t777 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONInt32_m4116_init;
	if (!ResponseBase_ParseJSONInt32_m4116_init)
	{
		IDictionary_2_TryGetValue_m4627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m4627_GenericMethod);
		ResponseBase_ParseJSONInt32_m4116_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m4627_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		int32_t L_4 = Convert_ToInt32_m4629(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToInt32_m4629_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m988(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral320, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_7 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_7, L_6, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt16_m4117_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m4627_MethodInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m4117 (ResponseBase_t777 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt16_m4117_init;
	if (!ResponseBase_ParseJSONUInt16_m4117_init)
	{
		IDictionary_2_TryGetValue_m4627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m4627_GenericMethod);
		ResponseBase_ParseJSONUInt16_m4117_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m4627_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		uint16_t L_4 = Convert_ToUInt16_m4630(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt16_m4630_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m988(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral320, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_7 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_7, L_6, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt64_m4118_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m4627_MethodInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m4118 (ResponseBase_t777 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt64_m4118_init;
	if (!ResponseBase_ParseJSONUInt64_m4118_init)
	{
		IDictionary_2_TryGetValue_m4627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m4627_GenericMethod);
		ResponseBase_ParseJSONUInt64_m4118_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m4627_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		uint64_t L_4 = Convert_ToUInt64_m4631(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt64_m4631_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m988(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral320, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_7 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_7, L_6, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONBool_m4119_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m4627_MethodInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m4119 (ResponseBase_t777 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONBool_m4119_init;
	if (!ResponseBase_ParseJSONBool_m4119_init)
	{
		IDictionary_2_TryGetValue_m4627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m4627_GenericMethod);
		ResponseBase_ParseJSONBool_m4119_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m4627_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t907_il2cpp_TypeInfo));
		bool L_4 = Convert_ToBoolean_m4632(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToBoolean_m4632_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m988(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral320, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_7 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_7, L_6, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Response_t779_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"

extern MethodInfo Response_get_success_m4121_MethodInfo;
extern MethodInfo Response_get_extendedInfo_m4123_MethodInfo;
extern MethodInfo Response_set_success_m4122_MethodInfo;
extern MethodInfo Response_set_extendedInfo_m4124_MethodInfo;


// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern MethodInfo Response__ctor_m4120_MethodInfo;
extern "C" void Response__ctor_m4120 (Response_t779 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m4114(__this, /*hidden argument*/&ResponseBase__ctor_m4114_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m4121 (Response_t779 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m4122 (Response_t779 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m4123 (Response_t779 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m4124 (Response_t779 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern MethodInfo Response_ToString_m4125_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m4125 (Response_t779 * __this, MethodInfo* method)
{
	static bool Response_ToString_m4125_init;
	if (!Response_ToString_m4125_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Response_ToString_m4125_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m1098(__this, /*hidden argument*/&Object_ToString_m1098_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		bool L_3 = Response_get_success_m4121(__this, /*hidden argument*/&Response_get_success_m4121_MethodInfo);
		bool L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t194* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m4123(__this, /*hidden argument*/&Response_get_extendedInfo_m4123_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral321, L_6, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern MethodInfo Response_Parse_m4126_MethodInfo;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m4126 (Response_t779 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool Response_Parse_m4126_init;
	if (!Response_Parse_m4126_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		Response_Parse_m4126_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m4119(__this, (String_t*) &_stringLiteral322, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONBool_m4119_MethodInfo);
		Response_set_success_m4122(__this, L_4, /*hidden argument*/&Response_set_success_m4122_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral323, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		Response_set_extendedInfo_m4124(__this, L_7, /*hidden argument*/&Response_set_extendedInfo_m4124_MethodInfo);
		bool L_8 = Response_get_success_m4121(__this, /*hidden argument*/&Response_get_success_m4121_MethodInfo);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m4123(__this, /*hidden argument*/&Response_get_extendedInfo_m4123_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral324, L_9, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_11 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_11, L_10, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BasicResponse_t780_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern MethodInfo BasicResponse__ctor_m4127_MethodInfo;
extern "C" void BasicResponse__ctor_m4127 (BasicResponse_t780 * __this, MethodInfo* method)
{
	{
		Response__ctor_m4120(__this, /*hidden argument*/&Response__ctor_m4120_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchRequest_t782_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
extern TypeInfo UInt32_t915_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t781_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
extern Il2CppType Dictionary_2_t781_0_0_0;
extern MethodInfo CreateMatchRequest_get_name_m4129_MethodInfo;
extern MethodInfo CreateMatchRequest_get_size_m4131_MethodInfo;
extern MethodInfo CreateMatchRequest_get_advertise_m4133_MethodInfo;
extern MethodInfo CreateMatchRequest_get_password_m4135_MethodInfo;
extern MethodInfo CreateMatchRequest_get_matchAttributes_m4137_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m4633_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Count_m4633_GenericMethod;


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern MethodInfo CreateMatchRequest__ctor_m4128_MethodInfo;
extern "C" void CreateMatchRequest__ctor_m4128 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	{
		Request__ctor_m4109(__this, /*hidden argument*/&Request__ctor_m4109_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m4129 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern MethodInfo CreateMatchRequest_set_name_m4130_MethodInfo;
extern "C" void CreateMatchRequest_set_name_m4130 (CreateMatchRequest_t782 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m4131 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern MethodInfo CreateMatchRequest_set_size_m4132_MethodInfo;
extern "C" void CreateMatchRequest_set_size_m4132 (CreateMatchRequest_t782 * __this, uint32_t ___value, MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m4133 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern MethodInfo CreateMatchRequest_set_advertise_m4134_MethodInfo;
extern "C" void CreateMatchRequest_set_advertise_m4134 (CreateMatchRequest_t782 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m4135 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern MethodInfo CreateMatchRequest_set_password_m4136_MethodInfo;
extern "C" void CreateMatchRequest_set_password_m4136 (CreateMatchRequest_t782 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t781 * CreateMatchRequest_get_matchAttributes_m4137 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t781 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern MethodInfo CreateMatchRequest_ToString_m4138_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m4633_MethodInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m4138 (CreateMatchRequest_t782 * __this, MethodInfo* method)
{
	static bool CreateMatchRequest_ToString_m4138_init;
	if (!CreateMatchRequest_ToString_m4138_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		Dictionary_2_get_Count_m4633_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m4633_GenericMethod);
		CreateMatchRequest_ToString_m4138_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t194* G_B2_1 = {0};
	ObjectU5BU5D_t194* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t194* G_B1_1 = {0};
	ObjectU5BU5D_t194* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
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
		String_t* L_3 = CreateMatchRequest_get_name_m4129(__this, /*hidden argument*/&CreateMatchRequest_get_name_m4129_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t194* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m4131(__this, /*hidden argument*/&CreateMatchRequest_get_size_m4131_MethodInfo);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&UInt32_t915_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t194* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m4133(__this, /*hidden argument*/&CreateMatchRequest_get_advertise_m4133_MethodInfo);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t194* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m4135(__this, /*hidden argument*/&CreateMatchRequest_get_password_m4135_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m751(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral325;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral325;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral326;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral327;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t194* L_16 = G_B3_3;
		Dictionary_2_t781 * L_17 = CreateMatchRequest_get_matchAttributes_m4137(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m4137_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t781 * L_18 = CreateMatchRequest_get_matchAttributes_m4137(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m4137_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m4633_MethodInfo_var, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3765(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchResponse_t783_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo NetworkID_t796_il2cpp_TypeInfo;
extern TypeInfo NodeID_t797_il2cpp_TypeInfo;
extern MethodInfo CreateMatchResponse_get_address_m4140_MethodInfo;
extern MethodInfo CreateMatchResponse_get_port_m4142_MethodInfo;
extern MethodInfo CreateMatchResponse_get_networkId_m4144_MethodInfo;
extern MethodInfo CreateMatchResponse_get_nodeId_m4148_MethodInfo;
extern MethodInfo CreateMatchResponse_get_usingRelay_m4150_MethodInfo;
extern MethodInfo CreateMatchResponse_set_address_m4141_MethodInfo;
extern MethodInfo CreateMatchResponse_set_port_m4143_MethodInfo;
extern MethodInfo CreateMatchResponse_set_networkId_m4145_MethodInfo;
extern MethodInfo CreateMatchResponse_set_accessTokenString_m4147_MethodInfo;
extern MethodInfo CreateMatchResponse_set_nodeId_m4149_MethodInfo;
extern MethodInfo CreateMatchResponse_set_usingRelay_m4151_MethodInfo;


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern MethodInfo CreateMatchResponse__ctor_m4139_MethodInfo;
extern "C" void CreateMatchResponse__ctor_m4139 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m4127(__this, /*hidden argument*/&BasicResponse__ctor_m4127_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m4140 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m4141 (CreateMatchResponse_t783 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m4142 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m4143 (CreateMatchResponse_t783 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m4144 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m4145 (CreateMatchResponse_t783 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern MethodInfo CreateMatchResponse_get_accessTokenString_m4146_MethodInfo;
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m4146 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m4147 (CreateMatchResponse_t783 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m4148 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m4149 (CreateMatchResponse_t783 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m4150 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m4151 (CreateMatchResponse_t783 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern MethodInfo CreateMatchResponse_ToString_m4152_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m4152 (CreateMatchResponse_t783 * __this, MethodInfo* method)
{
	static bool CreateMatchResponse_ToString_m4152_init;
	if (!CreateMatchResponse_ToString_m4152_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		CreateMatchResponse_ToString_m4152_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m4125(__this, /*hidden argument*/&Response_ToString_m4125_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m4140(__this, /*hidden argument*/&CreateMatchResponse_get_address_m4140_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t194* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m4142(__this, /*hidden argument*/&CreateMatchResponse_get_port_m4142_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t194* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m4144(__this, /*hidden argument*/&CreateMatchResponse_get_networkId_m4144_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m4626(L_11, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t194* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m4148(__this, /*hidden argument*/&CreateMatchResponse_get_nodeId_m4148_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t797_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m4626(L_16, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t194* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m4150(__this, /*hidden argument*/&CreateMatchResponse_get_usingRelay_m4150_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral328, L_18, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern MethodInfo CreateMatchResponse_Parse_m4153_MethodInfo;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m4153 (CreateMatchResponse_t783 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool CreateMatchResponse_Parse_m4153_init;
	if (!CreateMatchResponse_Parse_m4153_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		CreateMatchResponse_Parse_m4153_init = true;
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
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral329, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		CreateMatchResponse_set_address_m4141(__this, L_5, /*hidden argument*/&CreateMatchResponse_set_address_m4141_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m4116(__this, (String_t*) &_stringLiteral330, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m4116_MethodInfo);
		CreateMatchResponse_set_port_m4143(__this, L_8, /*hidden argument*/&CreateMatchResponse_set_port_m4143_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m4118(__this, (String_t*) &_stringLiteral331, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m4118_MethodInfo);
		CreateMatchResponse_set_networkId_m4145(__this, L_11, /*hidden argument*/&CreateMatchResponse_set_networkId_m4145_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral332, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		CreateMatchResponse_set_accessTokenString_m4147(__this, L_14, /*hidden argument*/&CreateMatchResponse_set_accessTokenString_m4147_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m4117(__this, (String_t*) &_stringLiteral333, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m4117_MethodInfo);
		CreateMatchResponse_set_nodeId_m4149(__this, L_17, /*hidden argument*/&CreateMatchResponse_set_nodeId_m4149_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m4119(__this, (String_t*) &_stringLiteral334, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m4119_MethodInfo);
		CreateMatchResponse_set_usingRelay_m4151(__this, L_20, /*hidden argument*/&CreateMatchResponse_set_usingRelay_m4151_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_22, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_24 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_24, L_23, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchRequest_t784_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"

extern MethodInfo JoinMatchRequest_get_networkId_m4155_MethodInfo;
extern MethodInfo JoinMatchRequest_get_password_m4157_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern MethodInfo JoinMatchRequest__ctor_m4154_MethodInfo;
extern "C" void JoinMatchRequest__ctor_m4154 (JoinMatchRequest_t784 * __this, MethodInfo* method)
{
	{
		Request__ctor_m4109(__this, /*hidden argument*/&Request__ctor_m4109_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m4155 (JoinMatchRequest_t784 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo JoinMatchRequest_set_networkId_m4156_MethodInfo;
extern "C" void JoinMatchRequest_set_networkId_m4156 (JoinMatchRequest_t784 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m4157 (JoinMatchRequest_t784 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern MethodInfo JoinMatchRequest_set_password_m4158_MethodInfo;
extern "C" void JoinMatchRequest_set_password_m4158 (JoinMatchRequest_t784 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern MethodInfo JoinMatchRequest_ToString_m4159_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m4159 (JoinMatchRequest_t784 * __this, MethodInfo* method)
{
	static bool JoinMatchRequest_ToString_m4159_init;
	if (!JoinMatchRequest_ToString_m4159_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		JoinMatchRequest_ToString_m4159_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t194* G_B2_1 = {0};
	ObjectU5BU5D_t194* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t194* G_B1_1 = {0};
	ObjectU5BU5D_t194* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t194* G_B3_2 = {0};
	ObjectU5BU5D_t194* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m4113(__this, /*hidden argument*/&Request_ToString_m4113_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m4155(__this, /*hidden argument*/&JoinMatchRequest_get_networkId_m4155_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m4626(L_5, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t194* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m4157(__this, /*hidden argument*/&JoinMatchRequest_get_password_m4157_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m751(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral336;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral336;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral326;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral327;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m3765(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchResponse_t785_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"

extern MethodInfo JoinMatchResponse_get_address_m4161_MethodInfo;
extern MethodInfo JoinMatchResponse_get_port_m4163_MethodInfo;
extern MethodInfo JoinMatchResponse_get_networkId_m4165_MethodInfo;
extern MethodInfo JoinMatchResponse_get_nodeId_m4169_MethodInfo;
extern MethodInfo JoinMatchResponse_get_usingRelay_m4171_MethodInfo;
extern MethodInfo JoinMatchResponse_set_address_m4162_MethodInfo;
extern MethodInfo JoinMatchResponse_set_port_m4164_MethodInfo;
extern MethodInfo JoinMatchResponse_set_networkId_m4166_MethodInfo;
extern MethodInfo JoinMatchResponse_set_accessTokenString_m4168_MethodInfo;
extern MethodInfo JoinMatchResponse_set_nodeId_m4170_MethodInfo;
extern MethodInfo JoinMatchResponse_set_usingRelay_m4172_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern MethodInfo JoinMatchResponse__ctor_m4160_MethodInfo;
extern "C" void JoinMatchResponse__ctor_m4160 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m4127(__this, /*hidden argument*/&BasicResponse__ctor_m4127_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m4161 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m4162 (JoinMatchResponse_t785 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m4163 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m4164 (JoinMatchResponse_t785 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m4165 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m4166 (JoinMatchResponse_t785 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern MethodInfo JoinMatchResponse_get_accessTokenString_m4167_MethodInfo;
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m4167 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m4168 (JoinMatchResponse_t785 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m4169 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m4170 (JoinMatchResponse_t785 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m4171 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m4172 (JoinMatchResponse_t785 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern MethodInfo JoinMatchResponse_ToString_m4173_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m4173 (JoinMatchResponse_t785 * __this, MethodInfo* method)
{
	static bool JoinMatchResponse_ToString_m4173_init;
	if (!JoinMatchResponse_ToString_m4173_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		JoinMatchResponse_ToString_m4173_init = true;
	}
	{
		ObjectU5BU5D_t194* L_0 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m4125(__this, /*hidden argument*/&Response_ToString_m4125_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t194* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m4161(__this, /*hidden argument*/&JoinMatchResponse_get_address_m4161_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t194* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m4163(__this, /*hidden argument*/&JoinMatchResponse_get_port_m4163_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t194* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m4165(__this, /*hidden argument*/&JoinMatchResponse_get_networkId_m4165_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t796_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m4626(L_11, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t194* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m4169(__this, /*hidden argument*/&JoinMatchResponse_get_nodeId_m4169_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t797_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m4626(L_16, (String_t*) &_stringLiteral319, /*hidden argument*/&Enum_ToString_m4626_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t194* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m4171(__this, /*hidden argument*/&JoinMatchResponse_get_usingRelay_m4171_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t202_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3765(NULL /*static, unused*/, (String_t*) &_stringLiteral328, L_18, /*hidden argument*/&UnityString_Format_m3765_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern MethodInfo JoinMatchResponse_Parse_m4174_MethodInfo;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m4174 (JoinMatchResponse_t785 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool JoinMatchResponse_Parse_m4174_init;
	if (!JoinMatchResponse_Parse_m4174_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		JoinMatchResponse_Parse_m4174_init = true;
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
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral329, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		JoinMatchResponse_set_address_m4162(__this, L_5, /*hidden argument*/&JoinMatchResponse_set_address_m4162_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m4116(__this, (String_t*) &_stringLiteral330, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m4116_MethodInfo);
		JoinMatchResponse_set_port_m4164(__this, L_8, /*hidden argument*/&JoinMatchResponse_set_port_m4164_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m4118(__this, (String_t*) &_stringLiteral331, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m4118_MethodInfo);
		JoinMatchResponse_set_networkId_m4166(__this, L_11, /*hidden argument*/&JoinMatchResponse_set_networkId_m4166_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m4115(__this, (String_t*) &_stringLiteral332, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m4115_MethodInfo);
		JoinMatchResponse_set_accessTokenString_m4168(__this, L_14, /*hidden argument*/&JoinMatchResponse_set_accessTokenString_m4168_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m4117(__this, (String_t*) &_stringLiteral333, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m4117_MethodInfo);
		JoinMatchResponse_set_nodeId_m4170(__this, L_17, /*hidden argument*/&JoinMatchResponse_set_nodeId_m4170_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m4119(__this, (String_t*) &_stringLiteral334, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m4119_MethodInfo);
		JoinMatchResponse_set_usingRelay_m4172(__this, L_20, /*hidden argument*/&JoinMatchResponse_set_usingRelay_m4172_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1098_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_22, /*hidden argument*/&String_Concat_m988_MethodInfo);
		FormatException_t914 * L_24 = (FormatException_t914 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t914_il2cpp_TypeInfo));
		FormatException__ctor_m4628(L_24, L_23, /*hidden argument*/&FormatException__ctor_m4628_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
