#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
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
extern TypeInfo EqualityComparer_1_t2824_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2826_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2824_0_0_0;
extern Il2CppType IEquatable_1_t2115_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2445_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType DefaultComparer_t2826_0_0_0;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4795_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4793_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10828_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m14411_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27579_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m27575_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14411_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27579_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m27575_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m14403_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m14403_gshared (EqualityComparer_1_t2824 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m14404_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m14404_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2826 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2826 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2826 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2824_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14405_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14405_gshared (EqualityComparer_1_t2824 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14406_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14406_gshared (EqualityComparer_1_t2824 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int32>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m14407_GenericMethod;
extern "C" EqualityComparer_1_t2824 * EqualityComparer_1_get_Default_m14407_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2824 * L_0 = ((EqualityComparer_1_t2824_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2825_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7MethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t2115_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m1097_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m27580_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m27580_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m14408_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m14408_gshared (GenericEqualityComparer_1_t2825 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2824 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m14409_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m14409_gshared (GenericEqualityComparer_1_t2825 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		int32_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m14410_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m14410_gshared (GenericEqualityComparer_1_t2825 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m1096_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m14411_gshared (DefaultComparer_t2826 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2824 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m14412_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m14412_gshared (DefaultComparer_t2826 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		int32_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m14413_GenericMethod;
extern "C" bool DefaultComparer_Equals_m14413_gshared (DefaultComparer_t2826 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1096_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4406_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4407_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3803_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t2827_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern MethodInfo Object_ToString_m1098_MethodInfo;
extern MethodInfo String_Concat_m932_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m14416_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m14418_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m14415_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m14417_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_76.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2828_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_76MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1330_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2828_0_0_0;
extern Il2CppType KeyValuePair_2_t2827_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5961_MethodInfo;
extern MethodInfo Array_get_Length_m5965_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t2827  Array_InternalArray__get_Item_TisKeyValuePair_2_t2827_m24535_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2827_m24535(__this, p0, method) (( KeyValuePair_2_t2827  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2827_m24535_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14424_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2827_m24535_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14420_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m14420_gshared (InternalEnumerator_1_t2828 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14421_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14421_gshared (InternalEnumerator_1_t2828 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2827  L_0 = (( KeyValuePair_2_t2827  (*) (InternalEnumerator_1_t2828 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2827  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14422_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m14422_gshared (InternalEnumerator_1_t2828 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14423_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m14423_gshared (InternalEnumerator_1_t2828 * __this, MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m5965(L_1, /*hidden argument*/&Array_get_Length_m5965_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2827  InternalEnumerator_1_get_Current_m14424_gshared (InternalEnumerator_1_t2828 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1330 * L_1 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5961(L_1, (String_t*) &_stringLiteral1304, /*hidden argument*/&InvalidOperationException__ctor_m5961_MethodInfo);
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
		InvalidOperationException_t1330 * L_3 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5961(L_3, (String_t*) &_stringLiteral1305, /*hidden argument*/&InvalidOperationException__ctor_m5961_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5965(L_5, /*hidden argument*/&Array_get_Length_m5965_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2827  L_8 = (( KeyValuePair_2_t2827  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4411_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3801_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Int32>::get_Values()
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2829_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_15.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_29.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t1028_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t270_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2830_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2832_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_29MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_15MethodDeclarations.h"
extern Il2CppType Dictionary_2_t270_0_0_0;
extern Il2CppType Enumerator_t2830_0_0_0;
extern Il2CppType KeyCollection_t2829_0_0_0;
extern Il2CppType Transform_1_t2832_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m11687_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m14270_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5982_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m14295_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m14436_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m14284_MethodInfo;
extern MethodInfo Transform_1__ctor_m14456_MethodInfo;
extern MethodInfo Enumerator__ctor_m14439_MethodInfo;
struct Dictionary_2_t270;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
struct Dictionary_2_t2812;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_25.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24526_gshared (Dictionary_2_t2812 * __this, Array_t * p0, int32_t p1, Transform_1_t2818 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24526(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2812 *, Array_t *, int32_t, Transform_1_t2818 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24526_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m24546(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t270 *, Array_t *, int32_t, Transform_1_t2832 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24526_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t270;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m24547 (Dictionary_2_t270 * __this, StringU5BU5D_t215* p0, int32_t p1, Transform_1_t2832 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m14270_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m14295_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m14437_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m14436_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m14280_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m14284_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14456_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m24546_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m24547_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14439_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
extern TypeInfo Enumerator_t2831_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9MethodDeclarations.h"
extern Il2CppType Enumerator_t2831_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m14451_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m14316_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m14455_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m14449_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo DictionaryEntry_t1154_il2cpp_TypeInfo;
extern TypeInfo Link_t1634_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1506_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m5962_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m14414_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m7131_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m14454_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m14452_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m14453_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m14414_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::Dispose()
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t2833_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_18MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_19.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_30.h"
extern TypeInfo Enumerator_t2834_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1264_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2835_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_30MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_19MethodDeclarations.h"
extern Il2CppType Enumerator_t2834_0_0_0;
extern Il2CppType Int32U5BU5D_t1264_0_0_0;
extern Il2CppType ValueCollection_t2833_0_0_0;
extern Il2CppType Transform_1_t2835_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m14471_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m14286_MethodInfo;
extern MethodInfo Transform_1__ctor_m14479_MethodInfo;
extern MethodInfo Enumerator__ctor_m14474_MethodInfo;
struct Dictionary_2_t270;
struct Dictionary_2_t2812;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_26.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24528_gshared (Dictionary_2_t2812 * __this, Array_t * p0, int32_t p1, Transform_1_t2821 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24528(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2812 *, Array_t *, int32_t, Transform_1_t2821 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24528_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24549(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t270 *, Array_t *, int32_t, Transform_1_t2835 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24528_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t270;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t188_TisInt32_t188_m24550 (Dictionary_2_t270 * __this, Int32U5BU5D_t1264* p0, int32_t p1, Transform_1_t2835 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m14297_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m14472_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m14471_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m14286_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14479_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t188_m24549_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t188_TisInt32_t188_m24550_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14474_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2810_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_31MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2836_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_32MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2837_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_33MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m14488_GenericMethod;
extern "C" void Transform_1__ctor_m14488_gshared (Transform_1_t2837 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14490_GenericMethod;
extern "C" KeyValuePair_2_t2827  Transform_1_Invoke_m14490_gshared (Transform_1_t2837 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14490((Transform_1_t2837 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2827  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2827  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2827  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14492_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14492_gshared (Transform_1_t2837 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14494_GenericMethod;
extern "C" KeyValuePair_2_t2827  Transform_1_EndInvoke_m14494_gshared (Transform_1_t2837 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2827 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2838_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t1151_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t2838_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11690_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m14497_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m14450_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m14497_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int32>::get_Current()
// UnityEngine.CastHelper`1<UnityEngine.Light>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2839_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Light>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_21MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.Canvas>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2840_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Canvas>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_27MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.RectTransform>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2841_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.RectTransform>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_22MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3874_il2cpp_TypeInfo;

// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2842_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77MethodDeclarations.h"

extern TypeInfo Selectable_t293_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2842_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m23558_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m23558(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Selectable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Selectable>(System.Int32)
#define Array_InternalArray__get_Item_TisSelectable_t293_m24559(__this, p0, method) (( Selectable_t293 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14505_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSelectable_t293_m24559_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Selectable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3875_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3873_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3129_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4412_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerEnterHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4413_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IPointerEnterHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4414_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_78.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2843_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_78MethodDeclarations.h"

extern TypeInfo IPointerEnterHandler_t307_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2843_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerEnterHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIPointerEnterHandler_t307_m24570(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14510_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIPointerEnterHandler_t307_m24570_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerEnterHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4415_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerEnterHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerEnterHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerEnterHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerEnterHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerEnterHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4416_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerExitHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4417_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IPointerExitHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4418_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_79.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2844_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_79MethodDeclarations.h"

extern TypeInfo IPointerExitHandler_t308_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2844_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerExitHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIPointerExitHandler_t308_m24581(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14515_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIPointerExitHandler_t308_m24581_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerExitHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4419_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerExitHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerExitHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerExitHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerExitHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerExitHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4420_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISelectHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4421_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.ISelectHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4422_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.ISelectHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2845_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80MethodDeclarations.h"

extern TypeInfo ISelectHandler_t346_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2845_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISelectHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISelectHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisISelectHandler_t346_m24592(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14520_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisISelectHandler_t346_m24592_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISelectHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4423_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISelectHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISelectHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISelectHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISelectHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISelectHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4424_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IDeselectHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4425_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IDeselectHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4426_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_81.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2846_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_81MethodDeclarations.h"

extern TypeInfo IDeselectHandler_t347_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2846_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IDeselectHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IDeselectHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIDeselectHandler_t347_m24603(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14525_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIDeselectHandler_t347_m24603_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IDeselectHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4427_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IDeselectHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IDeselectHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IDeselectHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IDeselectHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IDeselectHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4428_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IMoveHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4429_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IMoveHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4430_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IMoveHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_82.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2847_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_82MethodDeclarations.h"

extern TypeInfo IMoveHandler_t348_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2847_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IMoveHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IMoveHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIMoveHandler_t348_m24614(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14530_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIMoveHandler_t348_m24614_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IMoveHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4431_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IMoveHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IMoveHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IMoveHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IMoveHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IMoveHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4432_il2cpp_TypeInfo;

// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.UIBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4433_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.UIBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4434_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.UIBehaviour>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_83.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2848_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_83MethodDeclarations.h"

extern TypeInfo UIBehaviour_t292_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2848_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.UIBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.UIBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisUIBehaviour_t292_m24625(__this, p0, method) (( UIBehaviour_t292 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14535_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUIBehaviour_t292_m24625_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.UIBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4435_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.UIBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.UIBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.UIBehaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.UIBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.UIBehaviour>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityEngine.UI.Text>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2849_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.UI.Text>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_23MethodDeclarations.h"



// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t311_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"

// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_3.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Predicate_1_gen_7.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3.h"
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Comparison_1_gen_7.h"
extern TypeInfo BaseInputModule_t296_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t553_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t895_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2030_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t920_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3810_il2cpp_TypeInfo;
extern TypeInfo BaseInputModuleU5BU5D_t2850_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2852_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3808_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3809_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2854_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2858_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2859_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_3MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Predicate_1_gen_7MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3MethodDeclarations.h"
extern Il2CppType List_1_t311_0_0_0;
extern Il2CppType ICollection_1_t3810_0_0_0;
extern Il2CppType BaseInputModuleU5BU5D_t2850_0_0_0;
extern Il2CppType Enumerator_t2852_0_0_0;
extern Il2CppType IEnumerable_1_t3808_0_0_0;
extern Il2CppType IEnumerator_1_t3809_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2854_0_0_0;
extern Il2CppType Predicate_1_t2858_0_0_0;
extern Il2CppType Comparer_1_t2859_0_0_0;
extern MethodInfo List_1_get_Item_m2527_MethodInfo;
extern MethodInfo List_1_set_Item_m14581_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3008_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m6146_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5969_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27581_MethodInfo;
extern MethodInfo Array_Copy_m7933_MethodInfo;
extern MethodInfo List_1_Add_m14554_MethodInfo;
extern MethodInfo List_1_Contains_m14561_MethodInfo;
extern MethodInfo List_1_IndexOf_m14567_MethodInfo;
extern MethodInfo List_1_Insert_m14570_MethodInfo;
extern MethodInfo List_1_Remove_m14572_MethodInfo;
extern MethodInfo Math_Max_m7123_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27582_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27583_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27584_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m14593_MethodInfo;
extern MethodInfo Array_Clear_m7114_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m14668_MethodInfo;
extern MethodInfo Enumerator__ctor_m14587_MethodInfo;
extern MethodInfo List_1_RemoveAt_m2528_MethodInfo;
extern MethodInfo Array_Reverse_m7155_MethodInfo;
extern MethodInfo Array_Copy_m6187_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m24054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m24054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.BaseInputModule>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.BaseInputModule>(!!0[]&,System.Int32)
#define Array_Resize_TisBaseInputModule_t296_m24647(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, BaseInputModuleU5BU5D_t2850**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11688_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11688(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11688_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseInputModule>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.BaseInputModule>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisBaseInputModule_t296_m24649(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, BaseInputModuleU5BU5D_t2850*, BaseInputModule_t296 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11688_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24057_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m24057(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24057_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisBaseInputModule_t296_m24651(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, BaseInputModuleU5BU5D_t2850*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24057_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24164_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, Comparison_1_t2701 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m24164(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, Comparison_1_t2701 *, MethodInfo*))Array_Sort_TisObject_t_m24164_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.BaseInputModule>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisBaseInputModule_t296_m24659(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, BaseInputModuleU5BU5D_t2850*, int32_t, Comparison_1_t2861 *, MethodInfo*))Array_Sort_TisObject_t_m24164_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2527_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14581_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisBaseInputModule_t296_m24647_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m14569_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m14571_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m14557_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27581_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m14556_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m14566_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m14554_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m14561_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m14567_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m14570_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m14572_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m14555_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m14579_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m14580_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27582_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27583_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27584_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m14593_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisBaseInputModule_t296_m24649_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m14564_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m14565_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m14668_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14587_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m14568_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m2528_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m14674_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseInputModule_t296_m24651_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseInputModule_t296_m24659_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_84.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2851_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_84MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2851_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseInputModule>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseInputModule>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseInputModule_t296_m24636(__this, p0, method) (( BaseInputModule_t296 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14586_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseInputModule_t296_m24636_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseInputModule>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2853_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m5968_MethodInfo;
extern MethodInfo Object_GetType_m2624_MethodInfo;
extern MethodInfo Type_get_FullName_m4728_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m14590_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t618_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3MethodDeclarations.h"
extern Il2CppType IList_1_t2853_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m14622_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;
extern MethodInfo IList_1_get_Item_m27585_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5957_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4686_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27586_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27587_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m14622_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27585_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m14654_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27586_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27587_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2855_il2cpp_TypeInfo;

extern TypeInfo IList_t1029_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2855_0_0_0;
extern Il2CppType BaseInputModule_t296_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27588_MethodInfo;
extern MethodInfo Collection_1_SetItem_m14653_MethodInfo;
extern MethodInfo List_1__ctor_m2524_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m14646_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m14644_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m14649_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m14640_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27589_MethodInfo;
extern MethodInfo IList_1_Insert_m27590_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27591_MethodInfo;
extern MethodInfo IList_1_set_Item_m27592_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7983_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11967_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11968_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27588_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m14657_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m14658_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m14655_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m14653_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2524_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m14646_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m14656_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m14644_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m14649_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m14640_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27589_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27590_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27591_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27592_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.BaseInputModule>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2856_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9.h"
extern TypeInfo DefaultComparer_t2857_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2856_0_0_0;
extern Il2CppType IEquatable_1_t4436_0_0_0;
extern Il2CppType DefaultComparer_t2857_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14664_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27593_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24648_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14664_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27593_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24648_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4437_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.BaseInputModule>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4436_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.BaseInputModule>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m14659_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3.h"
extern TypeInfo DefaultComparer_t2860_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3MethodDeclarations.h"
extern Il2CppType IComparable_1_t4085_0_0_0;
extern Il2CppType GenericComparer_1_t2356_0_0_0;
extern Il2CppType DefaultComparer_t2860_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14675_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27594_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10852_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14675_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27594_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.BaseInputModule>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4084_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4085_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.BaseInputModule>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t226_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m24657_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11658_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m14671_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24657_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.BaseInputModule>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2861_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Comparison_1_gen_7MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>::EndInvoke(System.IAsyncResult)
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t313_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_genMethodDeclarations.h"

// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"


// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m2525_GenericMethod;
extern "C" void Comparison_1__ctor_m2525_gshared (Comparison_1_t313 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m14681_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m14681_gshared (Comparison_1_t313 * __this, RaycastResult_t315  ___x, RaycastResult_t315  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14681((Comparison_1_t313 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t315  ___x, RaycastResult_t315  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastResult_t315  ___x, RaycastResult_t315  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m14682_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m14682_gshared (Comparison_1_t313 * __this, RaycastResult_t315  ___x, RaycastResult_t315  ___y, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastResult_t315_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&RaycastResult_t315_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m14683_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m14683_gshared (Comparison_1_t313 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t336_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventFMethodDeclarations.h"

// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventFunction_1_t517_il2cpp_TypeInfo;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"



// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod EventFunction_1__ctor_m14684_GenericMethod;
extern "C" void EventFunction_1__ctor_m14684_gshared (EventFunction_1_t517 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern Il2CppGenericMethod EventFunction_1_Invoke_m14686_GenericMethod;
extern "C" void EventFunction_1_Invoke_m14686_gshared (EventFunction_1_t517 * __this, Object_t * ___handler, BaseEventData_t312 * ___eventData, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventFunction_1_Invoke_m14686((EventFunction_1_t517 *)__this->___prev_9,___handler, ___eventData, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___handler, BaseEventData_t312 * ___eventData, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___handler, BaseEventData_t312 * ___eventData, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, BaseEventData_t312 * ___eventData, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod EventFunction_1_BeginInvoke_m14688_GenericMethod;
extern "C" Object_t * EventFunction_1_BeginInvoke_m14688_gshared (EventFunction_1_t517 * __this, Object_t * ___handler, BaseEventData_t312 * ___eventData, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___handler;
	__d_args[1] = ___eventData;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod EventFunction_1_EndInvoke_m14690_GenericMethod;
extern "C" void EventFunction_1_EndInvoke_m14690_gshared (EventFunction_1_t517 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t352_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_4.h"
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Predicate_1_gen_8.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4.h"
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Comparison_1_gen_8.h"
extern TypeInfo IEventSystemHandler_t240_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3813_il2cpp_TypeInfo;
extern TypeInfo IEventSystemHandlerU5BU5D_t2862_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2863_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3811_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3812_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2864_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2868_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2869_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_4MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Predicate_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4MethodDeclarations.h"
extern Il2CppType List_1_t352_0_0_0;
extern Il2CppType ICollection_1_t3813_0_0_0;
extern Il2CppType IEventSystemHandlerU5BU5D_t2862_0_0_0;
extern Il2CppType Enumerator_t2863_0_0_0;
extern Il2CppType IEnumerable_1_t3811_0_0_0;
extern Il2CppType IEnumerator_1_t3812_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2864_0_0_0;
extern Il2CppType Predicate_1_t2868_0_0_0;
extern Il2CppType Comparer_1_t2869_0_0_0;
extern MethodInfo List_1_get_Item_m14738_MethodInfo;
extern MethodInfo List_1_set_Item_m14739_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27595_MethodInfo;
extern MethodInfo List_1_Add_m14710_MethodInfo;
extern MethodInfo List_1_Contains_m14716_MethodInfo;
extern MethodInfo List_1_IndexOf_m14722_MethodInfo;
extern MethodInfo List_1_Insert_m14725_MethodInfo;
extern MethodInfo List_1_Remove_m14727_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27596_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27597_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27598_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m14746_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m14821_MethodInfo;
extern MethodInfo Enumerator__ctor_m14740_MethodInfo;
extern MethodInfo List_1_RemoveAt_m14729_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.IEventSystemHandler>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.IEventSystemHandler>(!!0[]&,System.Int32)
#define Array_Resize_TisIEventSystemHandler_t240_m24664(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2862**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisIEventSystemHandler_t240_m24666(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2862*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11688_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisIEventSystemHandler_t240_m24668(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2862*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24057_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisIEventSystemHandler_t240_m24676(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2862*, int32_t, Comparison_1_t2871 *, MethodInfo*))Array_Sort_TisObject_t_m24164_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m14738_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14739_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisIEventSystemHandler_t240_m24664_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m14724_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m14726_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m14713_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27595_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m14712_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m14721_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m14710_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m14716_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m14722_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m14725_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m14727_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m14711_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m14735_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m14736_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27596_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27597_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27598_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m14746_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisIEventSystemHandler_t240_m24666_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m14719_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m14720_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m14821_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14740_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m14723_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m14729_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m14827_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisIEventSystemHandler_t240_m24668_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisIEventSystemHandler_t240_m24676_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m14743_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t578_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4MethodDeclarations.h"
extern Il2CppType IList_1_t578_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m14775_MethodInfo;
extern MethodInfo IList_1_get_Item_m27599_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27600_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27601_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m14775_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27599_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m14807_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27600_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27601_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2865_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2865_0_0_0;
extern Il2CppType IEventSystemHandler_t240_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27602_MethodInfo;
extern MethodInfo Collection_1_SetItem_m14806_MethodInfo;
extern MethodInfo List_1__ctor_m14691_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m14799_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m14797_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m14802_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m14793_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27603_MethodInfo;
extern MethodInfo IList_1_Insert_m27604_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27605_MethodInfo;
extern MethodInfo IList_1_set_Item_m27606_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27602_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m14810_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m14811_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m14808_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m14806_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m14691_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m14799_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m14809_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m14797_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m14802_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m14793_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27603_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27604_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27605_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27606_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2866_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10.h"
extern TypeInfo DefaultComparer_t2867_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2866_0_0_0;
extern Il2CppType IEquatable_1_t4438_0_0_0;
extern Il2CppType DefaultComparer_t2867_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14817_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27607_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24665_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14817_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27607_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24665_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4439_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4438_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m14812_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4.h"
extern TypeInfo DefaultComparer_t2870_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4MethodDeclarations.h"
extern Il2CppType IComparable_1_t4087_0_0_0;
extern Il2CppType DefaultComparer_t2870_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14828_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27608_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14828_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27608_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4086_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4087_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.IEventSystemHandler>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m24674_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m14824_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24674_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2871_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Comparison_1_gen_8MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t340_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_genMethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
extern TypeInfo Stack_1_t2872_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t341_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppType Stack_1_t2872_0_0_0;
extern Il2CppType UnityAction_1_t341_0_0_0;
extern MethodInfo Stack_1_get_Count_m14876_MethodInfo;
extern MethodInfo Stack_1__ctor_m14867_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m14898_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m1293_MethodInfo;
extern MethodInfo Debug_LogError_m798_MethodInfo;
struct Activator_t1989;
// System.Activator
#include "mscorlib_System_Activator.h"
struct Activator_t1989;
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m24678_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m24678(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
// Declaration !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>()
// !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>()
#define Activator_CreateInstance_TisList_1_t352_m24714(__this /* static, unused */, method) (( List_1_t352 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m14835_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m14841_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m14876_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m14867_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisList_1_t352_m24714_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m14837_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m14874_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m14898_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m14873_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m14875_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t2875_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6.h"
extern TypeInfo Stack_1_t2873_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t2874_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
extern Il2CppType Stack_1_t2873_0_0_0;
extern Il2CppType UnityAction_1_t2874_0_0_0;
extern MethodInfo Stack_1_get_Count_m14856_MethodInfo;
extern MethodInfo Stack_1__ctor_m14847_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m14864_MethodInfo;
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m14836_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m14842_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m14856_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m14847_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisObject_t_m24678_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m14838_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m14854_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m14864_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m14853_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m14855_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern Il2CppGenericMethod ObjectPool_1__ctor_m14834_GenericMethod;
extern "C" void ObjectPool_1__ctor_m14834_gshared (ObjectPool_1_t2875 * __this, UnityAction_1_t2874 * ___actionOnGet, UnityAction_1_t2874 * ___actionOnRelease, MethodInfo* method)
{
	{
		Stack_1_t2873 * L_0 = (Stack_1_t2873 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Stack_1_t2873 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_Stack_0 = L_0;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		UnityAction_1_t2874 * L_1 = ___actionOnGet;
		__this->___m_ActionOnGet_1 = L_1;
		UnityAction_1_t2874 * L_2 = ___actionOnRelease;
		__this->___m_ActionOnRelease_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m14836_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcountAllU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m14838_gshared (ObjectPool_1_t2875 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcountAllU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern Il2CppGenericMethod ObjectPool_1_get_countActive_m14840_GenericMethod;
extern "C" int32_t ObjectPool_1_get_countActive_m14840_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (ObjectPool_1_t2875 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_1 = (( int32_t (*) (ObjectPool_1_t2875 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m14842_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method)
{
	{
		Stack_1_t2873 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern Il2CppGenericMethod ObjectPool_1_Get_m14844_GenericMethod;
extern "C" Object_t * ObjectPool_1_Get_m14844_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * G_B4_0 = {0};
	{
		Stack_1_t2873 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_2 = V_1;
		Object_t * L_3 = L_2;
		if (!((Object_t *)L_3))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_4 = V_1;
		G_B4_0 = L_4;
		goto IL_0033;
	}

IL_002e:
	{
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_5;
	}

IL_0033:
	{
		V_0 = G_B4_0;
		int32_t L_6 = (( int32_t (*) (ObjectPool_1_t2875 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (ObjectPool_1_t2875 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t2873 * L_7 = (__this->___m_Stack_0);
		NullCheck(L_7);
		Object_t * L_8 = (( Object_t * (*) (Stack_1_t2873 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = L_8;
	}

IL_0053:
	{
		UnityAction_1_t2874 * L_9 = (__this->___m_ActionOnGet_1);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t2874 * L_10 = (__this->___m_ActionOnGet_1);
		Object_t * L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_10, L_11);
	}

IL_006a:
	{
		Object_t * L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern Il2CppGenericMethod ObjectPool_1_Release_m14846_GenericMethod;
extern "C" void ObjectPool_1_Release_m14846_gshared (ObjectPool_1_t2875 * __this, Object_t * ___element, MethodInfo* method)
{
	{
		Stack_1_t2873 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t2873 * L_2 = (__this->___m_Stack_0);
		NullCheck(L_2);
		Object_t * L_3 = (( Object_t * (*) (Stack_1_t2873 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_4 = L_3;
		Object_t * L_5 = ___element;
		Object_t * L_6 = L_5;
		bool L_7 = Object_ReferenceEquals_m1293(NULL /*static, unused*/, ((Object_t *)L_4), ((Object_t *)L_6), /*hidden argument*/&Object_ReferenceEquals_m1293_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Debug_LogError_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral146, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_003b:
	{
		UnityAction_1_t2874 * L_8 = (__this->___m_ActionOnRelease_2);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t2874 * L_9 = (__this->___m_ActionOnRelease_2);
		Object_t * L_10 = ___element;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_9, L_10);
	}

IL_0052:
	{
		Stack_1_t2873 * L_11 = (__this->___m_Stack_0);
		Object_t * L_12 = ___element;
		NullCheck(L_11);
		(( void (*) (Stack_1_t2873 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_11, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"
extern TypeInfo ArrayTypeMismatchException_t2000_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2876_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_genMethodDeclarations.h"
extern Il2CppType Enumerator_t2876_0_0_0;
extern MethodInfo Array_CopyTo_m6151_MethodInfo;
extern MethodInfo Enumerator__ctor_m14858_MethodInfo;
extern Il2CppGenericMethod Stack_1_GetEnumerator_m14857_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisObject_t_m24054_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14858_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m14847_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_get_IsSynchronized_m14848_GenericMethod;
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m14848_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_get_SyncRoot_m14849_GenericMethod;
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m14849_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_CopyTo_m14850_GenericMethod;
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m14850_gshared (Stack_1_t2873 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method)
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
			ObjectU5BU5D_t194* L_0 = (__this->____array_1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t194* L_1 = (__this->____array_1);
			Array_t * L_2 = ___dest;
			int32_t L_3 = ___idx;
			NullCheck(L_1);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m6151_MethodInfo, L_1, L_2, L_3);
			Array_t * L_4 = ___dest;
			int32_t L_5 = ___idx;
			int32_t L_6 = (__this->____size_2);
			Array_Reverse_m7155(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&Array_Reverse_m7155_MethodInfo);
		}

IL_0025:
		{
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ArrayTypeMismatchException_t2000_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t553 * L_7 = (ArgumentException_t553 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t553_il2cpp_TypeInfo));
		ArgumentException__ctor_m10852(L_7, /*hidden argument*/&ArgumentException__ctor_m10852_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14851_GenericMethod;
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14851_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		Enumerator_t2876  L_0 = (( Enumerator_t2876  (*) (Stack_1_t2873 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2876  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Stack_1_System_Collections_IEnumerable_GetEnumerator_m14852_GenericMethod;
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m14852_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		Enumerator_t2876  L_0 = (( Enumerator_t2876  (*) (Stack_1_t2873 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2876  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t *)L_2;
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m14853_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1330 * L_1 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5968(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5968_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ObjectU5BU5D_t194* L_2 = (__this->____array_1);
		int32_t L_3 = (__this->____size_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3-(int32_t)1)));
		int32_t L_4 = ((int32_t)((int32_t)L_3-(int32_t)1));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m14854_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1330 * L_1 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5968(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5968_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		ObjectU5BU5D_t194* L_3 = (__this->____array_1);
		int32_t L_4 = (__this->____size_2);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = L_5;
		__this->____size_2 = L_5;
		int32_t L_6 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		ObjectU5BU5D_t194* L_8 = (__this->____array_1);
		int32_t L_9 = (__this->____size_2);
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		Object_t * L_10 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m14855_gshared (Stack_1_t2873 * __this, Object_t * ___t, MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t194** G_B4_0 = {0};
	ObjectU5BU5D_t194** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t194** G_B5_1 = {0};
	{
		ObjectU5BU5D_t194* L_0 = (__this->____array_1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->____size_2);
		ObjectU5BU5D_t194* L_2 = (__this->____array_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t194** L_3 = &(__this->____array_1);
		int32_t L_4 = (__this->____size_2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (__this->____size_2);
		G_B5_0 = ((int32_t)((int32_t)2*(int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, G_B5_1, G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_6+(int32_t)1));
		ObjectU5BU5D_t194* L_7 = (__this->____array_1);
		int32_t L_8 = (__this->____size_2);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->____size_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_0;
		Object_t * L_11 = ___t;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, L_10)) = (Object_t *)L_11;
		return;
	}
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m14856_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2876  Stack_1_GetEnumerator_m14857_gshared (Stack_1_t2873 * __this, MethodInfo* method)
{
	{
		Enumerator_t2876  L_0 = {0};
		(( void (*) (Enumerator_t2876 *, Stack_1_t2873 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m14862_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern "C" void Enumerator__ctor_m14858_gshared (Enumerator_t2876 * __this, Stack_1_t2873 * ___t, MethodInfo* method)
{
	{
		Stack_1_t2873 * L_0 = ___t;
		__this->___parent_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Stack_1_t2873 * L_1 = ___t;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->____version_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m14859_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14859_gshared (Enumerator_t2876 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2876 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m14860_GenericMethod;
extern "C" void Enumerator_Dispose_m14860_gshared (Enumerator_t2876 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m14861_GenericMethod;
extern "C" bool Enumerator_MoveNext_m14861_gshared (Enumerator_t2876 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->____version_2);
		Stack_1_t2873 * L_1 = (__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1330 * L_3 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5968(L_3, /*hidden argument*/&InvalidOperationException__ctor_m5968_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Stack_1_t2873 * L_5 = (__this->___parent_0);
		NullCheck(L_5);
		int32_t L_6 = (L_5->____size_2);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (__this->___idx_1);
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m14862_gshared (Enumerator_t2876 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1330 * L_1 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5968(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5968_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Stack_1_t2873 * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		ObjectU5BU5D_t194* L_3 = (L_2->____array_1);
		int32_t L_4 = (__this->___idx_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
