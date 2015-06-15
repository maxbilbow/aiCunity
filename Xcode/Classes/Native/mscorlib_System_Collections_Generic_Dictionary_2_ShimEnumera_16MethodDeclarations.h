#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3354;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3340;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20118_gshared (ShimEnumerator_t3354 * __this, Dictionary_2_t3340 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20118(__this, ___host, method) (( void (*) (ShimEnumerator_t3354 *, Dictionary_2_t3340 *, MethodInfo*))ShimEnumerator__ctor_m20118_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20119_gshared (ShimEnumerator_t3354 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20119(__this, method) (( bool (*) (ShimEnumerator_t3354 *, MethodInfo*))ShimEnumerator_MoveNext_m20119_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m20120_gshared (ShimEnumerator_t3354 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20120(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t3354 *, MethodInfo*))ShimEnumerator_get_Entry_m20120_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20121_gshared (ShimEnumerator_t3354 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20121(__this, method) (( Object_t * (*) (ShimEnumerator_t3354 *, MethodInfo*))ShimEnumerator_get_Key_m20121_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20122_gshared (ShimEnumerator_t3354 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20122(__this, method) (( Object_t * (*) (ShimEnumerator_t3354 *, MethodInfo*))ShimEnumerator_get_Value_m20122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20123_gshared (ShimEnumerator_t3354 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20123(__this, method) (( Object_t * (*) (ShimEnumerator_t3354 *, MethodInfo*))ShimEnumerator_get_Current_m20123_gshared)(__this, method)
