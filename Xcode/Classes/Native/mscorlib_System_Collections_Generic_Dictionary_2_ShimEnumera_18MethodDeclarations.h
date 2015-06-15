#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3417;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3403;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20724_gshared (ShimEnumerator_t3417 * __this, Dictionary_2_t3403 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20724(__this, ___host, method) (( void (*) (ShimEnumerator_t3417 *, Dictionary_2_t3403 *, MethodInfo*))ShimEnumerator__ctor_m20724_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20725_gshared (ShimEnumerator_t3417 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20725(__this, method) (( bool (*) (ShimEnumerator_t3417 *, MethodInfo*))ShimEnumerator_MoveNext_m20725_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m20726_gshared (ShimEnumerator_t3417 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20726(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t3417 *, MethodInfo*))ShimEnumerator_get_Entry_m20726_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20727_gshared (ShimEnumerator_t3417 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20727(__this, method) (( Object_t * (*) (ShimEnumerator_t3417 *, MethodInfo*))ShimEnumerator_get_Key_m20727_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20728_gshared (ShimEnumerator_t3417 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20728(__this, method) (( Object_t * (*) (ShimEnumerator_t3417 *, MethodInfo*))ShimEnumerator_get_Value_m20728_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20729_gshared (ShimEnumerator_t3417 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20729(__this, method) (( Object_t * (*) (ShimEnumerator_t3417 *, MethodInfo*))ShimEnumerator_get_Current_m20729_gshared)(__this, method)
