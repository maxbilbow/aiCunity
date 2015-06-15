#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2621;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2633;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2637;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2619;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t3771;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3772;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3773;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12598_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m12598(__this, method) (( void (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2__ctor_m12598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12600_gshared (Dictionary_2_t2621 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12600(__this, ___comparer, method) (( void (*) (Dictionary_2_t2621 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12600_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12602_gshared (Dictionary_2_t2621 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m12602(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2621 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12602_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12604_gshared (Dictionary_2_t2621 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m12604(__this, ___capacity, method) (( void (*) (Dictionary_2_t2621 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12604_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12606_gshared (Dictionary_2_t2621 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12606(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2621 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12606_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12608_gshared (Dictionary_2_t2621 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m12608(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2621 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m12608_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12610_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12610(__this, method) (( Object_t* (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12610_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12612_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12612(__this, method) (( Object_t* (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12612_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12614_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12614(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12614_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12616_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12616(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2621 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12616_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12618_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12618(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2621 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12618_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12620_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12620(__this, ___key, method) (( bool (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12620_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12622_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12622(__this, ___key, method) (( void (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12622_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12624_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12624(__this, method) (( bool (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12626_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12626(__this, method) (( Object_t * (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12626_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12628_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12628(__this, method) (( bool (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12630_gshared (Dictionary_2_t2621 * __this, KeyValuePair_2_t2622  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12630(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2621 *, KeyValuePair_2_t2622 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12630_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12632_gshared (Dictionary_2_t2621 * __this, KeyValuePair_2_t2622  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12632(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2621 *, KeyValuePair_2_t2622 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12632_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12634_gshared (Dictionary_2_t2621 * __this, KeyValuePair_2U5BU5D_t3772* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12634(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2621 *, KeyValuePair_2U5BU5D_t3772*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12634_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12636_gshared (Dictionary_2_t2621 * __this, KeyValuePair_2_t2622  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12636(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2621 *, KeyValuePair_2_t2622 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12636_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12638_gshared (Dictionary_2_t2621 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12638(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2621 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12638_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12640_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12640(__this, method) (( Object_t * (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12640_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12642_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12642(__this, method) (( Object_t* (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12642_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12644_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12644(__this, method) (( Object_t * (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12646_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m12646(__this, method) (( int32_t (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_get_Count_m12646_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12647_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m12647(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m12647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12649_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m12649(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2621 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m12649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12651_gshared (Dictionary_2_t2621 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m12651(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2621 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12651_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12653_gshared (Dictionary_2_t2621 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m12653(__this, ___size, method) (( void (*) (Dictionary_2_t2621 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12653_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12655_gshared (Dictionary_2_t2621 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2621 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12655_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2622  Dictionary_2_make_pair_m12657_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m12657(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2622  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m12657_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12659_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m12659(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_key_m12659_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12661_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m12661(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m12661_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12663_gshared (Dictionary_2_t2621 * __this, KeyValuePair_2U5BU5D_t3772* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m12663(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2621 *, KeyValuePair_2U5BU5D_t3772*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12663_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12665_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m12665(__this, method) (( void (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_Resize_m12665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12666_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m12666(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2621 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m12666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12668_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m12668(__this, method) (( void (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_Clear_m12668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12669_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m12669(__this, ___key, method) (( bool (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m12669_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12671_gshared (Dictionary_2_t2621 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m12671(__this, ___value, method) (( bool (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m12671_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12673_gshared (Dictionary_2_t2621 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m12673(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2621 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m12673_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12675_gshared (Dictionary_2_t2621 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12675(__this, ___sender, method) (( void (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12675_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12676_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m12676(__this, ___key, method) (( bool (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m12676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12678_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m12678(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2621 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m12678_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2633 * Dictionary_2_get_Keys_m12680_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m12680(__this, method) (( KeyCollection_t2633 * (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_get_Keys_m12680_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2637 * Dictionary_2_get_Values_m12682_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m12682(__this, method) (( ValueCollection_t2637 * (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_get_Values_m12682_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12684_gshared (Dictionary_2_t2621 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m12684(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12684_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12686_gshared (Dictionary_2_t2621 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m12686(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2621 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12686_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12688_gshared (Dictionary_2_t2621 * __this, KeyValuePair_2_t2622  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12688(__this, ___pair, method) (( bool (*) (Dictionary_2_t2621 *, KeyValuePair_2_t2622 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12688_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2635  Dictionary_2_GetEnumerator_m12690_gshared (Dictionary_2_t2621 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12690(__this, method) (( Enumerator_t2635  (*) (Dictionary_2_t2621 *, MethodInfo*))Dictionary_2_GetEnumerator_m12690_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m12692_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12692(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12692_gshared)(__this /* static, unused */, ___key, ___value, method)
