#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2731;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2717;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13599_gshared (ShimEnumerator_t2731 * __this, Dictionary_2_t2717 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13599(__this, ___host, method) (( void (*) (ShimEnumerator_t2731 *, Dictionary_2_t2717 *, MethodInfo*))ShimEnumerator__ctor_m13599_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13600_gshared (ShimEnumerator_t2731 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13600(__this, method) (( bool (*) (ShimEnumerator_t2731 *, MethodInfo*))ShimEnumerator_MoveNext_m13600_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m13601_gshared (ShimEnumerator_t2731 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13601(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t2731 *, MethodInfo*))ShimEnumerator_get_Entry_m13601_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13602_gshared (ShimEnumerator_t2731 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13602(__this, method) (( Object_t * (*) (ShimEnumerator_t2731 *, MethodInfo*))ShimEnumerator_get_Key_m13602_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13603_gshared (ShimEnumerator_t2731 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13603(__this, method) (( Object_t * (*) (ShimEnumerator_t2731 *, MethodInfo*))ShimEnumerator_get_Value_m13603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13604_gshared (ShimEnumerator_t2731 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13604(__this, method) (( Object_t * (*) (ShimEnumerator_t2731 *, MethodInfo*))ShimEnumerator_get_Current_m13604_gshared)(__this, method)
