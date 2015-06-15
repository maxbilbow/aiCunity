#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3401;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t3939;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t812;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3407;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3411;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3399;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t3940;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t3941;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t3942;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1151;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20523_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m20523(__this, method) (( void (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2__ctor_m20523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20525_gshared (Dictionary_2_t3401 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20525(__this, ___comparer, method) (( void (*) (Dictionary_2_t3401 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20525_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20527_gshared (Dictionary_2_t3401 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m20527(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3401 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20527_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20529_gshared (Dictionary_2_t3401 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m20529(__this, ___capacity, method) (( void (*) (Dictionary_2_t3401 *, int32_t, MethodInfo*))Dictionary_2__ctor_m20529_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20531_gshared (Dictionary_2_t3401 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20531(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3401 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m20531_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20533_gshared (Dictionary_2_t3401 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m20533(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3401 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2__ctor_m20533_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20535_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20535(__this, method) (( Object_t* (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20535_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20537_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20537(__this, method) (( Object_t* (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20537_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20539_gshared (Dictionary_2_t3401 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20539(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20539_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20541_gshared (Dictionary_2_t3401 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20541(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3401 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20541_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20543_gshared (Dictionary_2_t3401 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20543(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3401 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20543_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20545_gshared (Dictionary_2_t3401 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20545(__this, ___key, method) (( bool (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20545_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20547_gshared (Dictionary_2_t3401 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20547(__this, ___key, method) (( void (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20547_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20549_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20549(__this, method) (( bool (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20549_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20551_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20551(__this, method) (( Object_t * (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20553_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20553(__this, method) (( bool (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20555_gshared (Dictionary_2_t3401 * __this, KeyValuePair_2_t3402  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20555(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3401 *, KeyValuePair_2_t3402 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20555_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20557_gshared (Dictionary_2_t3401 * __this, KeyValuePair_2_t3402  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20557(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3401 *, KeyValuePair_2_t3402 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20557_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20559_gshared (Dictionary_2_t3401 * __this, KeyValuePair_2U5BU5D_t3941* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20559(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3401 *, KeyValuePair_2U5BU5D_t3941*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20559_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20561_gshared (Dictionary_2_t3401 * __this, KeyValuePair_2_t3402  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20561(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3401 *, KeyValuePair_2_t3402 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20561_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20563_gshared (Dictionary_2_t3401 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20563(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20563_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20565_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20565(__this, method) (( Object_t * (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20565_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20567_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20567(__this, method) (( Object_t* (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20567_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20569_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20569(__this, method) (( Object_t * (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20571_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m20571(__this, method) (( int32_t (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_get_Count_m20571_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20573_gshared (Dictionary_2_t3401 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m20573(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3401 *, uint64_t, MethodInfo*))Dictionary_2_get_Item_m20573_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20575_gshared (Dictionary_2_t3401 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m20575(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3401 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m20575_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20577_gshared (Dictionary_2_t3401 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m20577(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3401 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m20577_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20579_gshared (Dictionary_2_t3401 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m20579(__this, ___size, method) (( void (*) (Dictionary_2_t3401 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m20579_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20581_gshared (Dictionary_2_t3401 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20581(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3401 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m20581_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3402  Dictionary_2_make_pair_m20583_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m20583(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3402  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m20583_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m20585_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m20585(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m20585_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20587_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m20587(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m20587_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20589_gshared (Dictionary_2_t3401 * __this, KeyValuePair_2U5BU5D_t3941* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m20589(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3401 *, KeyValuePair_2U5BU5D_t3941*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20589_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20591_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m20591(__this, method) (( void (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_Resize_m20591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20593_gshared (Dictionary_2_t3401 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m20593(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3401 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_Add_m20593_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20595_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m20595(__this, method) (( void (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_Clear_m20595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20597_gshared (Dictionary_2_t3401 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m20597(__this, ___key, method) (( bool (*) (Dictionary_2_t3401 *, uint64_t, MethodInfo*))Dictionary_2_ContainsKey_m20597_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20599_gshared (Dictionary_2_t3401 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m20599(__this, ___value, method) (( bool (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m20599_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20601_gshared (Dictionary_2_t3401 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m20601(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3401 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2_GetObjectData_m20601_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20603_gshared (Dictionary_2_t3401 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20603(__this, ___sender, method) (( void (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20603_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20605_gshared (Dictionary_2_t3401 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m20605(__this, ___key, method) (( bool (*) (Dictionary_2_t3401 *, uint64_t, MethodInfo*))Dictionary_2_Remove_m20605_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20606_gshared (Dictionary_2_t3401 * __this, uint64_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m20606(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3401 *, uint64_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m20606_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3407 * Dictionary_2_get_Keys_m20608_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m20608(__this, method) (( KeyCollection_t3407 * (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_get_Keys_m20608_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3411 * Dictionary_2_get_Values_m20610_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m20610(__this, method) (( ValueCollection_t3411 * (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_get_Values_m20610_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m20612_gshared (Dictionary_2_t3401 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m20612(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20612_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20614_gshared (Dictionary_2_t3401 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m20614(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3401 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20614_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20616_gshared (Dictionary_2_t3401 * __this, KeyValuePair_2_t3402  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20616(__this, ___pair, method) (( bool (*) (Dictionary_2_t3401 *, KeyValuePair_2_t3402 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20616_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3409  Dictionary_2_GetEnumerator_m20618_gshared (Dictionary_2_t3401 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20618(__this, method) (( Enumerator_t3409  (*) (Dictionary_2_t3401 *, MethodInfo*))Dictionary_2_GetEnumerator_m20618_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1154  Dictionary_2_U3CCopyToU3Em__0_m20620_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20620(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1154  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20620_gshared)(__this /* static, unused */, ___key, ___value, method)
