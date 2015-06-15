#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t509;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t510;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t499;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3092(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t509 *, UnityAction_1_t510 *, UnityAction_1_t510 *, MethodInfo*))ObjectPool_1__ctor_m14845_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m18384(__this, method) (( int32_t (*) (ObjectPool_1_t509 *, MethodInfo*))ObjectPool_1_get_countAll_m14847_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m18385(__this, ___value, method) (( void (*) (ObjectPool_1_t509 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m14849_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m18386(__this, method) (( int32_t (*) (ObjectPool_1_t509 *, MethodInfo*))ObjectPool_1_get_countActive_m14851_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m18387(__this, method) (( int32_t (*) (ObjectPool_1_t509 *, MethodInfo*))ObjectPool_1_get_countInactive_m14853_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m3094(__this, method) (( List_1_t499 * (*) (ObjectPool_1_t509 *, MethodInfo*))ObjectPool_1_Get_m14855_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m3095(__this, ___element, method) (( void (*) (ObjectPool_1_t509 *, List_1_t499 *, MethodInfo*))ObjectPool_1_Release_m14857_gshared)(__this, ___element, method)
