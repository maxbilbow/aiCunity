#pragma once
#include <stdint.h>
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t146;
// UnityEngine.ParticleSystem
struct ParticleSystem_t121;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect
struct  JetParticleEffect_t160  : public MonoBehaviour_t5
{
	// UnityEngine.Color UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::minColour
	Color_t79  ___minColour_2;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_Jet
	AeroplaneController_t146 * ___m_Jet_3;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_System
	ParticleSystem_t121 * ___m_System_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalStartSize
	float ___m_OriginalStartSize_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalLifetime
	float ___m_OriginalLifetime_6;
	// UnityEngine.Color UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalStartColor
	Color_t79  ___m_OriginalStartColor_7;
};
