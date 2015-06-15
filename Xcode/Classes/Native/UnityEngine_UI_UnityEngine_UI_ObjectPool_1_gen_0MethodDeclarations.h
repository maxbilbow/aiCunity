#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t392;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t396;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t398;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2717(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t392 *, UnityAction_1_t396 *, UnityAction_1_t396 *, MethodInfo*))ObjectPool_1__ctor_m14834_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m16747(__this, method) (( int32_t (*) (ObjectPool_1_t392 *, MethodInfo*))ObjectPool_1_get_countAll_m14836_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16748(__this, ___value, method) (( void (*) (ObjectPool_1_t392 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m14838_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m16749(__this, method) (( int32_t (*) (ObjectPool_1_t392 *, MethodInfo*))ObjectPool_1_get_countActive_m14840_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16750(__this, method) (( int32_t (*) (ObjectPool_1_t392 *, MethodInfo*))ObjectPool_1_get_countInactive_m14842_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m2748(__this, method) (( List_1_t398 * (*) (ObjectPool_1_t392 *, MethodInfo*))ObjectPool_1_Get_m14844_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m2749(__this, ___element, method) (( void (*) (ObjectPool_1_t392 *, List_1_t398 *, MethodInfo*))ObjectPool_1_Release_m14846_gshared)(__this, ___element, method)
