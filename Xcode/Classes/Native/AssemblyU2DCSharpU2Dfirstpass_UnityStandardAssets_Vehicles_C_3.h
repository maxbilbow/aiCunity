#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t26;
// UnityEngine.AudioSource
struct AudioSource_t28;
// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t163;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Vehicles.Car.CarAudio/EngineAudioOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_2.h"
// UnityStandardAssets.Vehicles.Car.CarAudio
struct  CarAudio_t169  : public MonoBehaviour_t5
{
	// UnityStandardAssets.Vehicles.Car.CarAudio/EngineAudioOptions UnityStandardAssets.Vehicles.Car.CarAudio::engineSoundStyle
	int32_t ___engineSoundStyle_2;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::lowAccelClip
	AudioClip_t26 * ___lowAccelClip_3;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::lowDecelClip
	AudioClip_t26 * ___lowDecelClip_4;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::highAccelClip
	AudioClip_t26 * ___highAccelClip_5;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::highDecelClip
	AudioClip_t26 * ___highDecelClip_6;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::pitchMultiplier
	float ___pitchMultiplier_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::lowPitchMin
	float ___lowPitchMin_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::lowPitchMax
	float ___lowPitchMax_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::highPitchMultiplier
	float ___highPitchMultiplier_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::maxRolloffDistance
	float ___maxRolloffDistance_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::dopplerLevel
	float ___dopplerLevel_12;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAudio::useDoppler
	bool ___useDoppler_13;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_LowAccel
	AudioSource_t28 * ___m_LowAccel_14;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_LowDecel
	AudioSource_t28 * ___m_LowDecel_15;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_HighAccel
	AudioSource_t28 * ___m_HighAccel_16;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_HighDecel
	AudioSource_t28 * ___m_HighDecel_17;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAudio::m_StartedSound
	bool ___m_StartedSound_18;
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarAudio::m_CarController
	CarController_t163 * ___m_CarController_19;
};
