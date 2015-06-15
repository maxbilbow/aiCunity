#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t464;
// UnityEngine.RectTransform
struct RectTransform_t277;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t462;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// UnityEngine.Camera
struct Camera_t19;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t323;
// UnityEngine.UI.Selectable
struct Selectable_t295;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C" void Slider__ctor_m2179 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C" RectTransform_t277 * Slider_get_fillRect_m2180 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C" void Slider_set_fillRect_m2181 (Slider_t464 * __this, RectTransform_t277 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C" RectTransform_t277 * Slider_get_handleRect_m2182 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C" void Slider_set_handleRect_m2183 (Slider_t464 * __this, RectTransform_t277 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C" int32_t Slider_get_direction_m2184 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C" void Slider_set_direction_m2185 (Slider_t464 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C" float Slider_get_minValue_m2186 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C" void Slider_set_minValue_m2187 (Slider_t464 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C" float Slider_get_maxValue_m2188 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C" void Slider_set_maxValue_m2189 (Slider_t464 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C" bool Slider_get_wholeNumbers_m2190 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C" void Slider_set_wholeNumbers_m2191 (Slider_t464 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C" float Slider_get_value_m2192 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C" void Slider_set_value_m2193 (Slider_t464 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C" float Slider_get_normalizedValue_m2194 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C" void Slider_set_normalizedValue_m2195 (Slider_t464 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C" SliderEvent_t462 * Slider_get_onValueChanged_m2196 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C" void Slider_set_onValueChanged_m2197 (Slider_t464 * __this, SliderEvent_t462 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C" float Slider_get_stepSize_m2198 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Slider_Rebuild_m2199 (Slider_t464 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C" void Slider_OnEnable_m2200 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C" void Slider_OnDisable_m2201 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C" void Slider_UpdateCachedReferences_m2202 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C" void Slider_Set_m2203 (Slider_t464 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C" void Slider_Set_m2204 (Slider_t464 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C" void Slider_OnRectTransformDimensionsChange_m2205 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C" int32_t Slider_get_axis_m2206 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C" bool Slider_get_reverseValue_m2207 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C" void Slider_UpdateVisuals_m2208 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C" void Slider_UpdateDrag_m2209 (Slider_t464 * __this, PointerEventData_t46 * ___eventData, Camera_t19 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Slider_MayDrag_m2210 (Slider_t464 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnPointerDown_m2211 (Slider_t464 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnDrag_m2212 (Slider_t464 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Slider_OnMove_m2213 (Slider_t464 * __this, AxisEventData_t323 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C" Selectable_t295 * Slider_FindSelectableOnLeft_m2214 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C" Selectable_t295 * Slider_FindSelectableOnRight_m2215 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C" Selectable_t295 * Slider_FindSelectableOnUp_m2216 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C" Selectable_t295 * Slider_FindSelectableOnDown_m2217 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnInitializePotentialDrag_m2218 (Slider_t464 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C" void Slider_SetDirection_m2219 (Slider_t464 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m2220 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t2 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m2221 (Slider_t464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
