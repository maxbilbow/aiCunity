﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.PlayerPrefs
struct PlayerPrefs_t744;
// System.String
struct String_t;

// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3911 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C" String_t* PlayerPrefs_GetString_m3912 (Object_t * __this /* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
