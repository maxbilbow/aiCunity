#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct InternalEnumerator_1_t2816;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14337_gshared (InternalEnumerator_1_t2816 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m14337(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2816 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m14337_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14338_gshared (InternalEnumerator_1_t2816 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14338(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2816 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14338_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14339_gshared (InternalEnumerator_1_t2816 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14339(__this, method) (( void (*) (InternalEnumerator_1_t2816 *, MethodInfo*))InternalEnumerator_1_Dispose_m14339_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14340_gshared (InternalEnumerator_1_t2816 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14340(__this, method) (( bool (*) (InternalEnumerator_1_t2816 *, MethodInfo*))InternalEnumerator_1_MoveNext_m14340_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2815  InternalEnumerator_1_get_Current_m14341_gshared (InternalEnumerator_1_t2816 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14341(__this, method) (( KeyValuePair_2_t2815  (*) (InternalEnumerator_1_t2816 *, MethodInfo*))InternalEnumerator_1_get_Current_m14341_gshared)(__this, method)
