﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3472;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t814;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3470;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3772;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3773;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m21119_gshared (ThreadSafeDictionary_2_t3472 * __this, ThreadSafeDictionaryValueFactory_2_t3470 * ___valueFactory, MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m21119(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3472 *, ThreadSafeDictionaryValueFactory_2_t3470 *, MethodInfo*))ThreadSafeDictionary_2__ctor_m21119_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21121_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21121(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21121_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m21123_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m21123(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Get_m21123_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m21125_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m21125(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_AddValue_m21125_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m21127_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m21127(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Add_m21127_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m21129_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m21129(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_get_Keys_m21129_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m21131_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m21131(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Remove_m21131_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m21133_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m21133(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, Object_t **, MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m21133_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m21135_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m21135(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_get_Values_m21135_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m21137_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m21137(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_get_Item_m21137_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m21139_gshared (ThreadSafeDictionary_2_t3472 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m21139(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3472 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_set_Item_m21139_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m21141_gshared (ThreadSafeDictionary_2_t3472 * __this, KeyValuePair_2_t2622  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m21141(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3472 *, KeyValuePair_2_t2622 , MethodInfo*))ThreadSafeDictionary_2_Add_m21141_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m21143_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m21143(__this, method) (( void (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_Clear_m21143_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m21145_gshared (ThreadSafeDictionary_2_t3472 * __this, KeyValuePair_2_t2622  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m21145(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3472 *, KeyValuePair_2_t2622 , MethodInfo*))ThreadSafeDictionary_2_Contains_m21145_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m21147_gshared (ThreadSafeDictionary_2_t3472 * __this, KeyValuePair_2U5BU5D_t3772* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m21147(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3472 *, KeyValuePair_2U5BU5D_t3772*, int32_t, MethodInfo*))ThreadSafeDictionary_2_CopyTo_m21147_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m21149_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m21149(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_get_Count_m21149_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m21151_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m21151(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m21151_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m21153_gshared (ThreadSafeDictionary_2_t3472 * __this, KeyValuePair_2_t2622  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m21153(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3472 *, KeyValuePair_2_t2622 , MethodInfo*))ThreadSafeDictionary_2_Remove_m21153_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m21155_gshared (ThreadSafeDictionary_2_t3472 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m21155(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3472 *, MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m21155_gshared)(__this, method)
