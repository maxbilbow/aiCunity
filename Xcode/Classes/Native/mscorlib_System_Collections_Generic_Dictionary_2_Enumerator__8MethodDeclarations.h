#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2817;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2812;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14350_gshared (Enumerator_t2817 * __this, Dictionary_2_t2812 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14350(__this, ___dictionary, method) (( void (*) (Enumerator_t2817 *, Dictionary_2_t2812 *, MethodInfo*))Enumerator__ctor_m14350_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14351_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14351(__this, method) (( Object_t * (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14351_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14352_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14352(__this, method) (( DictionaryEntry_t1154  (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14352_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14353_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14353(__this, method) (( Object_t * (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14353_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14354_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14354(__this, method) (( Object_t * (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14355_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14355(__this, method) (( bool (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_MoveNext_m14355_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2813  Enumerator_get_Current_m14356_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14356(__this, method) (( KeyValuePair_2_t2813  (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_get_Current_m14356_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14357_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14357(__this, method) (( Object_t * (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_get_CurrentKey_m14357_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14358_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14358(__this, method) (( int32_t (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_get_CurrentValue_m14358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14359_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14359(__this, method) (( void (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_VerifyState_m14359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14360_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14360(__this, method) (( void (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_VerifyCurrent_m14360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14361_gshared (Enumerator_t2817 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14361(__this, method) (( void (*) (Enumerator_t2817 *, MethodInfo*))Enumerator_Dispose_m14361_gshared)(__this, method)
