#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3415;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3401;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20713_gshared (ShimEnumerator_t3415 * __this, Dictionary_2_t3401 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20713(__this, ___host, method) (( void (*) (ShimEnumerator_t3415 *, Dictionary_2_t3401 *, MethodInfo*))ShimEnumerator__ctor_m20713_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20714_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20714(__this, method) (( bool (*) (ShimEnumerator_t3415 *, MethodInfo*))ShimEnumerator_MoveNext_m20714_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m20715_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20715(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t3415 *, MethodInfo*))ShimEnumerator_get_Entry_m20715_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20716_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20716(__this, method) (( Object_t * (*) (ShimEnumerator_t3415 *, MethodInfo*))ShimEnumerator_get_Key_m20716_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20717_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20717(__this, method) (( Object_t * (*) (ShimEnumerator_t3415 *, MethodInfo*))ShimEnumerator_get_Value_m20717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20718_gshared (ShimEnumerator_t3415 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20718(__this, method) (( Object_t * (*) (ShimEnumerator_t3415 *, MethodInfo*))ShimEnumerator_get_Current_m20718_gshared)(__this, method)
