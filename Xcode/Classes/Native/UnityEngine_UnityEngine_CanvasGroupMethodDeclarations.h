﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasGroup
struct CanvasGroup_t292;
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m2973 (CanvasGroup_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m4108 (CanvasGroup_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
extern "C" void CanvasGroup_set_blocksRaycasts_m1317 (CanvasGroup_t292 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2744 (CanvasGroup_t292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m4109 (CanvasGroup_t292 * __this, Vector2_t13  ___sp, Camera_t19 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
