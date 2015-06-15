#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>
struct Transform_1_t3040;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t390;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t531;
// System.IAsyncResult
struct IAsyncResult_t425;
// System.AsyncCallback
struct AsyncCallback_t426;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m16695(__this, ___object, ___method, method) (( void (*) (Transform_1_t3040 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12780_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16696(__this, ___key, ___value, method) (( Font_t390 * (*) (Transform_1_t3040 *, Font_t390 *, List_1_t531 *, MethodInfo*))Transform_1_Invoke_m12781_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16697(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3040 *, Font_t390 *, List_1_t531 *, AsyncCallback_t426 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12782_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16698(__this, ___result, method) (( Font_t390 * (*) (Transform_1_t3040 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12783_gshared)(__this, ___result, method)
