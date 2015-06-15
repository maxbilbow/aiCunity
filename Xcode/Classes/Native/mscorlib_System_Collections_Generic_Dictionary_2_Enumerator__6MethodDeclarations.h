#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2723;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2715;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13541_gshared (Enumerator_t2723 * __this, Dictionary_2_t2715 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m13541(__this, ___dictionary, method) (( void (*) (Enumerator_t2723 *, Dictionary_2_t2715 *, MethodInfo*))Enumerator__ctor_m13541_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13542_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13542(__this, method) (( Object_t * (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13542_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1154  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13543_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13543(__this, method) (( DictionaryEntry_t1154  (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13543_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13544_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13544(__this, method) (( Object_t * (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13544_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13545_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13545(__this, method) (( Object_t * (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13546_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m13546(__this, method) (( bool (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_MoveNext_m13546_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2716  Enumerator_get_Current_m13547_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_get_Current_m13547(__this, method) (( KeyValuePair_2_t2716  (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_get_Current_m13547_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13548_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m13548(__this, method) (( Object_t * (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_get_CurrentKey_m13548_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m13549_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m13549(__this, method) (( uint8_t (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_get_CurrentValue_m13549_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m13550_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m13550(__this, method) (( void (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_VerifyState_m13550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13551_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m13551(__this, method) (( void (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_VerifyCurrent_m13551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m13552_gshared (Enumerator_t2723 * __this, MethodInfo* method);
#define Enumerator_Dispose_m13552(__this, method) (( void (*) (Enumerator_t2723 *, MethodInfo*))Enumerator_Dispose_m13552_gshared)(__this, method)
