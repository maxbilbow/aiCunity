#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t45;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.CrossPlatformInput.RMXLookAround/AxisOption
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_1.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityStandardAssets.CrossPlatformInput.RMXLookAround
struct  RMXLookAround_t269  : public MonoBehaviour_t5
{
	// System.Single UnityStandardAssets.CrossPlatformInput.RMXLookAround::speed
	float ___speed_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.RMXLookAround::MovementRange
	int32_t ___MovementRange_3;
	// UnityStandardAssets.CrossPlatformInput.RMXLookAround/AxisOption UnityStandardAssets.CrossPlatformInput.RMXLookAround::axesToUse
	int32_t ___axesToUse_4;
	// System.String UnityStandardAssets.CrossPlatformInput.RMXLookAround::horizontalAxisName
	String_t* ___horizontalAxisName_5;
	// System.String UnityStandardAssets.CrossPlatformInput.RMXLookAround::verticalAxisName
	String_t* ___verticalAxisName_6;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.RMXLookAround::m_StartPos
	Vector3_t8  ___m_StartPos_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.RMXLookAround::m_UseX
	bool ___m_UseX_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.RMXLookAround::m_UseY
	bool ___m_UseY_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.RMXLookAround::m_HorizontalVirtualAxis
	VirtualAxis_t45 * ___m_HorizontalVirtualAxis_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.RMXLookAround::m_VerticalVirtualAxis
	VirtualAxis_t45 * ___m_VerticalVirtualAxis_11;
};
