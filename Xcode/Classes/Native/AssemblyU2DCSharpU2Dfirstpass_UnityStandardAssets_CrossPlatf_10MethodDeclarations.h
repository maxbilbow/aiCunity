#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t50;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t45;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t49;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C" void VirtualInput__ctor_m215 (VirtualInput_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" Vector3_t8  VirtualInput_get_virtualMousePosition_m216 (VirtualInput_t50 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C" void VirtualInput_set_virtualMousePosition_m217 (VirtualInput_t50 * __this, Vector3_t8  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C" bool VirtualInput_AxisExists_m218 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C" bool VirtualInput_ButtonExists_m219 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" void VirtualInput_RegisterVirtualAxis_m220 (VirtualInput_t50 * __this, VirtualAxis_t45 * ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" void VirtualInput_RegisterVirtualButton_m221 (VirtualInput_t50 * __this, VirtualButton_t49 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C" void VirtualInput_UnRegisterVirtualAxis_m222 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C" void VirtualInput_UnRegisterVirtualButton_m223 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C" VirtualAxis_t45 * VirtualInput_VirtualAxisReference_m224 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionX_m225 (VirtualInput_t50 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionY_m226 (VirtualInput_t50 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionZ_m227 (VirtualInput_t50 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single)
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition()
