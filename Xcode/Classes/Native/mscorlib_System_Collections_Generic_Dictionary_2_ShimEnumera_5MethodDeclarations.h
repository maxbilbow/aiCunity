#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2823;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2812;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14397_gshared (ShimEnumerator_t2823 * __this, Dictionary_2_t2812 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14397(__this, ___host, method) (( void (*) (ShimEnumerator_t2823 *, Dictionary_2_t2812 *, MethodInfo*))ShimEnumerator__ctor_m14397_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14398_gshared (ShimEnumerator_t2823 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14398(__this, method) (( bool (*) (ShimEnumerator_t2823 *, MethodInfo*))ShimEnumerator_MoveNext_m14398_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1154  ShimEnumerator_get_Entry_m14399_gshared (ShimEnumerator_t2823 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14399(__this, method) (( DictionaryEntry_t1154  (*) (ShimEnumerator_t2823 *, MethodInfo*))ShimEnumerator_get_Entry_m14399_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14400_gshared (ShimEnumerator_t2823 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14400(__this, method) (( Object_t * (*) (ShimEnumerator_t2823 *, MethodInfo*))ShimEnumerator_get_Key_m14400_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14401_gshared (ShimEnumerator_t2823 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14401(__this, method) (( Object_t * (*) (ShimEnumerator_t2823 *, MethodInfo*))ShimEnumerator_get_Value_m14401_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14402_gshared (ShimEnumerator_t2823 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14402(__this, method) (( Object_t * (*) (ShimEnumerator_t2823 *, MethodInfo*))ShimEnumerator_get_Current_m14402_gshared)(__this, method)
