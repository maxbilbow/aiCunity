#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2729;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2715;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13588_gshared (ShimEnumerator_t2729 * __this, Dictionary_2_t2715 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13588(__this, ___host, method) (( void (*) (ShimEnumerator_t2729 *, Dictionary_2_t2715 *, MethodInfo*))ShimEnumerator__ctor_m13588_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13589_gshared (ShimEnumerator_t2729 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13589(__this, method) (( bool (*) (ShimEnumerator_t2729 *, MethodInfo*))ShimEnumerator_MoveNext_m13589_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m13590_gshared (ShimEnumerator_t2729 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13590(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t2729 *, MethodInfo*))ShimEnumerator_get_Entry_m13590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13591_gshared (ShimEnumerator_t2729 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13591(__this, method) (( Object_t * (*) (ShimEnumerator_t2729 *, MethodInfo*))ShimEnumerator_get_Key_m13591_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13592_gshared (ShimEnumerator_t2729 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13592(__this, method) (( Object_t * (*) (ShimEnumerator_t2729 *, MethodInfo*))ShimEnumerator_get_Value_m13592_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13593_gshared (ShimEnumerator_t2729 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13593(__this, method) (( Object_t * (*) (ShimEnumerator_t2729 *, MethodInfo*))ShimEnumerator_get_Current_m13593_gshared)(__this, method)
