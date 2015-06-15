#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ShimEnumerator_t3544;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3535;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21895_gshared (ShimEnumerator_t3544 * __this, Dictionary_2_t3535 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m21895(__this, ___host, method) (( void (*) (ShimEnumerator_t3544 *, Dictionary_2_t3535 *, MethodInfo*))ShimEnumerator__ctor_m21895_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21896_gshared (ShimEnumerator_t3544 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m21896(__this, method) (( bool (*) (ShimEnumerator_t3544 *, MethodInfo*))ShimEnumerator_MoveNext_m21896_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m21897_gshared (ShimEnumerator_t3544 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m21897(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t3544 *, MethodInfo*))ShimEnumerator_get_Entry_m21897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21898_gshared (ShimEnumerator_t3544 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m21898(__this, method) (( Object_t * (*) (ShimEnumerator_t3544 *, MethodInfo*))ShimEnumerator_get_Key_m21898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21899_gshared (ShimEnumerator_t3544 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m21899(__this, method) (( Object_t * (*) (ShimEnumerator_t3544 *, MethodInfo*))ShimEnumerator_get_Value_m21899_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21900_gshared (ShimEnumerator_t3544 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m21900(__this, method) (( Object_t * (*) (ShimEnumerator_t3544 *, MethodInfo*))ShimEnumerator_get_Current_m21900_gshared)(__this, method)
