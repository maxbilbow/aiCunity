#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Controller3DExample
struct Controller3DExample_t254;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Controller3DExample::.ctor()
extern "C" void Controller3DExample__ctor_m1117 (Controller3DExample_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller3DExample::Start()
extern "C" void Controller3DExample_Start_m1118 (Controller3DExample_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller3DExample::Update()
extern "C" void Controller3DExample_Update_m1119 (Controller3DExample_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller3DExample::MoveWithEvent(UnityEngine.Vector3)
extern "C" void Controller3DExample_MoveWithEvent_m1120 (Controller3DExample_t254 * __this, Vector3_t8  ___inputMovement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller3DExample::CommonMovementMethod(UnityEngine.Vector3)
extern "C" void Controller3DExample_CommonMovementMethod_m1121 (Controller3DExample_t254 * __this, Vector3_t8  ___movement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller3DExample::FaceDirection(UnityEngine.Vector3)
extern "C" void Controller3DExample_FaceDirection_m1122 (Controller3DExample_t254 * __this, Vector3_t8  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Controller3DExample::RotateCoroutine(UnityEngine.Vector3)
extern "C" Object_t * Controller3DExample_RotateCoroutine_m1123 (Controller3DExample_t254 * __this, Vector3_t8  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
