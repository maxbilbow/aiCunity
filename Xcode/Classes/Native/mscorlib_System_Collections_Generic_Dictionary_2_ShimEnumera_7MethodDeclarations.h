#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2957;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2946;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15846_gshared (ShimEnumerator_t2957 * __this, Dictionary_2_t2946 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m15846(__this, ___host, method) (( void (*) (ShimEnumerator_t2957 *, Dictionary_2_t2946 *, MethodInfo*))ShimEnumerator__ctor_m15846_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15847_gshared (ShimEnumerator_t2957 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m15847(__this, method) (( bool (*) (ShimEnumerator_t2957 *, MethodInfo*))ShimEnumerator_MoveNext_m15847_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m15848_gshared (ShimEnumerator_t2957 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m15848(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t2957 *, MethodInfo*))ShimEnumerator_get_Entry_m15848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15849_gshared (ShimEnumerator_t2957 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m15849(__this, method) (( Object_t * (*) (ShimEnumerator_t2957 *, MethodInfo*))ShimEnumerator_get_Key_m15849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15850_gshared (ShimEnumerator_t2957 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m15850(__this, method) (( Object_t * (*) (ShimEnumerator_t2957 *, MethodInfo*))ShimEnumerator_get_Value_m15850_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15851_gshared (ShimEnumerator_t2957 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m15851(__this, method) (( Object_t * (*) (ShimEnumerator_t2957 *, MethodInfo*))ShimEnumerator_get_Current_m15851_gshared)(__this, method)
