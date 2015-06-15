#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3342;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3922;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3348;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3352;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2619;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t3926;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3927;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t3928;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m19939_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m19939(__this, method) (( void (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2__ctor_m19939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19941_gshared (Dictionary_2_t3342 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m19941(__this, ___comparer, method) (( void (*) (Dictionary_2_t3342 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m19941_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19943_gshared (Dictionary_2_t3342 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m19943(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3342 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m19943_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19945_gshared (Dictionary_2_t3342 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m19945(__this, ___capacity, method) (( void (*) (Dictionary_2_t3342 *, int32_t, MethodInfo*))Dictionary_2__ctor_m19945_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19947_gshared (Dictionary_2_t3342 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m19947(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3342 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m19947_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19949_gshared (Dictionary_2_t3342 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m19949(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3342 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m19949_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19951_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19951(__this, method) (( Object_t* (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19951_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19953_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19953(__this, method) (( Object_t* (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19953_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19955_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19955(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19955_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19957_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19957(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3342 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19957_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19959_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19959(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3342 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19959_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19961_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19961(__this, ___key, method) (( bool (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19961_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19963_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19963(__this, ___key, method) (( void (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19963_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19965_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19965(__this, method) (( bool (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19965_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19967_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19967(__this, method) (( Object_t * (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19967_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19969_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19969(__this, method) (( bool (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19969_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19971_gshared (Dictionary_2_t3342 * __this, KeyValuePair_2_t3343  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19971(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3342 *, KeyValuePair_2_t3343 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19971_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19973_gshared (Dictionary_2_t3342 * __this, KeyValuePair_2_t3343  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19973(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3342 *, KeyValuePair_2_t3343 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19973_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19975_gshared (Dictionary_2_t3342 * __this, KeyValuePair_2U5BU5D_t3927* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19975(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3342 *, KeyValuePair_2U5BU5D_t3927*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19975_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19977_gshared (Dictionary_2_t3342 * __this, KeyValuePair_2_t3343  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19977(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3342 *, KeyValuePair_2_t3343 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19977_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19979_gshared (Dictionary_2_t3342 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19979(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3342 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19979_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19981_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19981(__this, method) (( Object_t * (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19981_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19983_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19983(__this, method) (( Object_t* (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19983_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19985_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19985(__this, method) (( Object_t * (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19985_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19986_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m19986(__this, method) (( int32_t (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_get_Count_m19986_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m19988_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m19988(__this, ___key, method) (( int64_t (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m19988_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19990_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m19990(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3342 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_set_Item_m19990_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19992_gshared (Dictionary_2_t3342 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m19992(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3342 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m19992_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19994_gshared (Dictionary_2_t3342 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m19994(__this, ___size, method) (( void (*) (Dictionary_2_t3342 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m19994_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19996_gshared (Dictionary_2_t3342 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19996(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3342 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m19996_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3343  Dictionary_2_make_pair_m19998_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m19998(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3343  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_make_pair_m19998_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20000_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m20000(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_key_m20000_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m20002_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m20002(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_value_m20002_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20004_gshared (Dictionary_2_t3342 * __this, KeyValuePair_2U5BU5D_t3927* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m20004(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3342 *, KeyValuePair_2U5BU5D_t3927*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20004_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m20006_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m20006(__this, method) (( void (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_Resize_m20006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20008_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m20008(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3342 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_Add_m20008_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m20010_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m20010(__this, method) (( void (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_Clear_m20010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20012_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m20012(__this, ___key, method) (( bool (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m20012_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20014_gshared (Dictionary_2_t3342 * __this, int64_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m20014(__this, ___value, method) (( bool (*) (Dictionary_2_t3342 *, int64_t, MethodInfo*))Dictionary_2_ContainsValue_m20014_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20016_gshared (Dictionary_2_t3342 * __this, SerializationInfo_t873 * ___info, StreamingContext_t874  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m20016(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3342 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m20016_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20018_gshared (Dictionary_2_t3342 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20018(__this, ___sender, method) (( void (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20018_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20020_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m20020(__this, ___key, method) (( bool (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m20020_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20022_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, int64_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m20022(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3342 *, Object_t *, int64_t*, MethodInfo*))Dictionary_2_TryGetValue_m20022_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3348 * Dictionary_2_get_Keys_m20024_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m20024(__this, method) (( KeyCollection_t3348 * (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_get_Keys_m20024_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3352 * Dictionary_2_get_Values_m20026_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m20026(__this, method) (( ValueCollection_t3352 * (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_get_Values_m20026_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20028_gshared (Dictionary_2_t3342 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m20028(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20028_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m20030_gshared (Dictionary_2_t3342 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m20030(__this, ___value, method) (( int64_t (*) (Dictionary_2_t3342 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20030_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20032_gshared (Dictionary_2_t3342 * __this, KeyValuePair_2_t3343  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20032(__this, ___pair, method) (( bool (*) (Dictionary_2_t3342 *, KeyValuePair_2_t3343 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20032_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3350  Dictionary_2_GetEnumerator_m20034_gshared (Dictionary_2_t3342 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20034(__this, method) (( Enumerator_t3350  (*) (Dictionary_2_t3342 *, MethodInfo*))Dictionary_2_GetEnumerator_m20034_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1156  Dictionary_2_U3CCopyToU3Em__0_m20036_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20036(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20036_gshared)(__this /* static, unused */, ___key, ___value, method)
