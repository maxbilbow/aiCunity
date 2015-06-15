#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2639;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2619;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12805_gshared (ShimEnumerator_t2639 * __this, Dictionary_2_t2619 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m12805(__this, ___host, method) (( void (*) (ShimEnumerator_t2639 *, Dictionary_2_t2619 *, MethodInfo*))ShimEnumerator__ctor_m12805_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12806_gshared (ShimEnumerator_t2639 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m12806(__this, method) (( bool (*) (ShimEnumerator_t2639 *, MethodInfo*))ShimEnumerator_MoveNext_m12806_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m12807_gshared (ShimEnumerator_t2639 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m12807(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t2639 *, MethodInfo*))ShimEnumerator_get_Entry_m12807_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12808_gshared (ShimEnumerator_t2639 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m12808(__this, method) (( Object_t * (*) (ShimEnumerator_t2639 *, MethodInfo*))ShimEnumerator_get_Key_m12808_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12809_gshared (ShimEnumerator_t2639 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m12809(__this, method) (( Object_t * (*) (ShimEnumerator_t2639 *, MethodInfo*))ShimEnumerator_get_Value_m12809_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12810_gshared (ShimEnumerator_t2639 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m12810(__this, method) (( Object_t * (*) (ShimEnumerator_t2639 *, MethodInfo*))ShimEnumerator_get_Current_m12810_gshared)(__this, method)
