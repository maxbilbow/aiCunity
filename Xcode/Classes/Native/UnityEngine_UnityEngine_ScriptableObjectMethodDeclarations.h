﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t644;
struct ScriptableObject_t644_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m3243 (ScriptableObject_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m3244 (Object_t * __this /* static, unused */, ScriptableObject_t644 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t644 * ScriptableObject_CreateInstance_m3245 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t644 * ScriptableObject_CreateInstance_m3246 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t644 * ScriptableObject_CreateInstanceFromType_m3247 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t644_marshal(const ScriptableObject_t644& unmarshaled, ScriptableObject_t644_marshaled& marshaled);
void ScriptableObject_t644_marshal_back(const ScriptableObject_t644_marshaled& marshaled, ScriptableObject_t644& unmarshaled);
void ScriptableObject_t644_marshal_cleanup(ScriptableObject_t644_marshaled& marshaled);
