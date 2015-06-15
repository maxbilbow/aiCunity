#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t40;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
extern "C" void ThirdPersonCharacter__ctor_m85 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
extern "C" void ThirdPersonCharacter_Start_m86 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_Move_m87 (ThirdPersonCharacter_t40 * __this, Vector3_t8  ___move, bool ___crouch, bool ___jump, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C" void ThirdPersonCharacter_ScaleCapsuleForCrouching_m88 (ThirdPersonCharacter_t40 * __this, bool ___crouch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C" void ThirdPersonCharacter_PreventStandingInLowHeadroom_m89 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C" void ThirdPersonCharacter_UpdateAnimator_m90 (ThirdPersonCharacter_t40 * __this, Vector3_t8  ___move, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C" void ThirdPersonCharacter_HandleAirborneMovement_m91 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_HandleGroundedMovement_m92 (ThirdPersonCharacter_t40 * __this, bool ___crouch, bool ___jump, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C" void ThirdPersonCharacter_ApplyExtraTurnRotation_m93 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern "C" void ThirdPersonCharacter_OnAnimatorMove_m94 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C" void ThirdPersonCharacter_CheckGroundStatus_m95 (ThirdPersonCharacter_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
