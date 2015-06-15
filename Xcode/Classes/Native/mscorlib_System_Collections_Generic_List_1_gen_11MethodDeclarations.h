#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t499;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t185;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Component>
struct IEnumerable_1_t3817;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t3818;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.Component>
struct ICollection_1_t3819;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t2887;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2884;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t497;
// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t2893;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m14912(__this, method) (( void (*) (List_1_t499 *, MethodInfo*))List_1__ctor_m4664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m14913(__this, ___collection, method) (( void (*) (List_1_t499 *, Object_t*, MethodInfo*))List_1__ctor_m13125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
#define List_1__ctor_m14914(__this, ___capacity, method) (( void (*) (List_1_t499 *, int32_t, MethodInfo*))List_1__ctor_m13127_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
#define List_1__cctor_m14915(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13129_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14916(__this, method) (( Object_t* (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14917(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t499 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14918(__this, method) (( Object_t * (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14919(__this, ___item, method) (( int32_t (*) (List_1_t499 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4889_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14920(__this, ___item, method) (( bool (*) (List_1_t499 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4891_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14921(__this, ___item, method) (( int32_t (*) (List_1_t499 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14922(__this, ___index, ___item, method) (( void (*) (List_1_t499 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14923(__this, ___item, method) (( void (*) (List_1_t499 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14924(__this, method) (( bool (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14925(__this, method) (( bool (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4882_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14926(__this, method) (( Object_t * (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14927(__this, method) (( bool (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14928(__this, method) (( bool (*) (List_1_t499 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14929(__this, ___index, method) (( Object_t * (*) (List_1_t499 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14930(__this, ___index, ___value, method) (( void (*) (List_1_t499 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
#define List_1_Add_m14931(__this, ___item, method) (( void (*) (List_1_t499 *, Component_t185 *, MethodInfo*))List_1_Add_m4683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14932(__this, ___newCount, method) (( void (*) (List_1_t499 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13146_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14933(__this, ___collection, method) (( void (*) (List_1_t499 *, Object_t*, MethodInfo*))List_1_AddCollection_m13148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14934(__this, ___enumerable, method) (( void (*) (List_1_t499 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13150_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14935(__this, ___collection, method) (( void (*) (List_1_t499 *, Object_t*, MethodInfo*))List_1_AddRange_m13152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
#define List_1_AsReadOnly_m14936(__this, method) (( ReadOnlyCollection_1_t2887 * (*) (List_1_t499 *, MethodInfo*))List_1_AsReadOnly_m13154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
#define List_1_Clear_m3093(__this, method) (( void (*) (List_1_t499 *, MethodInfo*))List_1_Clear_m4890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
#define List_1_Contains_m14937(__this, ___item, method) (( bool (*) (List_1_t499 *, Component_t185 *, MethodInfo*))List_1_Contains_m4897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14938(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t499 *, ComponentU5BU5D_t2884*, int32_t, MethodInfo*))List_1_CopyTo_m4898_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
#define List_1_Find_m14939(__this, ___match, method) (( Component_t185 * (*) (List_1_t499 *, Predicate_1_t497 *, MethodInfo*))List_1_Find_m13158_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14940(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t497 *, MethodInfo*))List_1_CheckMatch_m13160_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14941(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t499 *, int32_t, int32_t, Predicate_1_t497 *, MethodInfo*))List_1_GetIndex_m13162_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
#define List_1_GetEnumerator_m14942(__this, method) (( Enumerator_t2885  (*) (List_1_t499 *, MethodInfo*))List_1_GetEnumerator_m13164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
#define List_1_IndexOf_m14943(__this, ___item, method) (( int32_t (*) (List_1_t499 *, Component_t185 *, MethodInfo*))List_1_IndexOf_m4901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14944(__this, ___start, ___delta, method) (( void (*) (List_1_t499 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13167_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14945(__this, ___index, method) (( void (*) (List_1_t499 *, int32_t, MethodInfo*))List_1_CheckIndex_m13169_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
#define List_1_Insert_m14946(__this, ___index, ___item, method) (( void (*) (List_1_t499 *, int32_t, Component_t185 *, MethodInfo*))List_1_Insert_m4902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14947(__this, ___collection, method) (( void (*) (List_1_t499 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13172_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
#define List_1_Remove_m14948(__this, ___item, method) (( bool (*) (List_1_t499 *, Component_t185 *, MethodInfo*))List_1_Remove_m4899_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m3072(__this, ___match, method) (( int32_t (*) (List_1_t499 *, Predicate_1_t497 *, MethodInfo*))List_1_RemoveAll_m13175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14949(__this, ___index, method) (( void (*) (List_1_t499 *, int32_t, MethodInfo*))List_1_RemoveAt_m4895_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
#define List_1_Reverse_m14950(__this, method) (( void (*) (List_1_t499 *, MethodInfo*))List_1_Reverse_m13178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
#define List_1_Sort_m14951(__this, method) (( void (*) (List_1_t499 *, MethodInfo*))List_1_Sort_m13180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14952(__this, ___comparison, method) (( void (*) (List_1_t499 *, Comparison_1_t2893 *, MethodInfo*))List_1_Sort_m13182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
#define List_1_ToArray_m14953(__this, method) (( ComponentU5BU5D_t2884* (*) (List_1_t499 *, MethodInfo*))List_1_ToArray_m13183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
#define List_1_TrimExcess_m14954(__this, method) (( void (*) (List_1_t499 *, MethodInfo*))List_1_TrimExcess_m13185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
#define List_1_get_Capacity_m14955(__this, method) (( int32_t (*) (List_1_t499 *, MethodInfo*))List_1_get_Capacity_m13187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14956(__this, ___value, method) (( void (*) (List_1_t499 *, int32_t, MethodInfo*))List_1_set_Capacity_m13189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m2725(__this, method) (( int32_t (*) (List_1_t499 *, MethodInfo*))List_1_get_Count_m4881_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
#define List_1_get_Item_m2723(__this, ___index, method) (( Component_t185 * (*) (List_1_t499 *, int32_t, MethodInfo*))List_1_get_Item_m4903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define List_1_set_Item_m14957(__this, ___index, ___value, method) (( void (*) (List_1_t499 *, int32_t, Component_t185 *, MethodInfo*))List_1_set_Item_m4904_gshared)(__this, ___index, ___value, method)
