#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3350;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3342;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20082_gshared (Enumerator_t3350 * __this, Dictionary_2_t3342 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20082(__this, ___dictionary, method) (( void (*) (Enumerator_t3350 *, Dictionary_2_t3342 *, MethodInfo*))Enumerator__ctor_m20082_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20083_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20083(__this, method) (( Object_t * (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20083_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20084_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20084(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20084_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20085_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20085(__this, method) (( Object_t * (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20086_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20086(__this, method) (( Object_t * (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20087_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20087(__this, method) (( bool (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_MoveNext_m20087_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3343  Enumerator_get_Current_m20088_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20088(__this, method) (( KeyValuePair_2_t3343  (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_get_Current_m20088_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20089_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20089(__this, method) (( Object_t * (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_get_CurrentKey_m20089_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m20090_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20090(__this, method) (( int64_t (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_get_CurrentValue_m20090_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m20091_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20091(__this, method) (( void (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_VerifyState_m20091_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20092_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20092(__this, method) (( void (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_VerifyCurrent_m20092_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m20093_gshared (Enumerator_t3350 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20093(__this, method) (( void (*) (Enumerator_t3350 *, MethodInfo*))Enumerator_Dispose_m20093_gshared)(__this, method)
