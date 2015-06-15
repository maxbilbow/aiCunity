#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t661;
struct GcScoreData_t661_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t849;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t849 * GcScoreData_ToScore_m4354 (GcScoreData_t661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t661_marshal(const GcScoreData_t661& unmarshaled, GcScoreData_t661_marshaled& marshaled);
void GcScoreData_t661_marshal_back(const GcScoreData_t661_marshaled& marshaled, GcScoreData_t661& unmarshaled);
void GcScoreData_t661_marshal_cleanup(GcScoreData_t661_marshaled& marshaled);
