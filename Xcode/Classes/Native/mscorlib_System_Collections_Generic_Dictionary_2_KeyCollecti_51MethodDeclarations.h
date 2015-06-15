#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t3538;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3537;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t246;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Object[]
struct ObjectU5BU5D_t194;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_52.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m21840_gshared (KeyCollection_t3538 * __this, Dictionary_2_t3537 * ___dictionary, MethodInfo* method);
#define KeyCollection__ctor_m21840(__this, ___dictionary, method) (( void (*) (KeyCollection_t3538 *, Dictionary_2_t3537 *, MethodInfo*))KeyCollection__ctor_m21840_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21841_gshared (KeyCollection_t3538 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21841(__this, ___item, method) (( void (*) (KeyCollection_t3538 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21841_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21842_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21842(__this, method) (( void (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21842_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21843_gshared (KeyCollection_t3538 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21843(__this, ___item, method) (( bool (*) (KeyCollection_t3538 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21843_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21844_gshared (KeyCollection_t3538 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21844(__this, ___item, method) (( bool (*) (KeyCollection_t3538 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21844_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21845_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21845(__this, method) (( Object_t* (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m21846_gshared (KeyCollection_t3538 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m21846(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3538 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21846_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21847_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21847(__this, method) (( Object_t * (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21848_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21848(__this, method) (( bool (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21848_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21849_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21849(__this, method) (( bool (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m21850_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m21850(__this, method) (( Object_t * (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21850_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m21851_gshared (KeyCollection_t3538 * __this, ObjectU5BU5D_t194* ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_CopyTo_m21851(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3538 *, ObjectU5BU5D_t194*, int32_t, MethodInfo*))KeyCollection_CopyTo_m21851_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t3539  KeyCollection_GetEnumerator_m21852_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_GetEnumerator_m21852(__this, method) (( Enumerator_t3539  (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_GetEnumerator_m21852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m21853_gshared (KeyCollection_t3538 * __this, MethodInfo* method);
#define KeyCollection_get_Count_m21853(__this, method) (( int32_t (*) (KeyCollection_t3538 *, MethodInfo*))KeyCollection_get_Count_m21853_gshared)(__this, method)
