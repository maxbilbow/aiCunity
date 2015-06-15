#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t26;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings
struct AdvancedSetttings_t148;
// UnityEngine.AudioSource
struct AudioSource_t28;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t146;
// UnityEngine.Rigidbody
struct Rigidbody_t3;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio
struct  AeroplaneAudio_t149  : public MonoBehaviour_t5
{
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineSound
	AudioClip_t26 * ___m_EngineSound_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineMinThrottlePitch
	float ___m_EngineMinThrottlePitch_3;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineMaxThrottlePitch
	float ___m_EngineMaxThrottlePitch_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineFwdSpeedMultiplier
	float ___m_EngineFwdSpeedMultiplier_5;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSound
	AudioClip_t26 * ___m_WindSound_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindBasePitch
	float ___m_WindBasePitch_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSpeedPitchFactor
	float ___m_WindSpeedPitchFactor_8;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindMaxSpeedVolume
	float ___m_WindMaxSpeedVolume_9;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_AdvancedSetttings
	AdvancedSetttings_t148 * ___m_AdvancedSetttings_10;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineSoundSource
	AudioSource_t28 * ___m_EngineSoundSource_11;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSoundSource
	AudioSource_t28 * ___m_WindSoundSource_12;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_Plane
	AeroplaneController_t146 * ___m_Plane_13;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_Rigidbody
	Rigidbody_t3 * ___m_Rigidbody_14;
};
