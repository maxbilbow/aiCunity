#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3409;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3401;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20666_gshared (Enumerator_t3409 * __this, Dictionary_2_t3401 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20666(__this, ___dictionary, method) (( void (*) (Enumerator_t3409 *, Dictionary_2_t3401 *, MethodInfo*))Enumerator__ctor_m20666_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20667_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20667(__this, method) (( Object_t * (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20667_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20668_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20668(__this, method) (( DictionaryEntry_t1154  (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20669_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20669(__this, method) (( Object_t * (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20670_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20670(__this, method) (( Object_t * (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20670_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20671_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20671(__this, method) (( bool (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_MoveNext_m20671_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3402  Enumerator_get_Current_m20672_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20672(__this, method) (( KeyValuePair_2_t3402  (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_get_Current_m20672_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m20673_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20673(__this, method) (( uint64_t (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_get_CurrentKey_m20673_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m20674_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20674(__this, method) (( Object_t * (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_get_CurrentValue_m20674_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m20675_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20675(__this, method) (( void (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_VerifyState_m20675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20676_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20676(__this, method) (( void (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_VerifyCurrent_m20676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m20677_gshared (Enumerator_t3409 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20677(__this, method) (( void (*) (Enumerator_t3409 *, MethodInfo*))Enumerator_Dispose_m20677_gshared)(__this, method)
