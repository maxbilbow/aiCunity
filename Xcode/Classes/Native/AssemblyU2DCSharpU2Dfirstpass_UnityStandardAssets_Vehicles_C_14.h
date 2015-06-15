#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.ParticleSystem
struct ParticleSystem_t121;
// UnityEngine.AudioSource
struct AudioSource_t28;
// UnityEngine.WheelCollider
struct WheelCollider_t182;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Vehicles.Car.WheelEffects
struct  WheelEffects_t180  : public MonoBehaviour_t5
{
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::SkidTrailPrefab
	Transform_t2 * ___SkidTrailPrefab_2;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Car.WheelEffects::skidParticles
	ParticleSystem_t121 * ___skidParticles_4;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.WheelEffects::m_AudioSource
	AudioSource_t28 * ___m_AudioSource_5;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::m_SkidTrail
	Transform_t2 * ___m_SkidTrail_6;
	// UnityEngine.WheelCollider UnityStandardAssets.Vehicles.Car.WheelEffects::m_WheelCollider
	WheelCollider_t182 * ___m_WheelCollider_7;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<skidding>k__BackingField
	bool ___U3CskiddingU3Ek__BackingField_8;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<PlayingAudio>k__BackingField
	bool ___U3CPlayingAudioU3Ek__BackingField_9;
};
struct WheelEffects_t180_StaticFields{
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::skidTrailsDetachedParent
	Transform_t2 * ___skidTrailsDetachedParent_3;
};
