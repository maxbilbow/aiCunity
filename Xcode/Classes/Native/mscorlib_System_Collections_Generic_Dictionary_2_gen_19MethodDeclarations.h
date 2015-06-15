#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2717;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3787;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2723;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2727;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2619;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t3788;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3789;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t3790;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m13413_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m13413(__this, method) (( void (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2__ctor_m13413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13415_gshared (Dictionary_2_t2717 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13415(__this, ___comparer, method) (( void (*) (Dictionary_2_t2717 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13415_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13417_gshared (Dictionary_2_t2717 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m13417(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2717 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13417_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13419_gshared (Dictionary_2_t2717 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m13419(__this, ___capacity, method) (( void (*) (Dictionary_2_t2717 *, int32_t, MethodInfo*))Dictionary_2__ctor_m13419_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13421_gshared (Dictionary_2_t2717 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13421(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2717 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m13421_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13423_gshared (Dictionary_2_t2717 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m13423(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2717 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m13423_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13425_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13425(__this, method) (( Object_t* (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13425_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13427_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13427(__this, method) (( Object_t* (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13427_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13429_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13429(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13429_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13431_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13431(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2717 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13431_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13433_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13433(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2717 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13433_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13435_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13435(__this, ___key, method) (( bool (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13435_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13437_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13437(__this, ___key, method) (( void (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13439_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13439(__this, method) (( bool (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13439_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13441_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13441(__this, method) (( Object_t * (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13441_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13443_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13443(__this, method) (( bool (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13443_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13445_gshared (Dictionary_2_t2717 * __this, KeyValuePair_2_t2718  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13445(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2717 *, KeyValuePair_2_t2718 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13445_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13447_gshared (Dictionary_2_t2717 * __this, KeyValuePair_2_t2718  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13447(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2717 *, KeyValuePair_2_t2718 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13447_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13449_gshared (Dictionary_2_t2717 * __this, KeyValuePair_2U5BU5D_t3789* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13449(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2717 *, KeyValuePair_2U5BU5D_t3789*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13449_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13451_gshared (Dictionary_2_t2717 * __this, KeyValuePair_2_t2718  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13451(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2717 *, KeyValuePair_2_t2718 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13451_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13453_gshared (Dictionary_2_t2717 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13453(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2717 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13453_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13455_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13455(__this, method) (( Object_t * (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13455_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13457_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13457(__this, method) (( Object_t* (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13457_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13459_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13459(__this, method) (( Object_t * (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13459_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13461_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m13461(__this, method) (( int32_t (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_get_Count_m13461_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m13462_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m13462(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m13462_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13463_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m13463(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2717 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m13463_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13465_gshared (Dictionary_2_t2717 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m13465(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2717 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m13465_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13467_gshared (Dictionary_2_t2717 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m13467(__this, ___size, method) (( void (*) (Dictionary_2_t2717 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m13467_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13469_gshared (Dictionary_2_t2717 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13469(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2717 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m13469_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2718  Dictionary_2_make_pair_m13471_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m13471(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2718  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m13471_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13473_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m13473(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_key_m13473_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m13475_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m13475(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m13475_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13477_gshared (Dictionary_2_t2717 * __this, KeyValuePair_2U5BU5D_t3789* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m13477(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2717 *, KeyValuePair_2U5BU5D_t3789*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m13477_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m13479_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m13479(__this, method) (( void (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_Resize_m13479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13480_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m13480(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2717 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m13480_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m13481_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m13481(__this, method) (( void (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_Clear_m13481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13482_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m13482(__this, ___key, method) (( bool (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m13482_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13484_gshared (Dictionary_2_t2717 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m13484(__this, ___value, method) (( bool (*) (Dictionary_2_t2717 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m13484_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13486_gshared (Dictionary_2_t2717 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m13486(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2717 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m13486_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13488_gshared (Dictionary_2_t2717 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13488(__this, ___sender, method) (( void (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13488_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13490_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m13490(__this, ___key, method) (( bool (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m13490_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13492_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m13492(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2717 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m13492_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2723 * Dictionary_2_get_Keys_m13494_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m13494(__this, method) (( KeyCollection_t2723 * (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_get_Keys_m13494_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2727 * Dictionary_2_get_Values_m13496_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m13496(__this, method) (( ValueCollection_t2727 * (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_get_Values_m13496_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13498_gshared (Dictionary_2_t2717 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m13498(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13498_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m13500_gshared (Dictionary_2_t2717 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m13500(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2717 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13500_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13502_gshared (Dictionary_2_t2717 * __this, KeyValuePair_2_t2718  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13502(__this, ___pair, method) (( bool (*) (Dictionary_2_t2717 *, KeyValuePair_2_t2718 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13502_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2725  Dictionary_2_GetEnumerator_m13504_gshared (Dictionary_2_t2717 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13504(__this, method) (( Enumerator_t2725  (*) (Dictionary_2_t2717 *, MethodInfo*))Dictionary_2_GetEnumerator_m13504_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m13506_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13506(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13506_gshared)(__this /* static, unused */, ___key, ___value, method)
