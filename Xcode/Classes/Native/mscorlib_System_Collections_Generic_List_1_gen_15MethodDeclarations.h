#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t455;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t293;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t3873;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t3874;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t3875;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t3130;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t295;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t3134;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t3137;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m2960(__this, method) (( void (*) (List_1_t455 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17557(__this, ___collection, method) (( void (*) (List_1_t455 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m17558(__this, ___capacity, method) (( void (*) (List_1_t455 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m17559(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17560(__this, method) (( Object_t* (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17561(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t455 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17562(__this, method) (( Object_t * (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17563(__this, ___item, method) (( int32_t (*) (List_1_t455 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17564(__this, ___item, method) (( bool (*) (List_1_t455 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17565(__this, ___item, method) (( int32_t (*) (List_1_t455 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17566(__this, ___index, ___item, method) (( void (*) (List_1_t455 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17567(__this, ___item, method) (( void (*) (List_1_t455 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17568(__this, method) (( bool (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17569(__this, method) (( bool (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17570(__this, method) (( Object_t * (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17571(__this, method) (( bool (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17572(__this, method) (( bool (*) (List_1_t455 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17573(__this, ___index, method) (( Object_t * (*) (List_1_t455 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17574(__this, ___index, ___value, method) (( void (*) (List_1_t455 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m2964(__this, ___item, method) (( void (*) (List_1_t455 *, Selectable_t293 *, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17575(__this, ___newCount, method) (( void (*) (List_1_t455 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17576(__this, ___collection, method) (( void (*) (List_1_t455 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17577(__this, ___enumerable, method) (( void (*) (List_1_t455 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17578(__this, ___collection, method) (( void (*) (List_1_t455 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m17579(__this, method) (( ReadOnlyCollection_1_t3130 * (*) (List_1_t455 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m17580(__this, method) (( void (*) (List_1_t455 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m17581(__this, ___item, method) (( bool (*) (List_1_t455 *, Selectable_t293 *, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17582(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t455 *, SelectableU5BU5D_t295*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m17583(__this, ___match, method) (( Selectable_t293 * (*) (List_1_t455 *, Predicate_1_t3134 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17584(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3134 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17585(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t455 *, int32_t, int32_t, Predicate_1_t3134 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m17586(__this, method) (( Enumerator_t3128  (*) (List_1_t455 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m17587(__this, ___item, method) (( int32_t (*) (List_1_t455 *, Selectable_t293 *, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17588(__this, ___start, ___delta, method) (( void (*) (List_1_t455 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17589(__this, ___index, method) (( void (*) (List_1_t455 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m17590(__this, ___index, ___item, method) (( void (*) (List_1_t455 *, int32_t, Selectable_t293 *, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17591(__this, ___collection, method) (( void (*) (List_1_t455 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m2965(__this, ___item, method) (( bool (*) (List_1_t455 *, Selectable_t293 *, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17592(__this, ___match, method) (( int32_t (*) (List_1_t455 *, Predicate_1_t3134 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17593(__this, ___index, method) (( void (*) (List_1_t455 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m17594(__this, method) (( void (*) (List_1_t455 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m17595(__this, method) (( void (*) (List_1_t455 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17596(__this, ___comparison, method) (( void (*) (List_1_t455 *, Comparison_1_t3137 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m17597(__this, method) (( SelectableU5BU5D_t295* (*) (List_1_t455 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m17598(__this, method) (( void (*) (List_1_t455 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m17599(__this, method) (( int32_t (*) (List_1_t455 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17600(__this, ___value, method) (( void (*) (List_1_t455 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m2970(__this, method) (( int32_t (*) (List_1_t455 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m2969(__this, ___index, method) (( Selectable_t293 * (*) (List_1_t455 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m17601(__this, ___index, ___value, method) (( void (*) (List_1_t455 *, int32_t, Selectable_t293 *, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
