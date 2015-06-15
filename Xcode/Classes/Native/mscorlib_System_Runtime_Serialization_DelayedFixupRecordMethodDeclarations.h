﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t1889;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1884;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1877;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m10122 (DelayedFixupRecord_t1889 * __this, ObjectRecord_t1884 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t1884 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m10123 (DelayedFixupRecord_t1889 * __this, ObjectManager_t1877 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
