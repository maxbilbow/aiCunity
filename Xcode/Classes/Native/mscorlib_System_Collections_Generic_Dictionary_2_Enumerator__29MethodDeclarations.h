#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t3668;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1267;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22968_gshared (Enumerator_t3668 * __this, Dictionary_2_t1267 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m22968(__this, ___dictionary, method) (( void (*) (Enumerator_t3668 *, Dictionary_2_t1267 *, MethodInfo*))Enumerator__ctor_m22968_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22969_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22969(__this, method) (( Object_t * (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22969_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1156  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22970_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22970(__this, method) (( DictionaryEntry_t1156  (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22970_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22971_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22971(__this, method) (( Object_t * (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22972_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22972(__this, method) (( Object_t * (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22972_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22973_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m22973(__this, method) (( bool (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_MoveNext_m22973_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3664  Enumerator_get_Current_m22974_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_get_Current_m22974(__this, method) (( KeyValuePair_2_t3664  (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_get_Current_m22974_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m22975_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m22975(__this, method) (( int32_t (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_get_CurrentKey_m22975_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m22976_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m22976(__this, method) (( int32_t (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_get_CurrentValue_m22976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m22977_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m22977(__this, method) (( void (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_VerifyState_m22977_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m22978_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m22978(__this, method) (( void (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_VerifyCurrent_m22978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m22979_gshared (Enumerator_t3668 * __this, MethodInfo* method);
#define Enumerator_Dispose_m22979(__this, method) (( void (*) (Enumerator_t3668 *, MethodInfo*))Enumerator_Dispose_m22979_gshared)(__this, method)
