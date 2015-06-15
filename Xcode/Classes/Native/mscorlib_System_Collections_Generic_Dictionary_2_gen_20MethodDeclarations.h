#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2814;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3802;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2817;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2821;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2619;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t3806;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3807;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3808;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14235_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14235(__this, method) (( void (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2__ctor_m14235_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14237_gshared (Dictionary_2_t2814 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14237(__this, ___comparer, method) (( void (*) (Dictionary_2_t2814 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14237_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14239_gshared (Dictionary_2_t2814 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m14239(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2814 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14239_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14240_gshared (Dictionary_2_t2814 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14240(__this, ___capacity, method) (( void (*) (Dictionary_2_t2814 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14240_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14242_gshared (Dictionary_2_t2814 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14242(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2814 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14242_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14244_gshared (Dictionary_2_t2814 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14244(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2814 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m14244_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14246_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14246(__this, method) (( Object_t* (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14246_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14248_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14248(__this, method) (( Object_t* (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14250_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14250(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14250_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14252_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14252(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2814 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14252_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14254_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14254(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2814 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14254_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14256_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14256(__this, ___key, method) (( bool (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14256_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14258_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14258(__this, ___key, method) (( void (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14258_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14260_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14260(__this, method) (( bool (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14260_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14262_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14262(__this, method) (( Object_t * (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14264_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14264(__this, method) (( bool (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14264_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14266_gshared (Dictionary_2_t2814 * __this, KeyValuePair_2_t2815  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14266(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2814 *, KeyValuePair_2_t2815 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14266_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14268_gshared (Dictionary_2_t2814 * __this, KeyValuePair_2_t2815  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14268(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2814 *, KeyValuePair_2_t2815 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14268_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14270_gshared (Dictionary_2_t2814 * __this, KeyValuePair_2U5BU5D_t3807* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14270(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2814 *, KeyValuePair_2U5BU5D_t3807*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14270_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14272_gshared (Dictionary_2_t2814 * __this, KeyValuePair_2_t2815  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14272(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2814 *, KeyValuePair_2_t2815 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14272_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14274_gshared (Dictionary_2_t2814 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14274(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2814 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14274_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14276_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14276(__this, method) (( Object_t * (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14276_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14278_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14278(__this, method) (( Object_t* (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14278_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14280_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14280(__this, method) (( Object_t * (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14280_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14282_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14282(__this, method) (( int32_t (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_get_Count_m14282_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14284_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14284(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m14284_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14286_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2814 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_set_Item_m14286_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14288_gshared (Dictionary_2_t2814 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14288(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2814 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14288_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14290_gshared (Dictionary_2_t2814 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14290(__this, ___size, method) (( void (*) (Dictionary_2_t2814 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14290_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14292_gshared (Dictionary_2_t2814 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14292(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2814 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14292_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2815  Dictionary_2_make_pair_m14294_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14294(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2815  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_make_pair_m14294_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14296_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m14296(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_key_m14296_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14298_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14298(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_value_m14298_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14300_gshared (Dictionary_2_t2814 * __this, KeyValuePair_2U5BU5D_t3807* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14300(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2814 *, KeyValuePair_2U5BU5D_t3807*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14300_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14302_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14302(__this, method) (( void (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_Resize_m14302_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14303_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m14303(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2814 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_Add_m14303_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14305_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14305(__this, method) (( void (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_Clear_m14305_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14307_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14307(__this, ___key, method) (( bool (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m14307_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14309_gshared (Dictionary_2_t2814 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14309(__this, ___value, method) (( bool (*) (Dictionary_2_t2814 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m14309_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14311_gshared (Dictionary_2_t2814 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14311(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2814 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m14311_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14313_gshared (Dictionary_2_t2814 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14313(__this, ___sender, method) (( void (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14313_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14315_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14315(__this, ___key, method) (( bool (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m14315_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14316_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14316(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2814 *, Object_t *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m14316_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2817 * Dictionary_2_get_Keys_m14318_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m14318(__this, method) (( KeyCollection_t2817 * (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_get_Keys_m14318_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2821 * Dictionary_2_get_Values_m14320_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14320(__this, method) (( ValueCollection_t2821 * (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_get_Values_m14320_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14322_gshared (Dictionary_2_t2814 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14322(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14322_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14324_gshared (Dictionary_2_t2814 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14324(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2814 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14324_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14326_gshared (Dictionary_2_t2814 * __this, KeyValuePair_2_t2815  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14326(__this, ___pair, method) (( bool (*) (Dictionary_2_t2814 *, KeyValuePair_2_t2815 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14326_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2819  Dictionary_2_GetEnumerator_m14328_gshared (Dictionary_2_t2814 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14328(__this, method) (( Enumerator_t2819  (*) (Dictionary_2_t2814 *, MethodInfo*))Dictionary_2_GetEnumerator_m14328_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m14330_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14330(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14330_gshared)(__this /* static, unused */, ___key, ___value, method)
