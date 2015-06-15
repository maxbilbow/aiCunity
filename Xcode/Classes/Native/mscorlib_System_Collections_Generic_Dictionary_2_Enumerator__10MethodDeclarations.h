#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2953;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2948;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15810_gshared (Enumerator_t2953 * __this, Dictionary_2_t2948 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m15810(__this, ___dictionary, method) (( void (*) (Enumerator_t2953 *, Dictionary_2_t2948 *, MethodInfo*))Enumerator__ctor_m15810_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15811_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15811(__this, method) (( Object_t * (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15811_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15812_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15812(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15813_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15813(__this, method) (( Object_t * (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15814_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15814(__this, method) (( Object_t * (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15815_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m15815(__this, method) (( bool (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_MoveNext_m15815_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2949  Enumerator_get_Current_m15816_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_get_Current_m15816(__this, method) (( KeyValuePair_2_t2949  (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_get_Current_m15816_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15817_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m15817(__this, method) (( int32_t (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_get_CurrentKey_m15817_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15818_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m15818(__this, method) (( Object_t * (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_get_CurrentValue_m15818_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15819_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m15819(__this, method) (( void (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_VerifyState_m15819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15820_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m15820(__this, method) (( void (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_VerifyCurrent_m15820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15821_gshared (Enumerator_t2953 * __this, MethodInfo* method);
#define Enumerator_Dispose_m15821(__this, method) (( void (*) (Enumerator_t2953 *, MethodInfo*))Enumerator_Dispose_m15821_gshared)(__this, method)
