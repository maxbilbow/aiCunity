#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>
struct Transform_1_t3266;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t684;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t423;
// System.AsyncCallback
struct AsyncCallback_t424;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m19024(__this, ___object, ___method, method) (( void (*) (Transform_1_t3266 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12769_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19025(__this, ___key, ___value, method) (( GUIStyle_t684 * (*) (Transform_1_t3266 *, String_t*, GUIStyle_t684 *, MethodInfo*))Transform_1_Invoke_m12770_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19026(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3266 *, String_t*, GUIStyle_t684 *, AsyncCallback_t424 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m12771_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19027(__this, ___result, method) (( GUIStyle_t684 * (*) (Transform_1_t3266 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m12772_gshared)(__this, ___result, method)
