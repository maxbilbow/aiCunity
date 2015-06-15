#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3411;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3403;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20677_gshared (Enumerator_t3411 * __this, Dictionary_2_t3403 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20677(__this, ___dictionary, method) (( void (*) (Enumerator_t3411 *, Dictionary_2_t3403 *, MethodInfo*))Enumerator__ctor_m20677_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20678_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20678(__this, method) (( Object_t * (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20678_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20679_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20679(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20679_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20680_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20680(__this, method) (( Object_t * (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20681_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20681(__this, method) (( Object_t * (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20682_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20682(__this, method) (( bool (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_MoveNext_m20682_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3404  Enumerator_get_Current_m20683_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20683(__this, method) (( KeyValuePair_2_t3404  (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_get_Current_m20683_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m20684_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20684(__this, method) (( uint64_t (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_get_CurrentKey_m20684_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m20685_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20685(__this, method) (( Object_t * (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_get_CurrentValue_m20685_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m20686_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20686(__this, method) (( void (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_VerifyState_m20686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20687_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20687(__this, method) (( void (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_VerifyCurrent_m20687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m20688_gshared (Enumerator_t3411 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20688(__this, method) (( void (*) (Enumerator_t3411 *, MethodInfo*))Enumerator_Dispose_m20688_gshared)(__this, method)
