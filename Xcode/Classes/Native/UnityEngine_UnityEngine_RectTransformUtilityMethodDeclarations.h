﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransformUtility
struct RectTransformUtility_t290;
// UnityEngine.RectTransform
struct RectTransform_t277;
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Canvas
struct Canvas_t291;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m4114 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2778 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rect, Vector2_t13  ___screenPoint, Camera_t19 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4115 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rect, Vector2_t13 * ___screenPoint, Camera_t19 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t13  RectTransformUtility_PixelAdjustPoint_m2747 (Object_t * __this /* static, unused */, Vector2_t13  ___point, Transform_t2 * ___elementTransform, Canvas_t291 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m4116 (Object_t * __this /* static, unused */, Vector2_t13  ___point, Transform_t2 * ___elementTransform, Canvas_t291 * ___canvas, Vector2_t13 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4117 (Object_t * __this /* static, unused */, Vector2_t13 * ___point, Transform_t2 * ___elementTransform, Canvas_t291 * ___canvas, Vector2_t13 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t260  RectTransformUtility_PixelAdjustRect_m2748 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rectTransform, Canvas_t291 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m1323 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rect, Vector2_t13  ___screenPoint, Camera_t19 * ___cam, Vector3_t8 * ___worldPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rect, Vector2_t13  ___screenPoint, Camera_t19 * ___cam, Vector2_t13 * ___localPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t18  RectTransformUtility_ScreenPointToRay_m4118 (Object_t * __this /* static, unused */, Camera_t19 * ___cam, Vector2_t13  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2942 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2941 (Object_t * __this /* static, unused */, RectTransform_t277 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t13  RectTransformUtility_GetTransposed_m4119 (Object_t * __this /* static, unused */, Vector2_t13  ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
