#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2946;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3800;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t812;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2949;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2953;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2943;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t3834;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3835;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3836;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1151;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15676_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m15676(__this, method) (( void (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2__ctor_m15676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15678_gshared (Dictionary_2_t2946 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m15678(__this, ___comparer, method) (( void (*) (Dictionary_2_t2946 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m15678_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m15680_gshared (Dictionary_2_t2946 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m15680(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2946 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m15680_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15682_gshared (Dictionary_2_t2946 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m15682(__this, ___capacity, method) (( void (*) (Dictionary_2_t2946 *, int32_t, MethodInfo*))Dictionary_2__ctor_m15682_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15684_gshared (Dictionary_2_t2946 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m15684(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2946 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m15684_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15686_gshared (Dictionary_2_t2946 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m15686(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2946 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2__ctor_m15686_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15688_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15688(__this, method) (( Object_t* (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15688_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15690_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15690(__this, method) (( Object_t* (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15692_gshared (Dictionary_2_t2946 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15692(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15692_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15694_gshared (Dictionary_2_t2946 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15694(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2946 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15694_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15696_gshared (Dictionary_2_t2946 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15696(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2946 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15696_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15698_gshared (Dictionary_2_t2946 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15698(__this, ___key, method) (( bool (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15698_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15700_gshared (Dictionary_2_t2946 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15700(__this, ___key, method) (( void (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15700_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15702_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15702(__this, method) (( bool (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15704_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15704(__this, method) (( Object_t * (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15704_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15706_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15706(__this, method) (( bool (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15708_gshared (Dictionary_2_t2946 * __this, KeyValuePair_2_t2947  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15708(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2946 *, KeyValuePair_2_t2947 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15708_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15710_gshared (Dictionary_2_t2946 * __this, KeyValuePair_2_t2947  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15710(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2946 *, KeyValuePair_2_t2947 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15710_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15712_gshared (Dictionary_2_t2946 * __this, KeyValuePair_2U5BU5D_t3835* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15712(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2946 *, KeyValuePair_2U5BU5D_t3835*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15712_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15714_gshared (Dictionary_2_t2946 * __this, KeyValuePair_2_t2947  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15714(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2946 *, KeyValuePair_2_t2947 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15714_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15716_gshared (Dictionary_2_t2946 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2946 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15716_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15718_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15718(__this, method) (( Object_t * (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15718_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15720_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15720(__this, method) (( Object_t* (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15720_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15722_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15722(__this, method) (( Object_t * (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15722_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15724_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m15724(__this, method) (( int32_t (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_get_Count_m15724_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15726_gshared (Dictionary_2_t2946 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m15726(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2946 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m15726_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15728_gshared (Dictionary_2_t2946 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m15728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2946 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m15728_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15730_gshared (Dictionary_2_t2946 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m15730(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2946 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m15730_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15732_gshared (Dictionary_2_t2946 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m15732(__this, ___size, method) (( void (*) (Dictionary_2_t2946 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m15732_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15734_gshared (Dictionary_2_t2946 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15734(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2946 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m15734_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2947  Dictionary_2_make_pair_m15736_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m15736(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2947  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m15736_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m15738_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m15738(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m15738_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15740_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m15740(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m15740_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15742_gshared (Dictionary_2_t2946 * __this, KeyValuePair_2U5BU5D_t3835* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m15742(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2946 *, KeyValuePair_2U5BU5D_t3835*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m15742_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15744_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m15744(__this, method) (( void (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_Resize_m15744_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15745_gshared (Dictionary_2_t2946 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m15745(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2946 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m15745_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15746_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m15746(__this, method) (( void (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_Clear_m15746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15748_gshared (Dictionary_2_t2946 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m15748(__this, ___key, method) (( bool (*) (Dictionary_2_t2946 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m15748_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15750_gshared (Dictionary_2_t2946 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m15750(__this, ___value, method) (( bool (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m15750_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15752_gshared (Dictionary_2_t2946 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m15752(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2946 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2_GetObjectData_m15752_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15754_gshared (Dictionary_2_t2946 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15754(__this, ___sender, method) (( void (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m15754_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15755_gshared (Dictionary_2_t2946 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m15755(__this, ___key, method) (( bool (*) (Dictionary_2_t2946 *, int32_t, MethodInfo*))Dictionary_2_Remove_m15755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15756_gshared (Dictionary_2_t2946 * __this, int32_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m15756(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2946 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m15756_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2949 * Dictionary_2_get_Keys_m15758_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m15758(__this, method) (( KeyCollection_t2949 * (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_get_Keys_m15758_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2953 * Dictionary_2_get_Values_m15759_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m15759(__this, method) (( ValueCollection_t2953 * (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_get_Values_m15759_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m15761_gshared (Dictionary_2_t2946 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m15761(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m15761_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15763_gshared (Dictionary_2_t2946 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m15763(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2946 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m15763_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15765_gshared (Dictionary_2_t2946 * __this, KeyValuePair_2_t2947  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15765(__this, ___pair, method) (( bool (*) (Dictionary_2_t2946 *, KeyValuePair_2_t2947 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15765_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2951  Dictionary_2_GetEnumerator_m15766_gshared (Dictionary_2_t2946 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15766(__this, method) (( Enumerator_t2951  (*) (Dictionary_2_t2946 *, MethodInfo*))Dictionary_2_GetEnumerator_m15766_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1154  Dictionary_2_U3CCopyToU3Em__0_m15768_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15768(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1154  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15768_gshared)(__this /* static, unused */, ___key, ___value, method)
