#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t3673;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1267;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23011_gshared (ShimEnumerator_t3673 * __this, Dictionary_2_t1267 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m23011(__this, ___host, method) (( void (*) (ShimEnumerator_t3673 *, Dictionary_2_t1267 *, MethodInfo*))ShimEnumerator__ctor_m23011_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23012_gshared (ShimEnumerator_t3673 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m23012(__this, method) (( bool (*) (ShimEnumerator_t3673 *, MethodInfo*))ShimEnumerator_MoveNext_m23012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m23013_gshared (ShimEnumerator_t3673 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m23013(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t3673 *, MethodInfo*))ShimEnumerator_get_Entry_m23013_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23014_gshared (ShimEnumerator_t3673 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m23014(__this, method) (( Object_t * (*) (ShimEnumerator_t3673 *, MethodInfo*))ShimEnumerator_get_Key_m23014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23015_gshared (ShimEnumerator_t3673 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m23015(__this, method) (( Object_t * (*) (ShimEnumerator_t3673 *, MethodInfo*))ShimEnumerator_get_Value_m23015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23016_gshared (ShimEnumerator_t3673 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m23016(__this, method) (( Object_t * (*) (ShimEnumerator_t3673 *, MethodInfo*))ShimEnumerator_get_Current_m23016_gshared)(__this, method)
