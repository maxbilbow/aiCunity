﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t321;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t320;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t3826;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t3827;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t3828;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t2921;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t2917;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2925;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t2928;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m2560(__this, method) (( void (*) (List_1_t321 *, MethodInfo*))List_1__ctor_m4664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15336(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, MethodInfo*))List_1__ctor_m13125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m15337(__this, ___capacity, method) (( void (*) (List_1_t321 *, int32_t, MethodInfo*))List_1__ctor_m13127_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m15338(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13129_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15339(__this, method) (( Object_t* (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15340(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15341(__this, method) (( Object_t * (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15342(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4889_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15343(__this, ___item, method) (( bool (*) (List_1_t321 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4891_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15344(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15345(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15346(__this, ___item, method) (( void (*) (List_1_t321 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15347(__this, method) (( bool (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15348(__this, method) (( bool (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4882_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15349(__this, method) (( Object_t * (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15350(__this, method) (( bool (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15351(__this, method) (( bool (*) (List_1_t321 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15352(__this, ___index, method) (( Object_t * (*) (List_1_t321 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15353(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m15354(__this, ___item, method) (( void (*) (List_1_t321 *, Entry_t320 *, MethodInfo*))List_1_Add_m4683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15355(__this, ___newCount, method) (( void (*) (List_1_t321 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13146_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15356(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, MethodInfo*))List_1_AddCollection_m13148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15357(__this, ___enumerable, method) (( void (*) (List_1_t321 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13150_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15358(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, MethodInfo*))List_1_AddRange_m13152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m15359(__this, method) (( ReadOnlyCollection_1_t2921 * (*) (List_1_t321 *, MethodInfo*))List_1_AsReadOnly_m13154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m15360(__this, method) (( void (*) (List_1_t321 *, MethodInfo*))List_1_Clear_m4890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m15361(__this, ___item, method) (( bool (*) (List_1_t321 *, Entry_t320 *, MethodInfo*))List_1_Contains_m4897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15362(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, EntryU5BU5D_t2917*, int32_t, MethodInfo*))List_1_CopyTo_m4898_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m15363(__this, ___match, method) (( Entry_t320 * (*) (List_1_t321 *, Predicate_1_t2925 *, MethodInfo*))List_1_Find_m13158_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15364(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2925 *, MethodInfo*))List_1_CheckMatch_m13160_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15365(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t321 *, int32_t, int32_t, Predicate_1_t2925 *, MethodInfo*))List_1_GetIndex_m13162_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m15366(__this, method) (( Enumerator_t2919  (*) (List_1_t321 *, MethodInfo*))List_1_GetEnumerator_m13164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m15367(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Entry_t320 *, MethodInfo*))List_1_IndexOf_m4901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15368(__this, ___start, ___delta, method) (( void (*) (List_1_t321 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13167_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15369(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, MethodInfo*))List_1_CheckIndex_m13169_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m15370(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, Entry_t320 *, MethodInfo*))List_1_Insert_m4902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15371(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13172_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m15372(__this, ___item, method) (( bool (*) (List_1_t321 *, Entry_t320 *, MethodInfo*))List_1_Remove_m4899_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15373(__this, ___match, method) (( int32_t (*) (List_1_t321 *, Predicate_1_t2925 *, MethodInfo*))List_1_RemoveAll_m13175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15374(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, MethodInfo*))List_1_RemoveAt_m4895_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m15375(__this, method) (( void (*) (List_1_t321 *, MethodInfo*))List_1_Reverse_m13178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m15376(__this, method) (( void (*) (List_1_t321 *, MethodInfo*))List_1_Sort_m13180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15377(__this, ___comparison, method) (( void (*) (List_1_t321 *, Comparison_1_t2928 *, MethodInfo*))List_1_Sort_m13182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m15378(__this, method) (( EntryU5BU5D_t2917* (*) (List_1_t321 *, MethodInfo*))List_1_ToArray_m13183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m15379(__this, method) (( void (*) (List_1_t321 *, MethodInfo*))List_1_TrimExcess_m13185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m15380(__this, method) (( int32_t (*) (List_1_t321 *, MethodInfo*))List_1_get_Capacity_m13187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15381(__this, ___value, method) (( void (*) (List_1_t321 *, int32_t, MethodInfo*))List_1_set_Capacity_m13189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m2561(__this, method) (( int32_t (*) (List_1_t321 *, MethodInfo*))List_1_get_Count_m4881_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m2562(__this, ___index, method) (( Entry_t320 * (*) (List_1_t321 *, int32_t, MethodInfo*))List_1_get_Item_m4903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m15382(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, Entry_t320 *, MethodInfo*))List_1_set_Item_m4904_gshared)(__this, ___index, ___value, method)
