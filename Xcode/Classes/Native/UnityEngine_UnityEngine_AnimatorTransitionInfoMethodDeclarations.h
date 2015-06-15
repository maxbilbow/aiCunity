﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t767;
struct AnimatorTransitionInfo_t767_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m4040 (AnimatorTransitionInfo_t767 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m4041 (AnimatorTransitionInfo_t767 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m4042 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m4043 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m4044 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m4045 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m4046 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m4047 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m4048 (AnimatorTransitionInfo_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t767_marshal(const AnimatorTransitionInfo_t767& unmarshaled, AnimatorTransitionInfo_t767_marshaled& marshaled);
void AnimatorTransitionInfo_t767_marshal_back(const AnimatorTransitionInfo_t767_marshaled& marshaled, AnimatorTransitionInfo_t767& unmarshaled);
void AnimatorTransitionInfo_t767_marshal_cleanup(AnimatorTransitionInfo_t767_marshaled& marshaled);
