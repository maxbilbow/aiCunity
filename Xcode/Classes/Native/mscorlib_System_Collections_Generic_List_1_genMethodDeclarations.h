#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t68;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3779;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3772;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t811;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t2704;
// System.String[]
struct StringU5BU5D_t215;
// System.Predicate`1<System.String>
struct Predicate_1_t2706;
// System.Comparison`1<System.String>
struct Comparison_1_t2709;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m796(__this, method) (( void (*) (List_1_t68 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13113(__this, ___collection, method) (( void (*) (List_1_t68 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m13115(__this, ___capacity, method) (( void (*) (List_1_t68 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m13117(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13119(__this, method) (( Object_t* (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13120(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t68 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13121(__this, method) (( Object_t * (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13122(__this, ___item, method) (( int32_t (*) (List_1_t68 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13123(__this, ___item, method) (( bool (*) (List_1_t68 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13124(__this, ___item, method) (( int32_t (*) (List_1_t68 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13125(__this, ___index, ___item, method) (( void (*) (List_1_t68 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13126(__this, ___item, method) (( void (*) (List_1_t68 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13127(__this, method) (( bool (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13128(__this, method) (( bool (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13129(__this, method) (( Object_t * (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13130(__this, method) (( bool (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13131(__this, method) (( bool (*) (List_1_t68 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13132(__this, ___index, method) (( Object_t * (*) (List_1_t68 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13133(__this, ___index, ___value, method) (( void (*) (List_1_t68 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m800(__this, ___item, method) (( void (*) (List_1_t68 *, String_t*, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13134(__this, ___newCount, method) (( void (*) (List_1_t68 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13136(__this, ___collection, method) (( void (*) (List_1_t68 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13138(__this, ___enumerable, method) (( void (*) (List_1_t68 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13140(__this, ___collection, method) (( void (*) (List_1_t68 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m13142(__this, method) (( ReadOnlyCollection_1_t2704 * (*) (List_1_t68 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m6150(__this, method) (( void (*) (List_1_t68 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m13144(__this, ___item, method) (( bool (*) (List_1_t68 *, String_t*, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13145(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t68 *, StringU5BU5D_t215*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m13146(__this, ___match, method) (( String_t* (*) (List_1_t68 *, Predicate_1_t2706 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13148(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2706 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13150(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t68 *, int32_t, int32_t, Predicate_1_t2706 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m13152(__this, method) (( Enumerator_t2702  (*) (List_1_t68 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m13154(__this, ___item, method) (( int32_t (*) (List_1_t68 *, String_t*, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13155(__this, ___start, ___delta, method) (( void (*) (List_1_t68 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13157(__this, ___index, method) (( void (*) (List_1_t68 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m13159(__this, ___index, ___item, method) (( void (*) (List_1_t68 *, int32_t, String_t*, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13160(__this, ___collection, method) (( void (*) (List_1_t68 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m13162(__this, ___item, method) (( bool (*) (List_1_t68 *, String_t*, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13163(__this, ___match, method) (( int32_t (*) (List_1_t68 *, Predicate_1_t2706 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13165(__this, ___index, method) (( void (*) (List_1_t68 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m13166(__this, method) (( void (*) (List_1_t68 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m13168(__this, method) (( void (*) (List_1_t68 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13170(__this, ___comparison, method) (( void (*) (List_1_t68 *, Comparison_1_t2709 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m11654(__this, method) (( StringU5BU5D_t215* (*) (List_1_t68 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m13173(__this, method) (( void (*) (List_1_t68 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m13175(__this, method) (( int32_t (*) (List_1_t68 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13177(__this, ___value, method) (( void (*) (List_1_t68 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m6149(__this, method) (( int32_t (*) (List_1_t68 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m4604(__this, ___index, method) (( String_t* (*) (List_1_t68 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m13179(__this, ___index, ___value, method) (( void (*) (List_1_t68 *, int32_t, String_t*, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
