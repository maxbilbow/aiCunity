#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ShimEnumerator_t3546;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3537;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21906_gshared (ShimEnumerator_t3546 * __this, Dictionary_2_t3537 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m21906(__this, ___host, method) (( void (*) (ShimEnumerator_t3546 *, Dictionary_2_t3537 *, MethodInfo*))ShimEnumerator__ctor_m21906_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21907_gshared (ShimEnumerator_t3546 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m21907(__this, method) (( bool (*) (ShimEnumerator_t3546 *, MethodInfo*))ShimEnumerator_MoveNext_m21907_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m21908_gshared (ShimEnumerator_t3546 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m21908(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t3546 *, MethodInfo*))ShimEnumerator_get_Entry_m21908_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21909_gshared (ShimEnumerator_t3546 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m21909(__this, method) (( Object_t * (*) (ShimEnumerator_t3546 *, MethodInfo*))ShimEnumerator_get_Key_m21909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21910_gshared (ShimEnumerator_t3546 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m21910(__this, method) (( Object_t * (*) (ShimEnumerator_t3546 *, MethodInfo*))ShimEnumerator_get_Value_m21910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21911_gshared (ShimEnumerator_t3546 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m21911(__this, method) (( Object_t * (*) (ShimEnumerator_t3546 *, MethodInfo*))ShimEnumerator_get_Current_m21911_gshared)(__this, method)
