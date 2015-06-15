#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3470;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t812;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3468;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3770;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3771;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m21108_gshared (ThreadSafeDictionary_2_t3470 * __this, ThreadSafeDictionaryValueFactory_2_t3468 * ___valueFactory, MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m21108(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3470 *, ThreadSafeDictionaryValueFactory_2_t3468 *, MethodInfo*))ThreadSafeDictionary_2__ctor_m21108_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21110_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21110(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21110_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m21112_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m21112(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Get_m21112_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m21114_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m21114(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_AddValue_m21114_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m21116_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m21116(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Add_m21116_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m21118_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m21118(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_get_Keys_m21118_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m21120_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m21120(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Remove_m21120_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m21122_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m21122(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, Object_t **, MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m21122_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m21124_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m21124(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_get_Values_m21124_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m21126_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m21126(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_get_Item_m21126_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m21128_gshared (ThreadSafeDictionary_2_t3470 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m21128(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3470 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_set_Item_m21128_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m21130_gshared (ThreadSafeDictionary_2_t3470 * __this, KeyValuePair_2_t2620  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m21130(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3470 *, KeyValuePair_2_t2620 , MethodInfo*))ThreadSafeDictionary_2_Add_m21130_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m21132_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m21132(__this, method) (( void (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_Clear_m21132_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m21134_gshared (ThreadSafeDictionary_2_t3470 * __this, KeyValuePair_2_t2620  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m21134(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3470 *, KeyValuePair_2_t2620 , MethodInfo*))ThreadSafeDictionary_2_Contains_m21134_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m21136_gshared (ThreadSafeDictionary_2_t3470 * __this, KeyValuePair_2U5BU5D_t3770* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m21136(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3470 *, KeyValuePair_2U5BU5D_t3770*, int32_t, MethodInfo*))ThreadSafeDictionary_2_CopyTo_m21136_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m21138_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m21138(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_get_Count_m21138_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m21140_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m21140(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m21140_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m21142_gshared (ThreadSafeDictionary_2_t3470 * __this, KeyValuePair_2_t2620  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m21142(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3470 *, KeyValuePair_2_t2620 , MethodInfo*))ThreadSafeDictionary_2_Remove_m21142_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m21144_gshared (ThreadSafeDictionary_2_t3470 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m21144(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m21144_gshared)(__this, method)
