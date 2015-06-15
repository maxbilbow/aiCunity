#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2819;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2814;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14361_gshared (Enumerator_t2819 * __this, Dictionary_2_t2814 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14361(__this, ___dictionary, method) (( void (*) (Enumerator_t2819 *, Dictionary_2_t2814 *, MethodInfo*))Enumerator__ctor_m14361_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14362_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14362(__this, method) (( Object_t * (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14362_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14363_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14363(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14363_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14364_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14364(__this, method) (( Object_t * (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14364_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14365_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14365(__this, method) (( Object_t * (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14365_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14366_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14366(__this, method) (( bool (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_MoveNext_m14366_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2815  Enumerator_get_Current_m14367_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14367(__this, method) (( KeyValuePair_2_t2815  (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_get_Current_m14367_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14368_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14368(__this, method) (( Object_t * (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_get_CurrentKey_m14368_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14369_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14369(__this, method) (( int32_t (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_get_CurrentValue_m14369_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14370_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14370(__this, method) (( void (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_VerifyState_m14370_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14371_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14371(__this, method) (( void (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_VerifyCurrent_m14371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14372_gshared (Enumerator_t2819 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14372(__this, method) (( void (*) (Enumerator_t2819 *, MethodInfo*))Enumerator_Dispose_m14372_gshared)(__this, method)
