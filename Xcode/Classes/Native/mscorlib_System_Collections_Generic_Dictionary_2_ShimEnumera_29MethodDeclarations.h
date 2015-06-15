#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t3671;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1265;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23000_gshared (ShimEnumerator_t3671 * __this, Dictionary_2_t1265 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m23000(__this, ___host, method) (( void (*) (ShimEnumerator_t3671 *, Dictionary_2_t1265 *, MethodInfo*))ShimEnumerator__ctor_m23000_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23001_gshared (ShimEnumerator_t3671 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m23001(__this, method) (( bool (*) (ShimEnumerator_t3671 *, MethodInfo*))ShimEnumerator_MoveNext_m23001_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m23002_gshared (ShimEnumerator_t3671 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m23002(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t3671 *, MethodInfo*))ShimEnumerator_get_Entry_m23002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23003_gshared (ShimEnumerator_t3671 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m23003(__this, method) (( Object_t * (*) (ShimEnumerator_t3671 *, MethodInfo*))ShimEnumerator_get_Key_m23003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23004_gshared (ShimEnumerator_t3671 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m23004(__this, method) (( Object_t * (*) (ShimEnumerator_t3671 *, MethodInfo*))ShimEnumerator_get_Value_m23004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23005_gshared (ShimEnumerator_t3671 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m23005(__this, method) (( Object_t * (*) (ShimEnumerator_t3671 *, MethodInfo*))ShimEnumerator_get_Current_m23005_gshared)(__this, method)
