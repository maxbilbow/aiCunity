#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Vehicles.Car.CarAudio
struct CarAudio_t169;
// UnityEngine.AudioSource
struct AudioSource_t28;
// UnityEngine.AudioClip
struct AudioClip_t26;

// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::.ctor()
extern "C" void CarAudio__ctor_m503 (CarAudio_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StartSound()
extern "C" void CarAudio_StartSound_m504 (CarAudio_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StopSound()
extern "C" void CarAudio_StopSound_m505 (CarAudio_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::Update()
extern "C" void CarAudio_Update_m506 (CarAudio_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
extern "C" AudioSource_t28 * CarAudio_SetUpEngineAudioSource_m507 (CarAudio_t169 * __this, AudioClip_t26 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::ULerp(System.Single,System.Single,System.Single)
extern "C" float CarAudio_ULerp_m508 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
