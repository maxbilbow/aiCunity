#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t366;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3802;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
struct ICollection_1_t3832;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t2963;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t524;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2945;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct IDictionary_2_t3833;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t3834;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct IEnumerator_1_t3835;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21MethodDeclarations.h"
#define Dictionary_2__ctor_m2629(__this, method) (( void (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2__ctor_m15687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15688(__this, ___comparer, method) (( void (*) (Dictionary_2_t366 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m15689_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m15690(__this, ___dictionary, method) (( void (*) (Dictionary_2_t366 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m15691_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
#define Dictionary_2__ctor_m15692(__this, ___capacity, method) (( void (*) (Dictionary_2_t366 *, int32_t, MethodInfo*))Dictionary_2__ctor_m15693_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15694(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t366 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m15695_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m15696(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t366 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m15697_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15698(__this, method) (( Object_t* (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15699_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15700(__this, method) (( Object_t* (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15701_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15702(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t366 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15704(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t366 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15705_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m15706(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t366 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15707_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m15708(__this, ___key, method) (( bool (*) (Dictionary_2_t366 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15709_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m15710(__this, ___key, method) (( void (*) (Dictionary_2_t366 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15711_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15712(__this, method) (( bool (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15714(__this, method) (( Object_t * (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15715_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15716(__this, method) (( bool (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15717_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15718(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t366 *, KeyValuePair_2_t523 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15719_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15720(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t366 *, KeyValuePair_2_t523 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15721_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15722(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t366 *, KeyValuePair_2U5BU5D_t3834*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15723_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15724(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t366 *, KeyValuePair_2_t523 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15725_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15726(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t366 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15727_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15728(__this, method) (( Object_t * (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15729_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15730(__this, method) (( Object_t* (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15731_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15732(__this, method) (( Object_t * (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#define Dictionary_2_get_Count_m15734(__this, method) (( int32_t (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_get_Count_m15735_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
#define Dictionary_2_get_Item_m15736(__this, ___key, method) (( PointerEventData_t46 * (*) (Dictionary_2_t366 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m15737_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m15738(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t366 *, int32_t, PointerEventData_t46 *, MethodInfo*))Dictionary_2_set_Item_m15739_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m15740(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t366 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m15741_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m15742(__this, ___size, method) (( void (*) (Dictionary_2_t366 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m15743_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m15744(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t366 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m15745_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m15746(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t523  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t46 *, MethodInfo*))Dictionary_2_make_pair_m15747_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m15748(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t46 *, MethodInfo*))Dictionary_2_pick_key_m15749_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m15750(__this /* static, unused */, ___key, ___value, method) (( PointerEventData_t46 * (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t46 *, MethodInfo*))Dictionary_2_pick_value_m15751_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m15752(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t366 *, KeyValuePair_2U5BU5D_t3834*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m15753_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Resize()
#define Dictionary_2_Resize_m15754(__this, method) (( void (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_Resize_m15755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
#define Dictionary_2_Add_m2631(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t366 *, int32_t, PointerEventData_t46 *, MethodInfo*))Dictionary_2_Add_m15756_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
#define Dictionary_2_Clear_m2634(__this, method) (( void (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_Clear_m15757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m15758(__this, ___key, method) (( bool (*) (Dictionary_2_t366 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m15759_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m15760(__this, ___value, method) (( bool (*) (Dictionary_2_t366 *, PointerEventData_t46 *, MethodInfo*))Dictionary_2_ContainsValue_m15761_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m15762(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t366 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m15763_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m15764(__this, ___sender, method) (( void (*) (Dictionary_2_t366 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m15765_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
#define Dictionary_2_Remove_m2632(__this, ___key, method) (( bool (*) (Dictionary_2_t366 *, int32_t, MethodInfo*))Dictionary_2_Remove_m15766_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m2630(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t366 *, int32_t, PointerEventData_t46 **, MethodInfo*))Dictionary_2_TryGetValue_m15767_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
#define Dictionary_2_get_Keys_m15768(__this, method) (( KeyCollection_t2963 * (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_get_Keys_m15769_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
#define Dictionary_2_get_Values_m2642(__this, method) (( ValueCollection_t524 * (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_get_Values_m15770_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m15771(__this, ___key, method) (( int32_t (*) (Dictionary_2_t366 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m15772_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m15773(__this, ___value, method) (( PointerEventData_t46 * (*) (Dictionary_2_t366 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m15774_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m15775(__this, ___pair, method) (( bool (*) (Dictionary_2_t366 *, KeyValuePair_2_t523 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15776_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2646(__this, method) (( Enumerator_t522  (*) (Dictionary_2_t366 *, MethodInfo*))Dictionary_2_GetEnumerator_m15777_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m15778(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t46 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15779_gshared)(__this /* static, unused */, ___key, ___value, method)
