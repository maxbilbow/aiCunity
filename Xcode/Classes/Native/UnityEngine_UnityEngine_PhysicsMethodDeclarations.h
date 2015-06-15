#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t748;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t15;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t189;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" void Physics_INTERNAL_get_gravity_m3936 (Object_t * __this /* static, unused */, Vector3_t8 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C" Vector3_t8  Physics_get_gravity_m675 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3937 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3938 (Object_t * __this /* static, unused */, Vector3_t8 * ___origin, Vector3_t8 * ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_CapsuleCast_m3939 (Object_t * __this /* static, unused */, Vector3_t8  ___point1, Vector3_t8  ___point2, float ___radius, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m3940 (Object_t * __this /* static, unused */, Vector3_t8 * ___point1, Vector3_t8 * ___point2, float ___radius, Vector3_t8 * ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_Internal_RaycastTest_m3941 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_RaycastTest_m3942 (Object_t * __this /* static, unused */, Vector3_t8 * ___origin, Vector3_t8 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" bool Physics_Raycast_m714 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m3943 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m746 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m954 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" bool Physics_Raycast_m967 (Object_t * __this /* static, unused */, Ray_t18  ___ray, RaycastHit_t16 * ___hitInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2770 (Object_t * __this /* static, unused */, Ray_t18  ___ray, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C" RaycastHitU5BU5D_t15* Physics_RaycastAll_m644 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_RaycastAll_m2683 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_RaycastAll_m3944 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_INTERNAL_CALL_RaycastAll_m3945 (Object_t * __this /* static, unused */, Vector3_t8 * ___origin, Vector3_t8 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C" ColliderU5BU5D_t189* Physics_OverlapSphere_m639 (Object_t * __this /* static, unused */, Vector3_t8  ___position, float ___radius, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" ColliderU5BU5D_t189* Physics_INTERNAL_CALL_OverlapSphere_m3946 (Object_t * __this /* static, unused */, Vector3_t8 * ___position, float ___radius, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_SphereCast_m672 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, float ___radius, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m3947 (Object_t * __this /* static, unused */, Vector3_t8  ___origin, float ___radius, Vector3_t8  ___direction, RaycastHit_t16 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single)
extern "C" bool Physics_SphereCast_m735 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m3948 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_CapsuleCastAll_m3949 (Object_t * __this /* static, unused */, Vector3_t8  ___point1, Vector3_t8  ___point2, float ___radius, Vector3_t8  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_INTERNAL_CALL_CapsuleCastAll_m3950 (Object_t * __this /* static, unused */, Vector3_t8 * ___point1, Vector3_t8 * ___point2, float ___radius, Vector3_t8 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single)
extern "C" RaycastHitU5BU5D_t15* Physics_SphereCastAll_m645 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t15* Physics_SphereCastAll_m3951 (Object_t * __this /* static, unused */, Ray_t18  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
