#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3535;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t812;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ICollection_1_t3963;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t3536;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ValueCollection_t3540;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2617;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t3966;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>[]
struct KeyValuePair_2U5BU5D_t3967;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IEnumerator_1_t3968;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1151;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
extern "C" void Dictionary_2__ctor_m21730_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m21730(__this, method) (( void (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2__ctor_m21730_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21732_gshared (Dictionary_2_t3535 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21732(__this, ___comparer, method) (( void (*) (Dictionary_2_t3535 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21732_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21734_gshared (Dictionary_2_t3535 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m21734(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3535 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21734_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21736_gshared (Dictionary_2_t3535 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m21736(__this, ___capacity, method) (( void (*) (Dictionary_2_t3535 *, int32_t, MethodInfo*))Dictionary_2__ctor_m21736_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21738_gshared (Dictionary_2_t3535 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21738(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3535 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m21738_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21740_gshared (Dictionary_2_t3535 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m21740(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3535 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2__ctor_m21740_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21742_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21742(__this, method) (( Object_t* (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21742_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21744_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21744(__this, method) (( Object_t* (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21744_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21746_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21746(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21746_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21748_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21748(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3535 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21748_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21750_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21750(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3535 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21750_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21752_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21752(__this, ___key, method) (( bool (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21752_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21754_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21754(__this, ___key, method) (( void (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21756_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21756(__this, method) (( bool (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21756_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21758_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21758(__this, method) (( Object_t * (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21760_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21760(__this, method) (( bool (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21760_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21762_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2_t3461  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21762(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3535 *, KeyValuePair_2_t3461 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21762_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21764_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2_t3461  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21764(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3535 *, KeyValuePair_2_t3461 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21764_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21766_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2U5BU5D_t3967* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21766(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3535 *, KeyValuePair_2U5BU5D_t3967*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21766_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21768_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2_t3461  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21768(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3535 *, KeyValuePair_2_t3461 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21768_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21770_gshared (Dictionary_2_t3535 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21770(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3535 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21770_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21772_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21772(__this, method) (( Object_t * (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21772_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21774_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21774(__this, method) (( Object_t* (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21774_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21776_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21776(__this, method) (( Object_t * (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21776_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21778_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m21778(__this, method) (( int32_t (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_get_Count_m21778_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Item(TKey)
extern "C" KeyValuePair_2_t938  Dictionary_2_get_Item_m21780_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m21780(__this, ___key, method) (( KeyValuePair_2_t938  (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m21780_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21782_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m21782(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3535 *, Object_t *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_set_Item_m21782_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21784_gshared (Dictionary_2_t3535 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m21784(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3535 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m21784_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21786_gshared (Dictionary_2_t3535 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m21786(__this, ___size, method) (( void (*) (Dictionary_2_t3535 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m21786_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21788_gshared (Dictionary_2_t3535 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21788(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3535 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m21788_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3461  Dictionary_2_make_pair_m21790_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m21790(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3461  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_make_pair_m21790_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21792_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m21792(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_pick_key_m21792_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t938  Dictionary_2_pick_value_m21794_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m21794(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t938  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_pick_value_m21794_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21796_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2U5BU5D_t3967* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m21796(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3535 *, KeyValuePair_2U5BU5D_t3967*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m21796_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Resize()
extern "C" void Dictionary_2_Resize_m21798_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m21798(__this, method) (( void (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_Resize_m21798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21800_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_Add_m21800(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3535 *, Object_t *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_Add_m21800_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Clear()
extern "C" void Dictionary_2_Clear_m21802_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m21802(__this, method) (( void (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_Clear_m21802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21804_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m21804(__this, ___key, method) (( bool (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m21804_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21806_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m21806(__this, ___value, method) (( bool (*) (Dictionary_2_t3535 *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_ContainsValue_m21806_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21808_gshared (Dictionary_2_t3535 * __this, SerializationInfo_t871 * ___info, StreamingContext_t872  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m21808(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3535 *, SerializationInfo_t871 *, StreamingContext_t872 , MethodInfo*))Dictionary_2_GetObjectData_m21808_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21810_gshared (Dictionary_2_t3535 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21810(__this, ___sender, method) (( void (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m21810_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21812_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m21812(__this, ___key, method) (( bool (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m21812_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21814_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, KeyValuePair_2_t938 * ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m21814(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3535 *, Object_t *, KeyValuePair_2_t938 *, MethodInfo*))Dictionary_2_TryGetValue_m21814_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Keys()
extern "C" KeyCollection_t3536 * Dictionary_2_get_Keys_m21816_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m21816(__this, method) (( KeyCollection_t3536 * (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_get_Keys_m21816_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Values()
extern "C" ValueCollection_t3540 * Dictionary_2_get_Values_m21818_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m21818(__this, method) (( ValueCollection_t3540 * (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_get_Values_m21818_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21820_gshared (Dictionary_2_t3535 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m21820(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m21820_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t938  Dictionary_2_ToTValue_m21822_gshared (Dictionary_2_t3535 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m21822(__this, ___value, method) (( KeyValuePair_2_t938  (*) (Dictionary_2_t3535 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m21822_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21824_gshared (Dictionary_2_t3535 * __this, KeyValuePair_2_t3461  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21824(__this, ___pair, method) (( bool (*) (Dictionary_2_t3535 *, KeyValuePair_2_t3461 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21824_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t3538  Dictionary_2_GetEnumerator_m21826_gshared (Dictionary_2_t3535 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21826(__this, method) (( Enumerator_t3538  (*) (Dictionary_2_t3535 *, MethodInfo*))Dictionary_2_GetEnumerator_m21826_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1154  Dictionary_2_U3CCopyToU3Em__0_m21828_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t938  ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21828(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1154  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t938 , MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21828_gshared)(__this /* static, unused */, ___key, ___value, method)
