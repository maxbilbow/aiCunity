#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t214;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t75;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_t3795;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Material>
struct IEnumerator_1_t3796;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.Material>
struct ICollection_1_t3797;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>
struct ReadOnlyCollection_1_t2772;
// UnityEngine.Material[]
struct MaterialU5BU5D_t216;
// System.Predicate`1<UnityEngine.Material>
struct Predicate_1_t2776;
// System.Comparison`1<UnityEngine.Material>
struct Comparison_1_t2779;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m923(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13856(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Int32)
#define List_1__ctor_m13857(__this, ___capacity, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.cctor()
#define List_1__cctor_m13858(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13859(__this, method) (( Object_t* (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13860(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t214 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13861(__this, method) (( Object_t * (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13862(__this, ___item, method) (( int32_t (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13863(__this, ___item, method) (( bool (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13864(__this, ___item, method) (( int32_t (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13865(__this, ___index, ___item, method) (( void (*) (List_1_t214 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13866(__this, ___item, method) (( void (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13867(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13868(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13869(__this, method) (( Object_t * (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13870(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13871(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13872(__this, ___index, method) (( Object_t * (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13873(__this, ___index, ___value, method) (( void (*) (List_1_t214 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
#define List_1_Add_m927(__this, ___item, method) (( void (*) (List_1_t214 *, Material_t75 *, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13874(__this, ___newCount, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13875(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13876(__this, ___enumerable, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13877(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::AsReadOnly()
#define List_1_AsReadOnly_m13878(__this, method) (( ReadOnlyCollection_1_t2772 * (*) (List_1_t214 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
#define List_1_Clear_m13879(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(T)
#define List_1_Contains_m926(__this, ___item, method) (( bool (*) (List_1_t214 *, Material_t75 *, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13880(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t214 *, MaterialU5BU5D_t216*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Material>::Find(System.Predicate`1<T>)
#define List_1_Find_m13881(__this, ___match, method) (( Material_t75 * (*) (List_1_t214 *, Predicate_1_t2776 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13882(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2776 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13883(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t214 *, int32_t, int32_t, Predicate_1_t2776 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Material>::GetEnumerator()
#define List_1_GetEnumerator_m13884(__this, method) (( Enumerator_t2770  (*) (List_1_t214 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(T)
#define List_1_IndexOf_m929(__this, ___item, method) (( int32_t (*) (List_1_t214 *, Material_t75 *, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13885(__this, ___start, ___delta, method) (( void (*) (List_1_t214 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13886(__this, ___index, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Insert(System.Int32,T)
#define List_1_Insert_m13887(__this, ___index, ___item, method) (( void (*) (List_1_t214 *, int32_t, Material_t75 *, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13888(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(T)
#define List_1_Remove_m13889(__this, ___item, method) (( bool (*) (List_1_t214 *, Material_t75 *, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13890(__this, ___match, method) (( int32_t (*) (List_1_t214 *, Predicate_1_t2776 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13891(__this, ___index, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Reverse()
#define List_1_Reverse_m13892(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort()
#define List_1_Sort_m13893(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13894(__this, ___comparison, method) (( void (*) (List_1_t214 *, Comparison_1_t2779 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
#define List_1_ToArray_m13895(__this, method) (( MaterialU5BU5D_t216* (*) (List_1_t214 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::TrimExcess()
#define List_1_TrimExcess_m13896(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Capacity()
#define List_1_get_Capacity_m13897(__this, method) (( int32_t (*) (List_1_t214 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13898(__this, ___value, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
#define List_1_get_Count_m933(__this, method) (( int32_t (*) (List_1_t214 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
#define List_1_get_Item_m930(__this, ___index, method) (( Material_t75 * (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Item(System.Int32,T)
#define List_1_set_Item_m13899(__this, ___index, ___value, method) (( void (*) (List_1_t214 *, int32_t, Material_t75 *, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
