#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2641;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2621;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12816_gshared (ShimEnumerator_t2641 * __this, Dictionary_2_t2621 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m12816(__this, ___host, method) (( void (*) (ShimEnumerator_t2641 *, Dictionary_2_t2621 *, MethodInfo*))ShimEnumerator__ctor_m12816_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12817_gshared (ShimEnumerator_t2641 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m12817(__this, method) (( bool (*) (ShimEnumerator_t2641 *, MethodInfo*))ShimEnumerator_MoveNext_m12817_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m12818_gshared (ShimEnumerator_t2641 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m12818(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t2641 *, MethodInfo*))ShimEnumerator_get_Entry_m12818_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12819_gshared (ShimEnumerator_t2641 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m12819(__this, method) (( Object_t * (*) (ShimEnumerator_t2641 *, MethodInfo*))ShimEnumerator_get_Key_m12819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12820_gshared (ShimEnumerator_t2641 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m12820(__this, method) (( Object_t * (*) (ShimEnumerator_t2641 *, MethodInfo*))ShimEnumerator_get_Value_m12820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12821_gshared (ShimEnumerator_t2641 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m12821(__this, method) (( Object_t * (*) (ShimEnumerator_t2641 *, MethodInfo*))ShimEnumerator_get_Current_m12821_gshared)(__this, method)
