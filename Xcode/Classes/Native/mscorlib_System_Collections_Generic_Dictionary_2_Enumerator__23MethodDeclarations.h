#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Enumerator_t3510;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t826;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Dictionary_2_t3505;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
#define Enumerator__ctor_m21543(__this, ___dictionary, method) (( void (*) (Enumerator_t3510 *, Dictionary_2_t3505 *, MethodInfo*))Enumerator__ctor_m12768_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m21544(__this, method) (( Object_t * (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21545(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21546(__this, method) (( Object_t * (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21547(__this, method) (( Object_t * (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::MoveNext()
#define Enumerator_MoveNext_m21548(__this, method) (( bool (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_MoveNext_m12773_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Current()
#define Enumerator_get_Current_m21549(__this, method) (( KeyValuePair_2_t3462  (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_get_Current_m12774_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m21550(__this, method) (( Type_t * (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_get_CurrentKey_m12775_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m21551(__this, method) (( Object_t* (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_get_CurrentValue_m12776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::VerifyState()
#define Enumerator_VerifyState_m21552(__this, method) (( void (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_VerifyState_m12777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m21553(__this, method) (( void (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_VerifyCurrent_m12778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Dispose()
#define Enumerator_Dispose_m21554(__this, method) (( void (*) (Enumerator_t3510 *, MethodInfo*))Enumerator_Dispose_m12779_gshared)(__this, method)
