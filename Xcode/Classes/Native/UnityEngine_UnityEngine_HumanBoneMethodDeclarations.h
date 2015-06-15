#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t770;
struct HumanBone_t770_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m4057 (HumanBone_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m4058 (HumanBone_t770 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m4059 (HumanBone_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m4060 (HumanBone_t770 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t770_marshal(const HumanBone_t770& unmarshaled, HumanBone_t770_marshaled& marshaled);
void HumanBone_t770_marshal_back(const HumanBone_t770_marshaled& marshaled, HumanBone_t770& unmarshaled);
void HumanBone_t770_marshal_cleanup(HumanBone_t770_marshaled& marshaled);
