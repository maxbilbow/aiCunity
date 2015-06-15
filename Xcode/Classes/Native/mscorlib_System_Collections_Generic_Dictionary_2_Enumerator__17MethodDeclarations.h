﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3348;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3340;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20071_gshared (Enumerator_t3348 * __this, Dictionary_2_t3340 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20071(__this, ___dictionary, method) (( void (*) (Enumerator_t3348 *, Dictionary_2_t3340 *, MethodInfo*))Enumerator__ctor_m20071_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20072_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20072(__this, method) (( Object_t * (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20072_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20073_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20073(__this, method) (( DictionaryEntry_t1154  (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20073_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20074_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20074(__this, method) (( Object_t * (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20074_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20075_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20075(__this, method) (( Object_t * (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20076_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20076(__this, method) (( bool (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_MoveNext_m20076_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3341  Enumerator_get_Current_m20077_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20077(__this, method) (( KeyValuePair_2_t3341  (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_get_Current_m20077_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20078_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20078(__this, method) (( Object_t * (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_get_CurrentKey_m20078_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m20079_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20079(__this, method) (( int64_t (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_get_CurrentValue_m20079_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m20080_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20080(__this, method) (( void (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_VerifyState_m20080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20081_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20081(__this, method) (( void (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_VerifyCurrent_m20081_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m20082_gshared (Enumerator_t3348 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20082(__this, method) (( void (*) (Enumerator_t3348 *, MethodInfo*))Enumerator_Dispose_m20082_gshared)(__this, method)
