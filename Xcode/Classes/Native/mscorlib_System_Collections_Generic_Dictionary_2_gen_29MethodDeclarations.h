#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1267;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3802;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t3666;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t3670;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2945;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t3989;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3990;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t3991;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m22888_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m22888(__this, method) (( void (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2__ctor_m22888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22889_gshared (Dictionary_2_t1267 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m22889(__this, ___comparer, method) (( void (*) (Dictionary_2_t1267 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m22889_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22890_gshared (Dictionary_2_t1267 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m22890(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1267 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m22890_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22891_gshared (Dictionary_2_t1267 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m22891(__this, ___capacity, method) (( void (*) (Dictionary_2_t1267 *, int32_t, MethodInfo*))Dictionary_2__ctor_m22891_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22892_gshared (Dictionary_2_t1267 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m22892(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1267 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m22892_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22893_gshared (Dictionary_2_t1267 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m22893(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1267 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m22893_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22894_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22894(__this, method) (( Object_t* (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22894_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22895_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22895(__this, method) (( Object_t* (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22895_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22896_gshared (Dictionary_2_t1267 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22896(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1267 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22896_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22897_gshared (Dictionary_2_t1267 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22897(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1267 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22897_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22898_gshared (Dictionary_2_t1267 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22898(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1267 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22898_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m22899_gshared (Dictionary_2_t1267 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m22899(__this, ___key, method) (( bool (*) (Dictionary_2_t1267 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m22899_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22900_gshared (Dictionary_2_t1267 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22900(__this, ___key, method) (( void (*) (Dictionary_2_t1267 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22900_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22901_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22901(__this, method) (( bool (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22902_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22902(__this, method) (( Object_t * (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22903_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22903(__this, method) (( bool (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22904_gshared (Dictionary_2_t1267 * __this, KeyValuePair_2_t3664  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22904(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1267 *, KeyValuePair_2_t3664 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22904_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22905_gshared (Dictionary_2_t1267 * __this, KeyValuePair_2_t3664  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22905(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1267 *, KeyValuePair_2_t3664 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22905_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22906_gshared (Dictionary_2_t1267 * __this, KeyValuePair_2U5BU5D_t3990* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22906(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1267 *, KeyValuePair_2U5BU5D_t3990*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22906_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22907_gshared (Dictionary_2_t1267 * __this, KeyValuePair_2_t3664  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22907(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1267 *, KeyValuePair_2_t3664 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22907_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22908_gshared (Dictionary_2_t1267 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22908(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1267 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22908_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22909_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22909(__this, method) (( Object_t * (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22909_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22910_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22910(__this, method) (( Object_t* (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22910_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22911_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22911(__this, method) (( Object_t * (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22911_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22912_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m22912(__this, method) (( int32_t (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_get_Count_m22912_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m22913_gshared (Dictionary_2_t1267 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m22913(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1267 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m22913_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22914_gshared (Dictionary_2_t1267 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m22914(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1267 *, int32_t, int32_t, MethodInfo*))Dictionary_2_set_Item_m22914_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22915_gshared (Dictionary_2_t1267 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m22915(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1267 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m22915_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22916_gshared (Dictionary_2_t1267 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m22916(__this, ___size, method) (( void (*) (Dictionary_2_t1267 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m22916_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22917_gshared (Dictionary_2_t1267 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22917(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1267 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m22917_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3664  Dictionary_2_make_pair_m22918_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m22918(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3664  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_make_pair_m22918_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m22919_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m22919(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_key_m22919_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m22920_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m22920(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_value_m22920_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22921_gshared (Dictionary_2_t1267 * __this, KeyValuePair_2U5BU5D_t3990* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m22921(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1267 *, KeyValuePair_2U5BU5D_t3990*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m22921_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m22922_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m22922(__this, method) (( void (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_Resize_m22922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22923_gshared (Dictionary_2_t1267 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m22923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1267 *, int32_t, int32_t, MethodInfo*))Dictionary_2_Add_m22923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m22924_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m22924(__this, method) (( void (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_Clear_m22924_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22925_gshared (Dictionary_2_t1267 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m22925(__this, ___key, method) (( bool (*) (Dictionary_2_t1267 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m22925_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22926_gshared (Dictionary_2_t1267 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m22926(__this, ___value, method) (( bool (*) (Dictionary_2_t1267 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m22926_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22927_gshared (Dictionary_2_t1267 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m22927(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1267 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m22927_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22928_gshared (Dictionary_2_t1267 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22928(__this, ___sender, method) (( void (*) (Dictionary_2_t1267 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m22928_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22929_gshared (Dictionary_2_t1267 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m22929(__this, ___key, method) (( bool (*) (Dictionary_2_t1267 *, int32_t, MethodInfo*))Dictionary_2_Remove_m22929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22930_gshared (Dictionary_2_t1267 * __this, int32_t ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m22930(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1267 *, int32_t, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m22930_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t3666 * Dictionary_2_get_Keys_m22931_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m22931(__this, method) (( KeyCollection_t3666 * (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_get_Keys_m22931_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t3670 * Dictionary_2_get_Values_m22932_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m22932(__this, method) (( ValueCollection_t3670 * (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_get_Values_m22932_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m22933_gshared (Dictionary_2_t1267 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m22933(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1267 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m22933_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m22934_gshared (Dictionary_2_t1267 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m22934(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1267 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m22934_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22935_gshared (Dictionary_2_t1267 * __this, KeyValuePair_2_t3664  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22935(__this, ___pair, method) (( bool (*) (Dictionary_2_t1267 *, KeyValuePair_2_t3664 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22935_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3668  Dictionary_2_GetEnumerator_m22936_gshared (Dictionary_2_t1267 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22936(__this, method) (( Enumerator_t3668  (*) (Dictionary_2_t1267 *, MethodInfo*))Dictionary_2_GetEnumerator_m22936_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m22937_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22937(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22937_gshared)(__this /* static, unused */, ___key, ___value, method)
