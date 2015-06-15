#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t518;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1032;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t246;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2689;
// System.Object[]
struct ObjectU5BU5D_t194;
// System.Predicate`1<System.Object>
struct Predicate_1_t2691;
// System.Comparison`1<System.Object>
struct Comparison_1_t2703;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m4664_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1__ctor_m4664(__this, method) (( void (*) (List_1_t518 *, MethodInfo*))List_1__ctor_m4664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13125_gshared (List_1_t518 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m13125(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, MethodInfo*))List_1__ctor_m13125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13127_gshared (List_1_t518 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m13127(__this, ___capacity, method) (( void (*) (List_1_t518 *, int32_t, MethodInfo*))List_1__ctor_m13127_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m13129_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m13129(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13129_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900(__this, method) (( Object_t* (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m4884_gshared (List_1_t518 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m4884(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t518 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m4880_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m4880(__this, method) (( Object_t * (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m4889_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m4889(__this, ___item, method) (( int32_t (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4889_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m4891_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m4891(__this, ___item, method) (( bool (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4891_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m4892_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m4892(__this, ___item, method) (( int32_t (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m4893_gshared (List_1_t518 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m4893(__this, ___index, ___item, method) (( void (*) (List_1_t518 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m4894_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m4894(__this, ___item, method) (( void (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896(__this, method) (( bool (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m4882_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m4882(__this, method) (( bool (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4882_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m4883_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m4883(__this, method) (( Object_t * (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m4885_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m4885(__this, method) (( bool (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m4886_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m4886(__this, method) (( bool (*) (List_1_t518 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m4887_gshared (List_1_t518 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m4887(__this, ___index, method) (( Object_t * (*) (List_1_t518 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m4888_gshared (List_1_t518 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m4888(__this, ___index, ___value, method) (( void (*) (List_1_t518 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m4683_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m4683(__this, ___item, method) (( void (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_Add_m4683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13146_gshared (List_1_t518 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m13146(__this, ___newCount, method) (( void (*) (List_1_t518 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13146_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13148_gshared (List_1_t518 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m13148(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, MethodInfo*))List_1_AddCollection_m13148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13150_gshared (List_1_t518 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m13150(__this, ___enumerable, method) (( void (*) (List_1_t518 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13150_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13152_gshared (List_1_t518 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m13152(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, MethodInfo*))List_1_AddRange_m13152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2689 * List_1_AsReadOnly_m13154_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m13154(__this, method) (( ReadOnlyCollection_1_t2689 * (*) (List_1_t518 *, MethodInfo*))List_1_AsReadOnly_m13154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m4890_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_Clear_m4890(__this, method) (( void (*) (List_1_t518 *, MethodInfo*))List_1_Clear_m4890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m4897_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m4897(__this, ___item, method) (( bool (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_Contains_m4897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m4898_gshared (List_1_t518 * __this, ObjectU5BU5D_t194* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m4898(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t518 *, ObjectU5BU5D_t194*, int32_t, MethodInfo*))List_1_CopyTo_m4898_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m13158_gshared (List_1_t518 * __this, Predicate_1_t2691 * ___match, MethodInfo* method);
#define List_1_Find_m13158(__this, ___match, method) (( Object_t * (*) (List_1_t518 *, Predicate_1_t2691 *, MethodInfo*))List_1_Find_m13158_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13160_gshared (Object_t * __this /* static, unused */, Predicate_1_t2691 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m13160(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2691 *, MethodInfo*))List_1_CheckMatch_m13160_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13162_gshared (List_1_t518 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2691 * ___match, MethodInfo* method);
#define List_1_GetIndex_m13162(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t518 *, int32_t, int32_t, Predicate_1_t2691 *, MethodInfo*))List_1_GetIndex_m13162_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2688  List_1_GetEnumerator_m13164_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m13164(__this, method) (( Enumerator_t2688  (*) (List_1_t518 *, MethodInfo*))List_1_GetEnumerator_m13164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m4901_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m4901(__this, ___item, method) (( int32_t (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_IndexOf_m4901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13167_gshared (List_1_t518 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m13167(__this, ___start, ___delta, method) (( void (*) (List_1_t518 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13167_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13169_gshared (List_1_t518 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m13169(__this, ___index, method) (( void (*) (List_1_t518 *, int32_t, MethodInfo*))List_1_CheckIndex_m13169_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m4902_gshared (List_1_t518 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m4902(__this, ___index, ___item, method) (( void (*) (List_1_t518 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m4902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13172_gshared (List_1_t518 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m13172(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13172_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m4899_gshared (List_1_t518 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m4899(__this, ___item, method) (( bool (*) (List_1_t518 *, Object_t *, MethodInfo*))List_1_Remove_m4899_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13175_gshared (List_1_t518 * __this, Predicate_1_t2691 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m13175(__this, ___match, method) (( int32_t (*) (List_1_t518 *, Predicate_1_t2691 *, MethodInfo*))List_1_RemoveAll_m13175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m4895_gshared (List_1_t518 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m4895(__this, ___index, method) (( void (*) (List_1_t518 *, int32_t, MethodInfo*))List_1_RemoveAt_m4895_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m13178_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_Reverse_m13178(__this, method) (( void (*) (List_1_t518 *, MethodInfo*))List_1_Reverse_m13178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m13180_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_Sort_m13180(__this, method) (( void (*) (List_1_t518 *, MethodInfo*))List_1_Sort_m13180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13182_gshared (List_1_t518 * __this, Comparison_1_t2703 * ___comparison, MethodInfo* method);
#define List_1_Sort_m13182(__this, ___comparison, method) (( void (*) (List_1_t518 *, Comparison_1_t2703 *, MethodInfo*))List_1_Sort_m13182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t194* List_1_ToArray_m13183_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_ToArray_m13183(__this, method) (( ObjectU5BU5D_t194* (*) (List_1_t518 *, MethodInfo*))List_1_ToArray_m13183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m13185_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_TrimExcess_m13185(__this, method) (( void (*) (List_1_t518 *, MethodInfo*))List_1_TrimExcess_m13185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13187_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_get_Capacity_m13187(__this, method) (( int32_t (*) (List_1_t518 *, MethodInfo*))List_1_get_Capacity_m13187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13189_gshared (List_1_t518 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m13189(__this, ___value, method) (( void (*) (List_1_t518 *, int32_t, MethodInfo*))List_1_set_Capacity_m13189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m4881_gshared (List_1_t518 * __this, MethodInfo* method);
#define List_1_get_Count_m4881(__this, method) (( int32_t (*) (List_1_t518 *, MethodInfo*))List_1_get_Count_m4881_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m4903_gshared (List_1_t518 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m4903(__this, ___index, method) (( Object_t * (*) (List_1_t518 *, int32_t, MethodInfo*))List_1_get_Item_m4903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m4904_gshared (List_1_t518 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m4904(__this, ___index, ___value, method) (( void (*) (List_1_t518 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m4904_gshared)(__this, ___index, ___value, method)
