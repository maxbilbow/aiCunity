#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Enumerator_t3543;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3537;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21889_gshared (Enumerator_t3543 * __this, Dictionary_2_t3537 * ___host, MethodInfo* method);
#define Enumerator__ctor_m21889(__this, ___host, method) (( void (*) (Enumerator_t3543 *, Dictionary_2_t3537 *, MethodInfo*))Enumerator__ctor_m21889_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21890_gshared (Enumerator_t3543 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21890(__this, method) (( Object_t * (*) (Enumerator_t3543 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Dispose()
extern "C" void Enumerator_Dispose_m21891_gshared (Enumerator_t3543 * __this, MethodInfo* method);
#define Enumerator_Dispose_m21891(__this, method) (( void (*) (Enumerator_t3543 *, MethodInfo*))Enumerator_Dispose_m21891_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21892_gshared (Enumerator_t3543 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m21892(__this, method) (( bool (*) (Enumerator_t3543 *, MethodInfo*))Enumerator_MoveNext_m21892_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" KeyValuePair_2_t940  Enumerator_get_Current_m21893_gshared (Enumerator_t3543 * __this, MethodInfo* method);
#define Enumerator_get_Current_m21893(__this, method) (( KeyValuePair_2_t940  (*) (Enumerator_t3543 *, MethodInfo*))Enumerator_get_Current_m21893_gshared)(__this, method)
