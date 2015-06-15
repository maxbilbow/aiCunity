#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3403;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t3941;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3409;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3413;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3401;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t3942;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t3943;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t3944;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20534_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m20534(__this, method) (( void (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2__ctor_m20534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20536_gshared (Dictionary_2_t3403 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20536(__this, ___comparer, method) (( void (*) (Dictionary_2_t3403 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20536_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20538_gshared (Dictionary_2_t3403 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m20538(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3403 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20538_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20540_gshared (Dictionary_2_t3403 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m20540(__this, ___capacity, method) (( void (*) (Dictionary_2_t3403 *, int32_t, MethodInfo*))Dictionary_2__ctor_m20540_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20542_gshared (Dictionary_2_t3403 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20542(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3403 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m20542_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20544_gshared (Dictionary_2_t3403 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m20544(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3403 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m20544_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20546_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20546(__this, method) (( Object_t* (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20546_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20548_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20548(__this, method) (( Object_t* (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20550_gshared (Dictionary_2_t3403 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20550(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20550_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20552_gshared (Dictionary_2_t3403 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3403 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20554_gshared (Dictionary_2_t3403 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20554(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3403 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20554_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20556_gshared (Dictionary_2_t3403 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20556(__this, ___key, method) (( bool (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20556_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20558_gshared (Dictionary_2_t3403 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20558(__this, ___key, method) (( void (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20558_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20560_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20560(__this, method) (( bool (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20560_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20562_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20562(__this, method) (( Object_t * (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20564_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20564(__this, method) (( bool (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20566_gshared (Dictionary_2_t3403 * __this, KeyValuePair_2_t3404  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20566(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3403 *, KeyValuePair_2_t3404 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20566_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20568_gshared (Dictionary_2_t3403 * __this, KeyValuePair_2_t3404  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20568(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3403 *, KeyValuePair_2_t3404 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20568_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20570_gshared (Dictionary_2_t3403 * __this, KeyValuePair_2U5BU5D_t3943* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20570(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3403 *, KeyValuePair_2U5BU5D_t3943*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20570_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20572_gshared (Dictionary_2_t3403 * __this, KeyValuePair_2_t3404  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20572(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3403 *, KeyValuePair_2_t3404 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20572_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20574_gshared (Dictionary_2_t3403 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20574(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3403 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20574_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20576_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20576(__this, method) (( Object_t * (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20576_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20578_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20578(__this, method) (( Object_t* (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20578_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20580_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20580(__this, method) (( Object_t * (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20582_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m20582(__this, method) (( int32_t (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_get_Count_m20582_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20584_gshared (Dictionary_2_t3403 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m20584(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3403 *, uint64_t, MethodInfo*))Dictionary_2_get_Item_m20584_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20586_gshared (Dictionary_2_t3403 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m20586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3403 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m20586_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20588_gshared (Dictionary_2_t3403 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m20588(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3403 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m20588_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20590_gshared (Dictionary_2_t3403 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m20590(__this, ___size, method) (( void (*) (Dictionary_2_t3403 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m20590_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20592_gshared (Dictionary_2_t3403 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20592(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3403 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m20592_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3404  Dictionary_2_make_pair_m20594_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m20594(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3404  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m20594_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m20596_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m20596(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m20596_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20598_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m20598(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m20598_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20600_gshared (Dictionary_2_t3403 * __this, KeyValuePair_2U5BU5D_t3943* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m20600(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3403 *, KeyValuePair_2U5BU5D_t3943*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20600_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20602_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m20602(__this, method) (( void (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_Resize_m20602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20604_gshared (Dictionary_2_t3403 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m20604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3403 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_Add_m20604_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20606_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m20606(__this, method) (( void (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_Clear_m20606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20608_gshared (Dictionary_2_t3403 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m20608(__this, ___key, method) (( bool (*) (Dictionary_2_t3403 *, uint64_t, MethodInfo*))Dictionary_2_ContainsKey_m20608_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20610_gshared (Dictionary_2_t3403 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m20610(__this, ___value, method) (( bool (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m20610_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20612_gshared (Dictionary_2_t3403 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m20612(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3403 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m20612_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20614_gshared (Dictionary_2_t3403 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20614(__this, ___sender, method) (( void (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20614_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20616_gshared (Dictionary_2_t3403 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m20616(__this, ___key, method) (( bool (*) (Dictionary_2_t3403 *, uint64_t, MethodInfo*))Dictionary_2_Remove_m20616_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20617_gshared (Dictionary_2_t3403 * __this, uint64_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m20617(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3403 *, uint64_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m20617_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3409 * Dictionary_2_get_Keys_m20619_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m20619(__this, method) (( KeyCollection_t3409 * (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_get_Keys_m20619_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3413 * Dictionary_2_get_Values_m20621_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m20621(__this, method) (( ValueCollection_t3413 * (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_get_Values_m20621_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m20623_gshared (Dictionary_2_t3403 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m20623(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20623_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20625_gshared (Dictionary_2_t3403 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m20625(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3403 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20625_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20627_gshared (Dictionary_2_t3403 * __this, KeyValuePair_2_t3404  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20627(__this, ___pair, method) (( bool (*) (Dictionary_2_t3403 *, KeyValuePair_2_t3404 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20627_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3411  Dictionary_2_GetEnumerator_m20629_gshared (Dictionary_2_t3403 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20629(__this, method) (( Enumerator_t3411  (*) (Dictionary_2_t3403 *, MethodInfo*))Dictionary_2_GetEnumerator_m20629_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m20631_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20631(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20631_gshared)(__this /* static, unused */, ___key, ___value, method)
