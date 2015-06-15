#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
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
extern TypeInfo CastHelper_1_t2588_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0MethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2589_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_genMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4148_il2cpp_TypeInfo;

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2590_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_genMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo RaycastHit_t16_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1332_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2590_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5972_MethodInfo;
extern MethodInfo Array_get_Length_m5976_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t16  Array_InternalArray__get_Item_TisRaycastHit_t16_m23559_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t16_m23559(__this, p0, method) (( RaycastHit_t16  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t16_m23559_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12497_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastHit_t16_m23559_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12493_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12493_gshared (InternalEnumerator_1_t2590 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12494_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12494_gshared (InternalEnumerator_1_t2590 * __this, MethodInfo* method)
{
	{
		RaycastHit_t16  L_0 = (( RaycastHit_t16  (*) (InternalEnumerator_1_t2590 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t16  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12495_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12495_gshared (InternalEnumerator_1_t2590 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12496_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12496_gshared (InternalEnumerator_1_t2590 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t16  InternalEnumerator_1_get_Current_m12497_gshared (InternalEnumerator_1_t2590 * __this, MethodInfo* method)
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
		RaycastHit_t16  L_8 = (( RaycastHit_t16  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t246_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current()
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2591_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0MethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2591_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m23569_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m23569(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12502_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObject_t_m23569_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12498_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12498_gshared (InternalEnumerator_1_t2591 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12499_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12499_gshared (InternalEnumerator_1_t2591 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (InternalEnumerator_1_t2591 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12500_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12500_gshared (InternalEnumerator_1_t2591 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12501_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12501_gshared (InternalEnumerator_1_t2591 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m12502_gshared (InternalEnumerator_1_t2591 * __this, MethodInfo* method)
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
		Object_t * L_8 = (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t814_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t1032_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t1033_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4149_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4150_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4151_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4152_il2cpp_TypeInfo;

// System.ValueType
#include "mscorlib_System_ValueType.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.ValueType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4153_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ValueType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4154_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.ValueType>::get_Current()
// System.Array/InternalEnumerator`1<System.ValueType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2592_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ValueType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1MethodDeclarations.h"

extern TypeInfo ValueType_t249_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2592_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
#define Array_InternalArray__get_Item_TisValueType_t249_m23581(__this, p0, method) (( ValueType_t249 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12507_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisValueType_t249_m23581_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.ValueType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ValueType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ValueType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ValueType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ValueType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4155_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ValueType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ValueType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4156_il2cpp_TypeInfo;

// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Collider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2593_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Collider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2MethodDeclarations.h"

extern TypeInfo Collider_t94_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2593_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Collider>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Collider>(System.Int32)
#define Array_InternalArray__get_Item_TisCollider_t94_m23592(__this, p0, method) (( Collider_t94 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12512_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCollider_t94_m23592_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Collider>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Collider>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Collider>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4157_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4158_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4159_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Collider>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Collider>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3819_il2cpp_TypeInfo;

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Component>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Component>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Component>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Component>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3817_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Component>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3818_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Component>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Component>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2594_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Component>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3MethodDeclarations.h"

extern TypeInfo Component_t185_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2594_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Component>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Component>(System.Int32)
#define Array_InternalArray__get_Item_TisComponent_t185_m23603(__this, p0, method) (( Component_t185 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12517_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisComponent_t185_m23603_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Component>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Component>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Component>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Component>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Component>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2886_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Component>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Component>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4160_il2cpp_TypeInfo;

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Object>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4161_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Object>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4162_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Object>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2595_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4MethodDeclarations.h"

extern TypeInfo Object_t91_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2595_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
#define Array_InternalArray__get_Item_TisObject_t91_m23614(__this, p0, method) (( Object_t91 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12522_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObject_t91_m23614_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Object>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Object>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Object>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Object>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Object>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4163_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Object>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Object>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4164_il2cpp_TypeInfo;

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Renderer>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Renderer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2596_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Renderer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5MethodDeclarations.h"

extern TypeInfo Renderer_t156_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2596_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Renderer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Renderer>(System.Int32)
#define Array_InternalArray__get_Item_TisRenderer_t156_m23625(__this, p0, method) (( Renderer_t156 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12527_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRenderer_t156_m23625_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Renderer>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Renderer>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Renderer>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Renderer>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Renderer>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4165_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Renderer>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4166_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Renderer>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4167_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Renderer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Renderer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Renderer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Renderer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Renderer>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4168_il2cpp_TypeInfo;

// System.Single
#include "mscorlib_System_Single.h"


// T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current()
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2597_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6MethodDeclarations.h"

extern TypeInfo Single_t184_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2597_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t184_m23639_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t184_m23639(__this, p0, method) (( float (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSingle_t184_m23639_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12532_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSingle_t184_m23639_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12528_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12528_gshared (InternalEnumerator_1_t2597 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12529_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12529_gshared (InternalEnumerator_1_t2597 * __this, MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t2597 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12530_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12530_gshared (InternalEnumerator_1_t2597 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12531_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12531_gshared (InternalEnumerator_1_t2597 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m12532_gshared (InternalEnumerator_1_t2597 * __this, MethodInfo* method)
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
		float L_8 = (( float (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4169_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4170_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4171_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4172_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IFormattable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4173_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IFormattable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4174_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IFormattable>::get_Current()
// System.Array/InternalEnumerator`1<System.IFormattable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2598_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IFormattable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7MethodDeclarations.h"

extern TypeInfo IFormattable_t224_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2598_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
#define Array_InternalArray__get_Item_TisIFormattable_t224_m23650(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12537_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIFormattable_t224_m23650_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IFormattable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IFormattable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IFormattable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IFormattable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IFormattable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4175_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IFormattable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IFormattable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4176_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IConvertible>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4177_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IConvertible>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4178_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IConvertible>::get_Current()
// System.Array/InternalEnumerator`1<System.IConvertible>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2599_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IConvertible>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8MethodDeclarations.h"

extern TypeInfo IConvertible_t225_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2599_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
#define Array_InternalArray__get_Item_TisIConvertible_t225_m23661(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12542_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIConvertible_t225_m23661_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IConvertible>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IConvertible>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IConvertible>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IConvertible>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IConvertible>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4179_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IConvertible>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IConvertible>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4180_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4181_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4182_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2600_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9MethodDeclarations.h"

extern TypeInfo IComparable_t226_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2600_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_t226_m23672(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12547_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_t226_m23672_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4183_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4184_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4185_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Single>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4186_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2159_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Single>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2601_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2601_0_0_0;
extern Il2CppType IComparable_1_t2159_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Single>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Single>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2159_m23683(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12552_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2159_m23683_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4187_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4188_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4189_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Single>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4190_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2160_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Single>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2602_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2602_0_0_0;
extern Il2CppType IEquatable_1_t2160_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Single>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Single>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2160_m23694(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12557_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2160_m23694_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4191_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4192_il2cpp_TypeInfo;

// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.AudioClip>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.AudioClip>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2603_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.AudioClip>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"

extern TypeInfo AudioClip_t26_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2603_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.AudioClip>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.AudioClip>(System.Int32)
#define Array_InternalArray__get_Item_TisAudioClip_t26_m23705(__this, p0, method) (( AudioClip_t26 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12562_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisAudioClip_t26_m23705_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.AudioClip>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.AudioClip>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.AudioClip>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.AudioClip>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.AudioClip>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4193_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AudioClip>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4194_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.AudioClip>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4195_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.AudioClip>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.AudioClip>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.AudioClip>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.AudioClip>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.AudioClip>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityEngine.CharacterController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2604_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.CharacterController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.AudioSource>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2605_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.AudioSource>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.CapsuleCollider>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2606_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.CapsuleCollider>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4196_il2cpp_TypeInfo;

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2607_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13MethodDeclarations.h"

extern TypeInfo Keyframe_t197_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2607_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t197  Array_InternalArray__get_Item_TisKeyframe_t197_m23716_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t197_m23716(__this, p0, method) (( Keyframe_t197  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t197_m23716_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12567_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyframe_t197_m23716_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12563_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12563_gshared (InternalEnumerator_1_t2607 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12564_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12564_gshared (InternalEnumerator_1_t2607 * __this, MethodInfo* method)
{
	{
		Keyframe_t197  L_0 = (( Keyframe_t197  (*) (InternalEnumerator_1_t2607 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t197  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12565_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12565_gshared (InternalEnumerator_1_t2607 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12566_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12566_gshared (InternalEnumerator_1_t2607 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern "C" Keyframe_t197  InternalEnumerator_1_get_Current_m12567_gshared (InternalEnumerator_1_t2607 * __this, MethodInfo* method)
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
		Keyframe_t197  L_8 = (( Keyframe_t197  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4197_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4198_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4199_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Ball.Ball>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2608_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Ball.Ball>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2609_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2610_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4200_il2cpp_TypeInfo;

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf.h"


// T System.Collections.Generic.IEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::get_Current()
// System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2611_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14MethodDeclarations.h"

extern TypeInfo AxisTouchButton_t44_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2611_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>(System.Int32)
#define Array_InternalArray__get_Item_TisAxisTouchButton_t44_m23727(__this, p0, method) (( AxisTouchButton_t44 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12572_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisAxisTouchButton_t44_m23727_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4201_il2cpp_TypeInfo;

#include "Assembly-CSharp-firstpass_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4202_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4203_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityStandardAssets.CrossPlatformInput.AxisTouchButton>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4204_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerDownHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4205_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IPointerDownHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4206_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2612_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15MethodDeclarations.h"

extern TypeInfo IPointerDownHandler_t239_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2612_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerDownHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIPointerDownHandler_t239_m23738(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12577_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIPointerDownHandler_t239_m23738_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerDownHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4207_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerDownHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerDownHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerDownHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerDownHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerDownHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3815_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3813_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3814_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2613_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16MethodDeclarations.h"

extern TypeInfo IEventSystemHandler_t240_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2613_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIEventSystemHandler_t240_m23749(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m23569_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12582_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEventSystemHandler_t240_m23749_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t580_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
