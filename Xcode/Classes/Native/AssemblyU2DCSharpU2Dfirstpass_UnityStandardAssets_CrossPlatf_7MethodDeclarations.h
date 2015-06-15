#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t54;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern "C" void Joystick__ctor_m164 (Joystick_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern "C" void Joystick_OnEnable_m165 (Joystick_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void Joystick_UpdateVirtualAxes_m166 (Joystick_t54 * __this, Vector3_t8  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C" void Joystick_CreateVirtualAxes_m167 (Joystick_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnDrag_m168 (Joystick_t54 * __this, PointerEventData_t46 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerUp_m169 (Joystick_t54 * __this, PointerEventData_t46 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Joystick_OnPointerDown_m170 (Joystick_t54 * __this, PointerEventData_t46 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C" void Joystick_OnDisable_m171 (Joystick_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
