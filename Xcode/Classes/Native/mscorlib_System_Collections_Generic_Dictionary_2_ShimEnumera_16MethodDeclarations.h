#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3356;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3342;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20129_gshared (ShimEnumerator_t3356 * __this, Dictionary_2_t3342 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20129(__this, ___host, method) (( void (*) (ShimEnumerator_t3356 *, Dictionary_2_t3342 *, MethodInfo*))ShimEnumerator__ctor_m20129_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20130_gshared (ShimEnumerator_t3356 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20130(__this, method) (( bool (*) (ShimEnumerator_t3356 *, MethodInfo*))ShimEnumerator_MoveNext_m20130_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m20131_gshared (ShimEnumerator_t3356 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20131(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t3356 *, MethodInfo*))ShimEnumerator_get_Entry_m20131_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20132_gshared (ShimEnumerator_t3356 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20132(__this, method) (( Object_t * (*) (ShimEnumerator_t3356 *, MethodInfo*))ShimEnumerator_get_Key_m20132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20133_gshared (ShimEnumerator_t3356 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20133(__this, method) (( Object_t * (*) (ShimEnumerator_t3356 *, MethodInfo*))ShimEnumerator_get_Value_m20133_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20134_gshared (ShimEnumerator_t3356 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20134(__this, method) (( Object_t * (*) (ShimEnumerator_t3356 *, MethodInfo*))ShimEnumerator_get_Current_m20134_gshared)(__this, method)
