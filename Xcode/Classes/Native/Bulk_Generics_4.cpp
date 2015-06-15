#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
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
extern TypeInfo EqualityComparer_1_t2732_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"

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
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2734_il2cpp_TypeInfo;
extern TypeInfo Byte_t558_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2732_0_0_0;
extern Il2CppType IEquatable_1_t2132_0_0_0;
extern Il2CppType Byte_t558_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2447_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType DefaultComparer_t2734_0_0_0;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4806_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4804_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10839_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m13613_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27546_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25823_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13613_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27546_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25823_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13605_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m13605_gshared (EqualityComparer_1_t2732 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m13606_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m13606_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2734 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2734 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2734 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2732_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13607_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13607_gshared (EqualityComparer_1_t2732 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13608_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13608_gshared (EqualityComparer_1_t2732 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(uint8_t*)((uint8_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13609_GenericMethod;
extern "C" EqualityComparer_1_t2732 * EqualityComparer_1_get_Default_m13609_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2732 * L_0 = ((EqualityComparer_1_t2732_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2733_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5MethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t2132_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m1097_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m27547_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m27547_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m13610_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m13610_gshared (GenericEqualityComparer_1_t2733 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2732 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m13611_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m13611_gshared (GenericEqualityComparer_1_t2733 * __this, uint8_t ___obj, MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m13612_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m13612_gshared (GenericEqualityComparer_1_t2733 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m1096_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern "C" void DefaultComparer__ctor_m13613_gshared (DefaultComparer_t2734 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2732 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m13614_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m13614_gshared (DefaultComparer_t2734 * __this, uint8_t ___obj, MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m13615_GenericMethod;
extern "C" bool DefaultComparer_Equals_m13615_gshared (DefaultComparer_t2734 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		uint8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1096_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4334_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4335_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3786_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t2735_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Camera_t19_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern MethodInfo Object_ToString_m1098_MethodInfo;
extern MethodInfo String_Concat_m932_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13618_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13620_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13617_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13619_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2736_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1332_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2736_0_0_0;
extern Il2CppType KeyValuePair_2_t2735_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5972_MethodInfo;
extern MethodInfo Array_get_Length_m5976_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>(System.Int32)
extern "C" KeyValuePair_2_t2735  Array_InternalArray__get_Item_TisKeyValuePair_2_t2735_m24257_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2735_m24257(__this, p0, method) (( KeyValuePair_2_t2735  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2735_m24257_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13626_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2735_m24257_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13622_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13622_gshared (InternalEnumerator_1_t2736 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13623_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13623_gshared (InternalEnumerator_1_t2736 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2735  L_0 = (( KeyValuePair_2_t2735  (*) (InternalEnumerator_1_t2736 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2735  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13624_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13624_gshared (InternalEnumerator_1_t2736 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13625_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13625_gshared (InternalEnumerator_1_t2736 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t2735  InternalEnumerator_1_get_Current_m13626_gshared (InternalEnumerator_1_t2736 * __this, MethodInfo* method)
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
		KeyValuePair_2_t2735  L_8 = (( KeyValuePair_2_t2735  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4351_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3784_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.Camera,System.Boolean>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3782_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4352_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3792_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Camera>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2737_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Camera>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2737_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m23569_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m23569(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
#define Array_InternalArray__get_Item_TisCamera_t19_m24268(__this, p0, method) (( Camera_t19 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13631_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCamera_t19_m24268_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Camera>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Camera>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4353_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Camera>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Camera>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3783_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Boolean>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4354_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3793_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current()
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2738_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2738_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t558_m24215_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t558_m24215(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t558_m24215_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
#define Array_InternalArray__get_Item_TisBoolean_t202_m24279(__this, p0, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t558_m24215_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13636_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBoolean_t202_m24279_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4355_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Boolean>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Boolean>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4356_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4357_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4358_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2167_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Boolean>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2739_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2739_0_0_0;
extern Il2CppType IComparable_1_t2167_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2167_m24290(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13641_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2167_m24290_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4359_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4360_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4361_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4362_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2168_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Boolean>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2740_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2740_0_0_0;
extern Il2CppType IEquatable_1_t2168_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2168_m24301(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13646_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2168_m24301_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4363_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t2714_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>::GetHashCode(T)
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2741_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t1030_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t76_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2742_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t271_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2744_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9MethodDeclarations.h"
extern Il2CppType Dictionary_2_t76_0_0_0;
extern Il2CppType Enumerator_t2742_0_0_0;
extern Il2CppType CameraU5BU5D_t271_0_0_0;
extern Il2CppType KeyCollection_t2741_0_0_0;
extern Il2CppType Transform_1_t2744_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m11698_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13460_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5993_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m839_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m13658_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m13472_MethodInfo;
extern MethodInfo Transform_1__ctor_m13678_MethodInfo;
extern MethodInfo Enumerator__ctor_m13661_MethodInfo;
struct Dictionary_2_t76;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
struct Dictionary_2_t2717;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24248_gshared (Dictionary_2_t2717 * __this, Array_t * p0, int32_t p1, Transform_1_t2726 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24248(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2717 *, Array_t *, int32_t, Transform_1_t2726 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24248_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_ICollectionCopyTo<UnityEngine.Camera>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_ICollectionCopyTo<UnityEngine.Camera>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisCamera_t19_m24312(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t76 *, Array_t *, int32_t, Transform_1_t2744 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24248_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t76;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_CopyTo<UnityEngine.Camera,UnityEngine.Camera>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_CopyTo<UnityEngine.Camera,UnityEngine.Camera>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisCamera_t19_TisCamera_t19_m24313 (Dictionary_2_t76 * __this, CameraU5BU5D_t271* p0, int32_t p1, Transform_1_t2744 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13460_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m839_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13659_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13468_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m13472_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13678_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisCamera_t19_m24312_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisCamera_t19_TisCamera_t19_m24313_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13661_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
extern TypeInfo Enumerator_t2743_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
extern Il2CppType Enumerator_t2743_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13673_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m13503_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13677_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m13671_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo DictionaryEntry_t1156_il2cpp_TypeInfo;
extern TypeInfo Link_t1636_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1508_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m5973_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13616_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m7142_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13676_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13674_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13675_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13616_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,System.Boolean>::Dispose()
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t2745_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_13.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17.h"
extern TypeInfo Enumerator_t2746_il2cpp_TypeInfo;
extern TypeInfo BooleanU5BU5D_t1197_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2747_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_13MethodDeclarations.h"
extern Il2CppType Enumerator_t2746_0_0_0;
extern Il2CppType BooleanU5BU5D_t1197_0_0_0;
extern Il2CppType ValueCollection_t2745_0_0_0;
extern Il2CppType Transform_1_t2747_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13693_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m13474_MethodInfo;
extern MethodInfo Transform_1__ctor_m13701_MethodInfo;
extern MethodInfo Enumerator__ctor_m13696_MethodInfo;
struct Dictionary_2_t76;
struct Dictionary_2_t2717;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t558_m24250_gshared (Dictionary_2_t2717 * __this, Array_t * p0, int32_t p1, Transform_1_t2729 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t558_m24250(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2717 *, Array_t *, int32_t, Transform_1_t2729 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t558_m24250_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t202_m24315(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t76 *, Array_t *, int32_t, Transform_1_t2747 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t558_m24250_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t76;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisBoolean_t202_TisBoolean_t202_m24316 (Dictionary_2_t76 * __this, BooleanU5BU5D_t1197* p0, int32_t p1, Transform_1_t2747 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13483_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m13694_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13693_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m13474_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13701_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t202_m24315_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisBoolean_t202_TisBoolean_t202_m24316_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13696_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2715_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2748_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2749_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13710_GenericMethod;
extern "C" void Transform_1__ctor_m13710_gshared (Transform_1_t2749 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13712_GenericMethod;
extern "C" KeyValuePair_2_t2735  Transform_1_Invoke_m13712_gshared (Transform_1_t2749 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13712((Transform_1_t2749 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2735  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2735  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2735  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13714_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13714_gshared (Transform_1_t2749 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t558_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13716_GenericMethod;
extern "C" KeyValuePair_2_t2735  Transform_1_EndInvoke_m13716_gshared (Transform_1_t2749 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2735 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2750_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t1153_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t2750_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11701_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m13719_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m13672_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13719_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,System.Boolean>::get_Current()
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2751_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
extern TypeInfo DefaultComparer_t2752_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2751_0_0_0;
extern Il2CppType IEquatable_1_t4364_0_0_0;
extern Il2CppType Camera_t19_0_0_0;
extern Il2CppType DefaultComparer_t2752_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13728_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27548_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m27549_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13728_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27548_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m27549_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4364_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Camera>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13723_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Camera>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Camera>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Camera>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4336_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Boolean>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2753_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
extern TypeInfo DefaultComparer_t2755_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2753_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType DefaultComparer_t2755_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13739_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27550_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m27541_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13739_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27550_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m27541_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Boolean>::get_Default()
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2754_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"

extern MethodInfo IEquatable_1_Equals_m27551_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13731_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m27551_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::.ctor()
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2756_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_9MethodDeclarations.h"



// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t86_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4.h"
extern TypeInfo KeyNotFoundException_t1637_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2759_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2762_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4365_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4366_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3796_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t210_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3795_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t4011_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2757_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2764_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t209_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2766_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t922_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1266_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2428_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t555_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1149_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t86_0_0_0;
extern Il2CppType IEqualityComparer_1_t2714_0_0_0;
extern Il2CppType KeyCollection_t2759_0_0_0;
extern Il2CppType ValueCollection_t2762_0_0_0;
extern Il2CppType ICollection_1_t4365_0_0_0;
extern Il2CppType IEnumerable_1_t4366_0_0_0;
extern Il2CppType IEnumerator_1_t3796_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3795_0_0_0;
extern Il2CppType KeyValuePair_2_t210_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t4011_0_0_0;
extern Il2CppType Transform_1_t2757_0_0_0;
extern Il2CppType Transform_1_t2764_0_0_0;
extern Il2CppType Enumerator_t209_0_0_0;
extern Il2CppType ShimEnumerator_t2766_0_0_0;
extern Il2CppType Int32U5BU5D_t1266_0_0_0;
extern Il2CppType LinkU5BU5D_t2428_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m13776_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m13766_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m902_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m27535_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27536_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m8560_MethodInfo;
extern MethodInfo KeyCollection__ctor_m13797_MethodInfo;
extern MethodInfo ValueCollection__ctor_m13830_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27552_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27553_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27554_MethodInfo;
extern MethodInfo Dictionary_2_Add_m13775_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m13780_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m13786_MethodInfo;
extern MethodInfo Transform_1__ctor_m13849_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m13770_MethodInfo;
extern MethodInfo Transform_1__ctor_m13853_MethodInfo;
extern MethodInfo Enumerator__ctor_m13816_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m13861_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5980_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3019_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13765_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13787_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m8727_MethodInfo;
extern MethodInfo Array_Copy_m7944_MethodInfo;
extern MethodInfo Array_Clear_m7125_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5989_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m6002_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m6001_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m5990_MethodInfo;
extern MethodInfo Type_ToString_m8025_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5978_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7994_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m900_MethodInfo;
struct Dictionary_2_t86;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1156_TisDictionaryEntry_t1156_m24337 (Dictionary_2_t86 * __this, DictionaryEntryU5BU5D_t4011* p0, int32_t p1, Transform_1_t2757 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t86;
struct Dictionary_2_t2621;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t210_m24340_gshared (Dictionary_2_t2621 * __this, Array_t * p0, int32_t p1, Transform_1_t2765 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t210_m24340(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2621 *, Array_t *, int32_t, Transform_1_t2765 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t210_m24340_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t210_m24339(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, Transform_1_t2764 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t210_m24340_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t86;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t210_TisKeyValuePair_2_t210_m24342 (Dictionary_2_t86 * __this, KeyValuePair_2U5BU5D_t3795* p0, int32_t p1, Transform_1_t2764 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m13781_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m13782_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13776_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m13783_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m13766_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m13784_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m902_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m27535_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27536_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m13774_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m13797_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m13830_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m13767_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13745_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27552_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27553_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27554_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13788_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m909_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m13775_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m13780_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m13785_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m13773_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13769_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m13786_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13849_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1156_TisDictionaryEntry_t1156_m24337_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m13770_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13853_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t210_m24339_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13816_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m13861_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13727_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m13768_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13765_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13787_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t210_TisKeyValuePair_2_t210_m24342_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m900_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13789_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13790_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2758_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2758_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>(System.Int32)
extern "C" KeyValuePair_2_t210  Array_InternalArray__get_Item_TisKeyValuePair_2_t210_m24324_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t210_m24324(__this, p0, method) (( KeyValuePair_2_t210  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t210_m24324_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13796_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t210_m24324_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13792_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13792_gshared (InternalEnumerator_1_t2758 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13793_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13793_gshared (InternalEnumerator_1_t2758 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t210  L_0 = (( KeyValuePair_2_t210  (*) (InternalEnumerator_1_t2758 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t210  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13794_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13794_gshared (InternalEnumerator_1_t2758 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13795_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13795_gshared (InternalEnumerator_1_t2758 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::get_Current()
extern "C" KeyValuePair_2_t210  InternalEnumerator_1_get_Current_m13796_gshared (InternalEnumerator_1_t2758 * __this, MethodInfo* method)
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
		KeyValuePair_2_t210  L_8 = (( KeyValuePair_2_t210  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4367_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3794_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21.h"
extern TypeInfo Enumerator_t2760_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2761_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11MethodDeclarations.h"
extern Il2CppType Enumerator_t2760_0_0_0;
extern Il2CppType Transform_1_t2761_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m13808_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m13771_MethodInfo;
extern MethodInfo Transform_1__ctor_m13826_MethodInfo;
extern MethodInfo Enumerator__ctor_m13811_MethodInfo;
struct Dictionary_2_t86;
struct Dictionary_2_t2621;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23903_gshared (Dictionary_2_t2621 * __this, Array_t * p0, int32_t p1, Transform_1_t2636 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23903(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2621 *, Array_t *, int32_t, Transform_1_t2636 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23903_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_ICollectionCopyTo<UnityEngine.Camera>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_ICollectionCopyTo<UnityEngine.Camera>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisCamera_t19_m24335(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, Transform_1_t2761 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23903_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t86;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_CopyTo<UnityEngine.Camera,UnityEngine.Camera>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Do_CopyTo<UnityEngine.Camera,UnityEngine.Camera>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisCamera_t19_TisCamera_t19_m24336 (Dictionary_2_t86 * __this, CameraU5BU5D_t271* p0, int32_t p1, Transform_1_t2761 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13809_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13808_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m13771_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13826_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisCamera_t19_m24335_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisCamera_t19_TisCamera_t19_m24336_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13811_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13821_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m907_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13825_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m910_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13824_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13822_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13823_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15.h"
extern TypeInfo Enumerator_t2763_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15MethodDeclarations.h"
extern Il2CppType Enumerator_t2763_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13841_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m13772_MethodInfo;
extern MethodInfo Enumerator__ctor_m13844_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13777_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m13842_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13841_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m13772_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13844_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2765_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13854_GenericMethod;
extern "C" void Transform_1__ctor_m13854_gshared (Transform_1_t2765 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13856_GenericMethod;
extern "C" KeyValuePair_2_t210  Transform_1_Invoke_m13856_gshared (Transform_1_t2765 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13856((Transform_1_t2765 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t210  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t210  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t210  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13858_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13858_gshared (Transform_1_t2765 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t426 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13860_GenericMethod;
extern "C" KeyValuePair_2_t210  Transform_1_EndInvoke_m13860_gshared (Transform_1_t2765 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t210 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m13863_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m908_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13863_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Current()
// UnityEngine.CastHelper`1<UnityEngine.Skybox>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2767_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Skybox>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_10MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityStandardAssets.Water.PlanarReflection>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2768_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityStandardAssets.Water.PlanarReflection>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_11MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityStandardAssets.Water.WaterBase>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2769_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityStandardAssets.Water.WaterBase>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_12MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.Animation>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2770_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Animation>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_13MethodDeclarations.h"



// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t214_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Predicate`1<UnityEngine.Material>
#include "mscorlib_System_Predicate_1_gen_5.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<UnityEngine.Material>
#include "mscorlib_System_Comparison_1_gen_5.h"
extern TypeInfo Material_t75_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t897_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2032_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3799_il2cpp_TypeInfo;
extern TypeInfo MaterialU5BU5D_t216_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2772_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3797_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3798_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2774_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2778_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2779_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Material>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
extern Il2CppType List_1_t214_0_0_0;
extern Il2CppType ICollection_1_t3799_0_0_0;
extern Il2CppType MaterialU5BU5D_t216_0_0_0;
extern Il2CppType Enumerator_t2772_0_0_0;
extern Il2CppType IEnumerable_1_t3797_0_0_0;
extern Il2CppType IEnumerator_1_t3798_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2774_0_0_0;
extern Il2CppType Predicate_1_t2778_0_0_0;
extern Il2CppType Comparer_1_t2779_0_0_0;
extern MethodInfo List_1_get_Item_m930_MethodInfo;
extern MethodInfo List_1_set_Item_m13910_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m6157_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27555_MethodInfo;
extern MethodInfo List_1_Add_m927_MethodInfo;
extern MethodInfo List_1_Contains_m926_MethodInfo;
extern MethodInfo List_1_IndexOf_m929_MethodInfo;
extern MethodInfo List_1_Insert_m13898_MethodInfo;
extern MethodInfo List_1_Remove_m13900_MethodInfo;
extern MethodInfo Math_Max_m7134_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27556_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27557_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27558_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13922_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13997_MethodInfo;
extern MethodInfo Enumerator__ctor_m13916_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13902_MethodInfo;
extern MethodInfo Array_Reverse_m7166_MethodInfo;
extern MethodInfo Array_Copy_m6198_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m24065_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m24065(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.Material>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Material>(!!0[]&,System.Int32)
#define Array_Resize_TisMaterial_t75_m24355(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MaterialU5BU5D_t216**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m11699_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m11699(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Material>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Material>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMaterial_t75_m24357(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MaterialU5BU5D_t216*, Material_t75 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24068_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m24068(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Material>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Material>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMaterial_t75_m24359(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MaterialU5BU5D_t216*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m24175_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t194* p0, int32_t p1, Comparison_1_t2703 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m24175(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t194*, int32_t, Comparison_1_t2703 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Material>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Material>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMaterial_t75_m24367(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MaterialU5BU5D_t216*, int32_t, Comparison_1_t2781 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m930_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13910_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMaterial_t75_m24355_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13897_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13899_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13887_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27555_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13886_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13895_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m927_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m926_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m929_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13898_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13900_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13885_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13908_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13909_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27556_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27557_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27558_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13922_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMaterial_t75_m24357_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13893_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13894_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13997_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13916_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13896_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13902_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m14003_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMaterial_t75_m24359_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMaterial_t75_m24367_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Material>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Material>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Material>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Material>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Material>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2771_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Material>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2771_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Material>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Material>(System.Int32)
#define Array_InternalArray__get_Item_TisMaterial_t75_m24344(__this, p0, method) (( Material_t75 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13915_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMaterial_t75_m24344_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Material>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Material>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Material>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2773_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Material>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Material>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m5979_MethodInfo;
extern MethodInfo Object_GetType_m2635_MethodInfo;
extern MethodInfo Type_get_FullName_m4739_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m13919_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t620_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.Material>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"
extern Il2CppType IList_1_t2773_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13951_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;
extern MethodInfo IList_1_get_Item_m27559_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5968_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4697_MethodInfo;
extern MethodInfo ICollection_1_Contains_m27560_MethodInfo;
extern MethodInfo IList_1_IndexOf_m27561_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13951_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m27559_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13983_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m27560_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m27561_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Material>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2775_il2cpp_TypeInfo;

extern TypeInfo IList_t1031_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2775_0_0_0;
extern Il2CppType Material_t75_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m27562_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13982_MethodInfo;
extern MethodInfo List_1__ctor_m923_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13975_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13973_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13978_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13969_MethodInfo;
extern MethodInfo ICollection_1_Clear_m27563_MethodInfo;
extern MethodInfo IList_1_Insert_m27564_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m27565_MethodInfo;
extern MethodInfo IList_1_set_Item_m27566_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11978_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11979_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m27562_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13986_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13987_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13984_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13982_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m923_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13975_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13985_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13973_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13978_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13969_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m27563_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m27564_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m27565_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m27566_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Material>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2776_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6.h"
extern TypeInfo DefaultComparer_t2777_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2776_0_0_0;
extern Il2CppType IEquatable_1_t4368_0_0_0;
extern Il2CppType DefaultComparer_t2777_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13993_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m27567_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24356_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13993_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m27567_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24356_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Material>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4369_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Material>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Material>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4368_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Material>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13988_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Material>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Material>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Material>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Material>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Material>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Material>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Material>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
extern TypeInfo DefaultComparer_t2780_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
extern Il2CppType IComparable_1_t4083_0_0_0;
extern Il2CppType GenericComparer_1_t2358_0_0_0;
extern Il2CppType DefaultComparer_t2780_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14004_MethodInfo;
extern MethodInfo Comparer_1_Compare_m27568_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10863_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14004_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m27568_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Material>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Material>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Material>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Material>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Material>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4082_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Material>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4083_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Material>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t226_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m24365_MethodInfo;
extern MethodInfo IComparable_CompareTo_m11669_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m14000_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24365_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Material>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Material>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2781_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Material>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Material>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Material>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Material>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Material>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4370_il2cpp_TypeInfo;

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au.h"


// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::get_Current()
// System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2782_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"

extern TypeInfo ReplacementDefinition_t96_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2782_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>(System.Int32)
#define Array_InternalArray__get_Item_TisReplacementDefinition_t96_m24370(__this, p0, method) (( ReplacementDefinition_t96 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14014_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisReplacementDefinition_t96_m24370_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4371_il2cpp_TypeInfo;

#include "Assembly-CSharp-firstpass_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4372_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4373_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityEngine.GUIText>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2783_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.GUIText>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_14MethodDeclarations.h"



// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t119_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_2.h"
// System.Predicate`1<UnityEngine.Transform>
#include "mscorlib_System_Predicate_1_gen_6.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2.h"
// System.Comparison`1<UnityEngine.Transform>
#include "mscorlib_System_Comparison_1_gen_6.h"
extern TypeInfo Transform_t2_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t520_il2cpp_TypeInfo;
extern TypeInfo TransformU5BU5D_t116_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2785_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3800_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3801_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2786_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2790_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2791_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_2MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Transform>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2MethodDeclarations.h"
extern Il2CppType List_1_t119_0_0_0;
extern Il2CppType ICollection_1_t520_0_0_0;
extern Il2CppType TransformU5BU5D_t116_0_0_0;
extern Il2CppType Enumerator_t2785_0_0_0;
extern Il2CppType IEnumerable_1_t3800_0_0_0;
extern Il2CppType IEnumerator_1_t3801_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2786_0_0_0;
extern Il2CppType Predicate_1_t2790_0_0_0;
extern Il2CppType Comparer_1_t2791_0_0_0;
extern MethodInfo List_1_get_Item_m14060_MethodInfo;
extern MethodInfo List_1_set_Item_m14061_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m27569_MethodInfo;
extern MethodInfo List_1_Add_m14032_MethodInfo;
extern MethodInfo List_1_Contains_m979_MethodInfo;
extern MethodInfo List_1_IndexOf_m14044_MethodInfo;
extern MethodInfo List_1_Insert_m14047_MethodInfo;
extern MethodInfo List_1_Remove_m14049_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m27570_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27571_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27572_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m14073_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m14148_MethodInfo;
extern MethodInfo Enumerator__ctor_m14067_MethodInfo;
extern MethodInfo List_1_RemoveAt_m14051_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Transform>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Transform>(!!0[]&,System.Int32)
#define Array_Resize_TisTransform_t2_m24393(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, TransformU5BU5D_t116**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m24065_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Transform>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Transform>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisTransform_t2_m24395(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, TransformU5BU5D_t116*, Transform_t2 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m11699_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Transform>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Transform>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisTransform_t2_m24397(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, TransformU5BU5D_t116*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m24068_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Transform>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Transform>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisTransform_t2_m24405(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, TransformU5BU5D_t116*, int32_t, Comparison_1_t2793 *, MethodInfo*))Array_Sort_TisObject_t_m24175_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m14060_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14061_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisTransform_t2_m24393_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m14046_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m14048_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m14035_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m27569_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m14034_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m14043_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m14032_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m979_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m14044_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m14047_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m14049_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m14033_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m14057_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m14058_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m27570_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m27571_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m27572_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m14073_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisTransform_t2_m24395_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m14041_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m14042_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m14148_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14067_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m14045_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m14051_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m14154_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisTransform_t2_m24397_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisTransform_t2_m24405_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Transform>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Transform>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
