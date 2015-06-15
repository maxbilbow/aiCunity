#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t448;
// UnityEngine.Object
struct Object_t91;
struct Object_t91_marshaled;
// UnityEngine.RectTransform
struct RectTransform_t275;
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"

// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern "C" void DrivenRectTransformTracker_Add_m2928 (DrivenRectTransformTracker_t448 * __this, Object_t91 * ___driver, RectTransform_t275 * ___rectTransform, int32_t ___drivenProperties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m2927 (DrivenRectTransformTracker_t448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
