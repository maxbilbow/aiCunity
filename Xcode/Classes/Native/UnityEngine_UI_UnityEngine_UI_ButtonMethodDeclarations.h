#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t381;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t379;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t314;
// System.Collections.IEnumerator
struct IEnumerator_t106;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1660 (Button_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t379 * Button_get_onClick_m1661 (Button_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1662 (Button_t381 * __this, ButtonClickedEvent_t379 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1663 (Button_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1664 (Button_t381 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1665 (Button_t381 * __this, BaseEventData_t314 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1666 (Button_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
