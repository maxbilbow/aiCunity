#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t745;
// System.Object
struct Object_t;
// UnityEngine.ParticleSystem
struct ParticleSystem_t121;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem>
struct IEnumerable_1_t3911;
// System.Collections.Generic.IEnumerator`1<UnityEngine.ParticleSystem>
struct IEnumerator_1_t3912;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>
struct ICollection_1_t3913;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>
struct ReadOnlyCollection_1_t3300;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t120;
// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_t3304;
// System.Comparison`1<UnityEngine.ParticleSystem>
struct Comparison_1_t3307;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m4628(__this, method) (( void (*) (List_1_t745 *, MethodInfo*))List_1__ctor_m4664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19349(__this, ___collection, method) (( void (*) (List_1_t745 *, Object_t*, MethodInfo*))List_1__ctor_m13125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Int32)
#define List_1__ctor_m19350(__this, ___capacity, method) (( void (*) (List_1_t745 *, int32_t, MethodInfo*))List_1__ctor_m13127_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.cctor()
#define List_1__cctor_m19351(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13129_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19352(__this, method) (( Object_t* (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19353(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t745 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4884_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19354(__this, method) (( Object_t * (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19355(__this, ___item, method) (( int32_t (*) (List_1_t745 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4889_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19356(__this, ___item, method) (( bool (*) (List_1_t745 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4891_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19357(__this, ___item, method) (( int32_t (*) (List_1_t745 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19358(__this, ___index, ___item, method) (( void (*) (List_1_t745 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19359(__this, ___item, method) (( void (*) (List_1_t745 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19360(__this, method) (( bool (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19361(__this, method) (( bool (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4882_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19362(__this, method) (( Object_t * (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19363(__this, method) (( bool (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19364(__this, method) (( bool (*) (List_1_t745 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19365(__this, ___index, method) (( Object_t * (*) (List_1_t745 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19366(__this, ___index, ___value, method) (( void (*) (List_1_t745 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(T)
#define List_1_Add_m4629(__this, ___item, method) (( void (*) (List_1_t745 *, ParticleSystem_t121 *, MethodInfo*))List_1_Add_m4683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19367(__this, ___newCount, method) (( void (*) (List_1_t745 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13146_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19368(__this, ___collection, method) (( void (*) (List_1_t745 *, Object_t*, MethodInfo*))List_1_AddCollection_m13148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19369(__this, ___enumerable, method) (( void (*) (List_1_t745 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13150_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19370(__this, ___collection, method) (( void (*) (List_1_t745 *, Object_t*, MethodInfo*))List_1_AddRange_m13152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AsReadOnly()
#define List_1_AsReadOnly_m19371(__this, method) (( ReadOnlyCollection_1_t3300 * (*) (List_1_t745 *, MethodInfo*))List_1_AsReadOnly_m13154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Clear()
#define List_1_Clear_m19372(__this, method) (( void (*) (List_1_t745 *, MethodInfo*))List_1_Clear_m4890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Contains(T)
#define List_1_Contains_m19373(__this, ___item, method) (( bool (*) (List_1_t745 *, ParticleSystem_t121 *, MethodInfo*))List_1_Contains_m4897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19374(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t745 *, ParticleSystemU5BU5D_t120*, int32_t, MethodInfo*))List_1_CopyTo_m4898_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Find(System.Predicate`1<T>)
#define List_1_Find_m19375(__this, ___match, method) (( ParticleSystem_t121 * (*) (List_1_t745 *, Predicate_1_t3304 *, MethodInfo*))List_1_Find_m13158_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19376(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3304 *, MethodInfo*))List_1_CheckMatch_m13160_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19377(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t745 *, int32_t, int32_t, Predicate_1_t3304 *, MethodInfo*))List_1_GetIndex_m13162_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
#define List_1_GetEnumerator_m19378(__this, method) (( Enumerator_t3298  (*) (List_1_t745 *, MethodInfo*))List_1_GetEnumerator_m13164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::IndexOf(T)
#define List_1_IndexOf_m19379(__this, ___item, method) (( int32_t (*) (List_1_t745 *, ParticleSystem_t121 *, MethodInfo*))List_1_IndexOf_m4901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19380(__this, ___start, ___delta, method) (( void (*) (List_1_t745 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13167_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19381(__this, ___index, method) (( void (*) (List_1_t745 *, int32_t, MethodInfo*))List_1_CheckIndex_m13169_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Insert(System.Int32,T)
#define List_1_Insert_m19382(__this, ___index, ___item, method) (( void (*) (List_1_t745 *, int32_t, ParticleSystem_t121 *, MethodInfo*))List_1_Insert_m4902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19383(__this, ___collection, method) (( void (*) (List_1_t745 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13172_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Remove(T)
#define List_1_Remove_m19384(__this, ___item, method) (( bool (*) (List_1_t745 *, ParticleSystem_t121 *, MethodInfo*))List_1_Remove_m4899_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19385(__this, ___match, method) (( int32_t (*) (List_1_t745 *, Predicate_1_t3304 *, MethodInfo*))List_1_RemoveAll_m13175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19386(__this, ___index, method) (( void (*) (List_1_t745 *, int32_t, MethodInfo*))List_1_RemoveAt_m4895_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Reverse()
#define List_1_Reverse_m19387(__this, method) (( void (*) (List_1_t745 *, MethodInfo*))List_1_Reverse_m13178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort()
#define List_1_Sort_m19388(__this, method) (( void (*) (List_1_t745 *, MethodInfo*))List_1_Sort_m13180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19389(__this, ___comparison, method) (( void (*) (List_1_t745 *, Comparison_1_t3307 *, MethodInfo*))List_1_Sort_m13182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::ToArray()
#define List_1_ToArray_m4631(__this, method) (( ParticleSystemU5BU5D_t120* (*) (List_1_t745 *, MethodInfo*))List_1_ToArray_m13183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::TrimExcess()
#define List_1_TrimExcess_m19390(__this, method) (( void (*) (List_1_t745 *, MethodInfo*))List_1_TrimExcess_m13185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Capacity()
#define List_1_get_Capacity_m19391(__this, method) (( int32_t (*) (List_1_t745 *, MethodInfo*))List_1_get_Capacity_m13187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19392(__this, ___value, method) (( void (*) (List_1_t745 *, int32_t, MethodInfo*))List_1_set_Capacity_m13189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
#define List_1_get_Count_m19393(__this, method) (( int32_t (*) (List_1_t745 *, MethodInfo*))List_1_get_Count_m4881_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
#define List_1_get_Item_m19394(__this, ___index, method) (( ParticleSystem_t121 * (*) (List_1_t745 *, int32_t, MethodInfo*))List_1_get_Item_m4903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Item(System.Int32,T)
#define List_1_set_Item_m19395(__this, ___index, ___value, method) (( void (*) (List_1_t745 *, int32_t, ParticleSystem_t121 *, MethodInfo*))List_1_set_Item_m4904_gshared)(__this, ___index, ___value, method)
