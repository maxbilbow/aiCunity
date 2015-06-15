#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t743;
// System.Object
struct Object_t;
// UnityEngine.ParticleSystem
struct ParticleSystem_t121;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem>
struct IEnumerable_1_t3909;
// System.Collections.Generic.IEnumerator`1<UnityEngine.ParticleSystem>
struct IEnumerator_1_t3910;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>
struct ICollection_1_t3911;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>
struct ReadOnlyCollection_1_t3298;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t120;
// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_t3302;
// System.Comparison`1<UnityEngine.ParticleSystem>
struct Comparison_1_t3305;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m4617(__this, method) (( void (*) (List_1_t743 *, MethodInfo*))List_1__ctor_m4653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19338(__this, ___collection, method) (( void (*) (List_1_t743 *, Object_t*, MethodInfo*))List_1__ctor_m13114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Int32)
#define List_1__ctor_m19339(__this, ___capacity, method) (( void (*) (List_1_t743 *, int32_t, MethodInfo*))List_1__ctor_m13116_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.cctor()
#define List_1__cctor_m19340(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m13118_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19341(__this, method) (( Object_t* (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19342(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t743 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19343(__this, method) (( Object_t * (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19344(__this, ___item, method) (( int32_t (*) (List_1_t743 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4878_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19345(__this, ___item, method) (( bool (*) (List_1_t743 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19346(__this, ___item, method) (( int32_t (*) (List_1_t743 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19347(__this, ___index, ___item, method) (( void (*) (List_1_t743 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4882_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19348(__this, ___item, method) (( void (*) (List_1_t743 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4883_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19349(__this, method) (( bool (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19350(__this, method) (( bool (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19351(__this, method) (( Object_t * (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19352(__this, method) (( bool (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19353(__this, method) (( bool (*) (List_1_t743 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19354(__this, ___index, method) (( Object_t * (*) (List_1_t743 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19355(__this, ___index, ___value, method) (( void (*) (List_1_t743 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4877_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(T)
#define List_1_Add_m4618(__this, ___item, method) (( void (*) (List_1_t743 *, ParticleSystem_t121 *, MethodInfo*))List_1_Add_m4672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19356(__this, ___newCount, method) (( void (*) (List_1_t743 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m13135_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19357(__this, ___collection, method) (( void (*) (List_1_t743 *, Object_t*, MethodInfo*))List_1_AddCollection_m13137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19358(__this, ___enumerable, method) (( void (*) (List_1_t743 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m13139_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19359(__this, ___collection, method) (( void (*) (List_1_t743 *, Object_t*, MethodInfo*))List_1_AddRange_m13141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AsReadOnly()
#define List_1_AsReadOnly_m19360(__this, method) (( ReadOnlyCollection_1_t3298 * (*) (List_1_t743 *, MethodInfo*))List_1_AsReadOnly_m13143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Clear()
#define List_1_Clear_m19361(__this, method) (( void (*) (List_1_t743 *, MethodInfo*))List_1_Clear_m4879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Contains(T)
#define List_1_Contains_m19362(__this, ___item, method) (( bool (*) (List_1_t743 *, ParticleSystem_t121 *, MethodInfo*))List_1_Contains_m4886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19363(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t743 *, ParticleSystemU5BU5D_t120*, int32_t, MethodInfo*))List_1_CopyTo_m4887_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Find(System.Predicate`1<T>)
#define List_1_Find_m19364(__this, ___match, method) (( ParticleSystem_t121 * (*) (List_1_t743 *, Predicate_1_t3302 *, MethodInfo*))List_1_Find_m13147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19365(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3302 *, MethodInfo*))List_1_CheckMatch_m13149_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19366(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t743 *, int32_t, int32_t, Predicate_1_t3302 *, MethodInfo*))List_1_GetIndex_m13151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
#define List_1_GetEnumerator_m19367(__this, method) (( Enumerator_t3296  (*) (List_1_t743 *, MethodInfo*))List_1_GetEnumerator_m13153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::IndexOf(T)
#define List_1_IndexOf_m19368(__this, ___item, method) (( int32_t (*) (List_1_t743 *, ParticleSystem_t121 *, MethodInfo*))List_1_IndexOf_m4890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19369(__this, ___start, ___delta, method) (( void (*) (List_1_t743 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m13156_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19370(__this, ___index, method) (( void (*) (List_1_t743 *, int32_t, MethodInfo*))List_1_CheckIndex_m13158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Insert(System.Int32,T)
#define List_1_Insert_m19371(__this, ___index, ___item, method) (( void (*) (List_1_t743 *, int32_t, ParticleSystem_t121 *, MethodInfo*))List_1_Insert_m4891_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19372(__this, ___collection, method) (( void (*) (List_1_t743 *, Object_t*, MethodInfo*))List_1_CheckCollection_m13161_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Remove(T)
#define List_1_Remove_m19373(__this, ___item, method) (( bool (*) (List_1_t743 *, ParticleSystem_t121 *, MethodInfo*))List_1_Remove_m4888_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19374(__this, ___match, method) (( int32_t (*) (List_1_t743 *, Predicate_1_t3302 *, MethodInfo*))List_1_RemoveAll_m13164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19375(__this, ___index, method) (( void (*) (List_1_t743 *, int32_t, MethodInfo*))List_1_RemoveAt_m4884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Reverse()
#define List_1_Reverse_m19376(__this, method) (( void (*) (List_1_t743 *, MethodInfo*))List_1_Reverse_m13167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort()
#define List_1_Sort_m19377(__this, method) (( void (*) (List_1_t743 *, MethodInfo*))List_1_Sort_m13169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19378(__this, ___comparison, method) (( void (*) (List_1_t743 *, Comparison_1_t3305 *, MethodInfo*))List_1_Sort_m13171_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::ToArray()
#define List_1_ToArray_m4620(__this, method) (( ParticleSystemU5BU5D_t120* (*) (List_1_t743 *, MethodInfo*))List_1_ToArray_m13172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::TrimExcess()
#define List_1_TrimExcess_m19379(__this, method) (( void (*) (List_1_t743 *, MethodInfo*))List_1_TrimExcess_m13174_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Capacity()
#define List_1_get_Capacity_m19380(__this, method) (( int32_t (*) (List_1_t743 *, MethodInfo*))List_1_get_Capacity_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19381(__this, ___value, method) (( void (*) (List_1_t743 *, int32_t, MethodInfo*))List_1_set_Capacity_m13178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
#define List_1_get_Count_m19382(__this, method) (( int32_t (*) (List_1_t743 *, MethodInfo*))List_1_get_Count_m4870_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
#define List_1_get_Item_m19383(__this, ___index, method) (( ParticleSystem_t121 * (*) (List_1_t743 *, int32_t, MethodInfo*))List_1_get_Item_m4892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Item(System.Int32,T)
#define List_1_set_Item_m19384(__this, ___index, ___value, method) (( void (*) (List_1_t743 *, int32_t, ParticleSystem_t121 *, MethodInfo*))List_1_set_Item_m4893_gshared)(__this, ___index, ___value, method)
