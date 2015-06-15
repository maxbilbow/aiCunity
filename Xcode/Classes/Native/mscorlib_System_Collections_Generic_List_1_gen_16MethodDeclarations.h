#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t456;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t290;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t3876;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t3877;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t3878;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t3143;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t3138;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t3147;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t3150;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m2959(__this, method) (( void (*) (List_1_t456 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17696(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m17697(__this, ___capacity, method) (( void (*) (List_1_t456 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m17698(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17699(__this, method) (( Object_t* (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17700(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t456 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17701(__this, method) (( Object_t * (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17702(__this, ___item, method) (( int32_t (*) (List_1_t456 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17703(__this, ___item, method) (( bool (*) (List_1_t456 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17704(__this, ___item, method) (( int32_t (*) (List_1_t456 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17705(__this, ___index, ___item, method) (( void (*) (List_1_t456 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17706(__this, ___item, method) (( void (*) (List_1_t456 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17707(__this, method) (( bool (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17708(__this, method) (( bool (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17709(__this, method) (( Object_t * (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17710(__this, method) (( bool (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17711(__this, method) (( bool (*) (List_1_t456 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17712(__this, ___index, method) (( Object_t * (*) (List_1_t456 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17713(__this, ___index, ___value, method) (( void (*) (List_1_t456 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m17714(__this, ___item, method) (( void (*) (List_1_t456 *, CanvasGroup_t290 *, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17715(__this, ___newCount, method) (( void (*) (List_1_t456 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17716(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17717(__this, ___enumerable, method) (( void (*) (List_1_t456 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17718(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m17719(__this, method) (( ReadOnlyCollection_1_t3143 * (*) (List_1_t456 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m17720(__this, method) (( void (*) (List_1_t456 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m17721(__this, ___item, method) (( bool (*) (List_1_t456 *, CanvasGroup_t290 *, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17722(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t456 *, CanvasGroupU5BU5D_t3138*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m17723(__this, ___match, method) (( CanvasGroup_t290 * (*) (List_1_t456 *, Predicate_1_t3147 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17724(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3147 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17725(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t456 *, int32_t, int32_t, Predicate_1_t3147 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m17726(__this, method) (( Enumerator_t3141  (*) (List_1_t456 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m17727(__this, ___item, method) (( int32_t (*) (List_1_t456 *, CanvasGroup_t290 *, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17728(__this, ___start, ___delta, method) (( void (*) (List_1_t456 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17729(__this, ___index, method) (( void (*) (List_1_t456 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m17730(__this, ___index, ___item, method) (( void (*) (List_1_t456 *, int32_t, CanvasGroup_t290 *, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17731(__this, ___collection, method) (( void (*) (List_1_t456 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m17732(__this, ___item, method) (( bool (*) (List_1_t456 *, CanvasGroup_t290 *, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17733(__this, ___match, method) (( int32_t (*) (List_1_t456 *, Predicate_1_t3147 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17734(__this, ___index, method) (( void (*) (List_1_t456 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m17735(__this, method) (( void (*) (List_1_t456 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m17736(__this, method) (( void (*) (List_1_t456 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17737(__this, ___comparison, method) (( void (*) (List_1_t456 *, Comparison_1_t3150 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m17738(__this, method) (( CanvasGroupU5BU5D_t3138* (*) (List_1_t456 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m17739(__this, method) (( void (*) (List_1_t456 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m17740(__this, method) (( int32_t (*) (List_1_t456 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17741(__this, ___value, method) (( void (*) (List_1_t456 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m2963(__this, method) (( int32_t (*) (List_1_t456 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m2961(__this, ___index, method) (( CanvasGroup_t290 * (*) (List_1_t456 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m17742(__this, ___index, ___value, method) (( void (*) (List_1_t456 *, int32_t, CanvasGroup_t290 *, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
