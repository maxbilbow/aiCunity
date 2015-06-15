#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t206;
struct Touch_t206_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1282 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t13  Touch_get_position_m791 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_rawPosition()
extern "C" Vector2_t13  Touch_get_rawPosition_m3853 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t13  Touch_get_deltaPosition_m3854 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Touch::get_deltaTime()
extern "C" float Touch_get_deltaTime_m3855 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m3856 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m1287 (Touch_t206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t206_marshal(const Touch_t206& unmarshaled, Touch_t206_marshaled& marshaled);
void Touch_t206_marshal_back(const Touch_t206_marshaled& marshaled, Touch_t206& unmarshaled);
void Touch_t206_marshal_cleanup(Touch_t206_marshaled& marshaled);
