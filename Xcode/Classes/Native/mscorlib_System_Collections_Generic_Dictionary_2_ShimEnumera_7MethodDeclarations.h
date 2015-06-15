#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2959;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2948;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15857_gshared (ShimEnumerator_t2959 * __this, Dictionary_2_t2948 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m15857(__this, ___host, method) (( void (*) (ShimEnumerator_t2959 *, Dictionary_2_t2948 *, MethodInfo*))ShimEnumerator__ctor_m15857_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15858_gshared (ShimEnumerator_t2959 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m15858(__this, method) (( bool (*) (ShimEnumerator_t2959 *, MethodInfo*))ShimEnumerator_MoveNext_m15858_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m15859_gshared (ShimEnumerator_t2959 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m15859(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t2959 *, MethodInfo*))ShimEnumerator_get_Entry_m15859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15860_gshared (ShimEnumerator_t2959 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m15860(__this, method) (( Object_t * (*) (ShimEnumerator_t2959 *, MethodInfo*))ShimEnumerator_get_Key_m15860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15861_gshared (ShimEnumerator_t2959 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m15861(__this, method) (( Object_t * (*) (ShimEnumerator_t2959 *, MethodInfo*))ShimEnumerator_get_Value_m15861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15862_gshared (ShimEnumerator_t2959 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m15862(__this, method) (( Object_t * (*) (ShimEnumerator_t2959 *, MethodInfo*))ShimEnumerator_get_Current_m15862_gshared)(__this, method)
