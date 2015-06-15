#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t42;
// UnityEngine.Rigidbody
struct Rigidbody_t3;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t146;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_10.h"
// UnityStandardAssets.Vehicles.Aeroplane.LandingGear
struct  LandingGear_t162  : public MonoBehaviour_t5
{
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::raiseAtAltitude
	float ___raiseAtAltitude_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::lowerAtAltitude
	float ___lowerAtAltitude_3;
	// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_State
	int32_t ___m_State_4;
	// UnityEngine.Animator UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Animator
	Animator_t42 * ___m_Animator_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Rigidbody
	Rigidbody_t3 * ___m_Rigidbody_6;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Plane
	AeroplaneController_t146 * ___m_Plane_7;
};
