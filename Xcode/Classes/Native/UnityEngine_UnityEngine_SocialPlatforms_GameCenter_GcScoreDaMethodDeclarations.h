#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t663;
struct GcScoreData_t663_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t851;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t851 * GcScoreData_ToScore_m4365 (GcScoreData_t663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t663_marshal(const GcScoreData_t663& unmarshaled, GcScoreData_t663_marshaled& marshaled);
void GcScoreData_t663_marshal_back(const GcScoreData_t663_marshaled& marshaled, GcScoreData_t663& unmarshaled);
void GcScoreData_t663_marshal_cleanup(GcScoreData_t663_marshaled& marshaled);
