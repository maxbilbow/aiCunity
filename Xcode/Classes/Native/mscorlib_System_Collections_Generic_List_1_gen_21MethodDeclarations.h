#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t693;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t692;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t3896;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t3897;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t3898;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t3250;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t3247;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t3254;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t3257;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m4547(__this, method) (( void (*) (List_1_t693 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18770(__this, ___collection, method) (( void (*) (List_1_t693 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m18771(__this, ___capacity, method) (( void (*) (List_1_t693 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m18772(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18773(__this, method) (( Object_t* (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18774(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t693 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18775(__this, method) (( Object_t * (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18776(__this, ___item, method) (( int32_t (*) (List_1_t693 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18777(__this, ___item, method) (( bool (*) (List_1_t693 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18778(__this, ___item, method) (( int32_t (*) (List_1_t693 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18779(__this, ___index, ___item, method) (( void (*) (List_1_t693 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18780(__this, ___item, method) (( void (*) (List_1_t693 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18781(__this, method) (( bool (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18782(__this, method) (( bool (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18783(__this, method) (( Object_t * (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18784(__this, method) (( bool (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18785(__this, method) (( bool (*) (List_1_t693 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18786(__this, ___index, method) (( Object_t * (*) (List_1_t693 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18787(__this, ___index, ___value, method) (( void (*) (List_1_t693 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m18788(__this, ___item, method) (( void (*) (List_1_t693 *, GUILayoutEntry_t692 *, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18789(__this, ___newCount, method) (( void (*) (List_1_t693 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18790(__this, ___collection, method) (( void (*) (List_1_t693 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18791(__this, ___enumerable, method) (( void (*) (List_1_t693 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18792(__this, ___collection, method) (( void (*) (List_1_t693 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m18793(__this, method) (( ReadOnlyCollection_1_t3250 * (*) (List_1_t693 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m18794(__this, method) (( void (*) (List_1_t693 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m18795(__this, ___item, method) (( bool (*) (List_1_t693 *, GUILayoutEntry_t692 *, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18796(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t693 *, GUILayoutEntryU5BU5D_t3247*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m18797(__this, ___match, method) (( GUILayoutEntry_t692 * (*) (List_1_t693 *, Predicate_1_t3254 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18798(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3254 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18799(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t693 *, int32_t, int32_t, Predicate_1_t3254 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m4544(__this, method) (( Enumerator_t903  (*) (List_1_t693 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m18800(__this, ___item, method) (( int32_t (*) (List_1_t693 *, GUILayoutEntry_t692 *, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18801(__this, ___start, ___delta, method) (( void (*) (List_1_t693 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18802(__this, ___index, method) (( void (*) (List_1_t693 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m18803(__this, ___index, ___item, method) (( void (*) (List_1_t693 *, int32_t, GUILayoutEntry_t692 *, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18804(__this, ___collection, method) (( void (*) (List_1_t693 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m18805(__this, ___item, method) (( bool (*) (List_1_t693 *, GUILayoutEntry_t692 *, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18806(__this, ___match, method) (( int32_t (*) (List_1_t693 *, Predicate_1_t3254 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18807(__this, ___index, method) (( void (*) (List_1_t693 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m18808(__this, method) (( void (*) (List_1_t693 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m18809(__this, method) (( void (*) (List_1_t693 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18810(__this, ___comparison, method) (( void (*) (List_1_t693 *, Comparison_1_t3257 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m18811(__this, method) (( GUILayoutEntryU5BU5D_t3247* (*) (List_1_t693 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m18812(__this, method) (( void (*) (List_1_t693 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m18813(__this, method) (( int32_t (*) (List_1_t693 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18814(__this, ___value, method) (( void (*) (List_1_t693 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m4548(__this, method) (( int32_t (*) (List_1_t693 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m4549(__this, ___index, method) (( GUILayoutEntry_t692 * (*) (List_1_t693 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m18815(__this, ___index, ___value, method) (( void (*) (List_1_t693 *, int32_t, GUILayoutEntry_t692 *, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
