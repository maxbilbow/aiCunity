#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t661;
struct GcAchievementData_t661_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t850;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t850 * GcAchievementData_ToAchievement_m4364 (GcAchievementData_t661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t661_marshal(const GcAchievementData_t661& unmarshaled, GcAchievementData_t661_marshaled& marshaled);
void GcAchievementData_t661_marshal_back(const GcAchievementData_t661_marshaled& marshaled, GcAchievementData_t661& unmarshaled);
void GcAchievementData_t661_marshal_cleanup(GcAchievementData_t661_marshaled& marshaled);
