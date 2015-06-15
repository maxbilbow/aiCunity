#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct InternalEnumerator_1_t2717;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13502_gshared (InternalEnumerator_1_t2717 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m13502(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2717 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m13502_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13503_gshared (InternalEnumerator_1_t2717 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13503(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2717 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13503_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13504_gshared (InternalEnumerator_1_t2717 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13504(__this, method) (( void (*) (InternalEnumerator_1_t2717 *, MethodInfo*))InternalEnumerator_1_Dispose_m13504_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13505_gshared (InternalEnumerator_1_t2717 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13505(__this, method) (( bool (*) (InternalEnumerator_1_t2717 *, MethodInfo*))InternalEnumerator_1_MoveNext_m13505_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern "C" KeyValuePair_2_t2716  InternalEnumerator_1_get_Current_m13506_gshared (InternalEnumerator_1_t2717 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13506(__this, method) (( KeyValuePair_2_t2716  (*) (InternalEnumerator_1_t2717 *, MethodInfo*))InternalEnumerator_1_get_Current_m13506_gshared)(__this, method)
