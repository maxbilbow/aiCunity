#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2988;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t246;
// System.Object[]
struct ObjectU5BU5D_t194;
// System.Predicate`1<System.Object>
struct Predicate_1_t2691;
// System.Comparison`1<System.Object>
struct Comparison_1_t2703;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m16122_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m16122(__this, method) (( void (*) (IndexedSet_1_t2988 *, MethodInfo*))IndexedSet_1__ctor_m16122_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16124_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16124(__this, method) (( Object_t * (*) (IndexedSet_1_t2988 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16124_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m16125_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m16125(__this, ___item, method) (( void (*) (IndexedSet_1_t2988 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m16125_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m16126_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m16126(__this, ___item, method) (( bool (*) (IndexedSet_1_t2988 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m16126_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m16128_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m16128(__this, method) (( Object_t* (*) (IndexedSet_1_t2988 *, MethodInfo*))IndexedSet_1_GetEnumerator_m16128_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m16129_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m16129(__this, method) (( void (*) (IndexedSet_1_t2988 *, MethodInfo*))IndexedSet_1_Clear_m16129_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m16131_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m16131(__this, ___item, method) (( bool (*) (IndexedSet_1_t2988 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m16131_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m16133_gshared (IndexedSet_1_t2988 * __this, ObjectU5BU5D_t194* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m16133(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2988 *, ObjectU5BU5D_t194*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m16133_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m16134_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m16134(__this, method) (( int32_t (*) (IndexedSet_1_t2988 *, MethodInfo*))IndexedSet_1_get_Count_m16134_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m16136_gshared (IndexedSet_1_t2988 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m16136(__this, method) (( bool (*) (IndexedSet_1_t2988 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m16136_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m16138_gshared (IndexedSet_1_t2988 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m16138(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2988 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m16138_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m16140_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m16140(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2988 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m16140_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m16142_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m16142(__this, ___index, method) (( void (*) (IndexedSet_1_t2988 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m16142_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m16143_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m16143(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2988 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m16143_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m16145_gshared (IndexedSet_1_t2988 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m16145(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2988 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m16145_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m16146_gshared (IndexedSet_1_t2988 * __this, Predicate_1_t2691 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m16146(__this, ___match, method) (( void (*) (IndexedSet_1_t2988 *, Predicate_1_t2691 *, MethodInfo*))IndexedSet_1_RemoveAll_m16146_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m16147_gshared (IndexedSet_1_t2988 * __this, Comparison_1_t2703 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m16147(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2988 *, Comparison_1_t2703 *, MethodInfo*))IndexedSet_1_Sort_m16147_gshared)(__this, ___sortLayoutFunction, method)
