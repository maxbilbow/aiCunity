#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
struct Enumerator_t3351;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3340;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20101_gshared (Enumerator_t3351 * __this, Dictionary_2_t3340 * ___host, MethodInfo* method);
#define Enumerator__ctor_m20101(__this, ___host, method) (( void (*) (Enumerator_t3351 *, Dictionary_2_t3340 *, MethodInfo*))Enumerator__ctor_m20101_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20102_gshared (Enumerator_t3351 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20102(__this, method) (( Object_t * (*) (Enumerator_t3351 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20102_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m20103_gshared (Enumerator_t3351 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20103(__this, method) (( void (*) (Enumerator_t3351 *, MethodInfo*))Enumerator_Dispose_m20103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20104_gshared (Enumerator_t3351 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20104(__this, method) (( bool (*) (Enumerator_t3351 *, MethodInfo*))Enumerator_MoveNext_m20104_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m20105_gshared (Enumerator_t3351 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20105(__this, method) (( int64_t (*) (Enumerator_t3351 *, MethodInfo*))Enumerator_get_Current_m20105_gshared)(__this, method)
