﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3537;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ICollection_1_t3965;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t3538;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ValueCollection_t3542;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2619;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t3968;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>[]
struct KeyValuePair_2U5BU5D_t3969;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IEnumerator_1_t3970;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
extern "C" void Dictionary_2__ctor_m21741_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m21741(__this, method) (( void (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2__ctor_m21741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21743_gshared (Dictionary_2_t3537 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21743(__this, ___comparer, method) (( void (*) (Dictionary_2_t3537 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21743_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21745_gshared (Dictionary_2_t3537 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m21745(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3537 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21745_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21747_gshared (Dictionary_2_t3537 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m21747(__this, ___capacity, method) (( void (*) (Dictionary_2_t3537 *, int32_t, MethodInfo*))Dictionary_2__ctor_m21747_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21749_gshared (Dictionary_2_t3537 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21749(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3537 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m21749_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21751_gshared (Dictionary_2_t3537 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m21751(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3537 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m21751_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21753_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21753(__this, method) (( Object_t* (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21753_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21755_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21755(__this, method) (( Object_t* (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21755_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21757_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21757(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21757_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21759_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21759(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3537 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21759_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21761_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21761(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3537 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21761_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21763_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21763(__this, ___key, method) (( bool (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21765_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21765(__this, ___key, method) (( void (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21767_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21767(__this, method) (( bool (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21767_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21769_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21769(__this, method) (( Object_t * (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21769_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21771_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21771(__this, method) (( bool (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21773_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2_t3463  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21773(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3537 *, KeyValuePair_2_t3463 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21773_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21775_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2_t3463  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21775(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3537 *, KeyValuePair_2_t3463 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21775_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21777_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2U5BU5D_t3969* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21777(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3537 *, KeyValuePair_2U5BU5D_t3969*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21777_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21779_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2_t3463  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21779(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3537 *, KeyValuePair_2_t3463 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21779_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21781_gshared (Dictionary_2_t3537 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21781(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3537 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21781_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21783_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21783(__this, method) (( Object_t * (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21783_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21785_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21785(__this, method) (( Object_t* (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21785_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21787_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21787(__this, method) (( Object_t * (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21787_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21789_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m21789(__this, method) (( int32_t (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_get_Count_m21789_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Item(TKey)
extern "C" KeyValuePair_2_t940  Dictionary_2_get_Item_m21791_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m21791(__this, ___key, method) (( KeyValuePair_2_t940  (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m21791_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21793_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m21793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3537 *, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_set_Item_m21793_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21795_gshared (Dictionary_2_t3537 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m21795(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3537 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m21795_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21797_gshared (Dictionary_2_t3537 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m21797(__this, ___size, method) (( void (*) (Dictionary_2_t3537 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m21797_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21799_gshared (Dictionary_2_t3537 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21799(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3537 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m21799_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3463  Dictionary_2_make_pair_m21801_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m21801(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3463  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_make_pair_m21801_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21803_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m21803(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_pick_key_m21803_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t940  Dictionary_2_pick_value_m21805_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m21805(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t940  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_pick_value_m21805_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21807_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2U5BU5D_t3969* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m21807(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3537 *, KeyValuePair_2U5BU5D_t3969*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m21807_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Resize()
extern "C" void Dictionary_2_Resize_m21809_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m21809(__this, method) (( void (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_Resize_m21809_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21811_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_Add_m21811(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3537 *, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_Add_m21811_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Clear()
extern "C" void Dictionary_2_Clear_m21813_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m21813(__this, method) (( void (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_Clear_m21813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21815_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m21815(__this, ___key, method) (( bool (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m21815_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21817_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m21817(__this, ___value, method) (( bool (*) (Dictionary_2_t3537 *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_ContainsValue_m21817_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21819_gshared (Dictionary_2_t3537 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m21819(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3537 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m21819_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21821_gshared (Dictionary_2_t3537 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21821(__this, ___sender, method) (( void (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m21821_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21823_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m21823(__this, ___key, method) (( bool (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m21823_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21825_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, KeyValuePair_2_t940 * ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m21825(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3537 *, Object_t *, KeyValuePair_2_t940 *, MethodInfo*))Dictionary_2_TryGetValue_m21825_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Keys()
extern "C" KeyCollection_t3538 * Dictionary_2_get_Keys_m21827_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m21827(__this, method) (( KeyCollection_t3538 * (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_get_Keys_m21827_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Values()
extern "C" ValueCollection_t3542 * Dictionary_2_get_Values_m21829_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m21829(__this, method) (( ValueCollection_t3542 * (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_get_Values_m21829_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21831_gshared (Dictionary_2_t3537 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m21831(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m21831_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t940  Dictionary_2_ToTValue_m21833_gshared (Dictionary_2_t3537 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m21833(__this, ___value, method) (( KeyValuePair_2_t940  (*) (Dictionary_2_t3537 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m21833_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21835_gshared (Dictionary_2_t3537 * __this, KeyValuePair_2_t3463  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21835(__this, ___pair, method) (( bool (*) (Dictionary_2_t3537 *, KeyValuePair_2_t3463 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21835_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t3540  Dictionary_2_GetEnumerator_m21837_gshared (Dictionary_2_t3537 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21837(__this, method) (( Enumerator_t3540  (*) (Dictionary_2_t3537 *, MethodInfo*))Dictionary_2_GetEnumerator_m21837_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m21839_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t940  ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21839(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t940 , MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21839_gshared)(__this /* static, unused */, ___key, ___value, method)
