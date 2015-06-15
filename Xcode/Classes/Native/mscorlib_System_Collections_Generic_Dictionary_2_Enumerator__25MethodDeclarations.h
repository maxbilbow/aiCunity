#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Enumerator_t3540;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3537;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21859_gshared (Enumerator_t3540 * __this, Dictionary_2_t3537 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m21859(__this, ___dictionary, method) (( void (*) (Enumerator_t3540 *, Dictionary_2_t3537 *, MethodInfo*))Enumerator__ctor_m21859_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21860_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21860(__this, method) (( Object_t * (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21860_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21861_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21861(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21862_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21862(__this, method) (( Object_t * (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21862_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21863_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21863(__this, method) (( Object_t * (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21864_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m21864(__this, method) (( bool (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_MoveNext_m21864_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" KeyValuePair_2_t3463  Enumerator_get_Current_m21865_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_get_Current_m21865(__this, method) (( KeyValuePair_2_t3463  (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_get_Current_m21865_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21866_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m21866(__this, method) (( Object_t * (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_get_CurrentKey_m21866_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_CurrentValue()
extern "C" KeyValuePair_2_t940  Enumerator_get_CurrentValue_m21867_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m21867(__this, method) (( KeyValuePair_2_t940  (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_get_CurrentValue_m21867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::VerifyState()
extern "C" void Enumerator_VerifyState_m21868_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m21868(__this, method) (( void (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_VerifyState_m21868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21869_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m21869(__this, method) (( void (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_VerifyCurrent_m21869_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Dispose()
extern "C" void Enumerator_Dispose_m21870_gshared (Enumerator_t3540 * __this, MethodInfo* method);
#define Enumerator_Dispose_m21870(__this, method) (( void (*) (Enumerator_t3540 *, MethodInfo*))Enumerator_Dispose_m21870_gshared)(__this, method)
