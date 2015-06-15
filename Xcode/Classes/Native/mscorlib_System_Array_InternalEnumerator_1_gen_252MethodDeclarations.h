#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t3725;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m23262_gshared (InternalEnumerator_1_t3725 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m23262(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3725 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m23262_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23263_gshared (InternalEnumerator_1_t3725 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23263(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3725 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23263_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m23264_gshared (InternalEnumerator_1_t3725 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m23264(__this, method) (( void (*) (InternalEnumerator_1_t3725 *, MethodInfo*))InternalEnumerator_1_Dispose_m23264_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m23265_gshared (InternalEnumerator_1_t3725 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m23265(__this, method) (( bool (*) (InternalEnumerator_1_t3725 *, MethodInfo*))InternalEnumerator_1_MoveNext_m23265_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t683  InternalEnumerator_1_get_Current_m23266_gshared (InternalEnumerator_1_t3725 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m23266(__this, method) (( DateTime_t683  (*) (InternalEnumerator_1_t3725 *, MethodInfo*))InternalEnumerator_1_get_Current_m23266_gshared)(__this, method)
