#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6.h"
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
extern TypeInfo UnityAction_1_t2876_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m14874_GenericMethod;
extern "C" void UnityAction_1__ctor_m14874_gshared (UnityAction_1_t2876 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m14875_GenericMethod;
extern "C" void UnityAction_1_Invoke_m14875_gshared (UnityAction_1_t2876 * __this, Object_t * ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m14875((UnityAction_1_t2876 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14876_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m14876_gshared (UnityAction_1_t2876 * __this, Object_t * ___arg0, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14877_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m14877_gshared (UnityAction_1_t2876 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Stack_1_t2874_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t555_il2cpp_TypeInfo;
extern TypeInfo ArrayTypeMismatchException_t2002_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2883_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1332_il2cpp_TypeInfo;
extern TypeInfo List_1_t354_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0MethodDeclarations.h"
extern Il2CppType Enumerator_t2883_0_0_0;
extern Il2CppType List_1_t354_0_0_0;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo Array_CopyTo_m6162_MethodInfo;
extern MethodInfo Array_Reverse_m7166_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10863_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5979_MethodInfo;
extern MethodInfo Enumerator__ctor_m14904_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m24065_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m24065(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t354_m24724(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2879**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m14888_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t354_m24724_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14904_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4442_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3816_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_85.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2880_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_85MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
extern Il2CppType InternalEnumerator_1_t2880_0_0_0;
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
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t354_m24691(__this, p0, method) (( List_1_t354 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14893_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t354_m24691_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4443_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4444_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4445_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.ICollection>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4446_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.ICollection>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4447_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.ICollection>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2881_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86MethodDeclarations.h"

extern TypeInfo ICollection_t1030_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2881_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
#define Array_InternalArray__get_Item_TisICollection_t1030_m24702(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14898_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICollection_t1030_m24702_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.ICollection>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.ICollection>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.ICollection>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4448_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.ICollection>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.ICollection>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4449_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.IList>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4450_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.IList>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4451_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.IList>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2882_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87MethodDeclarations.h"

extern TypeInfo IList_t1031_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2882_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
#define Array_InternalArray__get_Item_TisIList_t1031_m24713(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14903_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIList_t1031_m24713_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.IList>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.IList>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.IList>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4452_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.IList>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.IList>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m14908_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t343_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t499_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_1.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5.h"
// System.Comparison`1<UnityEngine.Component>
#include "mscorlib_System_Comparison_1_gen_9.h"
extern TypeInfo Component_t185_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t897_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2032_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t922_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3819_il2cpp_TypeInfo;
extern TypeInfo ComponentU5BU5D_t2884_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2885_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3817_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3818_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2887_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t497_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2891_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5MethodDeclarations.h"
extern Il2CppType List_1_t499_0_0_0;
extern Il2CppType ICollection_1_t3819_0_0_0;
extern Il2CppType ComponentU5BU5D_t2884_0_0_0;
extern Il2CppType Enumerator_t2885_0_0_0;
extern Il2CppType IEnumerable_1_t3817_0_0_0;
extern Il2CppType IEnumerator_1_t3818_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2887_0_0_0;
extern Il2CppType Predicate_1_t497_0_0_0;
extern Il2CppType Comparer_1_t2891_0_0_0;
extern MethodInfo List_1_get_Item_m2723_MethodInfo;
extern MethodInfo List_1_set_Item_m14957_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3019_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m6157_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5980_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27620_MethodInfo;
extern MethodInfo Array_Copy_m7944_MethodInfo;
extern MethodInfo List_1_Add_m14931_MethodInfo;
extern MethodInfo List_1_Contains_m14937_MethodInfo;
extern MethodInfo List_1_IndexOf_m14943_MethodInfo;
extern MethodInfo List_1_Insert_m14946_MethodInfo;
extern MethodInfo List_1_Remove_m14948_MethodInfo;
extern MethodInfo Math_Max_m7134_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27621_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27622_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27623_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m14964_MethodInfo;
extern MethodInfo Array_Clear_m7125_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15038_MethodInfo;
extern MethodInfo Enumerator__ctor_m14958_MethodInfo;
extern MethodInfo List_1_RemoveAt_m14949_MethodInfo;
extern MethodInfo Array_Copy_m6198_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
#define Array_Resize_TisComponent_t185_m24731(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2884**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11699_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11699(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisComponent_t185_m24733(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2884*, Component_t185 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m24068(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisComponent_t185_m24735(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2884*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24175_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, Comparison_1_t2703 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m24175(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, Comparison_1_t2703 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisComponent_t185_m24743(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2884*, int32_t, Comparison_1_t2893 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2723_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14957_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisComponent_t185_m24731_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m14945_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m14947_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m14934_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27620_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m14933_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m14942_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m14931_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m14937_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m14943_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m14946_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m14948_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m14932_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m14955_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m14956_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27621_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27622_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27623_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m14964_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisComponent_t185_m24733_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m14940_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m14941_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15038_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14958_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m14944_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m14949_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15044_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t185_m24735_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t185_m24743_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1508_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo Object_GetType_m2635_MethodInfo;
extern MethodInfo Type_get_FullName_m4739_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m7142_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m14961_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
extern TypeInfo IList_1_t2886_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t620_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5MethodDeclarations.h"
extern Il2CppType IList_1_t2886_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m14993_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;
extern MethodInfo IList_1_get_Item_m27624_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5968_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4697_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27625_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27626_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m14993_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27624_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15025_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27625_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27626_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2888_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2888_0_0_0;
extern Il2CppType Component_t185_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27627_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15024_MethodInfo;
extern MethodInfo List_1__ctor_m14912_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m11698_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15017_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15015_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15020_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15011_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27628_MethodInfo;
extern MethodInfo IList_1_Insert_m27629_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27630_MethodInfo;
extern MethodInfo IList_1_set_Item_m27631_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7994_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11978_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11979_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27627_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15028_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15029_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15026_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15024_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m14912_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15017_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15027_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15015_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15020_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15011_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27628_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27629_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27630_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27631_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2889_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2890_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2889_0_0_0;
extern Il2CppType IEquatable_1_t4453_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2447_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType DefaultComparer_t2890_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m4806_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4804_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10839_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m15035_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27632_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24732_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15035_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27632_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24732_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4454_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4453_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Component>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1097_MethodInfo;
extern MethodInfo Object_Equals_m1096_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15030_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Component>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Component>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5.h"
extern TypeInfo DefaultComparer_t2892_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5MethodDeclarations.h"
extern Il2CppType IComparable_1_t4091_0_0_0;
extern Il2CppType GenericComparer_1_t2358_0_0_0;
extern Il2CppType DefaultComparer_t2892_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15045_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27633_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15045_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27633_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4090_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Component>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4091_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Component>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t226_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m24741_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11669_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15041_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24741_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2893_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Component>
#include "mscorlib_System_Comparison_1_gen_9MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Component>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Component>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t337_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0MethodDeclarations.h"

// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t316_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"

// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_6.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_9.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6.h"
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
extern TypeInfo RaycastResult_t317_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3822_il2cpp_TypeInfo;
extern TypeInfo RaycastResultU5BU5D_t2894_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2896_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3820_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3821_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2898_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2902_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2903_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_6MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_9MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_6MethodDeclarations.h"
extern Il2CppType List_1_t316_0_0_0;
extern Il2CppType ICollection_1_t3822_0_0_0;
extern Il2CppType RaycastResultU5BU5D_t2894_0_0_0;
extern Il2CppType Enumerator_t2896_0_0_0;
extern Il2CppType IEnumerable_1_t3820_0_0_0;
extern Il2CppType IEnumerator_1_t3821_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2898_0_0_0;
extern Il2CppType Predicate_1_t2902_0_0_0;
extern Il2CppType Comparer_1_t2903_0_0_0;
extern MethodInfo List_1_get_Item_m2615_MethodInfo;
extern MethodInfo List_1_set_Item_m15097_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27634_MethodInfo;
extern MethodInfo List_1_Add_m2680_MethodInfo;
extern MethodInfo List_1_Contains_m15077_MethodInfo;
extern MethodInfo List_1_IndexOf_m15083_MethodInfo;
extern MethodInfo List_1_Insert_m15086_MethodInfo;
extern MethodInfo List_1_Remove_m15088_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27635_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27636_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27637_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15109_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15184_MethodInfo;
extern MethodInfo Enumerator__ctor_m15103_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15090_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisRaycastResult_t317_m24760_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2894** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisRaycastResult_t317_m24760(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894**, int32_t, MethodInfo*))Array_Resize_TisRaycastResult_t317_m24760_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisRaycastResult_t317_m24762_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2894* p0, RaycastResult_t317  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisRaycastResult_t317_m24762(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, RaycastResult_t317 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisRaycastResult_t317_m24762_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t317_m24764_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2894* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t317_m24764(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisRaycastResult_t317_m24764_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t317_m24772_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2894* p0, int32_t p1, Comparison_1_t315 * p2, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t317_m24772(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, int32_t, Comparison_1_t315 *, MethodInfo*))Array_Sort_TisRaycastResult_t317_m24772_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2615_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15097_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRaycastResult_t317_m24760_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15085_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15087_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15074_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27634_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15073_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15082_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2680_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15077_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15083_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15086_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m15088_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15072_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15095_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15096_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27635_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27636_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27637_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15109_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRaycastResult_t317_m24762_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15080_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15081_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15184_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15103_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15084_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15090_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15190_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t317_m24764_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t317_m24772_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m2614_GenericMethod;
extern "C" void List_1__ctor_m2614_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2894* L_0 = ((List_1_t316_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m15054_GenericMethod;
extern "C" void List_1__ctor_m15054_gshared (List_1_t316 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t316 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2894* L_3 = ((List_1_t316_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t316 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((RaycastResultU5BU5D_t2894*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t316 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m15055_GenericMethod;
extern "C" void List_1__ctor_m15055_gshared (List_1_t316 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t922 * L_1 = (ArgumentOutOfRangeException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t922_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5980(L_1, (String_t*) &_stringLiteral1431, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5980_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((RaycastResultU5BU5D_t2894*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m15056_GenericMethod;
extern "C" void List_1__cctor_m15056_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t316_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((RaycastResultU5BU5D_t2894*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15057_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15057_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		Enumerator_t2896  L_0 = (( Enumerator_t2896  (*) (List_1_t316 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t2896  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m15058_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15058_gshared (List_1_t316 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7944(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m7944_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m15059_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15059_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		Enumerator_t2896  L_0 = (( Enumerator_t2896  (*) (List_1_t316 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t2896  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m15060_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m15060_gshared (List_1_t316 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t897_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2032_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t555 * L_2 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m3019(L_2, (String_t*) &_stringLiteral1443, /*hidden argument*/&ArgumentException__ctor_m3019_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m15061_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m15061_gshared (List_1_t316 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t897_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2032_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m15062_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15062_gshared (List_1_t316 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t897_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2032_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m15063_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m15063_gshared (List_1_t316 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t897_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2032_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t555 * L_3 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m3019(L_3, (String_t*) &_stringLiteral1443, /*hidden argument*/&ArgumentException__ctor_m3019_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m15064_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m15064_gshared (List_1_t316 * __this, Object_t * ___item, MethodInfo* method)
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
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t897_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2032_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15065_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15065_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m15066_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15066_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m15067_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15067_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m15068_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15068_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m15069_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15069_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m15070_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15070_gshared (List_1_t316 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t317  L_1 = (RaycastResult_t317 )VirtFuncInvoker1< RaycastResult_t317 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		RaycastResult_t317  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m15071_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m15071_gshared (List_1_t316 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
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
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t897_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2032_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t555 * L_2 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m3019(L_2, (String_t*) &_stringLiteral671, /*hidden argument*/&ArgumentException__ctor_m3019_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m2680_gshared (List_1_t316 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		RaycastResultU5BU5D_t2894* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		RaycastResultU5BU5D_t2894* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		RaycastResult_t317  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_2, L_5)) = (RaycastResult_t317 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15072_gshared (List_1_t316 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		RaycastResultU5BU5D_t2894* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t316 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m7134(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m7134_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m7134(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m7134_MethodInfo);
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15073_gshared (List_1_t316 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		RaycastResultU5BU5D_t2894* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2894*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15074_gshared (List_1_t316 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	RaycastResult_t317  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			RaycastResult_t317  L_3 = (RaycastResult_t317 )InterfaceFuncInvoker0< RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			RaycastResult_t317  L_4 = V_0;
			VirtActionInvoker1< RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m15075_GenericMethod;
extern "C" void List_1_AddRange_m15075_gshared (List_1_t316 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t316 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t316 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t316 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m15076_GenericMethod;
extern "C" ReadOnlyCollection_1_t2898 * List_1_AsReadOnly_m15076_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2898 * L_0 = (ReadOnlyCollection_1_t2898 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t2898 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod List_1_Clear_m2544_GenericMethod;
extern "C" void List_1_Clear_m2544_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2894* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m7125(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m7125_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m15077_gshared (List_1_t316 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		RaycastResult_t317  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, RaycastResult_t317 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m15078_GenericMethod;
extern "C" void List_1_CopyTo_m15078_gshared (List_1_t316 * __this, RaycastResultU5BU5D_t2894* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2894* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7944(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m7944_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m15079_GenericMethod;
extern TypeInfo* List_1_t316_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t317  List_1_Find_m15079_gshared (List_1_t316 * __this, Predicate_1_t2902 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m15079_init;
	if (!List_1_Find_m15079_init)
	{
		List_1_t316_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t316_0_0_0);
		List_1_Find_m15079_init = true;
	}
	int32_t V_0 = 0;
	RaycastResult_t317  V_1 = {0};
	RaycastResult_t317  G_B3_0 = {0};
	{
		Predicate_1_t2902 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t316_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2902 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t2902 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t316 *, int32_t, int32_t, Predicate_1_t2902 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		RaycastResultU5BU5D_t2894* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&RaycastResult_t317_il2cpp_TypeInfo), (&V_1));
		RaycastResult_t317  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15080_gshared (Object_t * __this /* static, unused */, Predicate_1_t2902 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t2902 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral1301, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15081_gshared (List_1_t316 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2902 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t2902 * L_3 = ___match;
		RaycastResultU5BU5D_t2894* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2896  List_1_GetEnumerator_m15082_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		Enumerator_t2896  L_0 = {0};
		(( void (*) (Enumerator_t2896 *, List_1_t316 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15083_gshared (List_1_t316 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		RaycastResult_t317  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, RaycastResult_t317 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15084_gshared (List_1_t316 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		RaycastResultU5BU5D_t2894* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		RaycastResultU5BU5D_t2894* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m7944(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m7944_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		RaycastResultU5BU5D_t2894* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m7125(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m7125_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15085_gshared (List_1_t316 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t922 * L_3 = (ArgumentOutOfRangeException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t922_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5980(L_3, (String_t*) &_stringLiteral471, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5980_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15086_gshared (List_1_t316 * __this, int32_t ___index, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		RaycastResultU5BU5D_t2894* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t316 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2894* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t317  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t317 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15087_gshared (List_1_t316 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral1444, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m15088_gshared (List_1_t316 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t317  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m15089_GenericMethod;
extern TypeInfo* List_1_t316_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m15089_gshared (List_1_t316 * __this, Predicate_1_t2902 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m15089_init;
	if (!List_1_RemoveAll_m15089_init)
	{
		List_1_t316_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t316_0_0_0);
		List_1_RemoveAll_m15089_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2902 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t316_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2902 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t2902 * L_1 = ___match;
		RaycastResultU5BU5D_t2894* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t2902 * L_13 = ___match;
		RaycastResultU5BU5D_t2894* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		RaycastResultU5BU5D_t2894* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		RaycastResultU5BU5D_t2894* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_18, L_20)) = (RaycastResult_t317 )(*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		RaycastResultU5BU5D_t2894* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m7125(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m7125_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15090_gshared (List_1_t316 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t922 * L_3 = (ArgumentOutOfRangeException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t922_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5980(L_3, (String_t*) &_stringLiteral471, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5980_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t316 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2894* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m7125(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m7125_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m15091_GenericMethod;
extern "C" void List_1_Reverse_m15091_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m7166(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m7166_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern Il2CppGenericMethod List_1_Sort_m15092_GenericMethod;
extern TypeInfo* Comparer_1_t2903_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m15092_gshared (List_1_t316 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m15092_init;
	if (!List_1_Sort_m15092_init)
	{
		Comparer_1_t2903_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2903_0_0_0);
		List_1_Sort_m15092_init = true;
	}
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2903_il2cpp_TypeInfo_var);
		Comparer_1_t2903 * L_2 = (( Comparer_1_t2903 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m2558_GenericMethod;
extern "C" void List_1_Sort_m2558_gshared (List_1_t316 * __this, Comparison_1_t315 * ___comparison, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t315 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894*, int32_t, Comparison_1_t315 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m15093_GenericMethod;
extern "C" RaycastResultU5BU5D_t2894* List_1_ToArray_m15093_gshared (List_1_t316 * __this, MethodInfo* method)
{
	RaycastResultU5BU5D_t2894* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((RaycastResultU5BU5D_t2894*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		RaycastResultU5BU5D_t2894* L_1 = (__this->____items_1);
		RaycastResultU5BU5D_t2894* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m6198(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m6198_MethodInfo);
		RaycastResultU5BU5D_t2894* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m15094_GenericMethod;
extern "C" void List_1_TrimExcess_m15094_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15095_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2894* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15096_gshared (List_1_t316 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t922 * L_2 = (ArgumentOutOfRangeException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t922_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m6157(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m6157_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		RaycastResultU5BU5D_t2894** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2894**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m2616_GenericMethod;
extern "C" int32_t List_1_get_Count_m2616_gshared (List_1_t316 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t317  List_1_get_Item_m2615_gshared (List_1_t316 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t922 * L_2 = (ArgumentOutOfRangeException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t922_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5980(L_2, (String_t*) &_stringLiteral471, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5980_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		RaycastResultU5BU5D_t2894* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15097_gshared (List_1_t316 * __this, int32_t ___index, RaycastResult_t317  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t316 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t922 * L_3 = (ArgumentOutOfRangeException_t922 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t922_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5980(L_3, (String_t*) &_stringLiteral471, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5980_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		RaycastResultU5BU5D_t2894* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t317  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t317 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2895_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2895_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C" RaycastResult_t317  Array_InternalArray__get_Item_TisRaycastResult_t317_m24749_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastResult_t317_m24749(__this, p0, method) (( RaycastResult_t317  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastResult_t317_m24749_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15102_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastResult_t317_m24749_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15098_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15098_gshared (InternalEnumerator_1_t2895 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15099_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15099_gshared (InternalEnumerator_1_t2895 * __this, MethodInfo* method)
{
	{
		RaycastResult_t317  L_0 = (( RaycastResult_t317  (*) (InternalEnumerator_1_t2895 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResult_t317  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15100_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15100_gshared (InternalEnumerator_1_t2895 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15101_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15101_gshared (InternalEnumerator_1_t2895 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t317  InternalEnumerator_1_get_Current_m15102_gshared (InternalEnumerator_1_t2895 * __this, MethodInfo* method)
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
		RaycastResult_t317  L_8 = (( RaycastResult_t317  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2897_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m15106_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m15103_gshared (Enumerator_t2896 * __this, List_1_t316 * ___l, MethodInfo* method)
{
	{
		List_1_t316 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t316 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m15104_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15104_gshared (Enumerator_t2896 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2896 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1332 * L_1 = (InvalidOperationException_t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1332_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5979(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5979_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		RaycastResult_t317  L_2 = (__this->___current_3);
		RaycastResult_t317  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m15105_GenericMethod;
extern "C" void Enumerator_Dispose_m15105_gshared (Enumerator_t2896 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t316 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::VerifyState()
extern "C" void Enumerator_VerifyState_m15106_gshared (Enumerator_t2896 * __this, MethodInfo* method)
{
	{
		List_1_t316 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2896  L_1 = (*(Enumerator_t2896 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2635(L_2, /*hidden argument*/&Object_GetType_m2635_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m4739_MethodInfo, L_3);
		ObjectDisposedException_t1508 * L_5 = (ObjectDisposedException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1508_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m7142(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m7142_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t316 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1332 * L_9 = (InvalidOperationException_t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1332_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5972(L_9, (String_t*) &_stringLiteral1445, /*hidden argument*/&InvalidOperationException__ctor_m5972_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m15107_GenericMethod;
extern "C" bool Enumerator_MoveNext_m15107_gshared (Enumerator_t2896 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2896 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (__this->___next_1);
		List_1_t316 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t316 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		RaycastResultU5BU5D_t2894* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(RaycastResult_t317 *)(RaycastResult_t317 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m15108_GenericMethod;
extern "C" RaycastResult_t317  Enumerator_get_Current_m15108_gshared (Enumerator_t2896 * __this, MethodInfo* method)
{
	{
		RaycastResult_t317  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_6MethodDeclarations.h"
extern Il2CppType IList_1_t2897_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15138_MethodInfo;
extern MethodInfo IList_1_get_Item_m27638_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27639_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27640_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15138_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27638_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15170_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27639_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27640_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m15109_gshared (ReadOnlyCollection_1_t2898 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral1446, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15110_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15110_gshared (ReadOnlyCollection_1_t2898 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15111_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15111_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15112_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15112_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15113_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15113_gshared (ReadOnlyCollection_1_t2898 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15114_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15114_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15115_GenericMethod;
extern "C" RaycastResult_t317  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15115_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t317  L_1 = (RaycastResult_t317 )VirtFuncInvoker1< RaycastResult_t317 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15116_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15116_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, RaycastResult_t317  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15117_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15117_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15118_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15118_gshared (ReadOnlyCollection_1_t2898 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1030_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m5968_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1030_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15119_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15119_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4697_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m15120_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m15120_gshared (ReadOnlyCollection_1_t2898 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m15121_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m15121_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m15122_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m15122_gshared (ReadOnlyCollection_1_t2898 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15123_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15123_gshared (ReadOnlyCollection_1_t2898 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m15124_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m15124_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m15125_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m15125_gshared (ReadOnlyCollection_1_t2898 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15126_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15126_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15127_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15127_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15128_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15128_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15129_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15129_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15130_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15130_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m15131_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m15131_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t317  L_2 = (RaycastResult_t317 )InterfaceFuncInvoker1< RaycastResult_t317 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		RaycastResult_t317  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m15132_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m15132_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m15133_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m15133_gshared (ReadOnlyCollection_1_t2898 * __this, RaycastResult_t317  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t317  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m15134_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m15134_gshared (ReadOnlyCollection_1_t2898 * __this, RaycastResultU5BU5D_t2894* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2894* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2894*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m15135_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m15135_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m15136_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m15136_gshared (ReadOnlyCollection_1_t2898 * __this, RaycastResult_t317  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t317  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m15137_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m15137_gshared (ReadOnlyCollection_1_t2898 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t317  ReadOnlyCollection_1_get_Item_m15138_gshared (ReadOnlyCollection_1_t2898 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t317  L_2 = (RaycastResult_t317 )InterfaceFuncInvoker1< RaycastResult_t317 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2899_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2899_0_0_0;
extern Il2CppType RaycastResult_t317_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27641_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15169_MethodInfo;
extern MethodInfo List_1__ctor_m2614_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15162_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15160_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15165_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15156_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27642_MethodInfo;
extern MethodInfo IList_1_Insert_m27643_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27644_MethodInfo;
extern MethodInfo IList_1_set_Item_m27645_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27641_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15173_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15174_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15171_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15169_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15162_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15172_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15160_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15165_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15156_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27642_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27643_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27644_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27645_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m15139_GenericMethod;
extern TypeInfo* List_1_t316_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m15139_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m15139_init;
	if (!Collection_1__ctor_m15139_init)
	{
		List_1_t316_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t316_0_0_0);
		Collection_1__ctor_m15139_init = true;
	}
	List_1_t316 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t316_il2cpp_TypeInfo_var);
		List_1_t316 * L_0 = (List_1_t316 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t316 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t316 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m11698_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t316 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15140_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15140_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m15141_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15141_gshared (Collection_1_t2899 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1030_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m5968_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1030_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m15142_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15142_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m15143_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15143_gshared (Collection_1_t2899 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		RaycastResult_t317  L_4 = (( RaycastResult_t317  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m15144_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m15144_gshared (Collection_1_t2899 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m15145_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15145_gshared (Collection_1_t2899 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m15146_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m15146_gshared (Collection_1_t2899 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t317  L_2 = (( RaycastResult_t317  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m15147_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m15147_gshared (Collection_1_t2899 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		RaycastResult_t317  L_2 = (( RaycastResult_t317  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m15148_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15148_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m15149_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15149_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m15150_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15150_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m15151_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15151_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m15152_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15152_gshared (Collection_1_t2899 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t317  L_2 = (RaycastResult_t317 )InterfaceFuncInvoker1< RaycastResult_t317 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		RaycastResult_t317  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m15153_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m15153_gshared (Collection_1_t2899 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t317  L_2 = (( RaycastResult_t317  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m15154_GenericMethod;
extern "C" void Collection_1_Add_m15154_gshared (Collection_1_t2899 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		RaycastResult_t317  L_3 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m15155_GenericMethod;
extern "C" void Collection_1_Clear_m15155_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m15156_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m15157_GenericMethod;
extern "C" bool Collection_1_Contains_m15157_gshared (Collection_1_t2899 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t317  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m15158_GenericMethod;
extern "C" void Collection_1_CopyTo_m15158_gshared (Collection_1_t2899 * __this, RaycastResultU5BU5D_t2894* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2894* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2894*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m15159_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m15159_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15160_gshared (Collection_1_t2899 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t317  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m15161_GenericMethod;
extern "C" void Collection_1_Insert_m15161_gshared (Collection_1_t2899 * __this, int32_t ___index, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t317  L_1 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15162_gshared (Collection_1_t2899 * __this, int32_t ___index, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t317  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m15163_GenericMethod;
extern "C" bool Collection_1_Remove_m15163_gshared (Collection_1_t2899 * __this, RaycastResult_t317  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t317  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m15164_GenericMethod;
extern "C" void Collection_1_RemoveAt_m15164_gshared (Collection_1_t2899 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15165_gshared (Collection_1_t2899 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m15166_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m15166_gshared (Collection_1_t2899 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m15167_GenericMethod;
extern "C" RaycastResult_t317  Collection_1_get_Item_m15167_gshared (Collection_1_t2899 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t317  L_2 = (RaycastResult_t317 )InterfaceFuncInvoker1< RaycastResult_t317 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m15168_GenericMethod;
extern "C" void Collection_1_set_Item_m15168_gshared (Collection_1_t2899 * __this, int32_t ___index, RaycastResult_t317  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t317  L_1 = ___value;
		VirtActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15169_gshared (Collection_1_t2899 * __this, int32_t ___index, RaycastResult_t317  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t317  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m15170_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7994_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ConvertItem(System.Object)
extern "C" RaycastResult_t317  Collection_1_ConvertItem_m15171_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t555 * L_3 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m3019(L_3, (String_t*) &_stringLiteral1443, /*hidden argument*/&ArgumentException__ctor_m3019_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m15172_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t217 * L_2 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_2, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m15173_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t1030_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m11978_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m15174_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t1031_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m11979_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2900_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12.h"
extern TypeInfo DefaultComparer_t2901_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2900_0_0_0;
extern Il2CppType IEquatable_1_t4455_0_0_0;
extern Il2CppType DefaultComparer_t2901_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15180_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27646_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24761_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15180_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27646_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24761_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15175_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m15175_gshared (EqualityComparer_1_t2900 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m15176_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m15176_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2901 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2901 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2901 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2900_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15177_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15177_gshared (EqualityComparer_1_t2900 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15178_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15178_gshared (EqualityComparer_1_t2900 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, RaycastResult_t317 , RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15179_GenericMethod;
extern "C" EqualityComparer_1_t2900 * EqualityComparer_1_get_Default_m15179_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2900 * L_0 = ((EqualityComparer_1_t2900_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4456_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4455_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.RaycastResult>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15180_gshared (DefaultComparer_t2901 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2900 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m15181_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m15181_gshared (DefaultComparer_t2901 * __this, RaycastResult_t317  ___obj, MethodInfo* method)
{
	{
		RaycastResult_t317  L_0 = ___obj;
		RaycastResult_t317  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1097_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m15182_GenericMethod;
extern "C" bool DefaultComparer_Equals_m15182_gshared (DefaultComparer_t2901 * __this, RaycastResult_t317  ___x, RaycastResult_t317  ___y, MethodInfo* method)
{
	{
		RaycastResult_t317  L_0 = ___x;
		RaycastResult_t317  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		RaycastResult_t317  L_3 = ___y;
		RaycastResult_t317  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		RaycastResult_t317  L_6 = ___y;
		RaycastResult_t317  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1096_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m15183_GenericMethod;
extern "C" void Predicate_1__ctor_m15183_gshared (Predicate_1_t2902 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15184_gshared (Predicate_1_t2902 * __this, RaycastResult_t317  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m15184((Predicate_1_t2902 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t317  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, RaycastResult_t317  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m15185_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m15185_gshared (Predicate_1_t2902 * __this, RaycastResult_t317  ___obj, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastResult_t317_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m15186_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m15186_gshared (Predicate_1_t2902 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6.h"
extern TypeInfo DefaultComparer_t2904_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_6MethodDeclarations.h"
extern Il2CppType IComparable_1_t4093_0_0_0;
extern Il2CppType DefaultComparer_t2904_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15191_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27647_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15191_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27647_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m15187_GenericMethod;
extern "C" void Comparer_1__ctor_m15187_gshared (Comparer_1_t2903 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m15188_GenericMethod;
extern "C" void Comparer_1__cctor_m15188_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2904 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2904 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2904 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2903_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m15189_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m15189_gshared (Comparer_1_t2903 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, RaycastResult_t317 , RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t317 *)((RaycastResult_t317 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t555 * L_8 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m10863(L_8, /*hidden argument*/&ArgumentException__ctor_m10863_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" Comparer_1_t2903 * Comparer_1_get_Default_m15190_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2903 * L_0 = ((Comparer_1_t2903_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4092_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4093_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m24770_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24770_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15191_gshared (DefaultComparer_t2904 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2903 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m15192_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m15192_gshared (DefaultComparer_t2904 * __this, RaycastResult_t317  ___x, RaycastResult_t317  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		RaycastResult_t317  L_0 = ___x;
		RaycastResult_t317  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RaycastResult_t317  L_3 = ___y;
		RaycastResult_t317  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		RaycastResult_t317  L_6 = ___y;
		RaycastResult_t317  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		RaycastResult_t317  L_9 = ___x;
		RaycastResult_t317  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		RaycastResult_t317  L_12 = ___x;
		RaycastResult_t317  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		RaycastResult_t317  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t317  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		RaycastResult_t317  L_17 = ___x;
		RaycastResult_t317  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t226_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		RaycastResult_t317  L_20 = ___x;
		RaycastResult_t317  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		RaycastResult_t317  L_23 = ___y;
		RaycastResult_t317  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t226_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m11669_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t226_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t555 * L_27 = (ArgumentException_t555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t555_il2cpp_TypeInfo));
		ArgumentException__ctor_m3019(L_27, (String_t*) &_stringLiteral1429, /*hidden argument*/&ArgumentException__ctor_m3019_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t356_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"

// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_7.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Predicate_1_gen_10.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7.h"
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Comparison_1_gen_10.h"
extern TypeInfo BaseRaycaster_t358_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3825_il2cpp_TypeInfo;
extern TypeInfo BaseRaycasterU5BU5D_t2905_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2907_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3823_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3824_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2909_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2913_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2914_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_7MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Predicate_1_gen_10MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7MethodDeclarations.h"
extern Il2CppType List_1_t356_0_0_0;
extern Il2CppType ICollection_1_t3825_0_0_0;
extern Il2CppType BaseRaycasterU5BU5D_t2905_0_0_0;
extern Il2CppType Enumerator_t2907_0_0_0;
extern Il2CppType IEnumerable_1_t3823_0_0_0;
extern Il2CppType IEnumerator_1_t3824_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2909_0_0_0;
extern Il2CppType Predicate_1_t2913_0_0_0;
extern Il2CppType Comparer_1_t2914_0_0_0;
extern MethodInfo List_1_get_Item_m2545_MethodInfo;
extern MethodInfo List_1_set_Item_m15236_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27648_MethodInfo;
extern MethodInfo List_1_Add_m2609_MethodInfo;
extern MethodInfo List_1_Contains_m2608_MethodInfo;
extern MethodInfo List_1_IndexOf_m15222_MethodInfo;
extern MethodInfo List_1_Insert_m15225_MethodInfo;
extern MethodInfo List_1_Remove_m2610_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27649_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27650_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27651_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15248_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15323_MethodInfo;
extern MethodInfo Enumerator__ctor_m15242_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15228_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.BaseRaycaster>(!!0[]&,System.Int32)
#define Array_Resize_TisBaseRaycaster_t358_m24786(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2905**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseRaycaster>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisBaseRaycaster_t358_m24788(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2905*, BaseRaycaster_t358 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisBaseRaycaster_t358_m24790(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2905*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseRaycaster>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisBaseRaycaster_t358_m24798(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, BaseRaycasterU5BU5D_t2905*, int32_t, Comparison_1_t2916 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2545_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15236_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisBaseRaycaster_t358_m24786_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15224_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15226_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15213_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27648_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15212_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15221_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2609_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m2608_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15222_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15225_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m2610_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15211_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15234_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15235_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27649_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27650_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27651_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15248_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisBaseRaycaster_t358_m24788_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15219_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15220_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15323_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15242_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15223_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15228_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15329_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseRaycaster_t358_m24790_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseRaycaster_t358_m24798_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2906_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2906_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseRaycaster>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseRaycaster_t358_m24775(__this, p0, method) (( BaseRaycaster_t358 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15241_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseRaycaster_t358_m24775_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2908_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m15245_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_7MethodDeclarations.h"
extern Il2CppType IList_1_t2908_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15277_MethodInfo;
extern MethodInfo IList_1_get_Item_m27652_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27653_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27654_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15277_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27652_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15309_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27653_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27654_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2910_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2910_0_0_0;
extern Il2CppType BaseRaycaster_t358_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27655_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15308_MethodInfo;
extern MethodInfo List_1__ctor_m2607_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15301_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15299_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15304_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15295_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27656_MethodInfo;
extern MethodInfo IList_1_Insert_m27657_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27658_MethodInfo;
extern MethodInfo IList_1_set_Item_m27659_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27655_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15312_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15313_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15310_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15308_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2607_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15301_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15311_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15299_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15304_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15295_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27656_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27657_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27658_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27659_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseRaycaster>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2911_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_13.h"
extern TypeInfo DefaultComparer_t2912_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_13MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2911_0_0_0;
extern Il2CppType IEquatable_1_t4457_0_0_0;
extern Il2CppType DefaultComparer_t2912_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15319_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27660_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24787_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15319_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27660_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24787_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4458_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4457_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.BaseRaycaster>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m15314_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7.h"
extern TypeInfo DefaultComparer_t2915_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7MethodDeclarations.h"
extern Il2CppType IComparable_1_t4095_0_0_0;
extern Il2CppType DefaultComparer_t2915_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15330_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27661_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15330_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27661_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseRaycaster>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4094_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4095_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.BaseRaycaster>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m24796_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15326_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24796_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseRaycaster>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2916_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Comparison_1_gen_10MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t321_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"

// UnityEngine.EventSystems.EventTrigger/Entry
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigger_Entry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_8.h"
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Predicate_1_gen_11.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_8.h"
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Comparison_1_gen_11.h"
extern TypeInfo Entry_t320_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3828_il2cpp_TypeInfo;
extern TypeInfo EntryU5BU5D_t2917_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2919_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3826_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3827_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2921_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2925_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2926_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_8MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Predicate_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_8MethodDeclarations.h"
extern Il2CppType List_1_t321_0_0_0;
extern Il2CppType ICollection_1_t3828_0_0_0;
extern Il2CppType EntryU5BU5D_t2917_0_0_0;
extern Il2CppType Enumerator_t2919_0_0_0;
extern Il2CppType IEnumerable_1_t3826_0_0_0;
extern Il2CppType IEnumerator_1_t3827_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2921_0_0_0;
extern Il2CppType Predicate_1_t2925_0_0_0;
extern Il2CppType Comparer_1_t2926_0_0_0;
extern MethodInfo List_1_get_Item_m2562_MethodInfo;
extern MethodInfo List_1_set_Item_m15382_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27662_MethodInfo;
extern MethodInfo List_1_Add_m15354_MethodInfo;
extern MethodInfo List_1_Contains_m15361_MethodInfo;
extern MethodInfo List_1_IndexOf_m15367_MethodInfo;
extern MethodInfo List_1_Insert_m15370_MethodInfo;
extern MethodInfo List_1_Remove_m15372_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27663_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27664_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27665_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15394_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15469_MethodInfo;
extern MethodInfo Enumerator__ctor_m15388_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15374_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[]&,System.Int32)
#define Array_Resize_TisEntry_t320_m24812(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2917**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisEntry_t320_m24814(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, EntryU5BU5D_t2917*, Entry_t320 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisEntry_t320_m24816(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2917*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.EventTrigger/Entry>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisEntry_t320_m24824(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, EntryU5BU5D_t2917*, int32_t, Comparison_1_t2928 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2562_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15382_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisEntry_t320_m24812_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15369_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15371_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15357_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27662_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15356_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15366_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m15354_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15361_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15367_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15370_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m15372_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15355_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15380_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15381_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27663_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27664_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27665_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15394_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisEntry_t320_m24814_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15364_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15365_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15469_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15388_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15368_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15374_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15475_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisEntry_t320_m24816_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisEntry_t320_m24824_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2918_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2918_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.EventTrigger/Entry>(System.Int32)
#define Array_InternalArray__get_Item_TisEntry_t320_m24801(__this, p0, method) (( Entry_t320 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15387_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisEntry_t320_m24801_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2920_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m15391_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_8MethodDeclarations.h"
extern Il2CppType IList_1_t2920_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15423_MethodInfo;
extern MethodInfo IList_1_get_Item_m27666_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27667_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27668_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15423_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27666_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15455_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27667_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27668_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2922_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2922_0_0_0;
extern Il2CppType Entry_t320_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27669_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15454_MethodInfo;
extern MethodInfo List_1__ctor_m2560_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15447_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15445_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15450_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15441_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27670_MethodInfo;
extern MethodInfo IList_1_Insert_m27671_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27672_MethodInfo;
extern MethodInfo IList_1_set_Item_m27673_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27669_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15458_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15459_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15456_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15454_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2560_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15447_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15457_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15445_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15450_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15441_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27670_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27671_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27672_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27673_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2923_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_14.h"
extern TypeInfo DefaultComparer_t2924_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_14MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2923_0_0_0;
extern Il2CppType IEquatable_1_t4459_0_0_0;
extern Il2CppType DefaultComparer_t2924_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15465_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27674_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24813_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15465_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27674_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24813_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4460_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4459_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m15460_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_8.h"
extern TypeInfo DefaultComparer_t2927_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_8MethodDeclarations.h"
extern Il2CppType IComparable_1_t4097_0_0_0;
extern Il2CppType DefaultComparer_t2927_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15476_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27675_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15476_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27675_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4096_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4097_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.EventTrigger/Entry>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m24822_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15472_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24822_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.EventTrigger/Entry>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2928_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Comparison_1_gen_11MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t319_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0.h"
extern TypeInfo ObjectU5BU5D_t194_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2932_il2cpp_TypeInfo;
extern TypeInfo BaseEventData_t314_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0MethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t194_0_0_0;
extern Il2CppType BaseEventData_t314_0_0_0;
extern Il2CppType InvokableCall_1_t2932_0_0_0;
extern MethodInfo UnityEventBase__ctor_m4505_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m4510_MethodInfo;
extern MethodInfo Delegate_get_Target_m4796_MethodInfo;
extern MethodInfo Delegate_get_Method_m4795_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m4511_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m4513_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m15500_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m15501_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m4512_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m15489_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15500_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15501_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t2929_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
extern TypeInfo InvokableCall_1_t2930_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType InvokableCall_1_t2930_0_0_0;
extern MethodInfo InvokableCall_1__ctor_m15492_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m15493_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m15490_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15492_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15493_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m15482_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m15482_gshared (UnityEvent_1_t2929 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m15482_init;
	if (!UnityEvent_1__ctor_m15482_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		UnityEvent_1__ctor_m15482_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m4505(__this, /*hidden argument*/&UnityEventBase__ctor_m4505_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m15484_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m15484_gshared (UnityEvent_1_t2929 * __this, UnityAction_1_t2876 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2876 * L_0 = ___call;
		BaseInvokableCall_t882 * L_1 = (( BaseInvokableCall_t882 * (*) (Object_t * /* static, unused */, UnityAction_1_t2876 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m4510(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m4510_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m15486_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m15486_gshared (UnityEvent_1_t2929 * __this, UnityAction_1_t2876 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2876 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4796(L_0, /*hidden argument*/&Delegate_get_Target_m4796_MethodInfo);
		UnityAction_1_t2876 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m4795(L_2, /*hidden argument*/&Delegate_get_Method_m4795_MethodInfo);
		UnityEventBase_RemoveListener_m4511(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m4511_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m15487_GenericMethod;
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15487_gshared (UnityEvent_1_t2929 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m15487_init;
	if (!UnityEvent_1_FindMethod_Impl_m15487_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		UnityEvent_1_FindMethod_Impl_m15487_init = true;
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m15488_GenericMethod;
extern "C" BaseInvokableCall_t882 * UnityEvent_1_GetDelegate_m15488_gshared (UnityEvent_1_t2929 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2930 * L_2 = (InvokableCall_1_t2930 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2930 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t882 * UnityEvent_1_GetDelegate_m15490_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2876 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t2876 * L_0 = ___action;
		InvokableCall_1_t2930 * L_1 = (InvokableCall_1_t2930 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2930 *, UnityAction_1_t2876 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m15491_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m15491_gshared (UnityEvent_1_t2929 * __this, Object_t * ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t194* L_0 = (__this->___m_InvokeArray_4);
		Object_t * L_1 = ___arg0;
		Object_t * L_2 = L_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, ((Object_t *)L_2));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)((Object_t *)L_2);
		ObjectU5BU5D_t194* L_3 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m4512(__this, L_3, /*hidden argument*/&UnityEventBase_Invoke_m4512_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
extern Il2CppType UnityAction_1_t2876_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m4484_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m4797_MethodInfo;
extern MethodInfo Delegate_Combine_m1278_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m4483_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m4485_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m14875_MethodInfo;
struct BaseInvokableCall_t882;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m24826_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m24826(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m24826_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m24826_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15492_gshared (InvokableCall_1_t2930 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m4484(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m4484_MethodInfo);
		UnityAction_1_t2876 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t289 * L_6 = Delegate_CreateDelegate_m4797(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m4797_MethodInfo);
		Delegate_t289 * L_7 = Delegate_Combine_m1278(NULL /*static, unused*/, L_2, ((UnityAction_1_t2876 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2876 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15493_gshared (InvokableCall_1_t2930 * __this, UnityAction_1_t2876 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m4483(__this, /*hidden argument*/&BaseInvokableCall__ctor_m4483_MethodInfo);
		UnityAction_1_t2876 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t2876 * L_1 = ___callback;
		Delegate_t289 * L_2 = Delegate_Combine_m1278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2876 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m15494_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m15494_gshared (InvokableCall_1_t2930 * __this, ObjectU5BU5D_t194* ___args, MethodInfo* method)
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
		UnityAction_1_t2876 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m4485(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m4485_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2876 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t194* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m15495_GenericMethod;
extern "C" bool InvokableCall_1_Find_m15495_gshared (InvokableCall_1_t2930 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2876 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4796(L_0, /*hidden argument*/&Delegate_get_Target_m4796_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2876 * L_3 = (__this->___Delegate_0);
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t2931_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

extern Il2CppType UnityAction_1_t2931_0_0_0;
extern MethodInfo UnityAction_1_Invoke_m15497_MethodInfo;
struct BaseInvokableCall_t882;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.BaseEventData>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.EventSystems.BaseEventData>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBaseEventData_t314_m24827(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m24826_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisBaseEventData_t314_m24827_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m15497_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t325_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t326_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t327_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_4MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t328_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_5MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t329_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_6MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::EndInvoke(System.IAsyncResult)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
