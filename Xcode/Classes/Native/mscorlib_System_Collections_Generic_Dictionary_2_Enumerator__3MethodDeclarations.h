#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2635;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2621;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12768_gshared (Enumerator_t2635 * __this, Dictionary_2_t2621 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m12768(__this, ___dictionary, method) (( void (*) (Enumerator_t2635 *, Dictionary_2_t2621 *, MethodInfo*))Enumerator__ctor_m12768_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12769_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12769(__this, method) (( Object_t * (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12770_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12770(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12771_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12771(__this, method) (( Object_t * (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12772_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12772(__this, method) (( Object_t * (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12773_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m12773(__this, method) (( bool (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_MoveNext_m12773_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2622  Enumerator_get_Current_m12774_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_get_Current_m12774(__this, method) (( KeyValuePair_2_t2622  (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_get_Current_m12774_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12775_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m12775(__this, method) (( Object_t * (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_get_CurrentKey_m12775_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12776_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m12776(__this, method) (( Object_t * (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_get_CurrentValue_m12776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12777_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m12777(__this, method) (( void (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_VerifyState_m12777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12778_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m12778(__this, method) (( void (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_VerifyCurrent_m12778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12779_gshared (Enumerator_t2635 * __this, MethodInfo* method);
#define Enumerator_Dispose_m12779(__this, method) (( void (*) (Enumerator_t2635 *, MethodInfo*))Enumerator_Dispose_m12779_gshared)(__this, method)
