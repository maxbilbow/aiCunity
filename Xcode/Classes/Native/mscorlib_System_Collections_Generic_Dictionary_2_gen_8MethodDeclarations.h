#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t406;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t3864;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ICollection_1_t3867;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t538;
// UnityEngine.Canvas
struct Canvas_t291;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyCollection_t3108;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t3112;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t3089;
// System.Collections.Generic.IDictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct IDictionary_2_t3868;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t3869;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct IEnumerator_1_t3870;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#define Dictionary_2__ctor_m2784(__this, method) (( void (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2__ctor_m12598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17215(__this, ___comparer, method) (( void (*) (Dictionary_2_t406 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12600_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17216(__this, ___dictionary, method) (( void (*) (Dictionary_2_t406 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12602_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17217(__this, ___capacity, method) (( void (*) (Dictionary_2_t406 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12604_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17218(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t406 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12606_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17219(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t406 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2__ctor_m12608_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17220(__this, method) (( Object_t* (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12610_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17221(__this, method) (( Object_t* (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12612_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17222(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t406 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12614_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17223(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t406 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12616_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t406 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12618_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17225(__this, ___key, method) (( bool (*) (Dictionary_2_t406 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12620_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17226(__this, ___key, method) (( void (*) (Dictionary_2_t406 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12622_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17227(__this, method) (( bool (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17228(__this, method) (( Object_t * (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12626_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17229(__this, method) (( bool (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17230(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t406 *, KeyValuePair_2_t3091 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12630_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17231(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t406 *, KeyValuePair_2_t3091 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12632_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17232(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t406 *, KeyValuePair_2U5BU5D_t3869*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12634_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17233(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t406 *, KeyValuePair_2_t3091 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12636_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17234(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t406 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12638_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17235(__this, method) (( Object_t * (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12640_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17236(__this, method) (( Object_t* (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12642_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17237(__this, method) (( Object_t * (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Count()
#define Dictionary_2_get_Count_m17238(__this, method) (( int32_t (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_get_Count_m12646_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Item(TKey)
#define Dictionary_2_get_Item_m17239(__this, ___key, method) (( IndexedSet_1_t538 * (*) (Dictionary_2_t406 *, Canvas_t291 *, MethodInfo*))Dictionary_2_get_Item_m12647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17240(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t406 *, Canvas_t291 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_set_Item_m12649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17241(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t406 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12651_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17242(__this, ___size, method) (( void (*) (Dictionary_2_t406 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12653_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17243(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t406 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12655_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17244(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3091  (*) (Object_t * /* static, unused */, Canvas_t291 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_make_pair_m12657_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17245(__this /* static, unused */, ___key, ___value, method) (( Canvas_t291 * (*) (Object_t * /* static, unused */, Canvas_t291 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_pick_key_m12659_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17246(__this /* static, unused */, ___key, ___value, method) (( IndexedSet_1_t538 * (*) (Object_t * /* static, unused */, Canvas_t291 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_pick_value_m12661_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17247(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t406 *, KeyValuePair_2U5BU5D_t3869*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12663_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Resize()
#define Dictionary_2_Resize_m17248(__this, method) (( void (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_Resize_m12665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Add(TKey,TValue)
#define Dictionary_2_Add_m2788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t406 *, Canvas_t291 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_Add_m12666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Clear()
#define Dictionary_2_Clear_m17249(__this, method) (( void (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_Clear_m12668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17250(__this, ___key, method) (( bool (*) (Dictionary_2_t406 *, Canvas_t291 *, MethodInfo*))Dictionary_2_ContainsKey_m12669_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17251(__this, ___value, method) (( bool (*) (Dictionary_2_t406 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_ContainsValue_m12671_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17252(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t406 *, SerializationInfo_t873 *, StreamingContext_t874 , MethodInfo*))Dictionary_2_GetObjectData_m12673_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17253(__this, ___sender, method) (( void (*) (Dictionary_2_t406 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12675_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Remove(TKey)
#define Dictionary_2_Remove_m17254(__this, ___key, method) (( bool (*) (Dictionary_2_t406 *, Canvas_t291 *, MethodInfo*))Dictionary_2_Remove_m12676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m2785(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t406 *, Canvas_t291 *, IndexedSet_1_t538 **, MethodInfo*))Dictionary_2_TryGetValue_m12678_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Keys()
#define Dictionary_2_get_Keys_m17255(__this, method) (( KeyCollection_t3108 * (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_get_Keys_m12680_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Values()
#define Dictionary_2_get_Values_m17256(__this, method) (( ValueCollection_t3112 * (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_get_Values_m12682_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17257(__this, ___key, method) (( Canvas_t291 * (*) (Dictionary_2_t406 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12684_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17258(__this, ___value, method) (( IndexedSet_1_t538 * (*) (Dictionary_2_t406 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12686_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17259(__this, ___pair, method) (( bool (*) (Dictionary_2_t406 *, KeyValuePair_2_t3091 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12688_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17260(__this, method) (( Enumerator_t3110  (*) (Dictionary_2_t406 *, MethodInfo*))Dictionary_2_GetEnumerator_m12690_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17261(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1156  (*) (Object_t * /* static, unused */, Canvas_t291 *, IndexedSet_1_t538 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12692_gshared)(__this /* static, unused */, ___key, ___value, method)
