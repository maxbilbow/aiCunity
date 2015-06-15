#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t45;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.CrossPlatformInput.RMXJoystick/AxisOption
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityStandardAssets.CrossPlatformInput.RMXJoystick
struct  RMXJoystick_t267  : public MonoBehaviour_t5
{
	// System.Int32 UnityStandardAssets.CrossPlatformInput.RMXJoystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.RMXJoystick/AxisOption UnityStandardAssets.CrossPlatformInput.RMXJoystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.RMXJoystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.RMXJoystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.RMXJoystick::m_StartPos
	Vector3_t8  ___m_StartPos_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.RMXJoystick::m_UseX
	bool ___m_UseX_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.RMXJoystick::m_UseY
	bool ___m_UseY_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.RMXJoystick::m_HorizontalVirtualAxis
	VirtualAxis_t45 * ___m_HorizontalVirtualAxis_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.RMXJoystick::m_VerticalVirtualAxis
	VirtualAxis_t45 * ___m_VerticalVirtualAxis_10;
};
