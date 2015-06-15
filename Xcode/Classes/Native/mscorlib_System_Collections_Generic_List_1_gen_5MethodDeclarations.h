#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t516;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1030;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t246;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t812;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2687;
// System.Object[]
struct ObjectU5BU5D_t194;
// System.Predicate`1<System.Object>
struct Predicate_1_t2689;
// System.Comparison`1<System.Object>
struct Comparison_1_t2701;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m4653_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1__ctor_m4653(__this, method) (( void (*) (List_1_t516 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13114_gshared (List_1_t516 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m13114(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13116_gshared (List_1_t516 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m13116(__this, ___capacity, method) (( void (*) (List_1_t516 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m13118_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m13118(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889(__this, method) (( Object_t* (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m4873_gshared (List_1_t516 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m4873(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t516 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m4869(__this, method) (( Object_t * (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m4878_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m4878(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m4880_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m4880(__this, ___item, method) (( bool (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m4881_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m4881(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m4882_gshared (List_1_t516 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m4882(__this, ___index, ___item, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m4883_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m4883(__this, ___item, method) (( void (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885(__this, method) (( bool (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m4871(__this, method) (( bool (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m4872(__this, method) (( Object_t * (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m4874(__this, method) (( bool (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m4875(__this, method) (( bool (*) (List_1_t516 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m4876_gshared (List_1_t516 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m4876(__this, ___index, method) (( Object_t * (*) (List_1_t516 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m4877_gshared (List_1_t516 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m4877(__this, ___index, ___value, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m4672_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m4672(__this, ___item, method) (( void (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13135_gshared (List_1_t516 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m13135(__this, ___newCount, method) (( void (*) (List_1_t516 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13137_gshared (List_1_t516 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m13137(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13139_gshared (List_1_t516 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m13139(__this, ___enumerable, method) (( void (*) (List_1_t516 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13141_gshared (List_1_t516 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m13141(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2687 * List_1_AsReadOnly_m13143_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m13143(__this, method) (( ReadOnlyCollection_1_t2687 * (*) (List_1_t516 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m4879_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_Clear_m4879(__this, method) (( void (*) (List_1_t516 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m4886_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m4886(__this, ___item, method) (( bool (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m4887_gshared (List_1_t516 * __this, ObjectU5BU5D_t194* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m4887(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t516 *, ObjectU5BU5D_t194*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m13147_gshared (List_1_t516 * __this, Predicate_1_t2689 * ___match, MethodInfo* method);
#define List_1_Find_m13147(__this, ___match, method) (( Object_t * (*) (List_1_t516 *, Predicate_1_t2689 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13149_gshared (Object_t * __this /* static, unused */, Predicate_1_t2689 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m13149(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2689 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13151_gshared (List_1_t516 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2689 * ___match, MethodInfo* method);
#define List_1_GetIndex_m13151(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t516 *, int32_t, int32_t, Predicate_1_t2689 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2686  List_1_GetEnumerator_m13153_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m13153(__this, method) (( Enumerator_t2686  (*) (List_1_t516 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m4890_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m4890(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13156_gshared (List_1_t516 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m13156(__this, ___start, ___delta, method) (( void (*) (List_1_t516 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13158_gshared (List_1_t516 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m13158(__this, ___index, method) (( void (*) (List_1_t516 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m4891_gshared (List_1_t516 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m4891(__this, ___index, ___item, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13161_gshared (List_1_t516 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m13161(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m4888_gshared (List_1_t516 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m4888(__this, ___item, method) (( bool (*) (List_1_t516 *, Object_t *, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13164_gshared (List_1_t516 * __this, Predicate_1_t2689 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m13164(__this, ___match, method) (( int32_t (*) (List_1_t516 *, Predicate_1_t2689 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m4884_gshared (List_1_t516 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m4884(__this, ___index, method) (( void (*) (List_1_t516 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m13167_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_Reverse_m13167(__this, method) (( void (*) (List_1_t516 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m13169_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_Sort_m13169(__this, method) (( void (*) (List_1_t516 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13171_gshared (List_1_t516 * __this, Comparison_1_t2701 * ___comparison, MethodInfo* method);
#define List_1_Sort_m13171(__this, ___comparison, method) (( void (*) (List_1_t516 *, Comparison_1_t2701 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t194* List_1_ToArray_m13172_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_ToArray_m13172(__this, method) (( ObjectU5BU5D_t194* (*) (List_1_t516 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m13174_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_TrimExcess_m13174(__this, method) (( void (*) (List_1_t516 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13176_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_get_Capacity_m13176(__this, method) (( int32_t (*) (List_1_t516 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13178_gshared (List_1_t516 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m13178(__this, ___value, method) (( void (*) (List_1_t516 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m4870_gshared (List_1_t516 * __this, MethodInfo* method);
#define List_1_get_Count_m4870(__this, method) (( int32_t (*) (List_1_t516 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m4892_gshared (List_1_t516 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m4892(__this, ___index, method) (( Object_t * (*) (List_1_t516 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m4893_gshared (List_1_t516 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m4893(__this, ___index, ___value, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
