﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t718;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t811;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t3274;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3277;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2570;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t923;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t3904;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t3905;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1151;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#define Dictionary_2__ctor_m4589(__this, method) (( void (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2__ctor_m12587_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19054(__this, ___comparer, method) (( void (*) (Dictionary_2_t718 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12589_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19055(__this, ___dictionary, method) (( void (*) (Dictionary_2_t718 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12591_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19056(__this, ___capacity, method) (( void (*) (Dictionary_2_t718 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12593_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19057(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t718 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12595_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19058(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t718 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2__ctor_m12597_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19059(__this, method) (( Object_t* (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12599_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19060(__this, method) (( Object_t* (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12601_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19061(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t718 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19062(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t718 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19063(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t718 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12607_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19064(__this, ___key, method) (( bool (*) (Dictionary_2_t718 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12609_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19065(__this, ___key, method) (( void (*) (Dictionary_2_t718 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12611_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19066(__this, method) (( bool (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12613_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19067(__this, method) (( Object_t * (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19068(__this, method) (( bool (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19069(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t718 *, KeyValuePair_2_t910 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12619_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19070(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t718 *, KeyValuePair_2_t910 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12621_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t718 *, KeyValuePair_2U5BU5D_t3904*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12623_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19072(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t718 *, KeyValuePair_2_t910 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12625_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19073(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t718 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12627_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19074(__this, method) (( Object_t * (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12629_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19075(__this, method) (( Object_t* (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12631_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19076(__this, method) (( Object_t * (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12633_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m4587(__this, method) (( int32_t (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_get_Count_m12635_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m19077(__this, ___key, method) (( String_t* (*) (Dictionary_2_t718 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m12636_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m4593(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t718 *, String_t*, String_t*, MethodInfo*))Dictionary_2_set_Item_m12638_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19078(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t718 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12640_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19079(__this, ___size, method) (( void (*) (Dictionary_2_t718 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12642_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19080(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t718 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12644_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19081(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t910  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_make_pair_m12646_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19082(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_key_m12648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19083(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_value_m12650_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19084(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t718 *, KeyValuePair_2U5BU5D_t3904*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12652_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m19085(__this, method) (( void (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_Resize_m12654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m19086(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t718 *, String_t*, String_t*, MethodInfo*))Dictionary_2_Add_m12655_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m19087(__this, method) (( void (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_Clear_m12657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19088(__this, ___key, method) (( bool (*) (Dictionary_2_t718 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m12658_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19089(__this, ___value, method) (( bool (*) (Dictionary_2_t718 *, String_t*, MethodInfo*))Dictionary_2_ContainsValue_m12660_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19090(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t718 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2_GetObjectData_m12662_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19091(__this, ___sender, method) (( void (*) (Dictionary_2_t718 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12664_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m19092(__this, ___key, method) (( bool (*) (Dictionary_2_t718 *, String_t*, MethodInfo*))Dictionary_2_Remove_m12665_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m4580(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t718 *, String_t*, String_t**, MethodInfo*))Dictionary_2_TryGetValue_m12667_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m19093(__this, method) (( KeyCollection_t3274 * (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_get_Keys_m12669_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m19094(__this, method) (( ValueCollection_t3277 * (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_get_Values_m12671_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19095(__this, ___key, method) (( String_t* (*) (Dictionary_2_t718 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12673_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19096(__this, ___value, method) (( String_t* (*) (Dictionary_2_t718 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12675_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19097(__this, ___pair, method) (( bool (*) (Dictionary_2_t718 *, KeyValuePair_2_t910 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12677_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m4596(__this, method) (( Enumerator_t909  (*) (Dictionary_2_t718 *, MethodInfo*))Dictionary_2_GetEnumerator_m12679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19098(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1154  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12681_gshared)(__this /* static, unused */, ___key, ___value, method)
