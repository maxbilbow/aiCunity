﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2825;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2814;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14408_gshared (ShimEnumerator_t2825 * __this, Dictionary_2_t2814 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14408(__this, ___host, method) (( void (*) (ShimEnumerator_t2825 *, Dictionary_2_t2814 *, MethodInfo*))ShimEnumerator__ctor_m14408_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14409_gshared (ShimEnumerator_t2825 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14409(__this, method) (( bool (*) (ShimEnumerator_t2825 *, MethodInfo*))ShimEnumerator_MoveNext_m14409_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1156  ShimEnumerator_get_Entry_m14410_gshared (ShimEnumerator_t2825 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14410(__this, method) (( DictionaryEntry_t1156  (*) (ShimEnumerator_t2825 *, MethodInfo*))ShimEnumerator_get_Entry_m14410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14411_gshared (ShimEnumerator_t2825 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14411(__this, method) (( Object_t * (*) (ShimEnumerator_t2825 *, MethodInfo*))ShimEnumerator_get_Key_m14411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14412_gshared (ShimEnumerator_t2825 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14412(__this, method) (( Object_t * (*) (ShimEnumerator_t2825 *, MethodInfo*))ShimEnumerator_get_Value_m14412_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14413_gshared (ShimEnumerator_t2825 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14413(__this, method) (( Object_t * (*) (ShimEnumerator_t2825 *, MethodInfo*))ShimEnumerator_get_Current_m14413_gshared)(__this, method)
