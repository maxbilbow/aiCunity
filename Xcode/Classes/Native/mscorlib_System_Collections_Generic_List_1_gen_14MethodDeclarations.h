#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t402;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t399;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t3865;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3866;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t537;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t3081;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3079;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3085;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t403;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m2768(__this, method) (( void (*) (List_1_t402 *, MethodInfo*))List_1__ctor_m4664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17078(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, MethodInfo*))List_1__ctor_m13125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m17079(__this, ___capacity, method) (( void (*) (List_1_t402 *, int32_t, MethodInfo*))List_1__ctor_m13127_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m17080(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13129_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17081(__this, method) (( Object_t* (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17082(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t402 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17083(__this, method) (( Object_t * (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17084(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4889_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17085(__this, ___item, method) (( bool (*) (List_1_t402 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4891_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17086(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17087(__this, ___index, ___item, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17088(__this, ___item, method) (( void (*) (List_1_t402 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17089(__this, method) (( bool (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17090(__this, method) (( bool (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4882_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17091(__this, method) (( Object_t * (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17092(__this, method) (( bool (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17093(__this, method) (( bool (*) (List_1_t402 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17094(__this, ___index, method) (( Object_t * (*) (List_1_t402 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17095(__this, ___index, ___value, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m2779(__this, ___item, method) (( void (*) (List_1_t402 *, Graphic_t399 *, MethodInfo*))List_1_Add_m4683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17096(__this, ___newCount, method) (( void (*) (List_1_t402 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13146_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17097(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, MethodInfo*))List_1_AddCollection_m13148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17098(__this, ___enumerable, method) (( void (*) (List_1_t402 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13150_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17099(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, MethodInfo*))List_1_AddRange_m13152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m17100(__this, method) (( ReadOnlyCollection_1_t3081 * (*) (List_1_t402 *, MethodInfo*))List_1_AsReadOnly_m13154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m2773(__this, method) (( void (*) (List_1_t402 *, MethodInfo*))List_1_Clear_m4890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m17101(__this, ___item, method) (( bool (*) (List_1_t402 *, Graphic_t399 *, MethodInfo*))List_1_Contains_m4897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17102(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t402 *, GraphicU5BU5D_t3079*, int32_t, MethodInfo*))List_1_CopyTo_m4898_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m17103(__this, ___match, method) (( Graphic_t399 * (*) (List_1_t402 *, Predicate_1_t3085 *, MethodInfo*))List_1_Find_m13158_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17104(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3085 *, MethodInfo*))List_1_CheckMatch_m13160_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17105(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t402 *, int32_t, int32_t, Predicate_1_t3085 *, MethodInfo*))List_1_GetIndex_m13162_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m17106(__this, method) (( Enumerator_t3080  (*) (List_1_t402 *, MethodInfo*))List_1_GetEnumerator_m13164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m17107(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Graphic_t399 *, MethodInfo*))List_1_IndexOf_m4901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17108(__this, ___start, ___delta, method) (( void (*) (List_1_t402 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13167_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17109(__this, ___index, method) (( void (*) (List_1_t402 *, int32_t, MethodInfo*))List_1_CheckIndex_m13169_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m17110(__this, ___index, ___item, method) (( void (*) (List_1_t402 *, int32_t, Graphic_t399 *, MethodInfo*))List_1_Insert_m4902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17111(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13172_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m17112(__this, ___item, method) (( bool (*) (List_1_t402 *, Graphic_t399 *, MethodInfo*))List_1_Remove_m4899_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17113(__this, ___match, method) (( int32_t (*) (List_1_t402 *, Predicate_1_t3085 *, MethodInfo*))List_1_RemoveAll_m13175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17114(__this, ___index, method) (( void (*) (List_1_t402 *, int32_t, MethodInfo*))List_1_RemoveAt_m4895_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m17115(__this, method) (( void (*) (List_1_t402 *, MethodInfo*))List_1_Reverse_m13178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m17116(__this, method) (( void (*) (List_1_t402 *, MethodInfo*))List_1_Sort_m13180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m2783(__this, ___comparison, method) (( void (*) (List_1_t402 *, Comparison_1_t403 *, MethodInfo*))List_1_Sort_m13182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m17117(__this, method) (( GraphicU5BU5D_t3079* (*) (List_1_t402 *, MethodInfo*))List_1_ToArray_m13183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m17118(__this, method) (( void (*) (List_1_t402 *, MethodInfo*))List_1_TrimExcess_m13185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m17119(__this, method) (( int32_t (*) (List_1_t402 *, MethodInfo*))List_1_get_Capacity_m13187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17120(__this, ___value, method) (( void (*) (List_1_t402 *, int32_t, MethodInfo*))List_1_set_Capacity_m13189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m2776(__this, method) (( int32_t (*) (List_1_t402 *, MethodInfo*))List_1_get_Count_m4881_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m2774(__this, ___index, method) (( Graphic_t399 * (*) (List_1_t402 *, int32_t, MethodInfo*))List_1_get_Item_m4903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m17121(__this, ___index, ___value, method) (( void (*) (List_1_t402 *, int32_t, Graphic_t399 *, MethodInfo*))List_1_set_Item_m4904_gshared)(__this, ___index, ___value, method)
