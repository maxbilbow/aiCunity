#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t2820;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2812;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14380_gshared (Enumerator_t2820 * __this, Dictionary_2_t2812 * ___host, MethodInfo* method);
#define Enumerator__ctor_m14380(__this, ___host, method) (( void (*) (Enumerator_t2820 *, Dictionary_2_t2812 *, MethodInfo*))Enumerator__ctor_m14380_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14381_gshared (Enumerator_t2820 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14381(__this, method) (( Object_t * (*) (Enumerator_t2820 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14382_gshared (Enumerator_t2820 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14382(__this, method) (( void (*) (Enumerator_t2820 *, MethodInfo*))Enumerator_Dispose_m14382_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14383_gshared (Enumerator_t2820 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14383(__this, method) (( bool (*) (Enumerator_t2820 *, MethodInfo*))Enumerator_MoveNext_m14383_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m14384_gshared (Enumerator_t2820 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14384(__this, method) (( int32_t (*) (Enumerator_t2820 *, MethodInfo*))Enumerator_get_Current_m14384_gshared)(__this, method)
