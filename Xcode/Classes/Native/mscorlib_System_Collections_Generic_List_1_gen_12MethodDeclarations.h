#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t398;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3858;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3859;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t552;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3054;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t433;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3058;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3061;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2836_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1__ctor_m2836(__this, method) (( void (*) (List_1_t398 *, MethodInfo*))List_1__ctor_m2836_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16762_gshared (List_1_t398 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m16762(__this, ___collection, method) (( void (*) (List_1_t398 *, Object_t*, MethodInfo*))List_1__ctor_m16762_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4623_gshared (List_1_t398 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m4623(__this, ___capacity, method) (( void (*) (List_1_t398 *, int32_t, MethodInfo*))List_1__ctor_m4623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m16763_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m16763(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m16763_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16764_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16764(__this, method) (( Object_t* (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16764_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16765_gshared (List_1_t398 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16765(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t398 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16766_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16766(__this, method) (( Object_t * (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16766_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16767_gshared (List_1_t398 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16767(__this, ___item, method) (( int32_t (*) (List_1_t398 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m16767_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16768_gshared (List_1_t398 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16768(__this, ___item, method) (( bool (*) (List_1_t398 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m16768_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16769_gshared (List_1_t398 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16769(__this, ___item, method) (( int32_t (*) (List_1_t398 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m16769_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16770_gshared (List_1_t398 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16770(__this, ___index, ___item, method) (( void (*) (List_1_t398 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m16770_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16771_gshared (List_1_t398 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16771(__this, ___item, method) (( void (*) (List_1_t398 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m16771_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16772_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16772(__this, method) (( bool (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16773_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16773(__this, method) (( bool (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16773_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16774_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16774(__this, method) (( Object_t * (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16775_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16775(__this, method) (( bool (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16775_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16776_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16776(__this, method) (( bool (*) (List_1_t398 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16776_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16777_gshared (List_1_t398 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16777(__this, ___index, method) (( Object_t * (*) (List_1_t398 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m16777_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16778_gshared (List_1_t398 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16778(__this, ___index, ___value, method) (( void (*) (List_1_t398 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m16778_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m2732_gshared (List_1_t398 * __this, UIVertex_t414  ___item, MethodInfo* method);
#define List_1_Add_m2732(__this, ___item, method) (( void (*) (List_1_t398 *, UIVertex_t414 , MethodInfo*))List_1_Add_m2732_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16779_gshared (List_1_t398 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m16779(__this, ___newCount, method) (( void (*) (List_1_t398 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m16779_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16780_gshared (List_1_t398 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m16780(__this, ___collection, method) (( void (*) (List_1_t398 *, Object_t*, MethodInfo*))List_1_AddCollection_m16780_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16781_gshared (List_1_t398 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m16781(__this, ___enumerable, method) (( void (*) (List_1_t398 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m16781_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16782_gshared (List_1_t398 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m16782(__this, ___collection, method) (( void (*) (List_1_t398 *, Object_t*, MethodInfo*))List_1_AddRange_m16782_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3054 * List_1_AsReadOnly_m16783_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m16783(__this, method) (( ReadOnlyCollection_1_t3054 * (*) (List_1_t398 *, MethodInfo*))List_1_AsReadOnly_m16783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m2742_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_Clear_m2742(__this, method) (( void (*) (List_1_t398 *, MethodInfo*))List_1_Clear_m2742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m16784_gshared (List_1_t398 * __this, UIVertex_t414  ___item, MethodInfo* method);
#define List_1_Contains_m16784(__this, ___item, method) (( bool (*) (List_1_t398 *, UIVertex_t414 , MethodInfo*))List_1_Contains_m16784_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16785_gshared (List_1_t398 * __this, UIVertexU5BU5D_t433* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m16785(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t398 *, UIVertexU5BU5D_t433*, int32_t, MethodInfo*))List_1_CopyTo_m16785_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t414  List_1_Find_m16786_gshared (List_1_t398 * __this, Predicate_1_t3058 * ___match, MethodInfo* method);
#define List_1_Find_m16786(__this, ___match, method) (( UIVertex_t414  (*) (List_1_t398 *, Predicate_1_t3058 *, MethodInfo*))List_1_Find_m16786_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16787_gshared (Object_t * __this /* static, unused */, Predicate_1_t3058 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m16787(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3058 *, MethodInfo*))List_1_CheckMatch_m16787_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16788_gshared (List_1_t398 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3058 * ___match, MethodInfo* method);
#define List_1_GetIndex_m16788(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t398 *, int32_t, int32_t, Predicate_1_t3058 *, MethodInfo*))List_1_GetIndex_m16788_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3053  List_1_GetEnumerator_m16789_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m16789(__this, method) (( Enumerator_t3053  (*) (List_1_t398 *, MethodInfo*))List_1_GetEnumerator_m16789_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16790_gshared (List_1_t398 * __this, UIVertex_t414  ___item, MethodInfo* method);
#define List_1_IndexOf_m16790(__this, ___item, method) (( int32_t (*) (List_1_t398 *, UIVertex_t414 , MethodInfo*))List_1_IndexOf_m16790_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16791_gshared (List_1_t398 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m16791(__this, ___start, ___delta, method) (( void (*) (List_1_t398 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m16791_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16792_gshared (List_1_t398 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m16792(__this, ___index, method) (( void (*) (List_1_t398 *, int32_t, MethodInfo*))List_1_CheckIndex_m16792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16793_gshared (List_1_t398 * __this, int32_t ___index, UIVertex_t414  ___item, MethodInfo* method);
#define List_1_Insert_m16793(__this, ___index, ___item, method) (( void (*) (List_1_t398 *, int32_t, UIVertex_t414 , MethodInfo*))List_1_Insert_m16793_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16794_gshared (List_1_t398 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m16794(__this, ___collection, method) (( void (*) (List_1_t398 *, Object_t*, MethodInfo*))List_1_CheckCollection_m16794_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m16795_gshared (List_1_t398 * __this, UIVertex_t414  ___item, MethodInfo* method);
#define List_1_Remove_m16795(__this, ___item, method) (( bool (*) (List_1_t398 *, UIVertex_t414 , MethodInfo*))List_1_Remove_m16795_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16796_gshared (List_1_t398 * __this, Predicate_1_t3058 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m16796(__this, ___match, method) (( int32_t (*) (List_1_t398 *, Predicate_1_t3058 *, MethodInfo*))List_1_RemoveAll_m16796_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16797_gshared (List_1_t398 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m16797(__this, ___index, method) (( void (*) (List_1_t398 *, int32_t, MethodInfo*))List_1_RemoveAt_m16797_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m16798_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_Reverse_m16798(__this, method) (( void (*) (List_1_t398 *, MethodInfo*))List_1_Reverse_m16798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m16799_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_Sort_m16799(__this, method) (( void (*) (List_1_t398 *, MethodInfo*))List_1_Sort_m16799_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16800_gshared (List_1_t398 * __this, Comparison_1_t3061 * ___comparison, MethodInfo* method);
#define List_1_Sort_m16800(__this, ___comparison, method) (( void (*) (List_1_t398 *, Comparison_1_t3061 *, MethodInfo*))List_1_Sort_m16800_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t433* List_1_ToArray_m2920_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_ToArray_m2920(__this, method) (( UIVertexU5BU5D_t433* (*) (List_1_t398 *, MethodInfo*))List_1_ToArray_m2920_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m16801_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_TrimExcess_m16801(__this, method) (( void (*) (List_1_t398 *, MethodInfo*))List_1_TrimExcess_m16801_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2751_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_get_Capacity_m2751(__this, method) (( int32_t (*) (List_1_t398 *, MethodInfo*))List_1_get_Capacity_m2751_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2752_gshared (List_1_t398 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m2752(__this, ___value, method) (( void (*) (List_1_t398 *, int32_t, MethodInfo*))List_1_set_Capacity_m2752_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m2879_gshared (List_1_t398 * __this, MethodInfo* method);
#define List_1_get_Count_m2879(__this, method) (( int32_t (*) (List_1_t398 *, MethodInfo*))List_1_get_Count_m2879_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t414  List_1_get_Item_m3085_gshared (List_1_t398 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m3085(__this, ___index, method) (( UIVertex_t414  (*) (List_1_t398 *, int32_t, MethodInfo*))List_1_get_Item_m3085_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m3086_gshared (List_1_t398 * __this, int32_t ___index, UIVertex_t414  ___value, MethodInfo* method);
#define List_1_set_Item_m3086(__this, ___index, ___value, method) (( void (*) (List_1_t398 *, int32_t, UIVertex_t414 , MethodInfo*))List_1_set_Item_m3086_gshared)(__this, ___index, ___value, method)
