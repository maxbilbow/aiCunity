#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t86;
// System.Collections.Generic.ICollection`1<UnityEngine.Camera>
struct ICollection_1_t3780;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t19;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>
struct KeyCollection_t2757;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>
struct ValueCollection_t2760;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t2712;
// System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct IDictionary_2_t3792;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>[]
struct KeyValuePair_2U5BU5D_t3793;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
struct IEnumerator_1_t3794;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1151;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#define Dictionary_2__ctor_m873(__this, method) (( void (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2__ctor_m12587_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13731(__this, ___comparer, method) (( void (*) (Dictionary_2_t86 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12589_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m13732(__this, ___dictionary, method) (( void (*) (Dictionary_2_t86 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12591_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Int32)
#define Dictionary_2__ctor_m13733(__this, ___capacity, method) (( void (*) (Dictionary_2_t86 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12593_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13734(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t86 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12595_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m13735(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t86 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2__ctor_m12597_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13736(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12599_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13737(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12601_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13738(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13739(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m13740(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12607_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m13741(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12609_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m13742(__this, ___key, method) (( void (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12611_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13743(__this, method) (( bool (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12613_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13744(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13745(__this, method) (( bool (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13746(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12619_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13747(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12621_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13748(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2U5BU5D_t3793*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12623_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13749(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12625_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13750(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12627_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13751(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12629_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13752(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12631_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13753(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12633_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Count()
#define Dictionary_2_get_Count_m13754(__this, method) (( int32_t (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_get_Count_m12635_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Item(TKey)
#define Dictionary_2_get_Item_m13755(__this, ___key, method) (( Camera_t19 * (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_get_Item_m12636_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m902(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_set_Item_m12638_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m13756(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t86 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12640_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m13757(__this, ___size, method) (( void (*) (Dictionary_2_t86 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12642_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m13758(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12644_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m13759(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t210  (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_make_pair_m12646_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m13760(__this /* static, unused */, ___key, ___value, method) (( Camera_t19 * (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_pick_key_m12648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m13761(__this /* static, unused */, ___key, ___value, method) (( Camera_t19 * (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_pick_value_m12650_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m13762(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2U5BU5D_t3793*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12652_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Resize()
#define Dictionary_2_Resize_m13763(__this, method) (( void (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_Resize_m12654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Add(TKey,TValue)
#define Dictionary_2_Add_m13764(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_Add_m12655_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Clear()
#define Dictionary_2_Clear_m881(__this, method) (( void (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_Clear_m12657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m13765(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_ContainsKey_m12658_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m13766(__this, ___value, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_ContainsValue_m12660_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m13767(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t86 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2_GetObjectData_m12662_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m13768(__this, ___sender, method) (( void (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12664_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Remove(TKey)
#define Dictionary_2_Remove_m13769(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_Remove_m12665_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m900(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, Camera_t19 **, MethodInfo*))Dictionary_2_TryGetValue_m12667_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Keys()
#define Dictionary_2_get_Keys_m13770(__this, method) (( KeyCollection_t2757 * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_get_Keys_m12669_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Values()
#define Dictionary_2_get_Values_m13771(__this, method) (( ValueCollection_t2760 * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_get_Values_m12671_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m13772(__this, ___key, method) (( Camera_t19 * (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12673_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m13773(__this, ___value, method) (( Camera_t19 * (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12675_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m13774(__this, ___pair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12677_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m907(__this, method) (( Enumerator_t209  (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_GetEnumerator_m12679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m13775(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1154  (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12681_gshared)(__this /* static, unused */, ___key, ___value, method)
