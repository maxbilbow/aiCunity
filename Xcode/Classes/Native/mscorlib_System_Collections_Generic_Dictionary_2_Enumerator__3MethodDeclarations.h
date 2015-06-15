#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2633;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2619;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12757_gshared (Enumerator_t2633 * __this, Dictionary_2_t2619 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m12757(__this, ___dictionary, method) (( void (*) (Enumerator_t2633 *, Dictionary_2_t2619 *, MethodInfo*))Enumerator__ctor_m12757_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12758_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12758(__this, method) (( Object_t * (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12758_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12759_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12759(__this, method) (( DictionaryEntry_t1154  (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12759_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12760_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12760(__this, method) (( Object_t * (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12760_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12761_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12761(__this, method) (( Object_t * (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12761_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12762_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m12762(__this, method) (( bool (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_MoveNext_m12762_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2620  Enumerator_get_Current_m12763_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_get_Current_m12763(__this, method) (( KeyValuePair_2_t2620  (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_get_Current_m12763_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12764_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m12764(__this, method) (( Object_t * (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_get_CurrentKey_m12764_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12765_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m12765(__this, method) (( Object_t * (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_get_CurrentValue_m12765_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12766_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m12766(__this, method) (( void (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_VerifyState_m12766_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12767_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m12767(__this, method) (( void (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_VerifyCurrent_m12767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12768_gshared (Enumerator_t2633 * __this, MethodInfo* method);
#define Enumerator_Dispose_m12768(__this, method) (( void (*) (Enumerator_t2633 *, MethodInfo*))Enumerator_Dispose_m12768_gshared)(__this, method)
