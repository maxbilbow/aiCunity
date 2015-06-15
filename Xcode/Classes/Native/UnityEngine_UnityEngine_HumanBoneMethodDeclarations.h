#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t768;
struct HumanBone_t768_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m4046 (HumanBone_t768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m4047 (HumanBone_t768 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m4048 (HumanBone_t768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m4049 (HumanBone_t768 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t768_marshal(const HumanBone_t768& unmarshaled, HumanBone_t768_marshaled& marshaled);
void HumanBone_t768_marshal_back(const HumanBone_t768_marshaled& marshaled, HumanBone_t768& unmarshaled);
void HumanBone_t768_marshal_cleanup(HumanBone_t768_marshaled& marshaled);
