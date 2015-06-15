#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2875;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2874;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m14834_gshared (ObjectPool_1_t2875 * __this, UnityAction_1_t2874 * ___actionOnGet, UnityAction_1_t2874 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m14834(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2875 *, UnityAction_1_t2874 *, UnityAction_1_t2874 *, MethodInfo*))ObjectPool_1__ctor_m14834_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m14836_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m14836(__this, method) (( int32_t (*) (ObjectPool_1_t2875 *, MethodInfo*))ObjectPool_1_get_countAll_m14836_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m14838_gshared (ObjectPool_1_t2875 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m14838(__this, ___value, method) (( void (*) (ObjectPool_1_t2875 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m14838_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m14840_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m14840(__this, method) (( int32_t (*) (ObjectPool_1_t2875 *, MethodInfo*))ObjectPool_1_get_countActive_m14840_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m14842_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m14842(__this, method) (( int32_t (*) (ObjectPool_1_t2875 *, MethodInfo*))ObjectPool_1_get_countInactive_m14842_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m14844_gshared (ObjectPool_1_t2875 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m14844(__this, method) (( Object_t * (*) (ObjectPool_1_t2875 *, MethodInfo*))ObjectPool_1_Get_m14844_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m14846_gshared (ObjectPool_1_t2875 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m14846(__this, ___element, method) (( void (*) (ObjectPool_1_t2875 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m14846_gshared)(__this, ___element, method)
