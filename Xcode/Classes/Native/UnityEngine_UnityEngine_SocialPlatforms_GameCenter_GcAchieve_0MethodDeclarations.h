#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t659;
struct GcAchievementData_t659_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t848;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t848 * GcAchievementData_ToAchievement_m4353 (GcAchievementData_t659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t659_marshal(const GcAchievementData_t659& unmarshaled, GcAchievementData_t659_marshaled& marshaled);
void GcAchievementData_t659_marshal_back(const GcAchievementData_t659_marshaled& marshaled, GcAchievementData_t659& unmarshaled);
void GcAchievementData_t659_marshal_cleanup(GcAchievementData_t659_marshaled& marshaled);
