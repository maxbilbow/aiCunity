#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t507;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t508;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t497;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3081(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t507 *, UnityAction_1_t508 *, UnityAction_1_t508 *, MethodInfo*))ObjectPool_1__ctor_m14834_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m18373(__this, method) (( int32_t (*) (ObjectPool_1_t507 *, MethodInfo*))ObjectPool_1_get_countAll_m14836_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m18374(__this, ___value, method) (( void (*) (ObjectPool_1_t507 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m14838_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m18375(__this, method) (( int32_t (*) (ObjectPool_1_t507 *, MethodInfo*))ObjectPool_1_get_countActive_m14840_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m18376(__this, method) (( int32_t (*) (ObjectPool_1_t507 *, MethodInfo*))ObjectPool_1_get_countInactive_m14842_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m3083(__this, method) (( List_1_t497 * (*) (ObjectPool_1_t507 *, MethodInfo*))ObjectPool_1_Get_m14844_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m3084(__this, ___element, method) (( void (*) (ObjectPool_1_t507 *, List_1_t497 *, MethodInfo*))ObjectPool_1_Release_m14846_gshared)(__this, ___element, method)
