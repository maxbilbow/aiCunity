#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t86;
// System.Collections.Generic.ICollection`1<UnityEngine.Camera>
struct ICollection_1_t3782;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t19;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>
struct KeyCollection_t2759;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>
struct ValueCollection_t2762;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t2714;
// System.Collections.Generic.IDictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct IDictionary_2_t3794;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>[]
struct KeyValuePair_2U5BU5D_t3795;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>>
struct IEnumerator_1_t3796;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#define Dictionary_2__ctor_m873(__this, method) (( void (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2__ctor_m12598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13742(__this, ___comparer, method) (( void (*) (Dictionary_2_t86 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12600_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m13743(__this, ___dictionary, method) (( void (*) (Dictionary_2_t86 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12602_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Int32)
#define Dictionary_2__ctor_m13744(__this, ___capacity, method) (( void (*) (Dictionary_2_t86 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12604_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13745(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t86 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12606_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m13746(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t86 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m12608_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13747(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12610_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13748(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12612_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13749(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12614_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13750(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12616_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m13751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12618_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m13752(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12620_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m13753(__this, ___key, method) (( void (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12622_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13754(__this, method) (( bool (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13755(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12626_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13756(__this, method) (( bool (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13757(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12630_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13758(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12632_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13759(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2U5BU5D_t3795*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12634_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13760(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12636_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13761(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12638_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13762(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12640_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13763(__this, method) (( Object_t* (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12642_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13764(__this, method) (( Object_t * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Count()
#define Dictionary_2_get_Count_m13765(__this, method) (( int32_t (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_get_Count_m12646_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Item(TKey)
#define Dictionary_2_get_Item_m13766(__this, ___key, method) (( Camera_t19 * (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_get_Item_m12647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m902(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_set_Item_m12649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m13767(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t86 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12651_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m13768(__this, ___size, method) (( void (*) (Dictionary_2_t86 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12653_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m13769(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12655_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m13770(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t210  (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_make_pair_m12657_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m13771(__this /* static, unused */, ___key, ___value, method) (( Camera_t19 * (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_pick_key_m12659_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m13772(__this /* static, unused */, ___key, ___value, method) (( Camera_t19 * (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_pick_value_m12661_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m13773(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t86 *, KeyValuePair_2U5BU5D_t3795*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12663_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Resize()
#define Dictionary_2_Resize_m13774(__this, method) (( void (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_Resize_m12665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Add(TKey,TValue)
#define Dictionary_2_Add_m13775(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t86 *, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_Add_m12666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Clear()
#define Dictionary_2_Clear_m881(__this, method) (( void (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_Clear_m12668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m13776(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_ContainsKey_m12669_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m13777(__this, ___value, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_ContainsValue_m12671_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m13778(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t86 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m12673_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m13779(__this, ___sender, method) (( void (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12675_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Remove(TKey)
#define Dictionary_2_Remove_m13780(__this, ___key, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, MethodInfo*))Dictionary_2_Remove_m12676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m900(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t86 *, Camera_t19 *, Camera_t19 **, MethodInfo*))Dictionary_2_TryGetValue_m12678_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Keys()
#define Dictionary_2_get_Keys_m13781(__this, method) (( KeyCollection_t2759 * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_get_Keys_m12680_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::get_Values()
#define Dictionary_2_get_Values_m13782(__this, method) (( ValueCollection_t2762 * (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_get_Values_m12682_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m13783(__this, ___key, method) (( Camera_t19 * (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12684_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m13784(__this, ___value, method) (( Camera_t19 * (*) (Dictionary_2_t86 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12686_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m13785(__this, ___pair, method) (( bool (*) (Dictionary_2_t86 *, KeyValuePair_2_t210 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12688_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m907(__this, method) (( Enumerator_t209  (*) (Dictionary_2_t86 *, MethodInfo*))Dictionary_2_GetEnumerator_m12690_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m13786(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Camera_t19 *, Camera_t19 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12692_gshared)(__this /* static, unused */, ___key, ___value, method)
