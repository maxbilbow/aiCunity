﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t342;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t343;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t354;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2582(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t342 *, UnityAction_1_t343 *, UnityAction_1_t343 *, MethodInfo*))ObjectPool_1__ctor_m14845_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m14846(__this, method) (( int32_t (*) (ObjectPool_1_t342 *, MethodInfo*))ObjectPool_1_get_countAll_m14847_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14848(__this, ___value, method) (( void (*) (ObjectPool_1_t342 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m14849_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m14850(__this, method) (( int32_t (*) (ObjectPool_1_t342 *, MethodInfo*))ObjectPool_1_get_countActive_m14851_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14852(__this, method) (( int32_t (*) (ObjectPool_1_t342 *, MethodInfo*))ObjectPool_1_get_countInactive_m14853_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m14854(__this, method) (( List_1_t354 * (*) (ObjectPool_1_t342 *, MethodInfo*))ObjectPool_1_Get_m14855_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m14856(__this, ___element, method) (( void (*) (ObjectPool_1_t342 *, List_1_t354 *, MethodInfo*))ObjectPool_1_Release_m14857_gshared)(__this, ___element, method)
