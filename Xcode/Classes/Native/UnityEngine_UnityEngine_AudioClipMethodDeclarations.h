#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t26;
// System.Single[]
struct SingleU5BU5D_t143;

// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m1046 (AudioClip_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3991 (AudioClip_t26 * __this, SingleU5BU5D_t143* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3992 (AudioClip_t26 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
