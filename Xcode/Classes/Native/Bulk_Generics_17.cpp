#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_161.h"
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
extern TypeInfo InternalEnumerator_1_t3404_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_161MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo UInt64_t925_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1330_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3404_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5961_MethodInfo;
extern MethodInfo Array_get_Length_m5965_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t925_m26092_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t925_m26092(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t925_m26092_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20636_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt64_t925_m26092_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20632_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20632_gshared (InternalEnumerator_1_t3404 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20633_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20633_gshared (InternalEnumerator_1_t3404 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (InternalEnumerator_1_t3404 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20634_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20634_gshared (InternalEnumerator_1_t3404 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20635_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20635_gshared (InternalEnumerator_1_t3404 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern "C" uint64_t InternalEnumerator_1_get_Current_m20636_gshared (InternalEnumerator_1_t3404 * __this, MethodInfo* method)
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
		uint64_t L_8 = (( uint64_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4690_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4691_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4692_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4693_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2127_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt64>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_162.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3405_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_162MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3405_0_0_0;
extern Il2CppType IComparable_1_t2127_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m23558_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m23558(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2127_m26103(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20641_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2127_m26103_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4694_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4695_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4696_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4697_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2128_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt64>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_163.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3406_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_163MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3406_0_0_0;
extern Il2CppType IEquatable_1_t2128_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2128_m26114(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20646_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2128_m26114_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4698_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3399_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t3407_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_38MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_23.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_39.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t1028_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t3401_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3408_il2cpp_TypeInfo;
extern TypeInfo UInt64U5BU5D_t1927_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3410_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_23MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_39MethodDeclarations.h"
extern Il2CppType Dictionary_2_t3401_0_0_0;
extern Il2CppType Enumerator_t3408_0_0_0;
extern Il2CppType UInt64U5BU5D_t1927_0_0_0;
extern Il2CppType KeyCollection_t3407_0_0_0;
extern Il2CppType Transform_1_t3410_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m11687_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m20571_MethodInfo;
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5982_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m20597_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m20658_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m20585_MethodInfo;
extern MethodInfo Transform_1__ctor_m20678_MethodInfo;
extern MethodInfo Enumerator__ctor_m20661_MethodInfo;
struct Dictionary_2_t3401;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t925_m26125_gshared (Dictionary_2_t3401 * __this, Array_t * p0, int32_t p1, Transform_1_t3410 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t925_m26125(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, Transform_1_t3410 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t925_m26125_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3401;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t925_TisUInt64_t925_m26126 (Dictionary_2_t3401 * __this, UInt64U5BU5D_t1927* p0, int32_t p1, Transform_1_t3410 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m20571_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m20597_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m20659_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m20658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m20581_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m20585_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20678_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t925_m26125_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisUInt64_t925_TisUInt64_t925_m26126_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20661_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod KeyCollection__ctor_m20647_GenericMethod;
extern "C" void KeyCollection__ctor_m20647_gshared (KeyCollection_t3407 * __this, Dictionary_2_t3401 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Dictionary_2_t3401 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral1430, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3401 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20648_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20648_gshared (KeyCollection_t3407 * __this, uint64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5982(L_0, (String_t*) &_stringLiteral1441, /*hidden argument*/&NotSupportedException__ctor_m5982_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20649_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20649_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5982(L_0, (String_t*) &_stringLiteral1441, /*hidden argument*/&NotSupportedException__ctor_m5982_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20650_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20650_gshared (KeyCollection_t3407 * __this, uint64_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		uint64_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20651_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20651_gshared (KeyCollection_t3407 * __this, uint64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5982(L_0, (String_t*) &_stringLiteral1441, /*hidden argument*/&NotSupportedException__ctor_m5982_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20652_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20652_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		Enumerator_t3408  L_0 = (( Enumerator_t3408  (*) (KeyCollection_t3407 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3408  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m20653_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m20653_gshared (KeyCollection_t3407 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	UInt64U5BU5D_t1927* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((UInt64U5BU5D_t1927*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		UInt64U5BU5D_t1927* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UInt64U5BU5D_t1927* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< UInt64U5BU5D_t1927*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3401 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3401 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3410 * L_11 = (Transform_1_t3410 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3410 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, Transform_1_t3410 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20654_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20654_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		Enumerator_t3408  L_0 = (( Enumerator_t3408  (*) (KeyCollection_t3407 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3408  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20655_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20655_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20656_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20656_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m20657_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m20657_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m11687_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m20658_gshared (KeyCollection_t3407 * __this, UInt64U5BU5D_t1927* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		UInt64U5BU5D_t1927* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3401 * L_3 = (__this->___dictionary_0);
		UInt64U5BU5D_t1927* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3410 * L_7 = (Transform_1_t3410 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3410 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3401 *, UInt64U5BU5D_t1927*, int32_t, Transform_1_t3410 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3408  KeyCollection_GetEnumerator_m20659_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		Enumerator_t3408  L_1 = {0};
		(( void (*) (Enumerator_t3408 *, Dictionary_2_t3401 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m20660_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m20660_gshared (KeyCollection_t3407 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
extern TypeInfo Enumerator_t3409_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21MethodDeclarations.h"
extern Il2CppType Enumerator_t3409_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m20673_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m20622_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m20618_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m20677_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m20671_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20661_gshared (Enumerator_t3408 * __this, Dictionary_2_t3401 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3409  L_1 = (( Enumerator_t3409  (*) (Dictionary_2_t3401 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20662_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20662_gshared (Enumerator_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		uint64_t L_1 = (( uint64_t (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m20663_GenericMethod;
extern "C" void Enumerator_Dispose_m20663_gshared (Enumerator_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m20664_GenericMethod;
extern "C" bool Enumerator_MoveNext_m20664_gshared (Enumerator_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20665_GenericMethod;
extern "C" uint64_t Enumerator_get_Current_m20665_gshared (Enumerator_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3402 * L_1 = &(L_0->___current_3);
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo KeyValuePair_2_t3402_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1154_il2cpp_TypeInfo;
extern TypeInfo Link_t1634_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1506_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern Il2CppType KeyValuePair_2_t3402_0_0_0;
extern MethodInfo DictionaryEntry__ctor_m5962_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m20621_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m7131_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m20676_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m20624_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m20674_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m20675_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m20621_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m20666_GenericMethod;
extern "C" void Enumerator__ctor_m20666_gshared (Enumerator_t3409 * __this, Dictionary_2_t3401 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3401 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20667_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20667_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3402  L_0 = (__this->___current_3);
		KeyValuePair_2_t3402  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20668_GenericMethod;
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20668_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3402 * L_0 = &(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t3402 * L_4 = &(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_6 = L_5;
		DictionaryEntry_t1154  L_7 = {0};
		DictionaryEntry__ctor_m5962(&L_7, L_3, ((Object_t *)L_6), /*hidden argument*/&DictionaryEntry__ctor_m5962_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20669_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20669_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20670_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20670_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20671_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t3401 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2426* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t1634 *)(Link_t1634 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3401 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		UInt64U5BU5D_t1927* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3401 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t194* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3402  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3402 *, uint64_t, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_9, L_11)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3401 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20672_GenericMethod;
extern "C" KeyValuePair_2_t3402  Enumerator_get_Current_m20672_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3402  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m20673_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3402 * L_0 = &(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m20674_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3402 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m20675_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1506 * L_1 = (ObjectDisposedException_t1506 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1506_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m7131(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m7131_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3401 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1330 * L_5 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5961(L_5, (String_t*) &_stringLiteral1439, /*hidden argument*/&InvalidOperationException__ctor_m5961_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20676_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1330 * L_1 = (InvalidOperationException_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1330_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5961(L_1, (String_t*) &_stringLiteral1440, /*hidden argument*/&InvalidOperationException__ctor_m5961_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m20677_gshared (Enumerator_t3409 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3401 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20678_gshared (Transform_1_t3410 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20679_GenericMethod;
extern "C" uint64_t Transform_1_Invoke_m20679_gshared (Transform_1_t3410 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20679((Transform_1_t3410 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint64_t (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef uint64_t (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20680_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20680_gshared (Transform_1_t3410 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20681_GenericMethod;
extern "C" uint64_t Transform_1_EndInvoke_m20681_gshared (Transform_1_t3410 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3411_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_38MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_39.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_87.h"
extern TypeInfo Enumerator_t3412_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t194_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3413_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_87MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_39MethodDeclarations.h"
extern Il2CppType Enumerator_t3412_0_0_0;
extern Il2CppType ObjectU5BU5D_t194_0_0_0;
extern Il2CppType ValueCollection_t3411_0_0_0;
extern Il2CppType Transform_1_t3413_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m20693_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m20587_MethodInfo;
extern MethodInfo Transform_1__ctor_m20701_MethodInfo;
extern MethodInfo Enumerator__ctor_m20696_MethodInfo;
struct Dictionary_2_t3401;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26128_gshared (Dictionary_2_t3401 * __this, Array_t * p0, int32_t p1, Transform_1_t3413 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26128(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, Transform_1_t3413 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26128_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3401;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26127 (Dictionary_2_t3401 * __this, ObjectU5BU5D_t194* p0, int32_t p1, Transform_1_t3413 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m20599_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m20694_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m20693_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m20587_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20701_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26128_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26127_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20696_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ValueCollection__ctor_m20682_GenericMethod;
extern "C" void ValueCollection__ctor_m20682_gshared (ValueCollection_t3411 * __this, Dictionary_2_t3401 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Dictionary_2_t3401 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral1430, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3401 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20683_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20683_gshared (ValueCollection_t3411 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5982(L_0, (String_t*) &_stringLiteral1441, /*hidden argument*/&NotSupportedException__ctor_m5982_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20684_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20684_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5982(L_0, (String_t*) &_stringLiteral1441, /*hidden argument*/&NotSupportedException__ctor_m5982_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20685_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20685_gshared (ValueCollection_t3411 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20686_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20686_gshared (ValueCollection_t3411 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5982(L_0, (String_t*) &_stringLiteral1441, /*hidden argument*/&NotSupportedException__ctor_m5982_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20687_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20687_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		Enumerator_t3412  L_0 = (( Enumerator_t3412  (*) (ValueCollection_t3411 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3412  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m20688_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m20688_gshared (ValueCollection_t3411 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t194* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t194*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t194* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t194* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t194*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3401 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3401 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3413 * L_11 = (Transform_1_t3413 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3413 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, Transform_1_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20689_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20689_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		Enumerator_t3412  L_0 = (( Enumerator_t3412  (*) (ValueCollection_t3411 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3412  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20690_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20690_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20691_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20691_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m20692_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m20692_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m11687_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m20693_gshared (ValueCollection_t3411 * __this, ObjectU5BU5D_t194* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t194* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3401 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t194* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3413 * L_7 = (Transform_1_t3413 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3413 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3401 *, ObjectU5BU5D_t194*, int32_t, Transform_1_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3412  ValueCollection_GetEnumerator_m20694_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		Enumerator_t3412  L_1 = {0};
		(( void (*) (Enumerator_t3412 *, Dictionary_2_t3401 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m20695_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m20695_gshared (ValueCollection_t3411 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20696_gshared (Enumerator_t3412 * __this, Dictionary_2_t3401 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3401 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3409  L_1 = (( Enumerator_t3409  (*) (Dictionary_2_t3401 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20697_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20697_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m20698_GenericMethod;
extern "C" void Enumerator_Dispose_m20698_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m20699_GenericMethod;
extern "C" bool Enumerator_MoveNext_m20699_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20700_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m20700_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3402 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20701_gshared (Transform_1_t3413 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20702_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m20702_gshared (Transform_1_t3413 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20702((Transform_1_t3413 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20703_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20703_gshared (Transform_1_t3413 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20704_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m20704_gshared (Transform_1_t3413 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_88.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3400_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_88MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20705_GenericMethod;
extern "C" void Transform_1__ctor_m20705_gshared (Transform_1_t3400 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20706_GenericMethod;
extern "C" DictionaryEntry_t1154  Transform_1_Invoke_m20706_gshared (Transform_1_t3400 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20706((Transform_1_t3400 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1154  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef DictionaryEntry_t1154  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20707_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20707_gshared (Transform_1_t3400 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20708_GenericMethod;
extern "C" DictionaryEntry_t1154  Transform_1_EndInvoke_m20708_gshared (Transform_1_t3400 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1154 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_89.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3414_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_89MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20709_GenericMethod;
extern "C" void Transform_1__ctor_m20709_gshared (Transform_1_t3414 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20710_GenericMethod;
extern "C" KeyValuePair_2_t3402  Transform_1_Invoke_m20710_gshared (Transform_1_t3414 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20710((Transform_1_t3414 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3402  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t3402  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20711_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20711_gshared (Transform_1_t3414 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20712_GenericMethod;
extern "C" KeyValuePair_2_t3402  Transform_1_EndInvoke_m20712_gshared (Transform_1_t3414 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3402 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3415_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_18MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t1151_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t3415_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m11690_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m20715_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m20715_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m20713_GenericMethod;
extern "C" void ShimEnumerator__ctor_m20713_gshared (ShimEnumerator_t3415 * __this, Dictionary_2_t3401 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Dictionary_2_t3401 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3409  L_1 = (( Enumerator_t3409  (*) (Dictionary_2_t3401 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m20714_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m20714_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m20715_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method)
{
	{
		Enumerator_t3409  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1154  L_3 = (DictionaryEntry_t1154 )InterfaceFuncInvoker0< DictionaryEntry_t1154  >::Invoke(&IDictionaryEnumerator_get_Entry_m11690_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m20716_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m20716_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3402  V_0 = {0};
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3402  L_1 = (( KeyValuePair_2_t3402  (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m20717_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m20717_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3402  V_0 = {0};
	{
		Enumerator_t3409 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3402  L_1 = (( KeyValuePair_2_t3402  (*) (Enumerator_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3402 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m20718_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m20718_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1154  L_0 = (DictionaryEntry_t1154 )VirtFuncInvoker0< DictionaryEntry_t1154  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t1154  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t1154_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3416_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_43MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_43.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3418_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_43MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3416_0_0_0;
extern Il2CppType UInt64_t925_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2445_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType DefaultComparer_t3418_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4795_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4793_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10828_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m20727_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m28027_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m28028_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20727_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m28027_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m28028_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt64>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m20719_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m20719_gshared (EqualityComparer_1_t3416 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt64>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m20720_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m20720_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3418 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3418 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3418 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3416_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20721_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20721_gshared (EqualityComparer_1_t3416 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20722_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20722_gshared (EqualityComparer_1_t3416 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt64>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m20723_GenericMethod;
extern "C" EqualityComparer_1_t3416 * EqualityComparer_1_get_Default_m20723_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3416 * L_0 = ((EqualityComparer_1_t3416_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3417_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__9MethodDeclarations.h"

extern MethodInfo Object_GetHashCode_m1097_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m28029_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m28029_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m20724_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m20724_gshared (GenericEqualityComparer_1_t3417 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3416 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m20725_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m20725_gshared (GenericEqualityComparer_1_t3417 * __this, uint64_t ___obj, MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		uint64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m20726_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m20726_gshared (GenericEqualityComparer_1_t3417 * __this, uint64_t ___x, uint64_t ___y, MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = ___y;
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m1096_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::.ctor()
extern "C" void DefaultComparer__ctor_m20727_gshared (DefaultComparer_t3418 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3416 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m20728_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m20728_gshared (DefaultComparer_t3418 * __this, uint64_t ___obj, MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		uint64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m20729_GenericMethod;
extern "C" bool DefaultComparer_Equals_m20729_gshared (DefaultComparer_t3418 * __this, uint64_t ___x, uint64_t ___y, MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = ___y;
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = ___y;
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1096_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4683_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4684_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3938_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t3419_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22MethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo NetworkID_t796_il2cpp_TypeInfo;
extern TypeInfo NetworkAccessToken_t798_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern MethodInfo Object_ToString_m1098_MethodInfo;
extern MethodInfo String_Concat_m932_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m20732_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m20734_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m20731_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m20733_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3420_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_164MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3420_0_0_0;
extern Il2CppType KeyValuePair_2_t3419_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(System.Int32)
extern "C" KeyValuePair_2_t3419  Array_InternalArray__get_Item_TisKeyValuePair_2_t3419_m26134_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3419_m26134(__this, p0, method) (( KeyValuePair_2_t3419  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3419_m26134_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20740_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3419_m26134_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20736_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20736_gshared (InternalEnumerator_1_t3420 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20737_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20737_gshared (InternalEnumerator_1_t3420 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3419  L_0 = (( KeyValuePair_2_t3419  (*) (InternalEnumerator_1_t3420 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3419  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20738_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20738_gshared (InternalEnumerator_1_t3420 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20739_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20739_gshared (InternalEnumerator_1_t3420 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_Current()
extern "C" KeyValuePair_2_t3419  InternalEnumerator_1_get_Current_m20740_gshared (InternalEnumerator_1_t3420 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3419  L_8 = (( KeyValuePair_2_t3419  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4699_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3936_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3934_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4700_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Types.NetworkID>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3944_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Types.NetworkID>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3421_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_165MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3421_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Types.NetworkID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Types.NetworkID>(System.Int32)
#define Array_InternalArray__get_Item_TisNetworkID_t796_m26145(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t925_m26092_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20745_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisNetworkID_t796_m26145_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkID>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4701_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkID>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3935_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4702_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3945_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3422_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_166MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3422_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Types.NetworkAccessToken>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Types.NetworkAccessToken>(System.Int32)
#define Array_InternalArray__get_Item_TisNetworkAccessToken_t798_m26156(__this, p0, method) (( NetworkAccessToken_t798 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20750_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisNetworkAccessToken_t798_m26156_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4703_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkAccessToken>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkAccessToken>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkAccessToken>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3397_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_40.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t3423_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_40MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_41.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_90.h"
extern TypeInfo Dictionary_2_t800_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3424_il2cpp_TypeInfo;
extern TypeInfo NetworkIDU5BU5D_t3395_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3426_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_90MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_41MethodDeclarations.h"
extern Il2CppType Dictionary_2_t800_0_0_0;
extern Il2CppType Enumerator_t3424_0_0_0;
extern Il2CppType NetworkIDU5BU5D_t3395_0_0_0;
extern Il2CppType KeyCollection_t3423_0_0_0;
extern Il2CppType Transform_1_t3426_0_0_0;
extern MethodInfo Dictionary_2_get_Count_m20570_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m20596_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m20762_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m20584_MethodInfo;
extern MethodInfo Transform_1__ctor_m20782_MethodInfo;
extern MethodInfo Enumerator__ctor_m20765_MethodInfo;
struct Dictionary_2_t800;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_ICollectionCopyTo<UnityEngine.Networking.Types.NetworkID>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_ICollectionCopyTo<UnityEngine.Networking.Types.NetworkID>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisNetworkID_t796_m26167(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t800 *, Array_t *, int32_t, Transform_1_t3426 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t925_m26125_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t800;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkID>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkID>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisNetworkID_t796_TisNetworkID_t796_m26168 (Dictionary_2_t800 * __this, NetworkIDU5BU5D_t3395* p0, int32_t p1, Transform_1_t3426 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m20570_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m20596_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m20763_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m20762_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m20580_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m20584_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20782_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisNetworkID_t796_m26167_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisNetworkID_t796_TisNetworkID_t796_m26168_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20765_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
extern TypeInfo Enumerator_t3425_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20MethodDeclarations.h"
extern Il2CppType Enumerator_t3425_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m20777_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m20617_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m20781_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m20775_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo KeyValuePair_2__ctor_m20730_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m20780_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m20778_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m20779_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m20730_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkID>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3427_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_91.h"
extern TypeInfo Enumerator_t3428_il2cpp_TypeInfo;
extern TypeInfo NetworkAccessTokenU5BU5D_t3396_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3429_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_91MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41MethodDeclarations.h"
extern Il2CppType Enumerator_t3428_0_0_0;
extern Il2CppType NetworkAccessTokenU5BU5D_t3396_0_0_0;
extern Il2CppType ValueCollection_t3427_0_0_0;
extern Il2CppType Transform_1_t3429_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m20797_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m20586_MethodInfo;
extern MethodInfo Transform_1__ctor_m20805_MethodInfo;
extern MethodInfo Enumerator__ctor_m20800_MethodInfo;
struct Dictionary_2_t800;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_ICollectionCopyTo<UnityEngine.Networking.Types.NetworkAccessToken>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_ICollectionCopyTo<UnityEngine.Networking.Types.NetworkAccessToken>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisNetworkAccessToken_t798_m26170(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t800 *, Array_t *, int32_t, Transform_1_t3429 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26128_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t800;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisNetworkAccessToken_t798_TisNetworkAccessToken_t798_m26171 (Dictionary_2_t800 * __this, NetworkAccessTokenU5BU5D_t3396* p0, int32_t p1, Transform_1_t3429 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m20598_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m20798_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m20797_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m20586_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20805_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisNetworkAccessToken_t798_m26170_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisNetworkAccessToken_t798_TisNetworkAccessToken_t798_m26171_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20800_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,UnityEngine.Networking.Types.NetworkAccessToken>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_92.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3398_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_92MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_93.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3430_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_93MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_94.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3431_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_94MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20814_GenericMethod;
extern "C" void Transform_1__ctor_m20814_gshared (Transform_1_t3431 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20816_GenericMethod;
extern "C" KeyValuePair_2_t3419  Transform_1_Invoke_m20816_gshared (Transform_1_t3431 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20816((Transform_1_t3431 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3419  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t3419  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20818_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20818_gshared (Transform_1_t3431 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t925_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20820_GenericMethod;
extern "C" KeyValuePair_2_t3419  Transform_1_EndInvoke_m20820_gshared (Transform_1_t3431 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3419 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3432_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_19MethodDeclarations.h"

extern Il2CppType ShimEnumerator_t3432_0_0_0;
extern MethodInfo ShimEnumerator_get_Entry_m20823_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m20776_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m20823_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Current()
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3433_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_44MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_44.h"
extern TypeInfo DefaultComparer_t3434_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_44MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3433_0_0_0;
extern Il2CppType IEquatable_1_t4704_0_0_0;
extern Il2CppType NetworkID_t796_0_0_0;
extern Il2CppType DefaultComparer_t3434_0_0_0;
extern MethodInfo DefaultComparer__ctor_m20832_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m28030_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m28031_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20832_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m28030_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m28031_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4704_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Networking.Types.NetworkID>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m20827_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4685_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_45.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3435_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_45MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_45.h"
extern TypeInfo DefaultComparer_t3436_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_45MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3435_0_0_0;
extern Il2CppType IEquatable_1_t4705_0_0_0;
extern Il2CppType NetworkAccessToken_t798_0_0_0;
extern Il2CppType DefaultComparer_t3436_0_0_0;
extern MethodInfo DefaultComparer__ctor_m20840_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m28032_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m28021_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20840_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m28032_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m28021_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4705_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Networking.Types.NetworkAccessToken>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m20835_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkAccessToken>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkAccessToken>::Equals(T,T)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseDelegate_1_t804_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_ResponMethodDeclarations.h"

// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"


// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::Invoke(T)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::EndInvoke(System.IAsyncResult)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseDelegate_1_t3437_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod ResponseDelegate_1__ctor_m20844_GenericMethod;
extern "C" void ResponseDelegate_1__ctor_m20844_gshared (ResponseDelegate_1_t3437 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern Il2CppGenericMethod ResponseDelegate_1_Invoke_m20846_GenericMethod;
extern "C" void ResponseDelegate_1_Invoke_m20846_gshared (ResponseDelegate_1_t3437 * __this, Object_t * ___response, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResponseDelegate_1_Invoke_m20846((ResponseDelegate_1_t3437 *)__this->___prev_9,___response, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___response, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___response, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod ResponseDelegate_1_BeginInvoke_m20848_GenericMethod;
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m20848_gshared (ResponseDelegate_1_t3437 * __this, Object_t * ___response, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___response;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod ResponseDelegate_1_EndInvoke_m20850_GenericMethod;
extern "C" void ResponseDelegate_1_EndInvoke_m20850_gshared (ResponseDelegate_1_t3437 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t3438_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CProMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
extern TypeInfo CreateMatchResponse_t783_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t778_il2cpp_TypeInfo;
extern TypeInfo Response_t779_il2cpp_TypeInfo;
extern TypeInfo FormatException_t914_il2cpp_TypeInfo;
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppType IDictionary_2_t778_0_0_0;
extern Il2CppType ResponseDelegate_1_t804_0_0_0;
extern MethodInfo WWW_get_error_m3747_MethodInfo;
extern MethodInfo String_IsNullOrEmpty_m2871_MethodInfo;
extern MethodInfo WWW_get_text_m3743_MethodInfo;
extern MethodInfo SimpleJson_TryDeserializeObject_m4268_MethodInfo;
extern MethodInfo Response_Parse_m4126_MethodInfo;
extern MethodInfo Debug_Log_m922_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo Debug_LogError_m798_MethodInfo;
extern MethodInfo Response_ToString_m4125_MethodInfo;
extern MethodInfo ResponseDelegate_1_Invoke_m20845_MethodInfo;
struct Activator_t1989;
// System.Activator
#include "mscorlib_System_Activator.h"
struct Activator_t1989;
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m24678_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m24678(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
// Declaration !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.CreateMatchResponse>()
// !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.CreateMatchResponse>()
#define Activator_CreateInstance_TisCreateMatchResponse_t783_m26178(__this /* static, unused */, method) (( CreateMatchResponse_t783 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod Activator_CreateInstance_TisCreateMatchResponse_t783_m26178_GenericMethod;
extern Il2CppGenericMethod ResponseDelegate_1_Invoke_m20845_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20851_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20851 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3438 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20852_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20852 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3438 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20853_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20853 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3438 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>::MoveNext()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20854_GenericMethod;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern MethodInfo* Activator_CreateInstance_TisCreateMatchResponse_t783_m26178_MethodInfo_var;
extern MethodInfo* ResponseDelegate_1_Invoke_m20845_MethodInfo_var;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20854 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3438 * __this, MethodInfo* method)
{
	static bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20854_init;
	if (!U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20854_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		Activator_CreateInstance_TisCreateMatchResponse_t783_m26178_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Activator_CreateInstance_TisCreateMatchResponse_t783_m26178_GenericMethod);
		ResponseDelegate_1_Invoke_m20845_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseDelegate_1_Invoke_m20845_GenericMethod);
		U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20854_init = true;
	}
	uint32_t V_0 = 0;
	FormatException_t914 * V_1 = {0};
	bool V_2 = false;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_6);
		V_0 = L_0;
		__this->___$PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0170;
	}

IL_0021:
	{
		WWW_t717 * L_2 = (__this->___client_0);
		__this->___$current_7 = L_2;
		__this->___$PC_6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((CreateMatchResponse_t783 *)Castclass(NULL, InitializedTypeInfo(&CreateMatchResponse_t783_il2cpp_TypeInfo)));
		WWW_t717 * L_3 = (__this->___client_0);
		NullCheck(L_3);
		String_t* L_4 = WWW_get_error_m3747(L_3, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_4, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t717 * L_6 = (__this->___client_0);
		NullCheck(L_6);
		String_t* L_7 = WWW_get_text_m3743(L_6, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		Object_t ** L_8 = &(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m4268(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&SimpleJson_TryDeserializeObject_m4268_MethodInfo);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_11 = (__this->___U3CdictJsonObjU3E__2_3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		CreateMatchResponse_t783 * L_12 = Activator_CreateInstance_TisCreateMatchResponse_t783_m26178(NULL /*static, unused*/, /*hidden argument*/Activator_CreateInstance_TisCreateMatchResponse_t783_m26178_MethodInfo_var);
		__this->___U3CjsonInterfaceU3E__0_1 = L_12;
		CreateMatchResponse_t783 ** L_13 = &(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_14 = (__this->___U3CoU3E__1_2);
		NullCheck((*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(&Response_Parse_m4126_MethodInfo, (*L_13), L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&FormatException_t914_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t914 *)__exception_local);
		FormatException_t914 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t914 * L_16 = (__this->___U3CexceptionU3E__3_4);
		Debug_Log_m922(NULL /*static, unused*/, L_16, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		CreateMatchResponse_t783 * L_17 = (__this->___U3CjsonInterfaceU3E__0_1);
		CreateMatchResponse_t783 * L_18 = L_17;
		if (((CreateMatchResponse_t783 *)L_18))
		{
			goto IL_00ff;
		}
	}
	{
		WWW_t717 * L_19 = (__this->___client_0);
		NullCheck(L_19);
		String_t* L_20 = WWW_get_text_m3743(L_19, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral374, L_20, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_21, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		goto IL_011f;
	}

IL_00ff:
	{
		CreateMatchResponse_t783 ** L_22 = &(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((*L_22));
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Response_ToString_m4125_MethodInfo, (*L_22));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral375, L_23, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_24, /*hidden argument*/&Debug_Log_m922_MethodInfo);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t717 * L_25 = (__this->___client_0);
		NullCheck(L_25);
		String_t* L_26 = WWW_get_error_m3747(L_25, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_27 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral376, L_26, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_27, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		WWW_t717 * L_28 = (__this->___client_0);
		NullCheck(L_28);
		String_t* L_29 = WWW_get_text_m3743(L_28, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		String_t* L_30 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral377, L_29, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_30, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0158:
	{
		ResponseDelegate_1_t804 * L_31 = (__this->___callback_5);
		CreateMatchResponse_t783 * L_32 = (__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck(L_31);
		VirtActionInvoker1< CreateMatchResponse_t783 * >::Invoke(ResponseDelegate_1_Invoke_m20845_MethodInfo_var, L_31, L_32);
		__this->___$PC_6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>::Dispose()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20855_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20855 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3438 * __this, MethodInfo* method)
{
	{
		__this->___$PC_6 = (-1);
		return;
	}
}
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseDelegate_1_t805_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0MethodDeclarations.h"

// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"


// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::Invoke(T)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::EndInvoke(System.IAsyncResult)
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t3439_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_0MethodDeclarations.h"

extern TypeInfo JoinMatchResponse_t785_il2cpp_TypeInfo;
extern Il2CppType ResponseDelegate_1_t805_0_0_0;
extern MethodInfo ResponseDelegate_1_Invoke_m20857_MethodInfo;
struct Activator_t1989;
// Declaration !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.JoinMatchResponse>()
// !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.JoinMatchResponse>()
#define Activator_CreateInstance_TisJoinMatchResponse_t785_m26179(__this /* static, unused */, method) (( JoinMatchResponse_t785 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod Activator_CreateInstance_TisJoinMatchResponse_t785_m26179_GenericMethod;
extern Il2CppGenericMethod ResponseDelegate_1_Invoke_m20857_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>::.ctor()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20860_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20860 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3439 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20861_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20861 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3439 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20862_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20862 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3439 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>::MoveNext()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20863_GenericMethod;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern MethodInfo* Activator_CreateInstance_TisJoinMatchResponse_t785_m26179_MethodInfo_var;
extern MethodInfo* ResponseDelegate_1_Invoke_m20857_MethodInfo_var;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20863 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3439 * __this, MethodInfo* method)
{
	static bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20863_init;
	if (!U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20863_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		Activator_CreateInstance_TisJoinMatchResponse_t785_m26179_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Activator_CreateInstance_TisJoinMatchResponse_t785_m26179_GenericMethod);
		ResponseDelegate_1_Invoke_m20857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseDelegate_1_Invoke_m20857_GenericMethod);
		U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20863_init = true;
	}
	uint32_t V_0 = 0;
	FormatException_t914 * V_1 = {0};
	bool V_2 = false;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_6);
		V_0 = L_0;
		__this->___$PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0170;
	}

IL_0021:
	{
		WWW_t717 * L_2 = (__this->___client_0);
		__this->___$current_7 = L_2;
		__this->___$PC_6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((JoinMatchResponse_t785 *)Castclass(NULL, InitializedTypeInfo(&JoinMatchResponse_t785_il2cpp_TypeInfo)));
		WWW_t717 * L_3 = (__this->___client_0);
		NullCheck(L_3);
		String_t* L_4 = WWW_get_error_m3747(L_3, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_4, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t717 * L_6 = (__this->___client_0);
		NullCheck(L_6);
		String_t* L_7 = WWW_get_text_m3743(L_6, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		Object_t ** L_8 = &(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m4268(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&SimpleJson_TryDeserializeObject_m4268_MethodInfo);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_11 = (__this->___U3CdictJsonObjU3E__2_3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		JoinMatchResponse_t785 * L_12 = Activator_CreateInstance_TisJoinMatchResponse_t785_m26179(NULL /*static, unused*/, /*hidden argument*/Activator_CreateInstance_TisJoinMatchResponse_t785_m26179_MethodInfo_var);
		__this->___U3CjsonInterfaceU3E__0_1 = L_12;
		JoinMatchResponse_t785 ** L_13 = &(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_14 = (__this->___U3CoU3E__1_2);
		NullCheck((*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(&Response_Parse_m4126_MethodInfo, (*L_13), L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&FormatException_t914_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t914 *)__exception_local);
		FormatException_t914 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t914 * L_16 = (__this->___U3CexceptionU3E__3_4);
		Debug_Log_m922(NULL /*static, unused*/, L_16, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		JoinMatchResponse_t785 * L_17 = (__this->___U3CjsonInterfaceU3E__0_1);
		JoinMatchResponse_t785 * L_18 = L_17;
		if (((JoinMatchResponse_t785 *)L_18))
		{
			goto IL_00ff;
		}
	}
	{
		WWW_t717 * L_19 = (__this->___client_0);
		NullCheck(L_19);
		String_t* L_20 = WWW_get_text_m3743(L_19, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral374, L_20, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_21, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		goto IL_011f;
	}

IL_00ff:
	{
		JoinMatchResponse_t785 ** L_22 = &(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((*L_22));
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Response_ToString_m4125_MethodInfo, (*L_22));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral375, L_23, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_24, /*hidden argument*/&Debug_Log_m922_MethodInfo);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t717 * L_25 = (__this->___client_0);
		NullCheck(L_25);
		String_t* L_26 = WWW_get_error_m3747(L_25, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_27 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral376, L_26, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_27, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		WWW_t717 * L_28 = (__this->___client_0);
		NullCheck(L_28);
		String_t* L_29 = WWW_get_text_m3743(L_28, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		String_t* L_30 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral377, L_29, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_30, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0158:
	{
		ResponseDelegate_1_t805 * L_31 = (__this->___callback_5);
		JoinMatchResponse_t785 * L_32 = (__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck(L_31);
		VirtActionInvoker1< JoinMatchResponse_t785 * >::Invoke(ResponseDelegate_1_Invoke_m20857_MethodInfo_var, L_31, L_32);
		__this->___$PC_6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>::Dispose()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20864_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20864 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3439 * __this, MethodInfo* method)
{
	{
		__this->___$PC_6 = (-1);
		return;
	}
}
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseDelegate_1_t806_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1MethodDeclarations.h"

// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"


// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::Invoke(T)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::EndInvoke(System.IAsyncResult)
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t3440_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_1MethodDeclarations.h"

extern TypeInfo BasicResponse_t780_il2cpp_TypeInfo;
extern Il2CppType ResponseDelegate_1_t806_0_0_0;
extern MethodInfo ResponseDelegate_1_Invoke_m20866_MethodInfo;
struct Activator_t1989;
// Declaration !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.BasicResponse>()
// !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.BasicResponse>()
#define Activator_CreateInstance_TisBasicResponse_t780_m26180(__this /* static, unused */, method) (( BasicResponse_t780 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod Activator_CreateInstance_TisBasicResponse_t780_m26180_GenericMethod;
extern Il2CppGenericMethod ResponseDelegate_1_Invoke_m20866_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>::.ctor()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20869_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20869 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3440 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20870_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20870 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3440 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20871_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20871 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3440 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>::MoveNext()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20872_GenericMethod;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern MethodInfo* Activator_CreateInstance_TisBasicResponse_t780_m26180_MethodInfo_var;
extern MethodInfo* ResponseDelegate_1_Invoke_m20866_MethodInfo_var;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20872 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3440 * __this, MethodInfo* method)
{
	static bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20872_init;
	if (!U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20872_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		Activator_CreateInstance_TisBasicResponse_t780_m26180_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Activator_CreateInstance_TisBasicResponse_t780_m26180_GenericMethod);
		ResponseDelegate_1_Invoke_m20866_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseDelegate_1_Invoke_m20866_GenericMethod);
		U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20872_init = true;
	}
	uint32_t V_0 = 0;
	FormatException_t914 * V_1 = {0};
	bool V_2 = false;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_6);
		V_0 = L_0;
		__this->___$PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0170;
	}

IL_0021:
	{
		WWW_t717 * L_2 = (__this->___client_0);
		__this->___$current_7 = L_2;
		__this->___$PC_6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((BasicResponse_t780 *)Castclass(NULL, InitializedTypeInfo(&BasicResponse_t780_il2cpp_TypeInfo)));
		WWW_t717 * L_3 = (__this->___client_0);
		NullCheck(L_3);
		String_t* L_4 = WWW_get_error_m3747(L_3, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_4, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t717 * L_6 = (__this->___client_0);
		NullCheck(L_6);
		String_t* L_7 = WWW_get_text_m3743(L_6, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		Object_t ** L_8 = &(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m4268(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&SimpleJson_TryDeserializeObject_m4268_MethodInfo);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_11 = (__this->___U3CdictJsonObjU3E__2_3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		BasicResponse_t780 * L_12 = Activator_CreateInstance_TisBasicResponse_t780_m26180(NULL /*static, unused*/, /*hidden argument*/Activator_CreateInstance_TisBasicResponse_t780_m26180_MethodInfo_var);
		__this->___U3CjsonInterfaceU3E__0_1 = L_12;
		BasicResponse_t780 ** L_13 = &(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_14 = (__this->___U3CoU3E__1_2);
		NullCheck((*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(&Response_Parse_m4126_MethodInfo, (*L_13), L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&FormatException_t914_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t914 *)__exception_local);
		FormatException_t914 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t914 * L_16 = (__this->___U3CexceptionU3E__3_4);
		Debug_Log_m922(NULL /*static, unused*/, L_16, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		BasicResponse_t780 * L_17 = (__this->___U3CjsonInterfaceU3E__0_1);
		BasicResponse_t780 * L_18 = L_17;
		if (((BasicResponse_t780 *)L_18))
		{
			goto IL_00ff;
		}
	}
	{
		WWW_t717 * L_19 = (__this->___client_0);
		NullCheck(L_19);
		String_t* L_20 = WWW_get_text_m3743(L_19, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral374, L_20, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_21, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		goto IL_011f;
	}

IL_00ff:
	{
		BasicResponse_t780 ** L_22 = &(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((*L_22));
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Response_ToString_m4125_MethodInfo, (*L_22));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral375, L_23, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_24, /*hidden argument*/&Debug_Log_m922_MethodInfo);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t717 * L_25 = (__this->___client_0);
		NullCheck(L_25);
		String_t* L_26 = WWW_get_error_m3747(L_25, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_27 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral376, L_26, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_27, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		WWW_t717 * L_28 = (__this->___client_0);
		NullCheck(L_28);
		String_t* L_29 = WWW_get_text_m3743(L_28, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		String_t* L_30 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral377, L_29, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_30, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0158:
	{
		ResponseDelegate_1_t806 * L_31 = (__this->___callback_5);
		BasicResponse_t780 * L_32 = (__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck(L_31);
		VirtActionInvoker1< BasicResponse_t780 * >::Invoke(ResponseDelegate_1_Invoke_m20866_MethodInfo_var, L_31, L_32);
		__this->___$PC_6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>::Dispose()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20873_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20873 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3440 * __this, MethodInfo* method)
{
	{
		__this->___$PC_6 = (-1);
		return;
	}
}
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseDelegate_1_t807_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2MethodDeclarations.h"

// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"


// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t3441_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_2MethodDeclarations.h"

extern TypeInfo ListMatchResponse_t793_il2cpp_TypeInfo;
extern Il2CppType ResponseDelegate_1_t807_0_0_0;
extern MethodInfo ResponseDelegate_1_Invoke_m20875_MethodInfo;
struct Activator_t1989;
// Declaration !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.ListMatchResponse>()
// !!0 System.Activator::CreateInstance<UnityEngine.Networking.Match.ListMatchResponse>()
#define Activator_CreateInstance_TisListMatchResponse_t793_m26181(__this /* static, unused */, method) (( ListMatchResponse_t793 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m24678_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod Activator_CreateInstance_TisListMatchResponse_t793_m26181_GenericMethod;
extern Il2CppGenericMethod ResponseDelegate_1_Invoke_m20875_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20878_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m20878 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3441 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20879_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m20879 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3441 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20880_GenericMethod;
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m20880 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3441 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>::MoveNext()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20881_GenericMethod;
extern TypeInfo* IDictionary_2_t778_il2cpp_TypeInfo_var;
extern MethodInfo* Activator_CreateInstance_TisListMatchResponse_t793_m26181_MethodInfo_var;
extern MethodInfo* ResponseDelegate_1_Invoke_m20875_MethodInfo_var;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20881 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3441 * __this, MethodInfo* method)
{
	static bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20881_init;
	if (!U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20881_init)
	{
		IDictionary_2_t778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t778_0_0_0);
		Activator_CreateInstance_TisListMatchResponse_t793_m26181_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Activator_CreateInstance_TisListMatchResponse_t793_m26181_GenericMethod);
		ResponseDelegate_1_Invoke_m20875_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseDelegate_1_Invoke_m20875_GenericMethod);
		U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m20881_init = true;
	}
	uint32_t V_0 = 0;
	FormatException_t914 * V_1 = {0};
	bool V_2 = false;
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_6);
		V_0 = L_0;
		__this->___$PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0170;
	}

IL_0021:
	{
		WWW_t717 * L_2 = (__this->___client_0);
		__this->___$current_7 = L_2;
		__this->___$PC_6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((ListMatchResponse_t793 *)Castclass(NULL, InitializedTypeInfo(&ListMatchResponse_t793_il2cpp_TypeInfo)));
		WWW_t717 * L_3 = (__this->___client_0);
		NullCheck(L_3);
		String_t* L_4 = WWW_get_error_m3747(L_3, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_IsNullOrEmpty_m2871(NULL /*static, unused*/, L_4, /*hidden argument*/&String_IsNullOrEmpty_m2871_MethodInfo);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t717 * L_6 = (__this->___client_0);
		NullCheck(L_6);
		String_t* L_7 = WWW_get_text_m3743(L_6, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		Object_t ** L_8 = &(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m4268(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&SimpleJson_TryDeserializeObject_m4268_MethodInfo);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t778_il2cpp_TypeInfo_var));
		Object_t* L_11 = (__this->___U3CdictJsonObjU3E__2_3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		ListMatchResponse_t793 * L_12 = Activator_CreateInstance_TisListMatchResponse_t793_m26181(NULL /*static, unused*/, /*hidden argument*/Activator_CreateInstance_TisListMatchResponse_t793_m26181_MethodInfo_var);
		__this->___U3CjsonInterfaceU3E__0_1 = L_12;
		ListMatchResponse_t793 ** L_13 = &(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_14 = (__this->___U3CoU3E__1_2);
		NullCheck((*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(&Response_Parse_m4126_MethodInfo, (*L_13), L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t204 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&FormatException_t914_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t914 *)__exception_local);
		FormatException_t914 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t914 * L_16 = (__this->___U3CexceptionU3E__3_4);
		Debug_Log_m922(NULL /*static, unused*/, L_16, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		ListMatchResponse_t793 * L_17 = (__this->___U3CjsonInterfaceU3E__0_1);
		ListMatchResponse_t793 * L_18 = L_17;
		if (((ListMatchResponse_t793 *)L_18))
		{
			goto IL_00ff;
		}
	}
	{
		WWW_t717 * L_19 = (__this->___client_0);
		NullCheck(L_19);
		String_t* L_20 = WWW_get_text_m3743(L_19, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral374, L_20, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_21, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		goto IL_011f;
	}

IL_00ff:
	{
		ListMatchResponse_t793 ** L_22 = &(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((*L_22));
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Response_ToString_m4125_MethodInfo, (*L_22));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral375, L_23, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_24, /*hidden argument*/&Debug_Log_m922_MethodInfo);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t717 * L_25 = (__this->___client_0);
		NullCheck(L_25);
		String_t* L_26 = WWW_get_error_m3747(L_25, /*hidden argument*/&WWW_get_error_m3747_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_27 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral376, L_26, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_27, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		WWW_t717 * L_28 = (__this->___client_0);
		NullCheck(L_28);
		String_t* L_29 = WWW_get_text_m3743(L_28, /*hidden argument*/&WWW_get_text_m3743_MethodInfo);
		String_t* L_30 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral377, L_29, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_30, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
	}

IL_0158:
	{
		ResponseDelegate_1_t807 * L_31 = (__this->___callback_5);
		ListMatchResponse_t793 * L_32 = (__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck(L_31);
		VirtActionInvoker1< ListMatchResponse_t793 * >::Invoke(ResponseDelegate_1_Invoke_m20875_MethodInfo_var, L_31, L_32);
		__this->___$PC_6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>::Dispose()
extern Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20882_GenericMethod;
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m20882 (U3CProcessMatchResponseU3Ec__Iterator0_1_t3441 * __this, MethodInfo* method)
{
	{
		__this->___$PC_6 = (-1);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t809_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_97.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_98.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_20.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
extern TypeInfo IEqualityComparer_1_t2570_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1635_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t917_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t918_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t1035_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t1034_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t815_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t814_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t813_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t4009_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3442_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3447_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t916_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3449_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t920_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2661_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1264_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2426_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t553_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1147_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2640_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2617_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollectiMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_97MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_98MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_20MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t809_0_0_0;
extern Il2CppType IEqualityComparer_1_t2570_0_0_0;
extern Il2CppType KeyCollection_t917_0_0_0;
extern Il2CppType ValueCollection_t918_0_0_0;
extern Il2CppType ICollection_1_t1035_0_0_0;
extern Il2CppType IEnumerable_1_t1034_0_0_0;
extern Il2CppType IEnumerator_1_t815_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t813_0_0_0;
extern Il2CppType KeyValuePair_2_t814_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t4009_0_0_0;
extern Il2CppType Transform_1_t3442_0_0_0;
extern Il2CppType Transform_1_t3447_0_0_0;
extern Il2CppType Enumerator_t916_0_0_0;
extern Il2CppType ShimEnumerator_t3449_0_0_0;
extern Il2CppType EqualityComparer_1_t2661_0_0_0;
extern Il2CppType Int32U5BU5D_t1264_0_0_0;
extern Il2CppType LinkU5BU5D_t2426_0_0_0;
extern Il2CppType EqualityComparer_1_t2640_0_0_0;
extern Il2CppType IEqualityComparer_1_t2617_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m4662_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m4654_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m4655_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m27475_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27476_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m8549_MethodInfo;
extern MethodInfo KeyCollection__ctor_m20921_MethodInfo;
extern MethodInfo ValueCollection__ctor_m20956_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m28033_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m28034_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4663_MethodInfo;
extern MethodInfo Dictionary_2_Add_m4658_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m4659_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m20920_MethodInfo;
extern MethodInfo Transform_1__ctor_m20979_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m20909_MethodInfo;
extern MethodInfo Transform_1__ctor_m20983_MethodInfo;
extern MethodInfo Enumerator__ctor_m20940_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m20991_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5969_MethodInfo;
extern MethodInfo ArgumentException__ctor_m3008_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m4656_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m19918_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m8716_MethodInfo;
extern MethodInfo Array_Copy_m7933_MethodInfo;
extern MethodInfo Array_Clear_m7114_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m27483_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5978_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5991_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m5990_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m5979_MethodInfo;
extern MethodInfo Type_ToString_m8014_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5967_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7983_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m4660_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24055_MethodInfo;
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1154_TisDictionaryEntry_t1154_m26187 (Dictionary_2_t809 * __this, DictionaryEntryU5BU5D_t4009* p0, int32_t p1, Transform_1_t3442 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t809;
struct Dictionary_2_t2619;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_99.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t814_m26190_gshared (Dictionary_2_t2619 * __this, Array_t * p0, int32_t p1, Transform_1_t3448 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t814_m26190(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2619 *, Array_t *, int32_t, Transform_1_t3448 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t814_m26190_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t814_m26189(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t809 *, Array_t *, int32_t, Transform_1_t3447 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t814_m26190_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t814_TisKeyValuePair_2_t814_m26192 (Dictionary_2_t809 * __this, KeyValuePair_2U5BU5D_t813* p0, int32_t p1, Transform_1_t3447 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m4664_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m4665_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m4662_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m20917_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m4654_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m20918_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m4655_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m27475_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27476_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m20913_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m20921_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m20956_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m20906_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m20886_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m28033_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m28034_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4663_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m4667_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m4668_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m4658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m4659_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m20919_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m20912_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m20908_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m20920_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20979_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1154_TisDictionaryEntry_t1154_m26187_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m20909_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20983_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t814_m26189_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20940_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m20991_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12945_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m20907_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m4656_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m19918_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t814_TisKeyValuePair_2_t814_m26192_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12815_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m27483_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m4660_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24055_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_95.h"
extern TypeInfo Enumerator_t3443_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3444_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_95MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42MethodDeclarations.h"
extern Il2CppType Enumerator_t3443_0_0_0;
extern Il2CppType Transform_1_t3444_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m20932_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m20910_MethodInfo;
extern MethodInfo Transform_1__ctor_m20952_MethodInfo;
extern MethodInfo Enumerator__ctor_m20935_MethodInfo;
struct Dictionary_2_t809;
struct Dictionary_2_t2619;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23892_gshared (Dictionary_2_t2619 * __this, Array_t * p0, int32_t p1, Transform_1_t2634 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23892(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2619 *, Array_t *, int32_t, Transform_1_t2634 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23892_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m26183(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t809 *, Array_t *, int32_t, Transform_1_t3444 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23892_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m26184 (Dictionary_2_t809 * __this, StringU5BU5D_t215* p0, int32_t p1, Transform_1_t3444 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m20933_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m20932_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m20910_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20952_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m26183_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m26184_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20935_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m20947_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m4666_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m20951_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m20945_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m20950_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m20948_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m20949_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_96.h"
extern TypeInfo Enumerator_t3445_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3446_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_96MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42MethodDeclarations.h"
extern Il2CppType Enumerator_t3445_0_0_0;
extern Il2CppType Transform_1_t3446_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m20967_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m20911_MethodInfo;
extern MethodInfo Transform_1__ctor_m20975_MethodInfo;
extern MethodInfo Enumerator__ctor_m20970_MethodInfo;
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26186(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t809 *, Array_t *, int32_t, Transform_1_t3446 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23892_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26185 (Dictionary_2_t809 * __this, ObjectU5BU5D_t194* p0, int32_t p1, Transform_1_t3446 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m20914_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m20968_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m20967_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m20911_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20975_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26186_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26185_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20970_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3448_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_99MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20984_GenericMethod;
extern "C" void Transform_1__ctor_m20984_gshared (Transform_1_t3448 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20986_GenericMethod;
extern "C" KeyValuePair_2_t814  Transform_1_Invoke_m20986_gshared (Transform_1_t3448 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20986((Transform_1_t3448 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t814  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t814  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t814  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20988_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20988_gshared (Transform_1_t3448 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t424 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20990_GenericMethod;
extern "C" KeyValuePair_2_t814  Transform_1_EndInvoke_m20990_gshared (Transform_1_t3448 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t814 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m20993_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m20946_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m20993_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Object>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t819_il2cpp_TypeInfo;

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"


// System.Void System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4706_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4707_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3949_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t3450_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23MethodDeclarations.h"

extern TypeInfo ConstructorDelegate_t822_il2cpp_TypeInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m20999_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m21001_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m20998_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m21000_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_167.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3451_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_167MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3451_0_0_0;
extern Il2CppType KeyValuePair_2_t3450_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>(System.Int32)
extern "C" KeyValuePair_2_t3450  Array_InternalArray__get_Item_TisKeyValuePair_2_t3450_m26194_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3450_m26194(__this, p0, method) (( KeyValuePair_2_t3450  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3450_m26194_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m21007_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3450_m26194_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21003_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m21003_gshared (InternalEnumerator_1_t3451 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21004_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21004_gshared (InternalEnumerator_1_t3451 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3450  L_0 = (( KeyValuePair_2_t3450  (*) (InternalEnumerator_1_t3451 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3450  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m21005_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m21005_gshared (InternalEnumerator_1_t3451 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m21006_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m21006_gshared (InternalEnumerator_1_t3451 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::get_Current()
extern "C" KeyValuePair_2_t3450  InternalEnumerator_1_get_Current_m21007_gshared (InternalEnumerator_1_t3451 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3450  L_8 = (( KeyValuePair_2_t3450  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4708_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3947_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4709_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3951_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Current()
// System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_168.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3452_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_168MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3452_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorDelegate_t822_m26205(__this, p0, method) (( ConstructorDelegate_t822 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23558_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m21012_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisConstructorDelegate_t822_m26205_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::MoveNext()
// T System.Array/InternalEnumerator`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4710_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4711_il2cpp_TypeInfo;

// System.MulticastDelegate
#include "mscorlib_System_MulticastDelegate.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.MulticastDelegate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MulticastDelegate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MulticastDelegate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MulticastDelegate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MulticastDelegate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MulticastDelegate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MulticastDelegate>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4712_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MulticastDelegate>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4713_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.MulticastDelegate>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
