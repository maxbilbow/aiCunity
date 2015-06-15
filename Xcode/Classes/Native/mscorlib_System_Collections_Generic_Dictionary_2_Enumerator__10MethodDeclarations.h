#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2951;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2946;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15799_gshared (Enumerator_t2951 * __this, Dictionary_2_t2946 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m15799(__this, ___dictionary, method) (( void (*) (Enumerator_t2951 *, Dictionary_2_t2946 *, MethodInfo*))Enumerator__ctor_m15799_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15800_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15800(__this, method) (( Object_t * (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15800_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15801_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15801(__this, method) (( DictionaryEntry_t1154  (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15802_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15802(__this, method) (( Object_t * (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15802_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15803_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15803(__this, method) (( Object_t * (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15804_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m15804(__this, method) (( bool (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_MoveNext_m15804_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2947  Enumerator_get_Current_m15805_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_get_Current_m15805(__this, method) (( KeyValuePair_2_t2947  (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_get_Current_m15805_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15806_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m15806(__this, method) (( int32_t (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_get_CurrentKey_m15806_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15807_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m15807(__this, method) (( Object_t * (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_get_CurrentValue_m15807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15808_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m15808(__this, method) (( void (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_VerifyState_m15808_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15809_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m15809(__this, method) (( void (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_VerifyCurrent_m15809_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15810_gshared (Enumerator_t2951 * __this, MethodInfo* method);
#define Enumerator_Dispose_m15810(__this, method) (( void (*) (Enumerator_t2951 *, MethodInfo*))Enumerator_Dispose_m15810_gshared)(__this, method)
