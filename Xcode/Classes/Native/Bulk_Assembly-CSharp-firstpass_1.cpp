#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo AeroplaneControlSurfaceAnimator_t153_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_3.h"
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_5.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface/Type
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_2.h"
extern TypeInfo ControlSurface_t151_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_5MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m575_MethodInfo;
extern MethodInfo Transform_get_localRotation_m611_MethodInfo;
extern MethodInfo AeroplaneController_get_RollInput_m455_MethodInfo;
extern MethodInfo Quaternion_Euler_m614_MethodInfo;
extern MethodInfo AeroplaneControlSurfaceAnimator_RotateSurface_m438_MethodInfo;
extern MethodInfo AeroplaneController_get_PitchInput_m457_MethodInfo;
extern MethodInfo AeroplaneController_get_YawInput_m459_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m623_MethodInfo;
extern MethodInfo Time_get_deltaTime_m579_MethodInfo;
extern MethodInfo Quaternion_Slerp_m617_MethodInfo;
extern MethodInfo Transform_set_localRotation_m618_MethodInfo;
struct Component_t185;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_15.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t185;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m585_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m585(__this, method) (( Object_t * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController>()
#define Component_GetComponent_TisAeroplaneController_t146_m1009(__this, method) (( AeroplaneController_t146 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::.ctor()
extern MethodInfo AeroplaneControlSurfaceAnimator__ctor_m435_MethodInfo;
extern "C" void AeroplaneControlSurfaceAnimator__ctor_m435 (AeroplaneControlSurfaceAnimator_t153 * __this, MethodInfo* method)
{
	{
		__this->___m_Smoothing_2 = (5.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::Start()
extern MethodInfo AeroplaneControlSurfaceAnimator_Start_m436_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern "C" void AeroplaneControlSurfaceAnimator_Start_m436 (AeroplaneControlSurfaceAnimator_t153 * __this, MethodInfo* method)
{
	static bool AeroplaneControlSurfaceAnimator_Start_m436_init;
	if (!AeroplaneControlSurfaceAnimator_Start_m436_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		AeroplaneControlSurfaceAnimator_Start_m436_init = true;
	}
	ControlSurface_t151 * V_0 = {0};
	ControlSurfaceU5BU5D_t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_Plane_4 = L_0;
		ControlSurfaceU5BU5D_t152* L_1 = (__this->___m_ControlSurfaces_3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0033;
	}

IL_001a:
	{
		ControlSurfaceU5BU5D_t152* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(ControlSurface_t151 **)(ControlSurface_t151 **)SZArrayLdElema(L_2, L_4));
		ControlSurface_t151 * L_5 = V_0;
		ControlSurface_t151 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t2 * L_7 = (L_6->___transform_0);
		NullCheck(L_7);
		Quaternion_t10  L_8 = Transform_get_localRotation_m611(L_7, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		NullCheck(L_5);
		L_5->___originalLocalRotation_3 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_10 = V_2;
		ControlSurfaceU5BU5D_t152* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::Update()
extern MethodInfo AeroplaneControlSurfaceAnimator_Update_m437_MethodInfo;
extern "C" void AeroplaneControlSurfaceAnimator_Update_m437 (AeroplaneControlSurfaceAnimator_t153 * __this, MethodInfo* method)
{
	ControlSurface_t151 * V_0 = {0};
	ControlSurfaceU5BU5D_t152* V_1 = {0};
	int32_t V_2 = 0;
	Quaternion_t10  V_3 = {0};
	Quaternion_t10  V_4 = {0};
	Quaternion_t10  V_5 = {0};
	float V_6 = 0.0f;
	Quaternion_t10  V_7 = {0};
	float V_8 = 0.0f;
	Quaternion_t10  V_9 = {0};
	int32_t V_10 = {0};
	{
		ControlSurfaceU5BU5D_t152* L_0 = (__this->___m_ControlSurfaces_3);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0152;
	}

IL_000e:
	{
		ControlSurfaceU5BU5D_t152* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(ControlSurface_t151 **)(ControlSurface_t151 **)SZArrayLdElema(L_1, L_3));
		ControlSurface_t151 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___type_2);
		V_10 = L_5;
		int32_t L_6 = V_10;
		if (L_6 == 0)
		{
			goto IL_003a;
		}
		if (L_6 == 1)
		{
			goto IL_0069;
		}
		if (L_6 == 2)
		{
			goto IL_009b;
		}
		if (L_6 == 3)
		{
			goto IL_010d;
		}
		if (L_6 == 4)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_014e;
	}

IL_003a:
	{
		ControlSurface_t151 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = (L_7->___amount_1);
		AeroplaneController_t146 * L_9 = (__this->___m_Plane_4);
		NullCheck(L_9);
		float L_10 = AeroplaneController_get_RollInput_m455(L_9, /*hidden argument*/&AeroplaneController_get_RollInput_m455_MethodInfo);
		Quaternion_t10  L_11 = Quaternion_Euler_m614(NULL /*static, unused*/, ((float)((float)L_8*(float)L_10)), (0.0f), (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_3 = L_11;
		ControlSurface_t151 * L_12 = V_0;
		Quaternion_t10  L_13 = V_3;
		AeroplaneControlSurfaceAnimator_RotateSurface_m438(__this, L_12, L_13, /*hidden argument*/&AeroplaneControlSurfaceAnimator_RotateSurface_m438_MethodInfo);
		goto IL_014e;
	}

IL_0069:
	{
		ControlSurface_t151 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = (L_14->___amount_1);
		AeroplaneController_t146 * L_16 = (__this->___m_Plane_4);
		NullCheck(L_16);
		float L_17 = AeroplaneController_get_PitchInput_m457(L_16, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		Quaternion_t10  L_18 = Quaternion_Euler_m614(NULL /*static, unused*/, ((float)((float)L_15*(float)((-L_17)))), (0.0f), (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_4 = L_18;
		ControlSurface_t151 * L_19 = V_0;
		Quaternion_t10  L_20 = V_4;
		AeroplaneControlSurfaceAnimator_RotateSurface_m438(__this, L_19, L_20, /*hidden argument*/&AeroplaneControlSurfaceAnimator_RotateSurface_m438_MethodInfo);
		goto IL_014e;
	}

IL_009b:
	{
		ControlSurface_t151 * L_21 = V_0;
		NullCheck(L_21);
		float L_22 = (L_21->___amount_1);
		AeroplaneController_t146 * L_23 = (__this->___m_Plane_4);
		NullCheck(L_23);
		float L_24 = AeroplaneController_get_YawInput_m459(L_23, /*hidden argument*/&AeroplaneController_get_YawInput_m459_MethodInfo);
		Quaternion_t10  L_25 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), ((float)((float)L_22*(float)L_24)), (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_5 = L_25;
		ControlSurface_t151 * L_26 = V_0;
		Quaternion_t10  L_27 = V_5;
		AeroplaneControlSurfaceAnimator_RotateSurface_m438(__this, L_26, L_27, /*hidden argument*/&AeroplaneControlSurfaceAnimator_RotateSurface_m438_MethodInfo);
		goto IL_014e;
	}

IL_00cc:
	{
		AeroplaneController_t146 * L_28 = (__this->___m_Plane_4);
		NullCheck(L_28);
		float L_29 = AeroplaneController_get_YawInput_m459(L_28, /*hidden argument*/&AeroplaneController_get_YawInput_m459_MethodInfo);
		AeroplaneController_t146 * L_30 = (__this->___m_Plane_4);
		NullCheck(L_30);
		float L_31 = AeroplaneController_get_PitchInput_m457(L_30, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		V_6 = ((float)((float)L_29+(float)L_31));
		ControlSurface_t151 * L_32 = V_0;
		NullCheck(L_32);
		float L_33 = (L_32->___amount_1);
		float L_34 = V_6;
		Quaternion_t10  L_35 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_33*(float)L_34)), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_7 = L_35;
		ControlSurface_t151 * L_36 = V_0;
		Quaternion_t10  L_37 = V_7;
		AeroplaneControlSurfaceAnimator_RotateSurface_m438(__this, L_36, L_37, /*hidden argument*/&AeroplaneControlSurfaceAnimator_RotateSurface_m438_MethodInfo);
		goto IL_014e;
	}

IL_010d:
	{
		AeroplaneController_t146 * L_38 = (__this->___m_Plane_4);
		NullCheck(L_38);
		float L_39 = AeroplaneController_get_YawInput_m459(L_38, /*hidden argument*/&AeroplaneController_get_YawInput_m459_MethodInfo);
		AeroplaneController_t146 * L_40 = (__this->___m_Plane_4);
		NullCheck(L_40);
		float L_41 = AeroplaneController_get_PitchInput_m457(L_40, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		V_8 = ((float)((float)L_39-(float)L_41));
		ControlSurface_t151 * L_42 = V_0;
		NullCheck(L_42);
		float L_43 = (L_42->___amount_1);
		float L_44 = V_8;
		Quaternion_t10  L_45 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_43*(float)L_44)), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_9 = L_45;
		ControlSurface_t151 * L_46 = V_0;
		Quaternion_t10  L_47 = V_9;
		AeroplaneControlSurfaceAnimator_RotateSurface_m438(__this, L_46, L_47, /*hidden argument*/&AeroplaneControlSurfaceAnimator_RotateSurface_m438_MethodInfo);
		goto IL_014e;
	}

IL_014e:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48+(int32_t)1));
	}

IL_0152:
	{
		int32_t L_49 = V_2;
		ControlSurfaceU5BU5D_t152* L_50 = V_1;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)(((Array_t *)L_50)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::RotateSurface(UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface,UnityEngine.Quaternion)
extern "C" void AeroplaneControlSurfaceAnimator_RotateSurface_m438 (AeroplaneControlSurfaceAnimator_t153 * __this, ControlSurface_t151 * ___surface, Quaternion_t10  ___rotation, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		ControlSurface_t151 * L_0 = ___surface;
		NullCheck(L_0);
		Quaternion_t10  L_1 = (L_0->___originalLocalRotation_3);
		Quaternion_t10  L_2 = ___rotation;
		Quaternion_t10  L_3 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		V_0 = L_3;
		ControlSurface_t151 * L_4 = ___surface;
		NullCheck(L_4);
		Transform_t2 * L_5 = (L_4->___transform_0);
		ControlSurface_t151 * L_6 = ___surface;
		NullCheck(L_6);
		Transform_t2 * L_7 = (L_6->___transform_0);
		NullCheck(L_7);
		Quaternion_t10  L_8 = Transform_get_localRotation_m611(L_7, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		Quaternion_t10  L_9 = V_0;
		float L_10 = (__this->___m_Smoothing_2);
		float L_11 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_12 = Quaternion_Slerp_m617(NULL /*static, unused*/, L_8, L_9, ((float)((float)L_10*(float)L_11)), /*hidden argument*/&Quaternion_Slerp_m617_MethodInfo);
		NullCheck(L_5);
		Transform_set_localRotation_m618(L_5, L_12, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AeroplaneController_t146_il2cpp_TypeInfo;

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.WheelCollider
#include "UnityEngine_UnityEngine_WheelCollider.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
extern TypeInfo Mathf_t186_il2cpp_TypeInfo;
extern TypeInfo Vector3_t8_il2cpp_TypeInfo;
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.WheelCollider
#include "UnityEngine_UnityEngine_WheelColliderMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
extern MethodInfo Rigidbody_get_drag_m944_MethodInfo;
extern MethodInfo Rigidbody_get_angularDrag_m945_MethodInfo;
extern MethodInfo Component_get_transform_m598_MethodInfo;
extern MethodInfo Transform_GetChild_m1019_MethodInfo;
extern MethodInfo WheelCollider_set_motorTorque_m1020_MethodInfo;
extern MethodInfo Transform_get_childCount_m1021_MethodInfo;
extern MethodInfo AeroplaneController_set_RollInput_m456_MethodInfo;
extern MethodInfo AeroplaneController_set_PitchInput_m458_MethodInfo;
extern MethodInfo AeroplaneController_set_YawInput_m460_MethodInfo;
extern MethodInfo AeroplaneController_set_ThrottleInput_m462_MethodInfo;
extern MethodInfo AeroplaneController_set_AirBrakes_m445_MethodInfo;
extern MethodInfo AeroplaneController_ClampInputs_m465_MethodInfo;
extern MethodInfo AeroplaneController_CalculateRollAndPitchAngles_m466_MethodInfo;
extern MethodInfo AeroplaneController_AutoLevel_m467_MethodInfo;
extern MethodInfo AeroplaneController_CalculateForwardSpeed_m468_MethodInfo;
extern MethodInfo AeroplaneController_ControlThrottle_m469_MethodInfo;
extern MethodInfo AeroplaneController_CalculateDrag_m470_MethodInfo;
extern MethodInfo AeroplaneController_CaluclateAerodynamicEffect_m471_MethodInfo;
extern MethodInfo AeroplaneController_CalculateLinearForces_m472_MethodInfo;
extern MethodInfo AeroplaneController_CalculateTorque_m473_MethodInfo;
extern MethodInfo AeroplaneController_CalculateAltitude_m474_MethodInfo;
extern MethodInfo Mathf_Clamp_m616_MethodInfo;
extern MethodInfo AeroplaneController_get_ThrottleInput_m461_MethodInfo;
extern MethodInfo Transform_get_forward_m587_MethodInfo;
extern MethodInfo Vector3_get_sqrMagnitude_m602_MethodInfo;
extern MethodInfo Vector3_Normalize_m728_MethodInfo;
extern MethodInfo Transform_InverseTransformDirection_m729_MethodInfo;
extern MethodInfo Mathf_Atan2_m594_MethodInfo;
extern MethodInfo AeroplaneController_set_PitchAngle_m454_MethodInfo;
extern MethodInfo Vector3_get_up_m586_MethodInfo;
extern MethodInfo Vector3_Cross_m1022_MethodInfo;
extern MethodInfo AeroplaneController_set_RollAngle_m452_MethodInfo;
extern MethodInfo AeroplaneController_get_RollAngle_m451_MethodInfo;
extern MethodInfo Mathf_Sin_m1023_MethodInfo;
extern MethodInfo AeroplaneController_get_PitchAngle_m453_MethodInfo;
extern MethodInfo Mathf_Abs_m596_MethodInfo;
extern MethodInfo Rigidbody_get_velocity_m590_MethodInfo;
extern MethodInfo Mathf_Max_m986_MethodInfo;
extern MethodInfo AeroplaneController_set_ForwardSpeed_m447_MethodInfo;
extern MethodInfo AeroplaneController_get_Throttle_m442_MethodInfo;
extern MethodInfo Mathf_Clamp01_m1024_MethodInfo;
extern MethodInfo AeroplaneController_set_Throttle_m443_MethodInfo;
extern MethodInfo AeroplaneController_set_EnginePower_m449_MethodInfo;
extern MethodInfo Vector3_get_magnitude_m591_MethodInfo;
extern MethodInfo AeroplaneController_get_AirBrakes_m444_MethodInfo;
extern MethodInfo Rigidbody_set_drag_m699_MethodInfo;
extern MethodInfo AeroplaneController_get_ForwardSpeed_m446_MethodInfo;
extern MethodInfo Rigidbody_set_angularDrag_m946_MethodInfo;
extern MethodInfo Vector3_get_normalized_m592_MethodInfo;
extern MethodInfo Vector3_Dot_m851_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m633_MethodInfo;
extern MethodInfo Vector3_Lerp_m600_MethodInfo;
extern MethodInfo Rigidbody_set_velocity_m701_MethodInfo;
extern MethodInfo Rigidbody_get_rotation_m1025_MethodInfo;
extern MethodInfo Transform_get_up_m588_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m603_MethodInfo;
extern MethodInfo Rigidbody_set_rotation_m1026_MethodInfo;
extern MethodInfo Vector3_get_zero_m662_MethodInfo;
extern MethodInfo AeroplaneController_get_EnginePower_m448_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m717_MethodInfo;
extern MethodInfo Vector3_op_Addition_m634_MethodInfo;
extern MethodInfo Transform_get_right_m668_MethodInfo;
extern MethodInfo Mathf_InverseLerp_m597_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m713_MethodInfo;
extern MethodInfo Rigidbody_AddTorque_m712_MethodInfo;
extern MethodInfo Transform_get_position_m599_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m653_MethodInfo;
extern MethodInfo Vector3_op_UnaryNegation_m636_MethodInfo;
extern MethodInfo Ray__ctor_m734_MethodInfo;
extern MethodInfo Physics_Raycast_m967_MethodInfo;
extern MethodInfo RaycastHit_get_distance_m630_MethodInfo;
extern MethodInfo AeroplaneController_set_Altitude_m441_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3_m584(__this, method) (( Rigidbody_t3 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct Component_t185;
struct Component_t185;
#include "mscorlib_ArrayTypes.h"
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t194* Component_GetComponentsInChildren_TisObject_t_m661_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m661(__this, method) (( ObjectU5BU5D_t194* (*) (Component_t185 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m661_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.WheelCollider>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.WheelCollider>()
#define Component_GetComponentsInChildren_TisWheelCollider_t182_m1027(__this, method) (( WheelColliderU5BU5D_t154* (*) (Component_t185 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m661_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRigidbody_t3_m584_GenericMethod;
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisWheelCollider_t182_m1027_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::.ctor()
extern MethodInfo AeroplaneController__ctor_m439_MethodInfo;
extern "C" void AeroplaneController__ctor_m439 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		__this->___m_MaxEnginePower_2 = (40.0f);
		__this->___m_Lift_3 = (0.002f);
		__this->___m_ZeroLiftSpeed_4 = (300.0f);
		__this->___m_RollEffect_5 = (1.0f);
		__this->___m_PitchEffect_6 = (1.0f);
		__this->___m_YawEffect_7 = (0.2f);
		__this->___m_BankedTurnEffect_8 = (0.5f);
		__this->___m_AerodynamicEffect_9 = (0.02f);
		__this->___m_AutoTurnPitch_10 = (0.5f);
		__this->___m_AutoRollLevel_11 = (0.2f);
		__this->___m_AutoPitchLevel_12 = (0.2f);
		__this->___m_AirBrakesEffect_13 = (3.0f);
		__this->___m_ThrottleChangeSpeed_14 = (0.3f);
		__this->___m_DragIncreaseFactor_15 = (0.001f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_Altitude()
extern MethodInfo AeroplaneController_get_Altitude_m440_MethodInfo;
extern "C" float AeroplaneController_get_Altitude_m440 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CAltitudeU3Ek__BackingField_23);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_Altitude(System.Single)
extern "C" void AeroplaneController_set_Altitude_m441 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CAltitudeU3Ek__BackingField_23 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_Throttle()
extern "C" float AeroplaneController_get_Throttle_m442 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CThrottleU3Ek__BackingField_24);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_Throttle(System.Single)
extern "C" void AeroplaneController_set_Throttle_m443 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CThrottleU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_AirBrakes()
extern "C" bool AeroplaneController_get_AirBrakes_m444 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CAirBrakesU3Ek__BackingField_25);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_AirBrakes(System.Boolean)
extern "C" void AeroplaneController_set_AirBrakes_m445 (AeroplaneController_t146 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CAirBrakesU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_ForwardSpeed()
extern "C" float AeroplaneController_get_ForwardSpeed_m446 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CForwardSpeedU3Ek__BackingField_26);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_ForwardSpeed(System.Single)
extern "C" void AeroplaneController_set_ForwardSpeed_m447 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CForwardSpeedU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_EnginePower()
extern "C" float AeroplaneController_get_EnginePower_m448 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CEnginePowerU3Ek__BackingField_27);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_EnginePower(System.Single)
extern "C" void AeroplaneController_set_EnginePower_m449 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CEnginePowerU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_MaxEnginePower()
extern MethodInfo AeroplaneController_get_MaxEnginePower_m450_MethodInfo;
extern "C" float AeroplaneController_get_MaxEnginePower_m450 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_MaxEnginePower_2);
		return L_0;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_RollAngle()
extern "C" float AeroplaneController_get_RollAngle_m451 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CRollAngleU3Ek__BackingField_28);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_RollAngle(System.Single)
extern "C" void AeroplaneController_set_RollAngle_m452 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CRollAngleU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_PitchAngle()
extern "C" float AeroplaneController_get_PitchAngle_m453 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CPitchAngleU3Ek__BackingField_29);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_PitchAngle(System.Single)
extern "C" void AeroplaneController_set_PitchAngle_m454 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CPitchAngleU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_RollInput()
extern "C" float AeroplaneController_get_RollInput_m455 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CRollInputU3Ek__BackingField_30);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_RollInput(System.Single)
extern "C" void AeroplaneController_set_RollInput_m456 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CRollInputU3Ek__BackingField_30 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_PitchInput()
extern "C" float AeroplaneController_get_PitchInput_m457 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CPitchInputU3Ek__BackingField_31);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_PitchInput(System.Single)
extern "C" void AeroplaneController_set_PitchInput_m458 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CPitchInputU3Ek__BackingField_31 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_YawInput()
extern "C" float AeroplaneController_get_YawInput_m459 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CYawInputU3Ek__BackingField_32);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_YawInput(System.Single)
extern "C" void AeroplaneController_set_YawInput_m460 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CYawInputU3Ek__BackingField_32 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::get_ThrottleInput()
extern "C" float AeroplaneController_get_ThrottleInput_m461 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CThrottleInputU3Ek__BackingField_33);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::set_ThrottleInput(System.Single)
extern "C" void AeroplaneController_set_ThrottleInput_m462 (AeroplaneController_t146 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CThrottleInputU3Ek__BackingField_33 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::Start()
extern MethodInfo AeroplaneController_Start_m463_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisWheelCollider_t182_m1027_MethodInfo_var;
extern "C" void AeroplaneController_Start_m463 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	static bool AeroplaneController_Start_m463_init;
	if (!AeroplaneController_Start_m463_init)
	{
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		Component_GetComponentsInChildren_TisWheelCollider_t182_m1027_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisWheelCollider_t182_m1027_GenericMethod);
		AeroplaneController_Start_m463_init = true;
	}
	int32_t V_0 = 0;
	WheelCollider_t182 * V_1 = {0};
	WheelColliderU5BU5D_t154* V_2 = {0};
	int32_t V_3 = 0;
	{
		Rigidbody_t3 * L_0 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_21 = L_0;
		Rigidbody_t3 * L_1 = (__this->___m_Rigidbody_21);
		NullCheck(L_1);
		float L_2 = Rigidbody_get_drag_m944(L_1, /*hidden argument*/&Rigidbody_get_drag_m944_MethodInfo);
		__this->___m_OriginalDrag_16 = L_2;
		Rigidbody_t3 * L_3 = (__this->___m_Rigidbody_21);
		NullCheck(L_3);
		float L_4 = Rigidbody_get_angularDrag_m945(L_3, /*hidden argument*/&Rigidbody_get_angularDrag_m945_MethodInfo);
		__this->___m_OriginalAngularDrag_17 = L_4;
		V_0 = 0;
		goto IL_006e;
	}

IL_0035:
	{
		Transform_t2 * L_5 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_t2 * L_7 = Transform_GetChild_m1019(L_5, L_6, /*hidden argument*/&Transform_GetChild_m1019_MethodInfo);
		NullCheck(L_7);
		WheelColliderU5BU5D_t154* L_8 = Component_GetComponentsInChildren_TisWheelCollider_t182_m1027(L_7, /*hidden argument*/Component_GetComponentsInChildren_TisWheelCollider_t182_m1027_MethodInfo_var);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0061;
	}

IL_004e:
	{
		WheelColliderU5BU5D_t154* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_1 = (*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_9, L_11));
		WheelCollider_t182 * L_12 = V_1;
		NullCheck(L_12);
		WheelCollider_set_motorTorque_m1020(L_12, (0.18f), /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		WheelColliderU5BU5D_t154* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_17 = V_0;
		Transform_t2 * L_18 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = Transform_get_childCount_m1021(L_18, /*hidden argument*/&Transform_get_childCount_m1021_MethodInfo);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0035;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::Move(System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern MethodInfo AeroplaneController_Move_m464_MethodInfo;
extern "C" void AeroplaneController_Move_m464 (AeroplaneController_t146 * __this, float ___rollInput, float ___pitchInput, float ___yawInput, float ___throttleInput, bool ___airBrakes, MethodInfo* method)
{
	{
		float L_0 = ___rollInput;
		AeroplaneController_set_RollInput_m456(__this, L_0, /*hidden argument*/&AeroplaneController_set_RollInput_m456_MethodInfo);
		float L_1 = ___pitchInput;
		AeroplaneController_set_PitchInput_m458(__this, L_1, /*hidden argument*/&AeroplaneController_set_PitchInput_m458_MethodInfo);
		float L_2 = ___yawInput;
		AeroplaneController_set_YawInput_m460(__this, L_2, /*hidden argument*/&AeroplaneController_set_YawInput_m460_MethodInfo);
		float L_3 = ___throttleInput;
		AeroplaneController_set_ThrottleInput_m462(__this, L_3, /*hidden argument*/&AeroplaneController_set_ThrottleInput_m462_MethodInfo);
		bool L_4 = ___airBrakes;
		AeroplaneController_set_AirBrakes_m445(__this, L_4, /*hidden argument*/&AeroplaneController_set_AirBrakes_m445_MethodInfo);
		AeroplaneController_ClampInputs_m465(__this, /*hidden argument*/&AeroplaneController_ClampInputs_m465_MethodInfo);
		AeroplaneController_CalculateRollAndPitchAngles_m466(__this, /*hidden argument*/&AeroplaneController_CalculateRollAndPitchAngles_m466_MethodInfo);
		AeroplaneController_AutoLevel_m467(__this, /*hidden argument*/&AeroplaneController_AutoLevel_m467_MethodInfo);
		AeroplaneController_CalculateForwardSpeed_m468(__this, /*hidden argument*/&AeroplaneController_CalculateForwardSpeed_m468_MethodInfo);
		AeroplaneController_ControlThrottle_m469(__this, /*hidden argument*/&AeroplaneController_ControlThrottle_m469_MethodInfo);
		AeroplaneController_CalculateDrag_m470(__this, /*hidden argument*/&AeroplaneController_CalculateDrag_m470_MethodInfo);
		AeroplaneController_CaluclateAerodynamicEffect_m471(__this, /*hidden argument*/&AeroplaneController_CaluclateAerodynamicEffect_m471_MethodInfo);
		AeroplaneController_CalculateLinearForces_m472(__this, /*hidden argument*/&AeroplaneController_CalculateLinearForces_m472_MethodInfo);
		AeroplaneController_CalculateTorque_m473(__this, /*hidden argument*/&AeroplaneController_CalculateTorque_m473_MethodInfo);
		AeroplaneController_CalculateAltitude_m474(__this, /*hidden argument*/&AeroplaneController_CalculateAltitude_m474_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::ClampInputs()
extern "C" void AeroplaneController_ClampInputs_m465 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = AeroplaneController_get_RollInput_m455(__this, /*hidden argument*/&AeroplaneController_get_RollInput_m455_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp_m616(NULL /*static, unused*/, L_0, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		AeroplaneController_set_RollInput_m456(__this, L_1, /*hidden argument*/&AeroplaneController_set_RollInput_m456_MethodInfo);
		float L_2 = AeroplaneController_get_PitchInput_m457(__this, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		float L_3 = Mathf_Clamp_m616(NULL /*static, unused*/, L_2, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		AeroplaneController_set_PitchInput_m458(__this, L_3, /*hidden argument*/&AeroplaneController_set_PitchInput_m458_MethodInfo);
		float L_4 = AeroplaneController_get_YawInput_m459(__this, /*hidden argument*/&AeroplaneController_get_YawInput_m459_MethodInfo);
		float L_5 = Mathf_Clamp_m616(NULL /*static, unused*/, L_4, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		AeroplaneController_set_YawInput_m460(__this, L_5, /*hidden argument*/&AeroplaneController_set_YawInput_m460_MethodInfo);
		float L_6 = AeroplaneController_get_ThrottleInput_m461(__this, /*hidden argument*/&AeroplaneController_get_ThrottleInput_m461_MethodInfo);
		float L_7 = Mathf_Clamp_m616(NULL /*static, unused*/, L_6, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		AeroplaneController_set_ThrottleInput_m462(__this, L_7, /*hidden argument*/&AeroplaneController_set_ThrottleInput_m462_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CalculateRollAndPitchAngles()
extern "C" void AeroplaneController_CalculateRollAndPitchAngles_m466 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_forward_m587(L_0, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		V_0 = L_1;
		(&V_0)->___y_2 = (0.0f);
		float L_2 = Vector3_get_sqrMagnitude_m602((&V_0), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0088;
		}
	}
	{
		Vector3_Normalize_m728((&V_0), /*hidden argument*/&Vector3_Normalize_m728_MethodInfo);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t8  L_5 = Transform_InverseTransformDirection_m729(L_3, L_4, /*hidden argument*/&Transform_InverseTransformDirection_m729_MethodInfo);
		V_1 = L_5;
		float L_6 = ((&V_1)->___y_2);
		float L_7 = ((&V_1)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = atan2f(L_6, L_7);
		AeroplaneController_set_PitchAngle_m454(__this, L_8, /*hidden argument*/&AeroplaneController_set_PitchAngle_m454_MethodInfo);
		Vector3_t8  L_9 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_10 = V_0;
		Vector3_t8  L_11 = Vector3_Cross_m1022(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector3_Cross_m1022_MethodInfo);
		V_2 = L_11;
		Transform_t2 * L_12 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_13 = V_2;
		NullCheck(L_12);
		Vector3_t8  L_14 = Transform_InverseTransformDirection_m729(L_12, L_13, /*hidden argument*/&Transform_InverseTransformDirection_m729_MethodInfo);
		V_3 = L_14;
		float L_15 = ((&V_3)->___y_2);
		float L_16 = ((&V_3)->___x_1);
		float L_17 = atan2f(L_15, L_16);
		AeroplaneController_set_RollAngle_m452(__this, L_17, /*hidden argument*/&AeroplaneController_set_RollAngle_m452_MethodInfo);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::AutoLevel()
extern "C" void AeroplaneController_AutoLevel_m467 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		float L_0 = AeroplaneController_get_RollAngle_m451(__this, /*hidden argument*/&AeroplaneController_get_RollAngle_m451_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_1 = sinf(L_0);
		__this->___m_BankedTurnAmount_20 = L_1;
		float L_2 = AeroplaneController_get_RollInput_m455(__this, /*hidden argument*/&AeroplaneController_get_RollInput_m455_MethodInfo);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_3 = AeroplaneController_get_RollAngle_m451(__this, /*hidden argument*/&AeroplaneController_get_RollAngle_m451_MethodInfo);
		float L_4 = (__this->___m_AutoRollLevel_11);
		AeroplaneController_set_RollInput_m456(__this, ((float)((float)((-L_3))*(float)L_4)), /*hidden argument*/&AeroplaneController_set_RollInput_m456_MethodInfo);
	}

IL_0035:
	{
		float L_5 = AeroplaneController_get_PitchInput_m457(__this, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		float L_6 = AeroplaneController_get_PitchAngle_m453(__this, /*hidden argument*/&AeroplaneController_get_PitchAngle_m453_MethodInfo);
		float L_7 = (__this->___m_AutoPitchLevel_12);
		AeroplaneController_set_PitchInput_m458(__this, ((float)((float)((-L_6))*(float)L_7)), /*hidden argument*/&AeroplaneController_set_PitchInput_m458_MethodInfo);
		float L_8 = AeroplaneController_get_PitchInput_m457(__this, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		float L_9 = (__this->___m_BankedTurnAmount_20);
		float L_10 = (__this->___m_BankedTurnAmount_20);
		float L_11 = (__this->___m_AutoTurnPitch_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_12 = fabsf(((float)((float)((float)((float)L_9*(float)L_10))*(float)L_11)));
		AeroplaneController_set_PitchInput_m458(__this, ((float)((float)L_8-(float)L_12)), /*hidden argument*/&AeroplaneController_set_PitchInput_m458_MethodInfo);
	}

IL_007f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CalculateForwardSpeed()
extern "C" void AeroplaneController_CalculateForwardSpeed_m468 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Rigidbody_t3 * L_1 = (__this->___m_Rigidbody_21);
		NullCheck(L_1);
		Vector3_t8  L_2 = Rigidbody_get_velocity_m590(L_1, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_3 = Transform_InverseTransformDirection_m729(L_0, L_2, /*hidden argument*/&Transform_InverseTransformDirection_m729_MethodInfo);
		V_0 = L_3;
		float L_4 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_5 = Mathf_Max_m986(NULL /*static, unused*/, (0.0f), L_4, /*hidden argument*/&Mathf_Max_m986_MethodInfo);
		AeroplaneController_set_ForwardSpeed_m447(__this, L_5, /*hidden argument*/&AeroplaneController_set_ForwardSpeed_m447_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::ControlThrottle()
extern "C" void AeroplaneController_ControlThrottle_m469 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Immobilized_19);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AeroplaneController_set_ThrottleInput_m462(__this, (-0.5f), /*hidden argument*/&AeroplaneController_set_ThrottleInput_m462_MethodInfo);
	}

IL_0016:
	{
		float L_1 = AeroplaneController_get_Throttle_m442(__this, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		float L_2 = AeroplaneController_get_ThrottleInput_m461(__this, /*hidden argument*/&AeroplaneController_get_ThrottleInput_m461_MethodInfo);
		float L_3 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		float L_4 = (__this->___m_ThrottleChangeSpeed_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_5 = Mathf_Clamp01_m1024(NULL /*static, unused*/, ((float)((float)L_1+(float)((float)((float)((float)((float)L_2*(float)L_3))*(float)L_4)))), /*hidden argument*/&Mathf_Clamp01_m1024_MethodInfo);
		AeroplaneController_set_Throttle_m443(__this, L_5, /*hidden argument*/&AeroplaneController_set_Throttle_m443_MethodInfo);
		float L_6 = AeroplaneController_get_Throttle_m442(__this, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		float L_7 = (__this->___m_MaxEnginePower_2);
		AeroplaneController_set_EnginePower_m449(__this, ((float)((float)L_6*(float)L_7)), /*hidden argument*/&AeroplaneController_set_EnginePower_m449_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CalculateDrag()
extern "C" void AeroplaneController_CalculateDrag_m470 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t8  V_1 = {0};
	Rigidbody_t3 * G_B2_0 = {0};
	Rigidbody_t3 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	Rigidbody_t3 * G_B3_1 = {0};
	{
		Rigidbody_t3 * L_0 = (__this->___m_Rigidbody_21);
		NullCheck(L_0);
		Vector3_t8  L_1 = Rigidbody_get_velocity_m590(L_0, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_1;
		float L_2 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_3 = (__this->___m_DragIncreaseFactor_15);
		V_0 = ((float)((float)L_2*(float)L_3));
		Rigidbody_t3 * L_4 = (__this->___m_Rigidbody_21);
		bool L_5 = AeroplaneController_get_AirBrakes_m444(__this, /*hidden argument*/&AeroplaneController_get_AirBrakes_m444_MethodInfo);
		G_B1_0 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_4;
			goto IL_0040;
		}
	}
	{
		float L_6 = (__this->___m_OriginalDrag_16);
		float L_7 = V_0;
		float L_8 = (__this->___m_AirBrakesEffect_13);
		G_B3_0 = ((float)((float)((float)((float)L_6+(float)L_7))*(float)L_8));
		G_B3_1 = G_B1_0;
		goto IL_0048;
	}

IL_0040:
	{
		float L_9 = (__this->___m_OriginalDrag_16);
		float L_10 = V_0;
		G_B3_0 = ((float)((float)L_9+(float)L_10));
		G_B3_1 = G_B2_0;
	}

IL_0048:
	{
		NullCheck(G_B3_1);
		Rigidbody_set_drag_m699(G_B3_1, G_B3_0, /*hidden argument*/&Rigidbody_set_drag_m699_MethodInfo);
		Rigidbody_t3 * L_11 = (__this->___m_Rigidbody_21);
		float L_12 = (__this->___m_OriginalAngularDrag_17);
		float L_13 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		NullCheck(L_11);
		Rigidbody_set_angularDrag_m946(L_11, ((float)((float)L_12*(float)L_13)), /*hidden argument*/&Rigidbody_set_angularDrag_m946_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CaluclateAerodynamicEffect()
extern "C" void AeroplaneController_CaluclateAerodynamicEffect_m471 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	{
		Rigidbody_t3 * L_0 = (__this->___m_Rigidbody_21);
		NullCheck(L_0);
		Vector3_t8  L_1 = Rigidbody_get_velocity_m590(L_0, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_1;
		float L_2 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_00e8;
		}
	}
	{
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_forward_m587(L_3, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Rigidbody_t3 * L_5 = (__this->___m_Rigidbody_21);
		NullCheck(L_5);
		Vector3_t8  L_6 = Rigidbody_get_velocity_m590(L_5, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_2 = L_6;
		Vector3_t8  L_7 = Vector3_get_normalized_m592((&V_2), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		float L_8 = Vector3_Dot_m851(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		__this->___m_AeroFactor_18 = L_8;
		float L_9 = (__this->___m_AeroFactor_18);
		float L_10 = (__this->___m_AeroFactor_18);
		__this->___m_AeroFactor_18 = ((float)((float)L_9*(float)L_10));
		Rigidbody_t3 * L_11 = (__this->___m_Rigidbody_21);
		NullCheck(L_11);
		Vector3_t8  L_12 = Rigidbody_get_velocity_m590(L_11, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		Transform_t2 * L_13 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_13);
		Vector3_t8  L_14 = Transform_get_forward_m587(L_13, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		float L_15 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_17 = (__this->___m_AeroFactor_18);
		float L_18 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		float L_19 = (__this->___m_AerodynamicEffect_9);
		float L_20 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Vector3_t8  L_21 = Vector3_Lerp_m600(NULL /*static, unused*/, L_12, L_16, ((float)((float)((float)((float)((float)((float)L_17*(float)L_18))*(float)L_19))*(float)L_20)), /*hidden argument*/&Vector3_Lerp_m600_MethodInfo);
		V_0 = L_21;
		Rigidbody_t3 * L_22 = (__this->___m_Rigidbody_21);
		Vector3_t8  L_23 = V_0;
		NullCheck(L_22);
		Rigidbody_set_velocity_m701(L_22, L_23, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
		Rigidbody_t3 * L_24 = (__this->___m_Rigidbody_21);
		Rigidbody_t3 * L_25 = (__this->___m_Rigidbody_21);
		NullCheck(L_25);
		Quaternion_t10  L_26 = Rigidbody_get_rotation_m1025(L_25, /*hidden argument*/&Rigidbody_get_rotation_m1025_MethodInfo);
		Rigidbody_t3 * L_27 = (__this->___m_Rigidbody_21);
		NullCheck(L_27);
		Vector3_t8  L_28 = Rigidbody_get_velocity_m590(L_27, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		Transform_t2 * L_29 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_29);
		Vector3_t8  L_30 = Transform_get_up_m588(L_29, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		Quaternion_t10  L_31 = Quaternion_LookRotation_m603(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/&Quaternion_LookRotation_m603_MethodInfo);
		float L_32 = (__this->___m_AerodynamicEffect_9);
		float L_33 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_34 = Quaternion_Slerp_m617(NULL /*static, unused*/, L_26, L_31, ((float)((float)L_32*(float)L_33)), /*hidden argument*/&Quaternion_Slerp_m617_MethodInfo);
		NullCheck(L_24);
		Rigidbody_set_rotation_m1026(L_24, L_34, /*hidden argument*/&Rigidbody_set_rotation_m1026_MethodInfo);
	}

IL_00e8:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CalculateLinearForces()
extern "C" void AeroplaneController_CalculateLinearForces_m472 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t8  V_4 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		V_0 = L_0;
		Vector3_t8  L_1 = V_0;
		float L_2 = AeroplaneController_get_EnginePower_m448(__this, /*hidden argument*/&AeroplaneController_get_EnginePower_m448_MethodInfo);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_forward_m587(L_3, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_5 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_6 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_6;
		Rigidbody_t3 * L_7 = (__this->___m_Rigidbody_21);
		NullCheck(L_7);
		Vector3_t8  L_8 = Rigidbody_get_velocity_m590(L_7, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		Transform_t2 * L_9 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_right_m668(L_9, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		Vector3_t8  L_11 = Vector3_Cross_m1022(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/&Vector3_Cross_m1022_MethodInfo);
		V_4 = L_11;
		Vector3_t8  L_12 = Vector3_get_normalized_m592((&V_4), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		V_1 = L_12;
		float L_13 = (__this->___m_ZeroLiftSpeed_4);
		float L_14 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_15 = Mathf_InverseLerp_m597(NULL /*static, unused*/, L_13, (0.0f), L_14, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_2 = L_15;
		float L_16 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		float L_17 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		float L_18 = (__this->___m_Lift_3);
		float L_19 = V_2;
		float L_20 = (__this->___m_AeroFactor_18);
		V_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))*(float)L_18))*(float)L_19))*(float)L_20));
		Vector3_t8  L_21 = V_0;
		float L_22 = V_3;
		Vector3_t8  L_23 = V_1;
		Vector3_t8  L_24 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_25 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_25;
		Rigidbody_t3 * L_26 = (__this->___m_Rigidbody_21);
		Vector3_t8  L_27 = V_0;
		NullCheck(L_26);
		Rigidbody_AddForce_m713(L_26, L_27, /*hidden argument*/&Rigidbody_AddForce_m713_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CalculateTorque()
extern "C" void AeroplaneController_CalculateTorque_m473 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		V_0 = L_0;
		Vector3_t8  L_1 = V_0;
		float L_2 = AeroplaneController_get_PitchInput_m457(__this, /*hidden argument*/&AeroplaneController_get_PitchInput_m457_MethodInfo);
		float L_3 = (__this->___m_PitchEffect_6);
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_right_m668(L_4, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		Vector3_t8  L_6 = Vector3_op_Multiply_m717(NULL /*static, unused*/, ((float)((float)L_2*(float)L_3)), L_5, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_7 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_7;
		Vector3_t8  L_8 = V_0;
		float L_9 = AeroplaneController_get_YawInput_m459(__this, /*hidden argument*/&AeroplaneController_get_YawInput_m459_MethodInfo);
		float L_10 = (__this->___m_YawEffect_7);
		Transform_t2 * L_11 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_11);
		Vector3_t8  L_12 = Transform_get_up_m588(L_11, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		Vector3_t8  L_13 = Vector3_op_Multiply_m717(NULL /*static, unused*/, ((float)((float)L_9*(float)L_10)), L_12, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_14 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_8, L_13, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_14;
		Vector3_t8  L_15 = V_0;
		float L_16 = AeroplaneController_get_RollInput_m455(__this, /*hidden argument*/&AeroplaneController_get_RollInput_m455_MethodInfo);
		float L_17 = (__this->___m_RollEffect_5);
		Transform_t2 * L_18 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_18);
		Vector3_t8  L_19 = Transform_get_forward_m587(L_18, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_20 = Vector3_op_Multiply_m717(NULL /*static, unused*/, ((float)((float)((-L_16))*(float)L_17)), L_19, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_21 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_15, L_20, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_21;
		Vector3_t8  L_22 = V_0;
		float L_23 = (__this->___m_BankedTurnAmount_20);
		float L_24 = (__this->___m_BankedTurnEffect_8);
		Transform_t2 * L_25 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_25);
		Vector3_t8  L_26 = Transform_get_up_m588(L_25, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		Vector3_t8  L_27 = Vector3_op_Multiply_m717(NULL /*static, unused*/, ((float)((float)L_23*(float)L_24)), L_26, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_28 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_22, L_27, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_28;
		Rigidbody_t3 * L_29 = (__this->___m_Rigidbody_21);
		Vector3_t8  L_30 = V_0;
		float L_31 = AeroplaneController_get_ForwardSpeed_m446(__this, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		Vector3_t8  L_32 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_33 = (__this->___m_AeroFactor_18);
		Vector3_t8  L_34 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_29);
		Rigidbody_AddTorque_m712(L_29, L_34, /*hidden argument*/&Rigidbody_AddTorque_m712_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::CalculateAltitude()
extern "C" void AeroplaneController_CalculateAltitude_m474 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	Ray_t18  V_0 = {0};
	RaycastHit_t16  V_1 = {0};
	Vector3_t8  V_2 = {0};
	AeroplaneController_t146 * G_B2_0 = {0};
	AeroplaneController_t146 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	AeroplaneController_t146 * G_B3_1 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_2 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_3 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_2, (10.0f), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		Vector3_t8  L_5 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_6 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_5, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		Ray__ctor_m734((&V_0), L_4, L_6, /*hidden argument*/&Ray__ctor_m734_MethodInfo);
		Ray_t18  L_7 = V_0;
		bool L_8 = Physics_Raycast_m967(NULL /*static, unused*/, L_7, (&V_1), /*hidden argument*/&Physics_Raycast_m967_MethodInfo);
		G_B1_0 = __this;
		if (!L_8)
		{
			G_B2_0 = __this;
			goto IL_0050;
		}
	}
	{
		float L_9 = RaycastHit_get_distance_m630((&V_1), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		G_B3_0 = ((float)((float)L_9+(float)(10.0f)));
		G_B3_1 = G_B1_0;
		goto IL_0063;
	}

IL_0050:
	{
		Transform_t2 * L_10 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_10);
		Vector3_t8  L_11 = Transform_get_position_m599(L_10, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_2 = L_11;
		float L_12 = ((&V_2)->___y_2);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_0063:
	{
		NullCheck(G_B3_1);
		AeroplaneController_set_Altitude_m441(G_B3_1, G_B3_0, /*hidden argument*/&AeroplaneController_set_Altitude_m441_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::Immobilize()
extern MethodInfo AeroplaneController_Immobilize_m475_MethodInfo;
extern "C" void AeroplaneController_Immobilize_m475 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		__this->___m_Immobilized_19 = 1;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::Reset()
extern MethodInfo AeroplaneController_Reset_m476_MethodInfo;
extern "C" void AeroplaneController_Reset_m476 (AeroplaneController_t146 * __this, MethodInfo* method)
{
	{
		__this->___m_Immobilized_19 = 0;
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AeroplanePropellerAnimator_t157_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_6MethodDeclarations.h"

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern MethodInfo Transform_set_parent_m980_MethodInfo;
extern MethodInfo Transform_Rotate_m621_MethodInfo;
extern MethodInfo Mathf_FloorToInt_m834_MethodInfo;
extern MethodInfo Renderer_set_enabled_m1028_MethodInfo;
extern MethodInfo Renderer_get_material_m1029_MethodInfo;
extern MethodInfo Material_set_mainTexture_m1030_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_8.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t156_m810(__this, method) (( Renderer_t156 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRenderer_t156_m810_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::.ctor()
extern MethodInfo AeroplanePropellerAnimator__ctor_m477_MethodInfo;
extern "C" void AeroplanePropellerAnimator__ctor_m477 (AeroplanePropellerAnimator_t157 * __this, MethodInfo* method)
{
	{
		__this->___m_ThrottleBlurStart_6 = (0.25f);
		__this->___m_ThrottleBlurEnd_7 = (0.5f);
		__this->___m_MaxRpm_8 = (2000.0f);
		__this->___m_PropellorBlurState_10 = (-1);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::Awake()
extern MethodInfo AeroplanePropellerAnimator_Awake_m478_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern "C" void AeroplanePropellerAnimator_Awake_m478 (AeroplanePropellerAnimator_t157 * __this, MethodInfo* method)
{
	static bool AeroplanePropellerAnimator_Awake_m478_init;
	if (!AeroplanePropellerAnimator_Awake_m478_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		AeroplanePropellerAnimator_Awake_m478_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_Plane_9 = L_0;
		Transform_t2 * L_1 = (__this->___m_PropellorModel_3);
		NullCheck(L_1);
		Renderer_t156 * L_2 = Component_GetComponent_TisRenderer_t156_m810(L_1, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		__this->___m_PropellorModelRenderer_11 = L_2;
		Transform_t2 * L_3 = (__this->___m_PropellorBlur_4);
		NullCheck(L_3);
		Renderer_t156 * L_4 = Component_GetComponent_TisRenderer_t156_m810(L_3, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		__this->___m_PropellorBlurRenderer_12 = L_4;
		Transform_t2 * L_5 = (__this->___m_PropellorBlur_4);
		Transform_t2 * L_6 = (__this->___m_PropellorModel_3);
		NullCheck(L_5);
		Transform_set_parent_m980(L_5, L_6, /*hidden argument*/&Transform_set_parent_m980_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::Update()
extern MethodInfo AeroplanePropellerAnimator_Update_m479_MethodInfo;
extern "C" void AeroplanePropellerAnimator_Update_m479 (AeroplanePropellerAnimator_t157 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		Transform_t2 * L_0 = (__this->___m_PropellorModel_3);
		float L_1 = (__this->___m_MaxRpm_8);
		AeroplaneController_t146 * L_2 = (__this->___m_Plane_9);
		NullCheck(L_2);
		float L_3 = AeroplaneController_get_Throttle_m442(L_2, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		float L_4 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		NullCheck(L_0);
		Transform_Rotate_m621(L_0, (0.0f), ((float)((float)((float)((float)((float)((float)L_1*(float)L_3))*(float)L_4))*(float)(60.0f))), (0.0f), /*hidden argument*/&Transform_Rotate_m621_MethodInfo);
		V_0 = 0;
		AeroplaneController_t146 * L_5 = (__this->___m_Plane_9);
		NullCheck(L_5);
		float L_6 = AeroplaneController_get_Throttle_m442(L_5, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		float L_7 = (__this->___m_ThrottleBlurStart_6);
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_007b;
		}
	}
	{
		float L_8 = (__this->___m_ThrottleBlurStart_6);
		float L_9 = (__this->___m_ThrottleBlurEnd_7);
		AeroplaneController_t146 * L_10 = (__this->___m_Plane_9);
		NullCheck(L_10);
		float L_11 = AeroplaneController_get_Throttle_m442(L_10, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_12 = Mathf_InverseLerp_m597(NULL /*static, unused*/, L_8, L_9, L_11, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_1 = L_12;
		float L_13 = V_1;
		Texture2DU5BU5D_t155* L_14 = (__this->___m_PropellorBlurTextures_5);
		NullCheck(L_14);
		int32_t L_15 = Mathf_FloorToInt_m834(NULL /*static, unused*/, ((float)((float)L_13*(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))-(int32_t)1)))))), /*hidden argument*/&Mathf_FloorToInt_m834_MethodInfo);
		V_0 = L_15;
	}

IL_007b:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->___m_PropellorBlurState_10);
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_18 = V_0;
		__this->___m_PropellorBlurState_10 = L_18;
		int32_t L_19 = (__this->___m_PropellorBlurState_10);
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		Renderer_t156 * L_20 = (__this->___m_PropellorModelRenderer_11);
		NullCheck(L_20);
		Renderer_set_enabled_m1028(L_20, 1, /*hidden argument*/&Renderer_set_enabled_m1028_MethodInfo);
		Renderer_t156 * L_21 = (__this->___m_PropellorBlurRenderer_12);
		NullCheck(L_21);
		Renderer_set_enabled_m1028(L_21, 0, /*hidden argument*/&Renderer_set_enabled_m1028_MethodInfo);
		goto IL_00eb;
	}

IL_00b6:
	{
		Renderer_t156 * L_22 = (__this->___m_PropellorModelRenderer_11);
		NullCheck(L_22);
		Renderer_set_enabled_m1028(L_22, 0, /*hidden argument*/&Renderer_set_enabled_m1028_MethodInfo);
		Renderer_t156 * L_23 = (__this->___m_PropellorBlurRenderer_12);
		NullCheck(L_23);
		Renderer_set_enabled_m1028(L_23, 1, /*hidden argument*/&Renderer_set_enabled_m1028_MethodInfo);
		Renderer_t156 * L_24 = (__this->___m_PropellorBlurRenderer_12);
		NullCheck(L_24);
		Material_t75 * L_25 = Renderer_get_material_m1029(L_24, /*hidden argument*/&Renderer_get_material_m1029_MethodInfo);
		Texture2DU5BU5D_t155* L_26 = (__this->___m_PropellorBlurTextures_5);
		int32_t L_27 = (__this->___m_PropellorBlurState_10);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_25);
		Material_set_mainTexture_m1030(L_25, (*(Texture2D_t221 **)(Texture2D_t221 **)SZArrayLdElema(L_26, L_28)), /*hidden argument*/&Material_set_mainTexture_m1030_MethodInfo);
	}

IL_00eb:
	{
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AeroplaneUserControl2Axis_t158_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_7MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo CrossPlatformInputManager_t51_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern MethodInfo CrossPlatformInputManager_GetAxis_m145_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetButton_m148_MethodInfo;
extern MethodInfo AeroplaneUserControl2Axis_AdjustInputForMobileControls_m483_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::.ctor()
extern MethodInfo AeroplaneUserControl2Axis__ctor_m480_MethodInfo;
extern "C" void AeroplaneUserControl2Axis__ctor_m480 (AeroplaneUserControl2Axis_t158 * __this, MethodInfo* method)
{
	{
		__this->___maxRollAngle_2 = (80.0f);
		__this->___maxPitchAngle_3 = (80.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::Awake()
extern MethodInfo AeroplaneUserControl2Axis_Awake_m481_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern "C" void AeroplaneUserControl2Axis_Awake_m481 (AeroplaneUserControl2Axis_t158 * __this, MethodInfo* method)
{
	static bool AeroplaneUserControl2Axis_Awake_m481_init;
	if (!AeroplaneUserControl2Axis_Awake_m481_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		AeroplaneUserControl2Axis_Awake_m481_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_Aeroplane_4 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::FixedUpdate()
extern MethodInfo AeroplaneUserControl2Axis_FixedUpdate_m482_MethodInfo;
extern "C" void AeroplaneUserControl2Axis_FixedUpdate_m482 (AeroplaneUserControl2Axis_t158 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m148(NULL /*static, unused*/, (String_t*) &_stringLiteral65, /*hidden argument*/&CrossPlatformInputManager_GetButton_m148_MethodInfo);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 1;
	}

IL_002e:
	{
		V_3 = (((float)G_B3_0));
		AeroplaneUserControl2Axis_AdjustInputForMobileControls_m483(__this, (&V_0), (&V_1), (&V_3), /*hidden argument*/&AeroplaneUserControl2Axis_AdjustInputForMobileControls_m483_MethodInfo);
		AeroplaneController_t146 * L_4 = (__this->___m_Aeroplane_4);
		float L_5 = V_0;
		float L_6 = V_1;
		float L_7 = V_3;
		bool L_8 = V_2;
		NullCheck(L_4);
		AeroplaneController_Move_m464(L_4, L_5, L_6, (0.0f), L_7, L_8, /*hidden argument*/&AeroplaneController_Move_m464_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::AdjustInputForMobileControls(System.Single&,System.Single&,System.Single&)
extern "C" void AeroplaneUserControl2Axis_AdjustInputForMobileControls_m483 (AeroplaneUserControl2Axis_t158 * __this, float* ___roll, float* ___pitch, float* ___throttle, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float* L_0 = ___roll;
		float L_1 = (__this->___maxRollAngle_2);
		V_0 = ((float)((float)((float)((float)(*((float*)L_0))*(float)L_1))*(float)(0.0174532924f)));
		float* L_2 = ___pitch;
		float L_3 = (__this->___maxPitchAngle_3);
		V_1 = ((float)((float)((float)((float)(*((float*)L_2))*(float)L_3))*(float)(0.0174532924f)));
		float* L_4 = ___roll;
		float L_5 = V_0;
		AeroplaneController_t146 * L_6 = (__this->___m_Aeroplane_4);
		NullCheck(L_6);
		float L_7 = AeroplaneController_get_RollAngle_m451(L_6, /*hidden argument*/&AeroplaneController_get_RollAngle_m451_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)L_5-(float)L_7)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		*((float*)(L_4)) = (float)L_8;
		float* L_9 = ___pitch;
		float L_10 = V_1;
		AeroplaneController_t146 * L_11 = (__this->___m_Aeroplane_4);
		NullCheck(L_11);
		float L_12 = AeroplaneController_get_PitchAngle_m453(L_11, /*hidden argument*/&AeroplaneController_get_PitchAngle_m453_MethodInfo);
		float L_13 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)L_10-(float)L_12)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		*((float*)(L_9)) = (float)L_13;
		float* L_14 = ___throttle;
		V_2 = ((float)((float)((float)((float)(*((float*)L_14))*(float)(0.5f)))+(float)(0.5f)));
		float* L_15 = ___throttle;
		float L_16 = V_2;
		AeroplaneController_t146 * L_17 = (__this->___m_Aeroplane_4);
		NullCheck(L_17);
		float L_18 = AeroplaneController_get_Throttle_m442(L_17, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		float L_19 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)L_16-(float)L_18)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		*((float*)(L_15)) = (float)L_19;
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AeroplaneUserControl4Axis_t159_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_8MethodDeclarations.h"

extern MethodInfo AeroplaneUserControl4Axis_AdjustInputForMobileControls_m487_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::.ctor()
extern MethodInfo AeroplaneUserControl4Axis__ctor_m484_MethodInfo;
extern "C" void AeroplaneUserControl4Axis__ctor_m484 (AeroplaneUserControl4Axis_t159 * __this, MethodInfo* method)
{
	{
		__this->___maxRollAngle_2 = (80.0f);
		__this->___maxPitchAngle_3 = (80.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::Awake()
extern MethodInfo AeroplaneUserControl4Axis_Awake_m485_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern "C" void AeroplaneUserControl4Axis_Awake_m485 (AeroplaneUserControl4Axis_t159 * __this, MethodInfo* method)
{
	static bool AeroplaneUserControl4Axis_Awake_m485_init;
	if (!AeroplaneUserControl4Axis_Awake_m485_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		AeroplaneUserControl4Axis_Awake_m485_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_Aeroplane_4 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::FixedUpdate()
extern MethodInfo AeroplaneUserControl4Axis_FixedUpdate_m486_MethodInfo;
extern "C" void AeroplaneUserControl4Axis_FixedUpdate_m486 (AeroplaneUserControl4Axis_t159 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral3, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m148(NULL /*static, unused*/, (String_t*) &_stringLiteral65, /*hidden argument*/&CrossPlatformInputManager_GetButton_m148_MethodInfo);
		__this->___m_AirBrakes_6 = L_2;
		float L_3 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		__this->___m_Yaw_7 = L_3;
		float L_4 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		__this->___m_Throttle_5 = L_4;
		float* L_5 = &(__this->___m_Throttle_5);
		AeroplaneUserControl4Axis_AdjustInputForMobileControls_m487(__this, (&V_0), (&V_1), L_5, /*hidden argument*/&AeroplaneUserControl4Axis_AdjustInputForMobileControls_m487_MethodInfo);
		AeroplaneController_t146 * L_6 = (__this->___m_Aeroplane_4);
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = (__this->___m_Yaw_7);
		float L_10 = (__this->___m_Throttle_5);
		bool L_11 = (__this->___m_AirBrakes_6);
		NullCheck(L_6);
		AeroplaneController_Move_m464(L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/&AeroplaneController_Move_m464_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::AdjustInputForMobileControls(System.Single&,System.Single&,System.Single&)
extern "C" void AeroplaneUserControl4Axis_AdjustInputForMobileControls_m487 (AeroplaneUserControl4Axis_t159 * __this, float* ___roll, float* ___pitch, float* ___throttle, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float* L_0 = ___roll;
		float L_1 = (__this->___maxRollAngle_2);
		V_0 = ((float)((float)((float)((float)(*((float*)L_0))*(float)L_1))*(float)(0.0174532924f)));
		float* L_2 = ___pitch;
		float L_3 = (__this->___maxPitchAngle_3);
		V_1 = ((float)((float)((float)((float)(*((float*)L_2))*(float)L_3))*(float)(0.0174532924f)));
		float* L_4 = ___roll;
		float L_5 = V_0;
		AeroplaneController_t146 * L_6 = (__this->___m_Aeroplane_4);
		NullCheck(L_6);
		float L_7 = AeroplaneController_get_RollAngle_m451(L_6, /*hidden argument*/&AeroplaneController_get_RollAngle_m451_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)L_5-(float)L_7)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		*((float*)(L_4)) = (float)L_8;
		float* L_9 = ___pitch;
		float L_10 = V_1;
		AeroplaneController_t146 * L_11 = (__this->___m_Aeroplane_4);
		NullCheck(L_11);
		float L_12 = AeroplaneController_get_PitchAngle_m453(L_11, /*hidden argument*/&AeroplaneController_get_PitchAngle_m453_MethodInfo);
		float L_13 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)L_10-(float)L_12)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		*((float*)(L_9)) = (float)L_13;
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JetParticleEffect_t160_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_9MethodDeclarations.h"

// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo Exception_t204_il2cpp_TypeInfo;
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo JetParticleEffect_FindAeroplaneParent_m491_MethodInfo;
extern MethodInfo ParticleSystem_get_startLifetime_m985_MethodInfo;
extern MethodInfo ParticleSystem_get_startSize_m1031_MethodInfo;
extern MethodInfo ParticleSystem_get_startColor_m1032_MethodInfo;
extern MethodInfo Mathf_Lerp_m615_MethodInfo;
extern MethodInfo ParticleSystem_set_startLifetime_m1033_MethodInfo;
extern MethodInfo ParticleSystem_set_startSize_m1034_MethodInfo;
extern MethodInfo Color_Lerp_m1035_MethodInfo;
extern MethodInfo ParticleSystem_set_startColor_m1036_MethodInfo;
extern MethodInfo Object_op_Equality_m576_MethodInfo;
extern MethodInfo Transform_get_parent_m626_MethodInfo;
extern MethodInfo Object_op_Inequality_m642_MethodInfo;
extern MethodInfo Exception__ctor_m782_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.ParticleSystem>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_16.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t121_m1037(__this, method) (( ParticleSystem_t121 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisParticleSystem_t121_m1037_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::.ctor()
extern MethodInfo JetParticleEffect__ctor_m488_MethodInfo;
extern "C" void JetParticleEffect__ctor_m488 (JetParticleEffect_t160 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::Start()
extern MethodInfo JetParticleEffect_Start_m489_MethodInfo;
extern MethodInfo* Component_GetComponent_TisParticleSystem_t121_m1037_MethodInfo_var;
extern "C" void JetParticleEffect_Start_m489 (JetParticleEffect_t160 * __this, MethodInfo* method)
{
	static bool JetParticleEffect_Start_m489_init;
	if (!JetParticleEffect_Start_m489_init)
	{
		Component_GetComponent_TisParticleSystem_t121_m1037_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisParticleSystem_t121_m1037_GenericMethod);
		JetParticleEffect_Start_m489_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = JetParticleEffect_FindAeroplaneParent_m491(__this, /*hidden argument*/&JetParticleEffect_FindAeroplaneParent_m491_MethodInfo);
		__this->___m_Jet_3 = L_0;
		ParticleSystem_t121 * L_1 = Component_GetComponent_TisParticleSystem_t121_m1037(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t121_m1037_MethodInfo_var);
		__this->___m_System_4 = L_1;
		ParticleSystem_t121 * L_2 = (__this->___m_System_4);
		NullCheck(L_2);
		float L_3 = ParticleSystem_get_startLifetime_m985(L_2, /*hidden argument*/&ParticleSystem_get_startLifetime_m985_MethodInfo);
		__this->___m_OriginalLifetime_6 = L_3;
		ParticleSystem_t121 * L_4 = (__this->___m_System_4);
		NullCheck(L_4);
		float L_5 = ParticleSystem_get_startSize_m1031(L_4, /*hidden argument*/&ParticleSystem_get_startSize_m1031_MethodInfo);
		__this->___m_OriginalStartSize_5 = L_5;
		ParticleSystem_t121 * L_6 = (__this->___m_System_4);
		NullCheck(L_6);
		Color_t79  L_7 = ParticleSystem_get_startColor_m1032(L_6, /*hidden argument*/&ParticleSystem_get_startColor_m1032_MethodInfo);
		__this->___m_OriginalStartColor_7 = L_7;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::Update()
extern MethodInfo JetParticleEffect_Update_m490_MethodInfo;
extern "C" void JetParticleEffect_Update_m490 (JetParticleEffect_t160 * __this, MethodInfo* method)
{
	{
		ParticleSystem_t121 * L_0 = (__this->___m_System_4);
		float L_1 = (__this->___m_OriginalLifetime_6);
		AeroplaneController_t146 * L_2 = (__this->___m_Jet_3);
		NullCheck(L_2);
		float L_3 = AeroplaneController_get_Throttle_m442(L_2, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_4 = Mathf_Lerp_m615(NULL /*static, unused*/, (0.0f), L_1, L_3, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_0);
		ParticleSystem_set_startLifetime_m1033(L_0, L_4, /*hidden argument*/&ParticleSystem_set_startLifetime_m1033_MethodInfo);
		ParticleSystem_t121 * L_5 = (__this->___m_System_4);
		float L_6 = (__this->___m_OriginalStartSize_5);
		float L_7 = (__this->___m_OriginalStartSize_5);
		AeroplaneController_t146 * L_8 = (__this->___m_Jet_3);
		NullCheck(L_8);
		float L_9 = AeroplaneController_get_Throttle_m442(L_8, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		float L_10 = Mathf_Lerp_m615(NULL /*static, unused*/, ((float)((float)L_6*(float)(0.3f))), L_7, L_9, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_5);
		ParticleSystem_set_startSize_m1034(L_5, L_10, /*hidden argument*/&ParticleSystem_set_startSize_m1034_MethodInfo);
		ParticleSystem_t121 * L_11 = (__this->___m_System_4);
		Color_t79  L_12 = (__this->___minColour_2);
		Color_t79  L_13 = (__this->___m_OriginalStartColor_7);
		AeroplaneController_t146 * L_14 = (__this->___m_Jet_3);
		NullCheck(L_14);
		float L_15 = AeroplaneController_get_Throttle_m442(L_14, /*hidden argument*/&AeroplaneController_get_Throttle_m442_MethodInfo);
		Color_t79  L_16 = Color_Lerp_m1035(NULL /*static, unused*/, L_12, L_13, L_15, /*hidden argument*/&Color_Lerp_m1035_MethodInfo);
		NullCheck(L_11);
		ParticleSystem_set_startColor_m1036(L_11, L_16, /*hidden argument*/&ParticleSystem_set_startColor_m1036_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::FindAeroplaneParent()
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern "C" AeroplaneController_t146 * JetParticleEffect_FindAeroplaneParent_m491 (JetParticleEffect_t160 * __this, MethodInfo* method)
{
	static bool JetParticleEffect_FindAeroplaneParent_m491_init;
	if (!JetParticleEffect_FindAeroplaneParent_m491_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		JetParticleEffect_FindAeroplaneParent_m491_init = true;
	}
	Transform_t2 * V_0 = {0};
	AeroplaneController_t146 * V_1 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		V_0 = L_0;
		goto IL_002d;
	}

IL_000c:
	{
		Transform_t2 * L_1 = V_0;
		NullCheck(L_1);
		AeroplaneController_t146 * L_2 = Component_GetComponent_TisAeroplaneController_t146_m1009(L_1, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		V_1 = L_2;
		AeroplaneController_t146 * L_3 = V_1;
		bool L_4 = Object_op_Equality_m576(NULL /*static, unused*/, L_3, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Transform_t2 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t2 * L_6 = Transform_get_parent_m626(L_5, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		V_0 = L_6;
		goto IL_002d;
	}

IL_002b:
	{
		AeroplaneController_t146 * L_7 = V_1;
		return L_7;
	}

IL_002d:
	{
		Transform_t2 * L_8 = V_0;
		bool L_9 = Object_op_Inequality_m642(NULL /*static, unused*/, L_8, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (L_9)
		{
			goto IL_000c;
		}
	}
	{
		Exception_t204 * L_10 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_10, (String_t*) &_stringLiteral66, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GearState_t161_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_10MethodDeclarations.h"



// UnityStandardAssets.Vehicles.Aeroplane.LandingGear
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LandingGear_t162_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.LandingGear
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_11MethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_SetInteger_m1038_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t42_m747(__this, method) (( Animator_t42 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisAnimator_t42_m747_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.LandingGear::.ctor()
extern MethodInfo LandingGear__ctor_m492_MethodInfo;
extern "C" void LandingGear__ctor_m492 (LandingGear_t162 * __this, MethodInfo* method)
{
	{
		__this->___raiseAtAltitude_2 = (40.0f);
		__this->___lowerAtAltitude_3 = (40.0f);
		__this->___m_State_4 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.LandingGear::Start()
extern MethodInfo LandingGear_Start_m493_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisAnimator_t42_m747_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void LandingGear_Start_m493 (LandingGear_t162 * __this, MethodInfo* method)
{
	static bool LandingGear_Start_m493_init;
	if (!LandingGear_Start_m493_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		Component_GetComponent_TisAnimator_t42_m747_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAnimator_t42_m747_GenericMethod);
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		LandingGear_Start_m493_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_Plane_7 = L_0;
		Animator_t42 * L_1 = Component_GetComponent_TisAnimator_t42_m747(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t42_m747_MethodInfo_var);
		__this->___m_Animator_5 = L_1;
		Rigidbody_t3 * L_2 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_6 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.LandingGear::Update()
extern MethodInfo LandingGear_Update_m494_MethodInfo;
extern "C" void LandingGear_Update_m494 (LandingGear_t162 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		int32_t L_0 = (__this->___m_State_4);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		AeroplaneController_t146 * L_1 = (__this->___m_Plane_7);
		NullCheck(L_1);
		float L_2 = AeroplaneController_get_Altitude_m440(L_1, /*hidden argument*/&AeroplaneController_get_Altitude_m440_MethodInfo);
		float L_3 = (__this->___raiseAtAltitude_2);
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0046;
		}
	}
	{
		Rigidbody_t3 * L_4 = (__this->___m_Rigidbody_6);
		NullCheck(L_4);
		Vector3_t8  L_5 = Rigidbody_get_velocity_m590(L_4, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_0 = L_5;
		float L_6 = ((&V_0)->___y_2);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		__this->___m_State_4 = (-1);
	}

IL_0046:
	{
		int32_t L_7 = (__this->___m_State_4);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_008c;
		}
	}
	{
		AeroplaneController_t146 * L_8 = (__this->___m_Plane_7);
		NullCheck(L_8);
		float L_9 = AeroplaneController_get_Altitude_m440(L_8, /*hidden argument*/&AeroplaneController_get_Altitude_m440_MethodInfo);
		float L_10 = (__this->___lowerAtAltitude_3);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_008c;
		}
	}
	{
		Rigidbody_t3 * L_11 = (__this->___m_Rigidbody_6);
		NullCheck(L_11);
		Vector3_t8  L_12 = Rigidbody_get_velocity_m590(L_11, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_12;
		float L_13 = ((&V_1)->___y_2);
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___m_State_4 = 1;
	}

IL_008c:
	{
		Animator_t42 * L_14 = (__this->___m_Animator_5);
		int32_t L_15 = (__this->___m_State_4);
		NullCheck(L_14);
		Animator_SetInteger_m1038(L_14, (String_t*) &_stringLiteral67, L_15, /*hidden argument*/&Animator_SetInteger_m1038_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.BrakeLight
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BrakeLight_t164_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.BrakeLight
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_CMethodDeclarations.h"

// UnityStandardAssets.Vehicles.Car.CarController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_6.h"
// UnityStandardAssets.Vehicles.Car.CarController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_6MethodDeclarations.h"
extern MethodInfo CarController_get_BrakeInput_m513_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Car.BrakeLight::.ctor()
extern MethodInfo BrakeLight__ctor_m495_MethodInfo;
extern "C" void BrakeLight__ctor_m495 (BrakeLight_t164 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.BrakeLight::Start()
extern MethodInfo BrakeLight_Start_m496_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern "C" void BrakeLight_Start_m496 (BrakeLight_t164 * __this, MethodInfo* method)
{
	static bool BrakeLight_Start_m496_init;
	if (!BrakeLight_Start_m496_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		BrakeLight_Start_m496_init = true;
	}
	{
		Renderer_t156 * L_0 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		__this->___m_Renderer_3 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.BrakeLight::Update()
extern MethodInfo BrakeLight_Update_m497_MethodInfo;
extern "C" void BrakeLight_Update_m497 (BrakeLight_t164 * __this, MethodInfo* method)
{
	{
		Renderer_t156 * L_0 = (__this->___m_Renderer_3);
		CarController_t163 * L_1 = (__this->___car_2);
		NullCheck(L_1);
		float L_2 = CarController_get_BrakeInput_m513(L_1, /*hidden argument*/&CarController_get_BrakeInput_m513_MethodInfo);
		NullCheck(L_0);
		Renderer_set_enabled_m1028(L_0, ((((float)L_2) > ((float)(0.0f)))? 1 : 0), /*hidden argument*/&Renderer_set_enabled_m1028_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.CarAIControl/BrakeCondition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BrakeCondition_t165_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarAIControl/BrakeCondition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_0MethodDeclarations.h"



// UnityStandardAssets.Vehicles.Car.CarAIControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CarAIControl_t166_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarAIControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_1MethodDeclarations.h"

// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
extern MethodInfo Random_get_value_m1039_MethodInfo;
extern MethodInfo CarController_Move_m528_MethodInfo;
extern MethodInfo CarController_get_MaxSpeed_m517_MethodInfo;
extern MethodInfo Vector3_Angle_m703_MethodInfo;
extern MethodInfo Rigidbody_get_angularVelocity_m1040_MethodInfo;
extern MethodInfo Time_get_time_m619_MethodInfo;
extern MethodInfo Mathf_PerlinNoise_m620_MethodInfo;
extern MethodInfo CarController_get_CurrentSpeed_m516_MethodInfo;
extern MethodInfo Transform_InverseTransformPoint_m622_MethodInfo;
extern MethodInfo Mathf_Sign_m1041_MethodInfo;
extern MethodInfo Collision_get_rigidbody_m1042_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Car.CarController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_17.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Car.CarController>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Car.CarController>()
#define Component_GetComponent_TisCarController_t163_m1043(__this, method) (( CarController_t163 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Car.CarAIControl>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_18.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Car.CarAIControl>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Car.CarAIControl>()
#define Component_GetComponent_TisCarAIControl_t166_m1044(__this, method) (( CarAIControl_t166 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisCarController_t163_m1043_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCarAIControl_t166_m1044_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::.ctor()
extern MethodInfo CarAIControl__ctor_m498_MethodInfo;
extern "C" void CarAIControl__ctor_m498 (CarAIControl_t166 * __this, MethodInfo* method)
{
	{
		__this->___m_CautiousSpeedFactor_2 = (0.05f);
		__this->___m_CautiousMaxAngle_3 = (50.0f);
		__this->___m_CautiousMaxDistance_4 = (100.0f);
		__this->___m_CautiousAngularVelocityFactor_5 = (30.0f);
		__this->___m_SteerSensitivity_6 = (0.05f);
		__this->___m_AccelSensitivity_7 = (0.04f);
		__this->___m_BrakeSensitivity_8 = (1.0f);
		__this->___m_LateralWanderDistance_9 = (3.0f);
		__this->___m_LateralWanderSpeed_10 = (0.1f);
		__this->___m_AccelWanderAmount_11 = (0.1f);
		__this->___m_AccelWanderSpeed_12 = (0.1f);
		__this->___m_BrakeCondition_13 = 2;
		__this->___m_ReachTargetThreshold_17 = (2.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::Awake()
extern MethodInfo CarAIControl_Awake_m499_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void CarAIControl_Awake_m499 (CarAIControl_t166 * __this, MethodInfo* method)
{
	static bool CarAIControl_Awake_m499_init;
	if (!CarAIControl_Awake_m499_init)
	{
		Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCarController_t163_m1043_GenericMethod);
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		CarAIControl_Awake_m499_init = true;
	}
	{
		CarController_t163 * L_0 = Component_GetComponent_TisCarController_t163_m1043(__this, /*hidden argument*/Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var);
		__this->___m_CarController_19 = L_0;
		float L_1 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		__this->___m_RandomPerlin_18 = ((float)((float)L_1*(float)(100.0f)));
		Rigidbody_t3 * L_2 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_23 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::FixedUpdate()
extern MethodInfo CarAIControl_FixedUpdate_m500_MethodInfo;
extern "C" void CarAIControl_FixedUpdate_m500 (CarAIControl_t166 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t8  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t8  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t8  V_12 = {0};
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Vector3_t8  V_15 = {0};
	int32_t V_16 = {0};
	Vector3_t8  V_17 = {0};
	Vector3_t8  V_18 = {0};
	float G_B16_0 = 0.0f;
	{
		Transform_t2 * L_0 = (__this->___m_Target_15);
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = (__this->___m_Driving_14);
		if (L_2)
		{
			goto IL_0040;
		}
	}

IL_001c:
	{
		CarController_t163 * L_3 = (__this->___m_CarController_19);
		NullCheck(L_3);
		CarController_Move_m528(L_3, (0.0f), (0.0f), (-1.0f), (1.0f), /*hidden argument*/&CarController_Move_m528_MethodInfo);
		goto IL_0351;
	}

IL_0040:
	{
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_forward_m587(L_4, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		V_0 = L_5;
		Rigidbody_t3 * L_6 = (__this->___m_Rigidbody_23);
		NullCheck(L_6);
		Vector3_t8  L_7 = Rigidbody_get_velocity_m590(L_6, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_15 = L_7;
		float L_8 = Vector3_get_magnitude_m591((&V_15), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		CarController_t163 * L_9 = (__this->___m_CarController_19);
		NullCheck(L_9);
		float L_10 = CarController_get_MaxSpeed_m517(L_9, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		if ((!(((float)L_8) > ((float)((float)((float)L_10*(float)(0.1f)))))))
		{
			goto IL_0082;
		}
	}
	{
		Rigidbody_t3 * L_11 = (__this->___m_Rigidbody_23);
		NullCheck(L_11);
		Vector3_t8  L_12 = Rigidbody_get_velocity_m590(L_11, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_0 = L_12;
	}

IL_0082:
	{
		CarController_t163 * L_13 = (__this->___m_CarController_19);
		NullCheck(L_13);
		float L_14 = CarController_get_MaxSpeed_m517(L_13, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		V_1 = L_14;
		int32_t L_15 = (__this->___m_BrakeCondition_13);
		V_16 = L_15;
		int32_t L_16 = V_16;
		if (L_16 == 0)
		{
			goto IL_01b7;
		}
		if (L_16 == 1)
		{
			goto IL_00ae;
		}
		if (L_16 == 2)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_01bc;
	}

IL_00ae:
	{
		Transform_t2 * L_17 = (__this->___m_Target_15);
		NullCheck(L_17);
		Vector3_t8  L_18 = Transform_get_forward_m587(L_17, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_19 = V_0;
		float L_20 = Vector3_Angle_m703(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_Angle_m703_MethodInfo);
		V_2 = L_20;
		Rigidbody_t3 * L_21 = (__this->___m_Rigidbody_23);
		NullCheck(L_21);
		Vector3_t8  L_22 = Rigidbody_get_angularVelocity_m1040(L_21, /*hidden argument*/&Rigidbody_get_angularVelocity_m1040_MethodInfo);
		V_17 = L_22;
		float L_23 = Vector3_get_magnitude_m591((&V_17), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_24 = (__this->___m_CautiousAngularVelocityFactor_5);
		V_3 = ((float)((float)L_23*(float)L_24));
		float L_25 = (__this->___m_CautiousMaxAngle_3);
		float L_26 = V_3;
		float L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_28 = Mathf_Max_m986(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&Mathf_Max_m986_MethodInfo);
		float L_29 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (0.0f), L_25, L_28, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_4 = L_29;
		CarController_t163 * L_30 = (__this->___m_CarController_19);
		NullCheck(L_30);
		float L_31 = CarController_get_MaxSpeed_m517(L_30, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		CarController_t163 * L_32 = (__this->___m_CarController_19);
		NullCheck(L_32);
		float L_33 = CarController_get_MaxSpeed_m517(L_32, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		float L_34 = (__this->___m_CautiousSpeedFactor_2);
		float L_35 = V_4;
		float L_36 = Mathf_Lerp_m615(NULL /*static, unused*/, L_31, ((float)((float)L_33*(float)L_34)), L_35, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		V_1 = L_36;
		goto IL_01bc;
	}

IL_011f:
	{
		Transform_t2 * L_37 = (__this->___m_Target_15);
		NullCheck(L_37);
		Vector3_t8  L_38 = Transform_get_position_m599(L_37, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_39 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_39);
		Vector3_t8  L_40 = Transform_get_position_m599(L_39, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_41 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_38, L_40, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_5 = L_41;
		float L_42 = (__this->___m_CautiousMaxDistance_4);
		float L_43 = Vector3_get_magnitude_m591((&V_5), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_44 = Mathf_InverseLerp_m597(NULL /*static, unused*/, L_42, (0.0f), L_43, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_6 = L_44;
		Rigidbody_t3 * L_45 = (__this->___m_Rigidbody_23);
		NullCheck(L_45);
		Vector3_t8  L_46 = Rigidbody_get_angularVelocity_m1040(L_45, /*hidden argument*/&Rigidbody_get_angularVelocity_m1040_MethodInfo);
		V_18 = L_46;
		float L_47 = Vector3_get_magnitude_m591((&V_18), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_48 = (__this->___m_CautiousAngularVelocityFactor_5);
		V_7 = ((float)((float)L_47*(float)L_48));
		float L_49 = (__this->___m_CautiousMaxAngle_3);
		float L_50 = V_7;
		float L_51 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (0.0f), L_49, L_50, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		float L_52 = V_6;
		float L_53 = Mathf_Max_m986(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/&Mathf_Max_m986_MethodInfo);
		V_8 = L_53;
		CarController_t163 * L_54 = (__this->___m_CarController_19);
		NullCheck(L_54);
		float L_55 = CarController_get_MaxSpeed_m517(L_54, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		CarController_t163 * L_56 = (__this->___m_CarController_19);
		NullCheck(L_56);
		float L_57 = CarController_get_MaxSpeed_m517(L_56, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		float L_58 = (__this->___m_CautiousSpeedFactor_2);
		float L_59 = V_8;
		float L_60 = Mathf_Lerp_m615(NULL /*static, unused*/, L_55, ((float)((float)L_57*(float)L_58)), L_59, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		V_1 = L_60;
		goto IL_01bc;
	}

IL_01b7:
	{
		goto IL_01bc;
	}

IL_01bc:
	{
		Transform_t2 * L_61 = (__this->___m_Target_15);
		NullCheck(L_61);
		Vector3_t8  L_62 = Transform_get_position_m599(L_61, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_9 = L_62;
		float L_63 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_64 = (__this->___m_AvoidOtherCarTime_20);
		if ((!(((float)L_63) < ((float)L_64))))
		{
			goto IL_0206;
		}
	}
	{
		float L_65 = V_1;
		float L_66 = (__this->___m_AvoidOtherCarSlowdown_21);
		V_1 = ((float)((float)L_65*(float)L_66));
		Vector3_t8  L_67 = V_9;
		Transform_t2 * L_68 = (__this->___m_Target_15);
		NullCheck(L_68);
		Vector3_t8  L_69 = Transform_get_right_m668(L_68, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		float L_70 = (__this->___m_AvoidPathOffset_22);
		Vector3_t8  L_71 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_69, L_70, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_72 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_67, L_71, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_9 = L_72;
		goto IL_024d;
	}

IL_0206:
	{
		Vector3_t8  L_73 = V_9;
		Transform_t2 * L_74 = (__this->___m_Target_15);
		NullCheck(L_74);
		Vector3_t8  L_75 = Transform_get_right_m668(L_74, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		float L_76 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_77 = (__this->___m_LateralWanderSpeed_10);
		float L_78 = (__this->___m_RandomPerlin_18);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_79 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, ((float)((float)L_76*(float)L_77)), L_78, /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		Vector3_t8  L_80 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_75, ((float)((float)((float)((float)L_79*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_81 = (__this->___m_LateralWanderDistance_9);
		Vector3_t8  L_82 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_83 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_73, L_82, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_9 = L_83;
	}

IL_024d:
	{
		float L_84 = V_1;
		CarController_t163 * L_85 = (__this->___m_CarController_19);
		NullCheck(L_85);
		float L_86 = CarController_get_CurrentSpeed_m516(L_85, /*hidden argument*/&CarController_get_CurrentSpeed_m516_MethodInfo);
		if ((!(((float)L_84) < ((float)L_86))))
		{
			goto IL_0269;
		}
	}
	{
		float L_87 = (__this->___m_BrakeSensitivity_8);
		G_B16_0 = L_87;
		goto IL_026f;
	}

IL_0269:
	{
		float L_88 = (__this->___m_AccelSensitivity_7);
		G_B16_0 = L_88;
	}

IL_026f:
	{
		V_10 = G_B16_0;
		float L_89 = V_1;
		CarController_t163 * L_90 = (__this->___m_CarController_19);
		NullCheck(L_90);
		float L_91 = CarController_get_CurrentSpeed_m516(L_90, /*hidden argument*/&CarController_get_CurrentSpeed_m516_MethodInfo);
		float L_92 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_93 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)((float)((float)L_89-(float)L_91))*(float)L_92)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_11 = L_93;
		float L_94 = V_11;
		float L_95 = (__this->___m_AccelWanderAmount_11);
		float L_96 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_97 = (__this->___m_AccelWanderSpeed_12);
		float L_98 = (__this->___m_RandomPerlin_18);
		float L_99 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, ((float)((float)L_96*(float)L_97)), L_98, /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		float L_100 = (__this->___m_AccelWanderAmount_11);
		V_11 = ((float)((float)L_94*(float)((float)((float)((float)((float)(1.0f)-(float)L_95))+(float)((float)((float)L_99*(float)L_100))))));
		Transform_t2 * L_101 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_102 = V_9;
		NullCheck(L_101);
		Vector3_t8  L_103 = Transform_InverseTransformPoint_m622(L_101, L_102, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		V_12 = L_103;
		float L_104 = ((&V_12)->___x_1);
		float L_105 = ((&V_12)->___z_3);
		float L_106 = atan2f(L_104, L_105);
		V_13 = ((float)((float)L_106*(float)(57.29578f)));
		float L_107 = V_13;
		float L_108 = (__this->___m_SteerSensitivity_6);
		float L_109 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)L_107*(float)L_108)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		CarController_t163 * L_110 = (__this->___m_CarController_19);
		NullCheck(L_110);
		float L_111 = CarController_get_CurrentSpeed_m516(L_110, /*hidden argument*/&CarController_get_CurrentSpeed_m516_MethodInfo);
		float L_112 = Mathf_Sign_m1041(NULL /*static, unused*/, L_111, /*hidden argument*/&Mathf_Sign_m1041_MethodInfo);
		V_14 = ((float)((float)L_109*(float)L_112));
		CarController_t163 * L_113 = (__this->___m_CarController_19);
		float L_114 = V_14;
		float L_115 = V_11;
		float L_116 = V_11;
		NullCheck(L_113);
		CarController_Move_m528(L_113, L_114, L_115, L_116, (0.0f), /*hidden argument*/&CarController_Move_m528_MethodInfo);
		bool L_117 = (__this->___m_StopWhenTargetReached_16);
		if (!L_117)
		{
			goto IL_0351;
		}
	}
	{
		float L_118 = Vector3_get_magnitude_m591((&V_12), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_119 = (__this->___m_ReachTargetThreshold_17);
		if ((!(((float)L_118) < ((float)L_119))))
		{
			goto IL_0351;
		}
	}
	{
		__this->___m_Driving_14 = 0;
	}

IL_0351:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::OnCollisionStay(UnityEngine.Collision)
extern MethodInfo CarAIControl_OnCollisionStay_m501_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCarAIControl_t166_m1044_MethodInfo_var;
extern "C" void CarAIControl_OnCollisionStay_m501 (CarAIControl_t166 * __this, Collision_t167 * ___col, MethodInfo* method)
{
	static bool CarAIControl_OnCollisionStay_m501_init;
	if (!CarAIControl_OnCollisionStay_m501_init)
	{
		Component_GetComponent_TisCarAIControl_t166_m1044_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCarAIControl_t166_m1044_GenericMethod);
		CarAIControl_OnCollisionStay_m501_init = true;
	}
	CarAIControl_t166 * V_0 = {0};
	Vector3_t8  V_1 = {0};
	float V_2 = 0.0f;
	{
		Collision_t167 * L_0 = ___col;
		NullCheck(L_0);
		Rigidbody_t3 * L_1 = Collision_get_rigidbody_m1042(L_0, /*hidden argument*/&Collision_get_rigidbody_m1042_MethodInfo);
		bool L_2 = Object_op_Inequality_m642(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_2)
		{
			goto IL_00c9;
		}
	}
	{
		Collision_t167 * L_3 = ___col;
		NullCheck(L_3);
		Rigidbody_t3 * L_4 = Collision_get_rigidbody_m1042(L_3, /*hidden argument*/&Collision_get_rigidbody_m1042_MethodInfo);
		NullCheck(L_4);
		CarAIControl_t166 * L_5 = Component_GetComponent_TisCarAIControl_t166_m1044(L_4, /*hidden argument*/Component_GetComponent_TisCarAIControl_t166_m1044_MethodInfo_var);
		V_0 = L_5;
		CarAIControl_t166 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m642(NULL /*static, unused*/, L_6, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_7)
		{
			goto IL_00c9;
		}
	}
	{
		float L_8 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		__this->___m_AvoidOtherCarTime_20 = ((float)((float)L_8+(float)(1.0f)));
		Transform_t2 * L_9 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_forward_m587(L_9, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		CarAIControl_t166 * L_11 = V_0;
		NullCheck(L_11);
		Transform_t2 * L_12 = Component_get_transform_m598(L_11, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_12);
		Vector3_t8  L_13 = Transform_get_position_m599(L_12, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_14 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_14);
		Vector3_t8  L_15 = Transform_get_position_m599(L_14, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		float L_17 = Vector3_Angle_m703(NULL /*static, unused*/, L_10, L_16, /*hidden argument*/&Vector3_Angle_m703_MethodInfo);
		if ((!(((float)L_17) < ((float)(90.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		__this->___m_AvoidOtherCarSlowdown_21 = (0.5f);
		goto IL_008a;
	}

IL_007f:
	{
		__this->___m_AvoidOtherCarSlowdown_21 = (1.0f);
	}

IL_008a:
	{
		Transform_t2 * L_18 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		CarAIControl_t166 * L_19 = V_0;
		NullCheck(L_19);
		Transform_t2 * L_20 = Component_get_transform_m598(L_19, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_20);
		Vector3_t8  L_21 = Transform_get_position_m599(L_20, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_18);
		Vector3_t8  L_22 = Transform_InverseTransformPoint_m622(L_18, L_21, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		V_1 = L_22;
		float L_23 = ((&V_1)->___x_1);
		float L_24 = ((&V_1)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_25 = atan2f(L_23, L_24);
		V_2 = L_25;
		float L_26 = (__this->___m_LateralWanderDistance_9);
		float L_27 = V_2;
		float L_28 = Mathf_Sign_m1041(NULL /*static, unused*/, L_27, /*hidden argument*/&Mathf_Sign_m1041_MethodInfo);
		__this->___m_AvoidPathOffset_22 = ((float)((float)L_26*(float)((-L_28))));
	}

IL_00c9:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::SetTarget(UnityEngine.Transform)
extern MethodInfo CarAIControl_SetTarget_m502_MethodInfo;
extern "C" void CarAIControl_SetTarget_m502 (CarAIControl_t166 * __this, Transform_t2 * ___target, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___target;
		__this->___m_Target_15 = L_0;
		__this->___m_Driving_14 = 1;
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.CarAudio/EngineAudioOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EngineAudioOptions_t168_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarAudio/EngineAudioOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_2MethodDeclarations.h"



// UnityStandardAssets.Vehicles.Car.CarAudio
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CarAudio_t169_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarAudio
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_3MethodDeclarations.h"

// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
extern MethodInfo CarAudio_SetUpEngineAudioSource_m507_MethodInfo;
extern MethodInfo Object_Destroy_m991_MethodInfo;
extern MethodInfo Camera_get_main_m663_MethodInfo;
extern MethodInfo CarAudio_StopSound_m505_MethodInfo;
extern MethodInfo CarAudio_StartSound_m504_MethodInfo;
extern MethodInfo CarController_get_Revs_m518_MethodInfo;
extern MethodInfo CarAudio_ULerp_m508_MethodInfo;
extern MethodInfo Mathf_Min_m1045_MethodInfo;
extern MethodInfo AudioSource_set_pitch_m1015_MethodInfo;
extern MethodInfo AudioSource_set_dopplerLevel_m1014_MethodInfo;
extern MethodInfo AudioSource_set_volume_m1017_MethodInfo;
extern MethodInfo CarController_get_AccelInput_m520_MethodInfo;
extern MethodInfo Component_get_gameObject_m577_MethodInfo;
extern MethodInfo AudioSource_set_clip_m666_MethodInfo;
extern MethodInfo AudioSource_set_loop_m1013_MethodInfo;
extern MethodInfo AudioClip_get_length_m1046_MethodInfo;
extern MethodInfo Random_Range_m987_MethodInfo;
extern MethodInfo AudioSource_set_time_m1047_MethodInfo;
extern MethodInfo AudioSource_Play_m667_MethodInfo;
extern MethodInfo AudioSource_set_minDistance_m1011_MethodInfo;
extern MethodInfo AudioSource_set_maxDistance_m1012_MethodInfo;
struct Component_t185;
struct Component_t185;
// Declaration !!0[] UnityEngine.Component::GetComponents<System.Object>()
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t194* Component_GetComponents_TisObject_t_m1049_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponents_TisObject_t_m1049(__this, method) (( ObjectU5BU5D_t194* (*) (Component_t185 *, MethodInfo*))Component_GetComponents_TisObject_t_m1049_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
#define Component_GetComponents_TisAudioSource_t28_m1048(__this, method) (( AudioSourceU5BU5D_t222* (*) (Component_t185 *, MethodInfo*))Component_GetComponents_TisObject_t_m1049_gshared)(__this, method)
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
extern "C" AudioSource_t28 * GameObject_AddComponent_TisAudioSource_t28_m1018 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Component_GetComponents_TisAudioSource_t28_m1048_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisAudioSource_t28_m1018_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::.ctor()
extern MethodInfo CarAudio__ctor_m503_MethodInfo;
extern "C" void CarAudio__ctor_m503 (CarAudio_t169 * __this, MethodInfo* method)
{
	{
		__this->___engineSoundStyle_2 = 1;
		__this->___pitchMultiplier_7 = (1.0f);
		__this->___lowPitchMin_8 = (1.0f);
		__this->___lowPitchMax_9 = (6.0f);
		__this->___highPitchMultiplier_10 = (0.25f);
		__this->___maxRolloffDistance_11 = (500.0f);
		__this->___dopplerLevel_12 = (1.0f);
		__this->___useDoppler_13 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StartSound()
extern MethodInfo* Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var;
extern "C" void CarAudio_StartSound_m504 (CarAudio_t169 * __this, MethodInfo* method)
{
	static bool CarAudio_StartSound_m504_init;
	if (!CarAudio_StartSound_m504_init)
	{
		Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCarController_t163_m1043_GenericMethod);
		CarAudio_StartSound_m504_init = true;
	}
	{
		CarController_t163 * L_0 = Component_GetComponent_TisCarController_t163_m1043(__this, /*hidden argument*/Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var);
		__this->___m_CarController_19 = L_0;
		AudioClip_t26 * L_1 = (__this->___highAccelClip_5);
		AudioSource_t28 * L_2 = CarAudio_SetUpEngineAudioSource_m507(__this, L_1, /*hidden argument*/&CarAudio_SetUpEngineAudioSource_m507_MethodInfo);
		__this->___m_HighAccel_16 = L_2;
		int32_t L_3 = (__this->___engineSoundStyle_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		AudioClip_t26 * L_4 = (__this->___lowAccelClip_3);
		AudioSource_t28 * L_5 = CarAudio_SetUpEngineAudioSource_m507(__this, L_4, /*hidden argument*/&CarAudio_SetUpEngineAudioSource_m507_MethodInfo);
		__this->___m_LowAccel_14 = L_5;
		AudioClip_t26 * L_6 = (__this->___lowDecelClip_4);
		AudioSource_t28 * L_7 = CarAudio_SetUpEngineAudioSource_m507(__this, L_6, /*hidden argument*/&CarAudio_SetUpEngineAudioSource_m507_MethodInfo);
		__this->___m_LowDecel_15 = L_7;
		AudioClip_t26 * L_8 = (__this->___highDecelClip_6);
		AudioSource_t28 * L_9 = CarAudio_SetUpEngineAudioSource_m507(__this, L_8, /*hidden argument*/&CarAudio_SetUpEngineAudioSource_m507_MethodInfo);
		__this->___m_HighDecel_17 = L_9;
	}

IL_0060:
	{
		__this->___m_StartedSound_18 = 1;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StopSound()
extern MethodInfo* Component_GetComponents_TisAudioSource_t28_m1048_MethodInfo_var;
extern "C" void CarAudio_StopSound_m505 (CarAudio_t169 * __this, MethodInfo* method)
{
	static bool CarAudio_StopSound_m505_init;
	if (!CarAudio_StopSound_m505_init)
	{
		Component_GetComponents_TisAudioSource_t28_m1048_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponents_TisAudioSource_t28_m1048_GenericMethod);
		CarAudio_StopSound_m505_init = true;
	}
	AudioSource_t28 * V_0 = {0};
	AudioSourceU5BU5D_t222* V_1 = {0};
	int32_t V_2 = 0;
	{
		AudioSourceU5BU5D_t222* L_0 = Component_GetComponents_TisAudioSource_t28_m1048(__this, /*hidden argument*/Component_GetComponents_TisAudioSource_t28_m1048_MethodInfo_var);
		V_1 = L_0;
		V_2 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		AudioSourceU5BU5D_t222* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(AudioSource_t28 **)(AudioSource_t28 **)SZArrayLdElema(L_1, L_3));
		AudioSource_t28 * L_4 = V_0;
		Object_Destroy_m991(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_Destroy_m991_MethodInfo);
		int32_t L_5 = V_2;
		V_2 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_6 = V_2;
		AudioSourceU5BU5D_t222* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		__this->___m_StartedSound_18 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::Update()
extern MethodInfo CarAudio_Update_m506_MethodInfo;
extern "C" void CarAudio_Update_m506 (CarAudio_t169 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t8  V_6 = {0};
	AudioSource_t28 * G_B10_0 = {0};
	AudioSource_t28 * G_B9_0 = {0};
	float G_B11_0 = 0.0f;
	AudioSource_t28 * G_B11_1 = {0};
	AudioSource_t28 * G_B14_0 = {0};
	AudioSource_t28 * G_B13_0 = {0};
	float G_B15_0 = 0.0f;
	AudioSource_t28 * G_B15_1 = {0};
	AudioSource_t28 * G_B17_0 = {0};
	AudioSource_t28 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	AudioSource_t28 * G_B18_1 = {0};
	AudioSource_t28 * G_B20_0 = {0};
	AudioSource_t28 * G_B19_0 = {0};
	float G_B21_0 = 0.0f;
	AudioSource_t28 * G_B21_1 = {0};
	AudioSource_t28 * G_B23_0 = {0};
	AudioSource_t28 * G_B22_0 = {0};
	float G_B24_0 = 0.0f;
	AudioSource_t28 * G_B24_1 = {0};
	{
		Camera_t19 * L_0 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m598(L_0, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m599(L_1, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_position_m599(L_3, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_5 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_6 = L_5;
		float L_6 = Vector3_get_sqrMagnitude_m602((&V_6), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		V_0 = L_6;
		bool L_7 = (__this->___m_StartedSound_18);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = (__this->___maxRolloffDistance_11);
		float L_10 = (__this->___maxRolloffDistance_11);
		if ((!(((float)L_8) > ((float)((float)((float)L_9*(float)L_10))))))
		{
			goto IL_004d;
		}
	}
	{
		CarAudio_StopSound_m505(__this, /*hidden argument*/&CarAudio_StopSound_m505_MethodInfo);
	}

IL_004d:
	{
		bool L_11 = (__this->___m_StartedSound_18);
		if (L_11)
		{
			goto IL_0071;
		}
	}
	{
		float L_12 = V_0;
		float L_13 = (__this->___maxRolloffDistance_11);
		float L_14 = (__this->___maxRolloffDistance_11);
		if ((!(((float)L_12) < ((float)((float)((float)L_13*(float)L_14))))))
		{
			goto IL_0071;
		}
	}
	{
		CarAudio_StartSound_m504(__this, /*hidden argument*/&CarAudio_StartSound_m504_MethodInfo);
	}

IL_0071:
	{
		bool L_15 = (__this->___m_StartedSound_18);
		if (!L_15)
		{
			goto IL_02d1;
		}
	}
	{
		float L_16 = (__this->___lowPitchMin_8);
		float L_17 = (__this->___lowPitchMax_9);
		CarController_t163 * L_18 = (__this->___m_CarController_19);
		NullCheck(L_18);
		float L_19 = CarController_get_Revs_m518(L_18, /*hidden argument*/&CarController_get_Revs_m518_MethodInfo);
		float L_20 = CarAudio_ULerp_m508(NULL /*static, unused*/, L_16, L_17, L_19, /*hidden argument*/&CarAudio_ULerp_m508_MethodInfo);
		V_1 = L_20;
		float L_21 = (__this->___lowPitchMax_9);
		float L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_23 = Mathf_Min_m1045(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&Mathf_Min_m1045_MethodInfo);
		V_1 = L_23;
		int32_t L_24 = (__this->___engineSoundStyle_2);
		if (L_24)
		{
			goto IL_0106;
		}
	}
	{
		AudioSource_t28 * L_25 = (__this->___m_HighAccel_16);
		float L_26 = V_1;
		float L_27 = (__this->___pitchMultiplier_7);
		float L_28 = (__this->___highPitchMultiplier_10);
		NullCheck(L_25);
		AudioSource_set_pitch_m1015(L_25, ((float)((float)((float)((float)L_26*(float)L_27))*(float)L_28)), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_29 = (__this->___m_HighAccel_16);
		bool L_30 = (__this->___useDoppler_13);
		G_B9_0 = L_29;
		if (!L_30)
		{
			G_B10_0 = L_29;
			goto IL_00e7;
		}
	}
	{
		float L_31 = (__this->___dopplerLevel_12);
		G_B11_0 = L_31;
		G_B11_1 = G_B9_0;
		goto IL_00ec;
	}

IL_00e7:
	{
		G_B11_0 = (0.0f);
		G_B11_1 = G_B10_0;
	}

IL_00ec:
	{
		NullCheck(G_B11_1);
		AudioSource_set_dopplerLevel_m1014(G_B11_1, G_B11_0, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AudioSource_t28 * L_32 = (__this->___m_HighAccel_16);
		NullCheck(L_32);
		AudioSource_set_volume_m1017(L_32, (1.0f), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		goto IL_02d1;
	}

IL_0106:
	{
		AudioSource_t28 * L_33 = (__this->___m_LowAccel_14);
		float L_34 = V_1;
		float L_35 = (__this->___pitchMultiplier_7);
		NullCheck(L_33);
		AudioSource_set_pitch_m1015(L_33, ((float)((float)L_34*(float)L_35)), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_36 = (__this->___m_LowDecel_15);
		float L_37 = V_1;
		float L_38 = (__this->___pitchMultiplier_7);
		NullCheck(L_36);
		AudioSource_set_pitch_m1015(L_36, ((float)((float)L_37*(float)L_38)), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_39 = (__this->___m_HighAccel_16);
		float L_40 = V_1;
		float L_41 = (__this->___highPitchMultiplier_10);
		float L_42 = (__this->___pitchMultiplier_7);
		NullCheck(L_39);
		AudioSource_set_pitch_m1015(L_39, ((float)((float)((float)((float)L_40*(float)L_41))*(float)L_42)), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_43 = (__this->___m_HighDecel_17);
		float L_44 = V_1;
		float L_45 = (__this->___highPitchMultiplier_10);
		float L_46 = (__this->___pitchMultiplier_7);
		NullCheck(L_43);
		AudioSource_set_pitch_m1015(L_43, ((float)((float)((float)((float)L_44*(float)L_45))*(float)L_46)), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		CarController_t163 * L_47 = (__this->___m_CarController_19);
		NullCheck(L_47);
		float L_48 = CarController_get_AccelInput_m520(L_47, /*hidden argument*/&CarController_get_AccelInput_m520_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_49 = fabsf(L_48);
		V_2 = L_49;
		float L_50 = V_2;
		V_3 = ((float)((float)(1.0f)-(float)L_50));
		CarController_t163 * L_51 = (__this->___m_CarController_19);
		NullCheck(L_51);
		float L_52 = CarController_get_Revs_m518(L_51, /*hidden argument*/&CarController_get_Revs_m518_MethodInfo);
		float L_53 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (0.2f), (0.8f), L_52, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_4 = L_53;
		float L_54 = V_4;
		V_5 = ((float)((float)(1.0f)-(float)L_54));
		float L_55 = V_4;
		float L_56 = V_4;
		V_4 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_55))*(float)((float)((float)(1.0f)-(float)L_56))))));
		float L_57 = V_5;
		float L_58 = V_5;
		V_5 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_57))*(float)((float)((float)(1.0f)-(float)L_58))))));
		float L_59 = V_2;
		float L_60 = V_2;
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_59))*(float)((float)((float)(1.0f)-(float)L_60))))));
		float L_61 = V_3;
		float L_62 = V_3;
		V_3 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_61))*(float)((float)((float)(1.0f)-(float)L_62))))));
		AudioSource_t28 * L_63 = (__this->___m_LowAccel_14);
		float L_64 = V_5;
		float L_65 = V_2;
		NullCheck(L_63);
		AudioSource_set_volume_m1017(L_63, ((float)((float)L_64*(float)L_65)), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		AudioSource_t28 * L_66 = (__this->___m_LowDecel_15);
		float L_67 = V_5;
		float L_68 = V_3;
		NullCheck(L_66);
		AudioSource_set_volume_m1017(L_66, ((float)((float)L_67*(float)L_68)), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		AudioSource_t28 * L_69 = (__this->___m_HighAccel_16);
		float L_70 = V_4;
		float L_71 = V_2;
		NullCheck(L_69);
		AudioSource_set_volume_m1017(L_69, ((float)((float)L_70*(float)L_71)), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		AudioSource_t28 * L_72 = (__this->___m_HighDecel_17);
		float L_73 = V_4;
		float L_74 = V_3;
		NullCheck(L_72);
		AudioSource_set_volume_m1017(L_72, ((float)((float)L_73*(float)L_74)), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		AudioSource_t28 * L_75 = (__this->___m_HighAccel_16);
		bool L_76 = (__this->___useDoppler_13);
		G_B13_0 = L_75;
		if (!L_76)
		{
			G_B14_0 = L_75;
			goto IL_0255;
		}
	}
	{
		float L_77 = (__this->___dopplerLevel_12);
		G_B15_0 = L_77;
		G_B15_1 = G_B13_0;
		goto IL_025a;
	}

IL_0255:
	{
		G_B15_0 = (0.0f);
		G_B15_1 = G_B14_0;
	}

IL_025a:
	{
		NullCheck(G_B15_1);
		AudioSource_set_dopplerLevel_m1014(G_B15_1, G_B15_0, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AudioSource_t28 * L_78 = (__this->___m_LowAccel_14);
		bool L_79 = (__this->___useDoppler_13);
		G_B16_0 = L_78;
		if (!L_79)
		{
			G_B17_0 = L_78;
			goto IL_027b;
		}
	}
	{
		float L_80 = (__this->___dopplerLevel_12);
		G_B18_0 = L_80;
		G_B18_1 = G_B16_0;
		goto IL_0280;
	}

IL_027b:
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B17_0;
	}

IL_0280:
	{
		NullCheck(G_B18_1);
		AudioSource_set_dopplerLevel_m1014(G_B18_1, G_B18_0, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AudioSource_t28 * L_81 = (__this->___m_HighDecel_17);
		bool L_82 = (__this->___useDoppler_13);
		G_B19_0 = L_81;
		if (!L_82)
		{
			G_B20_0 = L_81;
			goto IL_02a1;
		}
	}
	{
		float L_83 = (__this->___dopplerLevel_12);
		G_B21_0 = L_83;
		G_B21_1 = G_B19_0;
		goto IL_02a6;
	}

IL_02a1:
	{
		G_B21_0 = (0.0f);
		G_B21_1 = G_B20_0;
	}

IL_02a6:
	{
		NullCheck(G_B21_1);
		AudioSource_set_dopplerLevel_m1014(G_B21_1, G_B21_0, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AudioSource_t28 * L_84 = (__this->___m_LowDecel_15);
		bool L_85 = (__this->___useDoppler_13);
		G_B22_0 = L_84;
		if (!L_85)
		{
			G_B23_0 = L_84;
			goto IL_02c7;
		}
	}
	{
		float L_86 = (__this->___dopplerLevel_12);
		G_B24_0 = L_86;
		G_B24_1 = G_B22_0;
		goto IL_02cc;
	}

IL_02c7:
	{
		G_B24_0 = (0.0f);
		G_B24_1 = G_B23_0;
	}

IL_02cc:
	{
		NullCheck(G_B24_1);
		AudioSource_set_dopplerLevel_m1014(G_B24_1, G_B24_0, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
	}

IL_02d1:
	{
		return;
	}
}
// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
extern MethodInfo* GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var;
extern "C" AudioSource_t28 * CarAudio_SetUpEngineAudioSource_m507 (CarAudio_t169 * __this, AudioClip_t26 * ___clip, MethodInfo* method)
{
	static bool CarAudio_SetUpEngineAudioSource_m507_init;
	if (!CarAudio_SetUpEngineAudioSource_m507_init)
	{
		GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisAudioSource_t28_m1018_GenericMethod);
		CarAudio_SetUpEngineAudioSource_m507_init = true;
	}
	AudioSource_t28 * V_0 = {0};
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_0);
		AudioSource_t28 * L_1 = GameObject_AddComponent_TisAudioSource_t28_m1018(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var);
		V_0 = L_1;
		AudioSource_t28 * L_2 = V_0;
		AudioClip_t26 * L_3 = ___clip;
		NullCheck(L_2);
		AudioSource_set_clip_m666(L_2, L_3, /*hidden argument*/&AudioSource_set_clip_m666_MethodInfo);
		AudioSource_t28 * L_4 = V_0;
		NullCheck(L_4);
		AudioSource_set_volume_m1017(L_4, (0.0f), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		AudioSource_t28 * L_5 = V_0;
		NullCheck(L_5);
		AudioSource_set_loop_m1013(L_5, 1, /*hidden argument*/&AudioSource_set_loop_m1013_MethodInfo);
		AudioSource_t28 * L_6 = V_0;
		AudioClip_t26 * L_7 = ___clip;
		NullCheck(L_7);
		float L_8 = AudioClip_get_length_m1046(L_7, /*hidden argument*/&AudioClip_get_length_m1046_MethodInfo);
		float L_9 = Random_Range_m987(NULL /*static, unused*/, (0.0f), L_8, /*hidden argument*/&Random_Range_m987_MethodInfo);
		NullCheck(L_6);
		AudioSource_set_time_m1047(L_6, L_9, /*hidden argument*/&AudioSource_set_time_m1047_MethodInfo);
		AudioSource_t28 * L_10 = V_0;
		NullCheck(L_10);
		AudioSource_Play_m667(L_10, /*hidden argument*/&AudioSource_Play_m667_MethodInfo);
		AudioSource_t28 * L_11 = V_0;
		NullCheck(L_11);
		AudioSource_set_minDistance_m1011(L_11, (5.0f), /*hidden argument*/&AudioSource_set_minDistance_m1011_MethodInfo);
		AudioSource_t28 * L_12 = V_0;
		float L_13 = (__this->___maxRolloffDistance_11);
		NullCheck(L_12);
		AudioSource_set_maxDistance_m1012(L_12, L_13, /*hidden argument*/&AudioSource_set_maxDistance_m1012_MethodInfo);
		AudioSource_t28 * L_14 = V_0;
		NullCheck(L_14);
		AudioSource_set_dopplerLevel_m1014(L_14, (0.0f), /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AudioSource_t28 * L_15 = V_0;
		return L_15;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::ULerp(System.Single,System.Single,System.Single)
extern "C" float CarAudio_ULerp_m508 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___from;
		float L_2 = ___value;
		float L_3 = ___to;
		return ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_0))*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityStandardAssets.Vehicles.Car.CarDriveType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CarDriveType_t170_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarDriveType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_4MethodDeclarations.h"



// UnityStandardAssets.Vehicles.Car.SpeedType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpeedType_t171_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.SpeedType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_5MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo CarController_t163_il2cpp_TypeInfo;

// UnityStandardAssets.Vehicles.Car.WheelEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_14.h"
// UnityEngine.WheelHit
#include "UnityEngine_UnityEngine_WheelHit.h"
extern TypeInfo WheelColliderU5BU5D_t154_il2cpp_TypeInfo;
extern TypeInfo WheelCollider_t182_il2cpp_TypeInfo;
extern TypeInfo GameObjectU5BU5D_t125_il2cpp_TypeInfo;
extern TypeInfo GameObject_t92_il2cpp_TypeInfo;
extern TypeInfo WheelEffectsU5BU5D_t172_il2cpp_TypeInfo;
extern TypeInfo WheelEffects_t180_il2cpp_TypeInfo;
extern TypeInfo QuaternionU5BU5D_t173_il2cpp_TypeInfo;
extern TypeInfo Quaternion_t10_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.WheelHit
#include "UnityEngine_UnityEngine_WheelHitMethodDeclarations.h"
// UnityStandardAssets.Vehicles.Car.WheelEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_14MethodDeclarations.h"
extern Il2CppType WheelColliderU5BU5D_t154_0_0_0;
extern Il2CppType GameObjectU5BU5D_t125_0_0_0;
extern Il2CppType WheelEffectsU5BU5D_t172_0_0_0;
extern Il2CppType QuaternionU5BU5D_t173_0_0_0;
extern MethodInfo GameObject_get_transform_m583_MethodInfo;
extern MethodInfo Collider_get_attachedRigidbody_m641_MethodInfo;
extern MethodInfo Rigidbody_set_centerOfMass_m1050_MethodInfo;
extern MethodInfo CarController_CalculateGearFactor_m526_MethodInfo;
extern MethodInfo CarController_CurveFactor_m524_MethodInfo;
extern MethodInfo CarController_ULerp_m525_MethodInfo;
extern MethodInfo CarController_set_Revs_m519_MethodInfo;
extern MethodInfo WheelCollider_GetWorldPose_m1051_MethodInfo;
extern MethodInfo Transform_set_position_m601_MethodInfo;
extern MethodInfo Transform_set_rotation_m607_MethodInfo;
extern MethodInfo CarController_set_AccelInput_m521_MethodInfo;
extern MethodInfo CarController_set_BrakeInput_m514_MethodInfo;
extern MethodInfo WheelCollider_set_steerAngle_m1052_MethodInfo;
extern MethodInfo CarController_SteerHelper_m531_MethodInfo;
extern MethodInfo CarController_ApplyDrive_m530_MethodInfo;
extern MethodInfo CarController_CapSpeed_m529_MethodInfo;
extern MethodInfo WheelCollider_set_brakeTorque_m1053_MethodInfo;
extern MethodInfo CarController_CalculateRevs_m527_MethodInfo;
extern MethodInfo CarController_GearChanging_m523_MethodInfo;
extern MethodInfo CarController_AddDownForce_m532_MethodInfo;
extern MethodInfo CarController_CheckForWheelSpin_m533_MethodInfo;
extern MethodInfo CarController_TractionControl_m534_MethodInfo;
extern MethodInfo WheelCollider_GetGroundHit_m1054_MethodInfo;
extern MethodInfo WheelHit_get_normal_m1055_MethodInfo;
extern MethodInfo Vector3_op_Equality_m1056_MethodInfo;
extern MethodInfo Transform_get_eulerAngles_m707_MethodInfo;
extern MethodInfo Quaternion_AngleAxis_m708_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m709_MethodInfo;
extern MethodInfo WheelHit_get_forwardSlip_m1057_MethodInfo;
extern MethodInfo WheelHit_get_sidewaysSlip_m1058_MethodInfo;
extern MethodInfo WheelEffects_EmitTyreSmoke_m570_MethodInfo;
extern MethodInfo CarController_AnySkidSoundPlaying_m536_MethodInfo;
extern MethodInfo WheelEffects_PlayAudio_m571_MethodInfo;
extern MethodInfo WheelEffects_get_PlayingAudio_m567_MethodInfo;
extern MethodInfo WheelEffects_StopAudio_m572_MethodInfo;
extern MethodInfo WheelEffects_EndSkidTrail_m574_MethodInfo;
extern MethodInfo CarController_AdjustTorque_m535_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Car.CarController::.ctor()
extern MethodInfo CarController__ctor_m509_MethodInfo;
extern TypeInfo* WheelColliderU5BU5D_t154_il2cpp_TypeInfo_var;
extern TypeInfo* GameObjectU5BU5D_t125_il2cpp_TypeInfo_var;
extern TypeInfo* WheelEffectsU5BU5D_t172_il2cpp_TypeInfo_var;
extern "C" void CarController__ctor_m509 (CarController_t163 * __this, MethodInfo* method)
{
	static bool CarController__ctor_m509_init;
	if (!CarController__ctor_m509_init)
	{
		WheelColliderU5BU5D_t154_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&WheelColliderU5BU5D_t154_0_0_0);
		GameObjectU5BU5D_t125_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GameObjectU5BU5D_t125_0_0_0);
		WheelEffectsU5BU5D_t172_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&WheelEffectsU5BU5D_t172_0_0_0);
		CarController__ctor_m509_init = true;
	}
	{
		__this->___m_CarDriveType_3 = 2;
		__this->___m_WheelColliders_4 = ((WheelColliderU5BU5D_t154*)SZArrayNew(WheelColliderU5BU5D_t154_il2cpp_TypeInfo_var, 4));
		__this->___m_WheelMeshes_5 = ((GameObjectU5BU5D_t125*)SZArrayNew(GameObjectU5BU5D_t125_il2cpp_TypeInfo_var, 4));
		__this->___m_WheelEffects_6 = ((WheelEffectsU5BU5D_t172*)SZArrayNew(WheelEffectsU5BU5D_t172_il2cpp_TypeInfo_var, 4));
		__this->___m_Downforce_14 = (100.0f);
		__this->___m_Topspeed_16 = (200.0f);
		__this->___m_RevRangeBoundary_18 = (1.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::.cctor()
extern MethodInfo CarController__cctor_m510_MethodInfo;
extern "C" void CarController__cctor_m510 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((CarController_t163_StaticFields*)InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo)->static_fields)->___NoOfGears_17 = 5;
		return;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::get_Skidding()
extern MethodInfo CarController_get_Skidding_m511_MethodInfo;
extern "C" bool CarController_get_Skidding_m511 (CarController_t163 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CSkiddingU3Ek__BackingField_30);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Skidding(System.Boolean)
extern MethodInfo CarController_set_Skidding_m512_MethodInfo;
extern "C" void CarController_set_Skidding_m512 (CarController_t163 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CSkiddingU3Ek__BackingField_30 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_BrakeInput()
extern "C" float CarController_get_BrakeInput_m513 (CarController_t163 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CBrakeInputU3Ek__BackingField_31);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_BrakeInput(System.Single)
extern "C" void CarController_set_BrakeInput_m514 (CarController_t163 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CBrakeInputU3Ek__BackingField_31 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSteerAngle()
extern MethodInfo CarController_get_CurrentSteerAngle_m515_MethodInfo;
extern "C" float CarController_get_CurrentSteerAngle_m515 (CarController_t163 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_SteerAngle_24);
		return L_0;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSpeed()
extern "C" float CarController_get_CurrentSpeed_m516 (CarController_t163 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Rigidbody_t3 * L_0 = (__this->___m_Rigidbody_29);
		NullCheck(L_0);
		Vector3_t8  L_1 = Rigidbody_get_velocity_m590(L_0, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_0 = L_1;
		float L_2 = Vector3_get_magnitude_m591((&V_0), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		return ((float)((float)L_2*(float)(2.23693633f)));
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_MaxSpeed()
extern "C" float CarController_get_MaxSpeed_m517 (CarController_t163 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Topspeed_16);
		return L_0;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_Revs()
extern "C" float CarController_get_Revs_m518 (CarController_t163 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CRevsU3Ek__BackingField_32);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Revs(System.Single)
extern "C" void CarController_set_Revs_m519 (CarController_t163 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CRevsU3Ek__BackingField_32 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_AccelInput()
extern "C" float CarController_get_AccelInput_m520 (CarController_t163 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CAccelInputU3Ek__BackingField_33);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_AccelInput(System.Single)
extern "C" void CarController_set_AccelInput_m521 (CarController_t163 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CAccelInputU3Ek__BackingField_33 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Start()
extern MethodInfo CarController_Start_m522_MethodInfo;
extern TypeInfo* QuaternionU5BU5D_t173_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void CarController_Start_m522 (CarController_t163 * __this, MethodInfo* method)
{
	static bool CarController_Start_m522_init;
	if (!CarController_Start_m522_init)
	{
		QuaternionU5BU5D_t173_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&QuaternionU5BU5D_t173_0_0_0);
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		CarController_Start_m522_init = true;
	}
	int32_t V_0 = 0;
	{
		__this->___m_WheelMeshLocalRotations_21 = ((QuaternionU5BU5D_t173*)SZArrayNew(QuaternionU5BU5D_t173_il2cpp_TypeInfo_var, 4));
		V_0 = 0;
		goto IL_003a;
	}

IL_0013:
	{
		QuaternionU5BU5D_t173* L_0 = (__this->___m_WheelMeshLocalRotations_21);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		GameObjectU5BU5D_t125* L_2 = (__this->___m_WheelMeshes_5);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_2, L_4)));
		Transform_t2 * L_5 = GameObject_get_transform_m583((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		NullCheck(L_5);
		Quaternion_t10  L_6 = Transform_get_localRotation_m611(L_5, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		*((Quaternion_t10 *)(Quaternion_t10 *)SZArrayLdElema(L_0, L_1)) = L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		WheelColliderU5BU5D_t154* L_9 = (__this->___m_WheelColliders_4);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_9, L_10)));
		Rigidbody_t3 * L_11 = Collider_get_attachedRigidbody_m641((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_9, L_10)), /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		Vector3_t8  L_12 = (__this->___m_CentreOfMassOffset_7);
		NullCheck(L_11);
		Rigidbody_set_centerOfMass_m1050(L_11, L_12, /*hidden argument*/&Rigidbody_set_centerOfMass_m1050_MethodInfo);
		__this->___m_MaxHandbrakeTorque_13 = (std::numeric_limits<float>::max());
		Rigidbody_t3 * L_13 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_29 = L_13;
		float L_14 = (__this->___m_FullTorqueOverAllWheels_11);
		float L_15 = (__this->___m_TractionControl_10);
		float L_16 = (__this->___m_FullTorqueOverAllWheels_11);
		__this->___m_CurrentTorque_28 = ((float)((float)L_14-(float)((float)((float)L_15*(float)L_16))));
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::GearChanging()
extern "C" void CarController_GearChanging_m523 (CarController_t163 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = CarController_get_CurrentSpeed_m516(__this, /*hidden argument*/&CarController_get_CurrentSpeed_m516_MethodInfo);
		float L_1 = CarController_get_MaxSpeed_m517(__this, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_2 = fabsf(((float)((float)L_0/(float)L_1)));
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo));
		int32_t L_3 = ((CarController_t163_StaticFields*)InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo)->static_fields)->___NoOfGears_17;
		int32_t L_4 = (__this->___m_GearNum_25);
		V_1 = ((float)((float)((float)((float)(1.0f)/(float)(((float)L_3))))*(float)(((float)((int32_t)((int32_t)L_4+(int32_t)1))))));
		int32_t L_5 = ((CarController_t163_StaticFields*)InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo)->static_fields)->___NoOfGears_17;
		int32_t L_6 = (__this->___m_GearNum_25);
		V_2 = ((float)((float)((float)((float)(1.0f)/(float)(((float)L_5))))*(float)(((float)L_6))));
		int32_t L_7 = (__this->___m_GearNum_25);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = V_2;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10 = (__this->___m_GearNum_25);
		__this->___m_GearNum_25 = ((int32_t)((int32_t)L_10-(int32_t)1));
	}

IL_0060:
	{
		float L_11 = V_0;
		float L_12 = V_1;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_13 = (__this->___m_GearNum_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo));
		int32_t L_14 = ((CarController_t163_StaticFields*)InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo)->static_fields)->___NoOfGears_17;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)1)))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_15 = (__this->___m_GearNum_25);
		__this->___m_GearNum_25 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0087:
	{
		return;
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::CurveFactor(System.Single)
extern "C" float CarController_CurveFactor_m524 (Object_t * __this /* static, unused */, float ___factor, MethodInfo* method)
{
	{
		float L_0 = ___factor;
		float L_1 = ___factor;
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_0))*(float)((float)((float)(1.0f)-(float)L_1))))));
	}
}
// System.Single UnityStandardAssets.Vehicles.Car.CarController::ULerp(System.Single,System.Single,System.Single)
extern "C" float CarController_ULerp_m525 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___from;
		float L_2 = ___value;
		float L_3 = ___to;
		return ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_0))*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateGearFactor()
extern "C" void CarController_CalculateGearFactor_m526 (CarController_t163 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo));
		int32_t L_0 = ((CarController_t163_StaticFields*)InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo)->static_fields)->___NoOfGears_17;
		V_0 = ((float)((float)(1.0f)/(float)(((float)L_0))));
		float L_1 = V_0;
		int32_t L_2 = (__this->___m_GearNum_25);
		float L_3 = V_0;
		int32_t L_4 = (__this->___m_GearNum_25);
		float L_5 = CarController_get_CurrentSpeed_m516(__this, /*hidden argument*/&CarController_get_CurrentSpeed_m516_MethodInfo);
		float L_6 = CarController_get_MaxSpeed_m517(__this, /*hidden argument*/&CarController_get_MaxSpeed_m517_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_7 = fabsf(((float)((float)L_5/(float)L_6)));
		float L_8 = Mathf_InverseLerp_m597(NULL /*static, unused*/, ((float)((float)L_1*(float)(((float)L_2)))), ((float)((float)L_3*(float)(((float)((int32_t)((int32_t)L_4+(int32_t)1)))))), L_7, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_1 = L_8;
		float L_9 = (__this->___m_GearFactor_26);
		float L_10 = V_1;
		float L_11 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		float L_12 = Mathf_Lerp_m615(NULL /*static, unused*/, L_9, L_10, ((float)((float)L_11*(float)(5.0f))), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		__this->___m_GearFactor_26 = L_12;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateRevs()
extern "C" void CarController_CalculateRevs_m527 (CarController_t163 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		CarController_CalculateGearFactor_m526(__this, /*hidden argument*/&CarController_CalculateGearFactor_m526_MethodInfo);
		int32_t L_0 = (__this->___m_GearNum_25);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo));
		int32_t L_1 = ((CarController_t163_StaticFields*)InitializedTypeInfo(&CarController_t163_il2cpp_TypeInfo)->static_fields)->___NoOfGears_17;
		V_0 = ((float)((float)(((float)L_0))/(float)(((float)L_1))));
		float L_2 = (__this->___m_RevRangeBoundary_18);
		float L_3 = V_0;
		float L_4 = CarController_CurveFactor_m524(NULL /*static, unused*/, L_3, /*hidden argument*/&CarController_CurveFactor_m524_MethodInfo);
		float L_5 = CarController_ULerp_m525(NULL /*static, unused*/, (0.0f), L_2, L_4, /*hidden argument*/&CarController_ULerp_m525_MethodInfo);
		V_1 = L_5;
		float L_6 = (__this->___m_RevRangeBoundary_18);
		float L_7 = V_0;
		float L_8 = CarController_ULerp_m525(NULL /*static, unused*/, L_6, (1.0f), L_7, /*hidden argument*/&CarController_ULerp_m525_MethodInfo);
		V_2 = L_8;
		float L_9 = V_1;
		float L_10 = V_2;
		float L_11 = (__this->___m_GearFactor_26);
		float L_12 = CarController_ULerp_m525(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/&CarController_ULerp_m525_MethodInfo);
		CarController_set_Revs_m519(__this, L_12, /*hidden argument*/&CarController_set_Revs_m519_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Move(System.Single,System.Single,System.Single,System.Single)
extern "C" void CarController_Move_m528 (CarController_t163 * __this, float ___steering, float ___accel, float ___footbrake, float ___handbrake, MethodInfo* method)
{
	int32_t V_0 = 0;
	Quaternion_t10  V_1 = {0};
	Vector3_t8  V_2 = {0};
	float V_3 = 0.0f;
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0007:
	{
		WheelColliderU5BU5D_t154* L_0 = (__this->___m_WheelColliders_4);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_2)));
		WheelCollider_GetWorldPose_m1051((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_2)), (&V_2), (&V_1), /*hidden argument*/&WheelCollider_GetWorldPose_m1051_MethodInfo);
		GameObjectU5BU5D_t125* L_3 = (__this->___m_WheelMeshes_5);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_3, L_5)));
		Transform_t2 * L_6 = GameObject_get_transform_m583((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		Vector3_t8  L_7 = V_2;
		NullCheck(L_6);
		Transform_set_position_m601(L_6, L_7, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		GameObjectU5BU5D_t125* L_8 = (__this->___m_WheelMeshes_5);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NullCheck((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_8, L_10)));
		Transform_t2 * L_11 = GameObject_get_transform_m583((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_8, L_10)), /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		Quaternion_t10  L_12 = V_1;
		NullCheck(L_11);
		Transform_set_rotation_m607(L_11, L_12, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		float L_15 = ___steering;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_16 = Mathf_Clamp_m616(NULL /*static, unused*/, L_15, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		___steering = L_16;
		float L_17 = ___accel;
		float L_18 = Mathf_Clamp_m616(NULL /*static, unused*/, L_17, (0.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		float L_19 = L_18;
		___accel = L_19;
		CarController_set_AccelInput_m521(__this, L_19, /*hidden argument*/&CarController_set_AccelInput_m521_MethodInfo);
		float L_20 = ___footbrake;
		float L_21 = Mathf_Clamp_m616(NULL /*static, unused*/, L_20, (-1.0f), (0.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		float L_22 = ((float)((float)(-1.0f)*(float)L_21));
		___footbrake = L_22;
		CarController_set_BrakeInput_m514(__this, L_22, /*hidden argument*/&CarController_set_BrakeInput_m514_MethodInfo);
		float L_23 = ___handbrake;
		float L_24 = Mathf_Clamp_m616(NULL /*static, unused*/, L_23, (0.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		___handbrake = L_24;
		float L_25 = ___steering;
		float L_26 = (__this->___m_MaximumSteerAngle_8);
		__this->___m_SteerAngle_24 = ((float)((float)L_25*(float)L_26));
		WheelColliderU5BU5D_t154* L_27 = (__this->___m_WheelColliders_4);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		int32_t L_28 = 0;
		float L_29 = (__this->___m_SteerAngle_24);
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_27, L_28)));
		WheelCollider_set_steerAngle_m1052((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_27, L_28)), L_29, /*hidden argument*/&WheelCollider_set_steerAngle_m1052_MethodInfo);
		WheelColliderU5BU5D_t154* L_30 = (__this->___m_WheelColliders_4);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		int32_t L_31 = 1;
		float L_32 = (__this->___m_SteerAngle_24);
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_30, L_31)));
		WheelCollider_set_steerAngle_m1052((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_30, L_31)), L_32, /*hidden argument*/&WheelCollider_set_steerAngle_m1052_MethodInfo);
		CarController_SteerHelper_m531(__this, /*hidden argument*/&CarController_SteerHelper_m531_MethodInfo);
		float L_33 = ___accel;
		float L_34 = ___footbrake;
		CarController_ApplyDrive_m530(__this, L_33, L_34, /*hidden argument*/&CarController_ApplyDrive_m530_MethodInfo);
		CarController_CapSpeed_m529(__this, /*hidden argument*/&CarController_CapSpeed_m529_MethodInfo);
		float L_35 = ___handbrake;
		if ((!(((float)L_35) > ((float)(0.0f)))))
		{
			goto IL_0120;
		}
	}
	{
		float L_36 = ___handbrake;
		float L_37 = (__this->___m_MaxHandbrakeTorque_13);
		V_3 = ((float)((float)L_36*(float)L_37));
		WheelColliderU5BU5D_t154* L_38 = (__this->___m_WheelColliders_4);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 2);
		int32_t L_39 = 2;
		float L_40 = V_3;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_38, L_39)));
		WheelCollider_set_brakeTorque_m1053((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_38, L_39)), L_40, /*hidden argument*/&WheelCollider_set_brakeTorque_m1053_MethodInfo);
		WheelColliderU5BU5D_t154* L_41 = (__this->___m_WheelColliders_4);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 3);
		int32_t L_42 = 3;
		float L_43 = V_3;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_41, L_42)));
		WheelCollider_set_brakeTorque_m1053((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_41, L_42)), L_43, /*hidden argument*/&WheelCollider_set_brakeTorque_m1053_MethodInfo);
	}

IL_0120:
	{
		CarController_CalculateRevs_m527(__this, /*hidden argument*/&CarController_CalculateRevs_m527_MethodInfo);
		CarController_GearChanging_m523(__this, /*hidden argument*/&CarController_GearChanging_m523_MethodInfo);
		CarController_AddDownForce_m532(__this, /*hidden argument*/&CarController_AddDownForce_m532_MethodInfo);
		CarController_CheckForWheelSpin_m533(__this, /*hidden argument*/&CarController_CheckForWheelSpin_m533_MethodInfo);
		CarController_TractionControl_m534(__this, /*hidden argument*/&CarController_TractionControl_m534_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CapSpeed()
extern "C" void CarController_CapSpeed_m529 (CarController_t163 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t8  V_1 = {0};
	int32_t V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	{
		Rigidbody_t3 * L_0 = (__this->___m_Rigidbody_29);
		NullCheck(L_0);
		Vector3_t8  L_1 = Rigidbody_get_velocity_m590(L_0, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_1;
		float L_2 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___m_SpeedType_15);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00be;
	}

IL_002d:
	{
		float L_6 = V_0;
		V_0 = ((float)((float)L_6*(float)(2.23693633f)));
		float L_7 = V_0;
		float L_8 = (__this->___m_Topspeed_16);
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0070;
		}
	}
	{
		Rigidbody_t3 * L_9 = (__this->___m_Rigidbody_29);
		float L_10 = (__this->___m_Topspeed_16);
		Rigidbody_t3 * L_11 = (__this->___m_Rigidbody_29);
		NullCheck(L_11);
		Vector3_t8  L_12 = Rigidbody_get_velocity_m590(L_11, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_3 = L_12;
		Vector3_t8  L_13 = Vector3_get_normalized_m592((&V_3), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		Vector3_t8  L_14 = Vector3_op_Multiply_m717(NULL /*static, unused*/, ((float)((float)L_10/(float)(2.23693633f))), L_13, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		NullCheck(L_9);
		Rigidbody_set_velocity_m701(L_9, L_14, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
	}

IL_0070:
	{
		goto IL_00be;
	}

IL_0075:
	{
		float L_15 = V_0;
		V_0 = ((float)((float)L_15*(float)(3.6f)));
		float L_16 = V_0;
		float L_17 = (__this->___m_Topspeed_16);
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00b9;
		}
	}
	{
		Rigidbody_t3 * L_18 = (__this->___m_Rigidbody_29);
		float L_19 = (__this->___m_Topspeed_16);
		Rigidbody_t3 * L_20 = (__this->___m_Rigidbody_29);
		NullCheck(L_20);
		Vector3_t8  L_21 = Rigidbody_get_velocity_m590(L_20, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_4 = L_21;
		Vector3_t8  L_22 = Vector3_get_normalized_m592((&V_4), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		Vector3_t8  L_23 = Vector3_op_Multiply_m717(NULL /*static, unused*/, ((float)((float)L_19/(float)(3.6f))), L_22, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		NullCheck(L_18);
		Rigidbody_set_velocity_m701(L_18, L_23, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
	}

IL_00b9:
	{
		goto IL_00be;
	}

IL_00be:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::ApplyDrive(System.Single,System.Single)
extern "C" void CarController_ApplyDrive_m530 (CarController_t163 * __this, float ___accel, float ___footbrake, MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		int32_t L_0 = (__this->___m_CarDriveType_3);
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_0052;
		}
		if (L_1 == 1)
		{
			goto IL_0087;
		}
		if (L_1 == 2)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_00bc;
	}

IL_001e:
	{
		float L_2 = ___accel;
		float L_3 = (__this->___m_CurrentTorque_28);
		V_0 = ((float)((float)L_2*(float)((float)((float)L_3/(float)(4.0f)))));
		V_1 = 0;
		goto IL_0046;
	}

IL_0034:
	{
		WheelColliderU5BU5D_t154* L_4 = (__this->___m_WheelColliders_4);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		float L_7 = V_0;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_4, L_6)));
		WheelCollider_set_motorTorque_m1020((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_4, L_6)), L_7, /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_00bc;
	}

IL_0052:
	{
		float L_10 = ___accel;
		float L_11 = (__this->___m_CurrentTorque_28);
		V_0 = ((float)((float)L_10*(float)((float)((float)L_11/(float)(2.0f)))));
		WheelColliderU5BU5D_t154* L_12 = (__this->___m_WheelColliders_4);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		float L_14 = V_0;
		V_4 = L_14;
		WheelColliderU5BU5D_t154* L_15 = (__this->___m_WheelColliders_4);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		float L_17 = V_4;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_15, L_16)));
		WheelCollider_set_motorTorque_m1020((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_15, L_16)), L_17, /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
		float L_18 = V_4;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_12, L_13)));
		WheelCollider_set_motorTorque_m1020((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_12, L_13)), L_18, /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
		goto IL_00bc;
	}

IL_0087:
	{
		float L_19 = ___accel;
		float L_20 = (__this->___m_CurrentTorque_28);
		V_0 = ((float)((float)L_19*(float)((float)((float)L_20/(float)(2.0f)))));
		WheelColliderU5BU5D_t154* L_21 = (__this->___m_WheelColliders_4);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		int32_t L_22 = 2;
		float L_23 = V_0;
		V_4 = L_23;
		WheelColliderU5BU5D_t154* L_24 = (__this->___m_WheelColliders_4);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
		int32_t L_25 = 3;
		float L_26 = V_4;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_24, L_25)));
		WheelCollider_set_motorTorque_m1020((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_24, L_25)), L_26, /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
		float L_27 = V_4;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_21, L_22)));
		WheelCollider_set_motorTorque_m1020((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_21, L_22)), L_27, /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
		goto IL_00bc;
	}

IL_00bc:
	{
		V_2 = 0;
		goto IL_0149;
	}

IL_00c3:
	{
		float L_28 = CarController_get_CurrentSpeed_m516(__this, /*hidden argument*/&CarController_get_CurrentSpeed_m516_MethodInfo);
		if ((!(((float)L_28) > ((float)(5.0f)))))
		{
			goto IL_0112;
		}
	}
	{
		Transform_t2 * L_29 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_29);
		Vector3_t8  L_30 = Transform_get_forward_m587(L_29, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Rigidbody_t3 * L_31 = (__this->___m_Rigidbody_29);
		NullCheck(L_31);
		Vector3_t8  L_32 = Rigidbody_get_velocity_m590(L_31, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		float L_33 = Vector3_Angle_m703(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/&Vector3_Angle_m703_MethodInfo);
		if ((!(((float)L_33) < ((float)(50.0f)))))
		{
			goto IL_0112;
		}
	}
	{
		WheelColliderU5BU5D_t154* L_34 = (__this->___m_WheelColliders_4);
		int32_t L_35 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		float L_37 = (__this->___m_BrakeTorque_20);
		float L_38 = ___footbrake;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_34, L_36)));
		WheelCollider_set_brakeTorque_m1053((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_34, L_36)), ((float)((float)L_37*(float)L_38)), /*hidden argument*/&WheelCollider_set_brakeTorque_m1053_MethodInfo);
		goto IL_0145;
	}

IL_0112:
	{
		float L_39 = ___footbrake;
		if ((!(((float)L_39) > ((float)(0.0f)))))
		{
			goto IL_0145;
		}
	}
	{
		WheelColliderU5BU5D_t154* L_40 = (__this->___m_WheelColliders_4);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = L_41;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_40, L_42)));
		WheelCollider_set_brakeTorque_m1053((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_40, L_42)), (0.0f), /*hidden argument*/&WheelCollider_set_brakeTorque_m1053_MethodInfo);
		WheelColliderU5BU5D_t154* L_43 = (__this->___m_WheelColliders_4);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		float L_46 = (__this->___m_ReverseTorque_12);
		float L_47 = ___footbrake;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_43, L_45)));
		WheelCollider_set_motorTorque_m1020((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_43, L_45)), ((float)((float)((-L_46))*(float)L_47)), /*hidden argument*/&WheelCollider_set_motorTorque_m1020_MethodInfo);
	}

IL_0145:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48+(int32_t)1));
	}

IL_0149:
	{
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) < ((int32_t)4)))
		{
			goto IL_00c3;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::SteerHelper()
extern "C" void CarController_SteerHelper_m531 (CarController_t163 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	WheelHit_t223  V_1 = {0};
	float V_2 = 0.0f;
	Quaternion_t10  V_3 = {0};
	Vector3_t8  V_4 = {0};
	Vector3_t8  V_5 = {0};
	Vector3_t8  V_6 = {0};
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_0007:
	{
		WheelColliderU5BU5D_t154* L_0 = (__this->___m_WheelColliders_4);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_2)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_2)), (&V_1), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		Vector3_t8  L_3 = WheelHit_get_normal_m1055((&V_1), /*hidden argument*/&WheelHit_get_normal_m1055_MethodInfo);
		Vector3_t8  L_4 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		bool L_5 = Vector3_op_Equality_m1056(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Equality_m1056_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		float L_8 = (__this->___m_OldRotation_27);
		Transform_t2 * L_9 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_eulerAngles_m707(L_9, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_4 = L_10;
		float L_11 = ((&V_4)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_12 = fabsf(((float)((float)L_8-(float)L_11)));
		if ((!(((float)L_12) < ((float)(10.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		Transform_t2 * L_13 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_13);
		Vector3_t8  L_14 = Transform_get_eulerAngles_m707(L_13, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_5 = L_14;
		float L_15 = ((&V_5)->___y_2);
		float L_16 = (__this->___m_OldRotation_27);
		float L_17 = (__this->___m_SteerHelper_9);
		V_2 = ((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17));
		float L_18 = V_2;
		Vector3_t8  L_19 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Quaternion_t10  L_20 = Quaternion_AngleAxis_m708(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Quaternion_AngleAxis_m708_MethodInfo);
		V_3 = L_20;
		Rigidbody_t3 * L_21 = (__this->___m_Rigidbody_29);
		Quaternion_t10  L_22 = V_3;
		Rigidbody_t3 * L_23 = (__this->___m_Rigidbody_29);
		NullCheck(L_23);
		Vector3_t8  L_24 = Rigidbody_get_velocity_m590(L_23, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		Vector3_t8  L_25 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		NullCheck(L_21);
		Rigidbody_set_velocity_m701(L_21, L_25, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
	}

IL_00ae:
	{
		Transform_t2 * L_26 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_26);
		Vector3_t8  L_27 = Transform_get_eulerAngles_m707(L_26, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_6 = L_27;
		float L_28 = ((&V_6)->___y_2);
		__this->___m_OldRotation_27 = L_28;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AddDownForce()
extern "C" void CarController_AddDownForce_m532 (CarController_t163 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		WheelColliderU5BU5D_t154* L_0 = (__this->___m_WheelColliders_4);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_1)));
		Rigidbody_t3 * L_2 = Collider_get_attachedRigidbody_m641((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_1)), /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_up_m588(L_3, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		Vector3_t8  L_5 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_4, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		float L_6 = (__this->___m_Downforce_14);
		Vector3_t8  L_7 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		WheelColliderU5BU5D_t154* L_8 = (__this->___m_WheelColliders_4);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_8, L_9)));
		Rigidbody_t3 * L_10 = Collider_get_attachedRigidbody_m641((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_8, L_9)), /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		NullCheck(L_10);
		Vector3_t8  L_11 = Rigidbody_get_velocity_m590(L_10, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_0 = L_11;
		float L_12 = Vector3_get_magnitude_m591((&V_0), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		Vector3_t8  L_13 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_7, L_12, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_2);
		Rigidbody_AddForce_m713(L_2, L_13, /*hidden argument*/&Rigidbody_AddForce_m713_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CheckForWheelSpin()
extern "C" void CarController_CheckForWheelSpin_m533 (CarController_t163 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	WheelHit_t223  V_1 = {0};
	{
		V_0 = 0;
		goto IL_009f;
	}

IL_0007:
	{
		WheelColliderU5BU5D_t154* L_0 = (__this->___m_WheelColliders_4);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_2)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_0, L_2)), (&V_1), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		float L_3 = WheelHit_get_forwardSlip_m1057((&V_1), /*hidden argument*/&WheelHit_get_forwardSlip_m1057_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_4 = fabsf(L_3);
		float L_5 = (__this->___m_SlipLimit_19);
		if ((((float)L_4) >= ((float)L_5)))
		{
			goto IL_0045;
		}
	}
	{
		float L_6 = WheelHit_get_sidewaysSlip_m1058((&V_1), /*hidden argument*/&WheelHit_get_sidewaysSlip_m1058_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_7 = fabsf(L_6);
		float L_8 = (__this->___m_SlipLimit_19);
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_006f;
		}
	}

IL_0045:
	{
		WheelEffectsU5BU5D_t172* L_9 = (__this->___m_WheelEffects_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_9, L_11)));
		WheelEffects_EmitTyreSmoke_m570((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/&WheelEffects_EmitTyreSmoke_m570_MethodInfo);
		bool L_12 = CarController_AnySkidSoundPlaying_m536(__this, /*hidden argument*/&CarController_AnySkidSoundPlaying_m536_MethodInfo);
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		WheelEffectsU5BU5D_t172* L_13 = (__this->___m_WheelEffects_6);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_13, L_15)));
		WheelEffects_PlayAudio_m571((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/&WheelEffects_PlayAudio_m571_MethodInfo);
	}

IL_006a:
	{
		goto IL_009b;
	}

IL_006f:
	{
		WheelEffectsU5BU5D_t172* L_16 = (__this->___m_WheelEffects_6);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_16, L_18)));
		bool L_19 = WheelEffects_get_PlayingAudio_m567((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/&WheelEffects_get_PlayingAudio_m567_MethodInfo);
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		WheelEffectsU5BU5D_t172* L_20 = (__this->___m_WheelEffects_6);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_20, L_22)));
		WheelEffects_StopAudio_m572((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_20, L_22)), /*hidden argument*/&WheelEffects_StopAudio_m572_MethodInfo);
	}

IL_008e:
	{
		WheelEffectsU5BU5D_t172* L_23 = (__this->___m_WheelEffects_6);
		int32_t L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_23, L_25)));
		WheelEffects_EndSkidTrail_m574((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/&WheelEffects_EndSkidTrail_m574_MethodInfo);
	}

IL_009b:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009f:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::TractionControl()
extern "C" void CarController_TractionControl_m534 (CarController_t163 * __this, MethodInfo* method)
{
	WheelHit_t223  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = (__this->___m_CarDriveType_3);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0091;
		}
		if (L_1 == 1)
		{
			goto IL_0052;
		}
		if (L_1 == 2)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_00d0;
	}

IL_001e:
	{
		V_1 = 0;
		goto IL_0046;
	}

IL_0025:
	{
		WheelColliderU5BU5D_t154* L_2 = (__this->___m_WheelColliders_4);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_2, L_4)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_2, L_4)), (&V_0), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		float L_5 = WheelHit_get_forwardSlip_m1057((&V_0), /*hidden argument*/&WheelHit_get_forwardSlip_m1057_MethodInfo);
		CarController_AdjustTorque_m535(__this, L_5, /*hidden argument*/&CarController_AdjustTorque_m535_MethodInfo);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_00d0;
	}

IL_0052:
	{
		WheelColliderU5BU5D_t154* L_8 = (__this->___m_WheelColliders_4);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		int32_t L_9 = 2;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_8, L_9)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_8, L_9)), (&V_0), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		float L_10 = WheelHit_get_forwardSlip_m1057((&V_0), /*hidden argument*/&WheelHit_get_forwardSlip_m1057_MethodInfo);
		CarController_AdjustTorque_m535(__this, L_10, /*hidden argument*/&CarController_AdjustTorque_m535_MethodInfo);
		WheelColliderU5BU5D_t154* L_11 = (__this->___m_WheelColliders_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		int32_t L_12 = 3;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_11, L_12)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_11, L_12)), (&V_0), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		float L_13 = WheelHit_get_forwardSlip_m1057((&V_0), /*hidden argument*/&WheelHit_get_forwardSlip_m1057_MethodInfo);
		CarController_AdjustTorque_m535(__this, L_13, /*hidden argument*/&CarController_AdjustTorque_m535_MethodInfo);
		goto IL_00d0;
	}

IL_0091:
	{
		WheelColliderU5BU5D_t154* L_14 = (__this->___m_WheelColliders_4);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		int32_t L_15 = 0;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_14, L_15)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_14, L_15)), (&V_0), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		float L_16 = WheelHit_get_forwardSlip_m1057((&V_0), /*hidden argument*/&WheelHit_get_forwardSlip_m1057_MethodInfo);
		CarController_AdjustTorque_m535(__this, L_16, /*hidden argument*/&CarController_AdjustTorque_m535_MethodInfo);
		WheelColliderU5BU5D_t154* L_17 = (__this->___m_WheelColliders_4);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		int32_t L_18 = 1;
		NullCheck((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_17, L_18)));
		WheelCollider_GetGroundHit_m1054((*(WheelCollider_t182 **)(WheelCollider_t182 **)SZArrayLdElema(L_17, L_18)), (&V_0), /*hidden argument*/&WheelCollider_GetGroundHit_m1054_MethodInfo);
		float L_19 = WheelHit_get_forwardSlip_m1057((&V_0), /*hidden argument*/&WheelHit_get_forwardSlip_m1057_MethodInfo);
		CarController_AdjustTorque_m535(__this, L_19, /*hidden argument*/&CarController_AdjustTorque_m535_MethodInfo);
		goto IL_00d0;
	}

IL_00d0:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AdjustTorque(System.Single)
extern "C" void CarController_AdjustTorque_m535 (CarController_t163 * __this, float ___forwardSlip, MethodInfo* method)
{
	{
		float L_0 = ___forwardSlip;
		float L_1 = (__this->___m_SlipLimit_19);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_003a;
		}
	}
	{
		float L_2 = (__this->___m_CurrentTorque_28);
		if ((!(((float)L_2) >= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		float L_3 = (__this->___m_CurrentTorque_28);
		float L_4 = (__this->___m_TractionControl_10);
		__this->___m_CurrentTorque_28 = ((float)((float)L_3-(float)((float)((float)(10.0f)*(float)L_4))));
		goto IL_0070;
	}

IL_003a:
	{
		float L_5 = (__this->___m_CurrentTorque_28);
		float L_6 = (__this->___m_TractionControl_10);
		__this->___m_CurrentTorque_28 = ((float)((float)L_5+(float)((float)((float)(10.0f)*(float)L_6))));
		float L_7 = (__this->___m_CurrentTorque_28);
		float L_8 = (__this->___m_FullTorqueOverAllWheels_11);
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0070;
		}
	}
	{
		float L_9 = (__this->___m_FullTorqueOverAllWheels_11);
		__this->___m_CurrentTorque_28 = L_9;
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::AnySkidSoundPlaying()
extern "C" bool CarController_AnySkidSoundPlaying_m536 (CarController_t163 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0007:
	{
		WheelEffectsU5BU5D_t172* L_0 = (__this->___m_WheelEffects_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_0, L_2)));
		bool L_3 = WheelEffects_get_PlayingAudio_m567((*(WheelEffects_t180 **)(WheelEffects_t180 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&WheelEffects_get_PlayingAudio_m567_MethodInfo);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return 0;
	}
}
// UnityStandardAssets.Vehicles.Car.CarSelfRighting
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CarSelfRighting_t174_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarSelfRighting
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_7MethodDeclarations.h"

extern MethodInfo CarSelfRighting_RightCar_m540_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m1006_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Car.CarSelfRighting::.ctor()
extern MethodInfo CarSelfRighting__ctor_m537_MethodInfo;
extern "C" void CarSelfRighting__ctor_m537 (CarSelfRighting_t174 * __this, MethodInfo* method)
{
	{
		__this->___m_WaitTime_2 = (3.0f);
		__this->___m_VelocityThreshold_3 = (1.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarSelfRighting::Start()
extern MethodInfo CarSelfRighting_Start_m538_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void CarSelfRighting_Start_m538 (CarSelfRighting_t174 * __this, MethodInfo* method)
{
	static bool CarSelfRighting_Start_m538_init;
	if (!CarSelfRighting_Start_m538_init)
	{
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		CarSelfRighting_Start_m538_init = true;
	}
	{
		Rigidbody_t3 * L_0 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_5 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarSelfRighting::Update()
extern MethodInfo CarSelfRighting_Update_m539_MethodInfo;
extern "C" void CarSelfRighting_Update_m539 (CarSelfRighting_t174 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_up_m588(L_0, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		if ((((float)L_2) > ((float)(0.0f))))
		{
			goto IL_003b;
		}
	}
	{
		Rigidbody_t3 * L_3 = (__this->___m_Rigidbody_5);
		NullCheck(L_3);
		Vector3_t8  L_4 = Rigidbody_get_velocity_m590(L_3, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_6 = (__this->___m_VelocityThreshold_3);
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		float L_7 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		__this->___m_LastOkTime_4 = L_7;
	}

IL_0046:
	{
		float L_8 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_9 = (__this->___m_LastOkTime_4);
		float L_10 = (__this->___m_WaitTime_2);
		if ((!(((float)L_8) > ((float)((float)((float)L_9+(float)L_10))))))
		{
			goto IL_0063;
		}
	}
	{
		CarSelfRighting_RightCar_m540(__this, /*hidden argument*/&CarSelfRighting_RightCar_m540_MethodInfo);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarSelfRighting::RightCar()
extern "C" void CarSelfRighting_RightCar_m540 (CarSelfRighting_t174 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m599(L_1, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_3 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		NullCheck(L_1);
		Transform_set_position_m601(L_1, L_4, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_5 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_6 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_6);
		Vector3_t8  L_7 = Transform_get_forward_m587(L_6, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Quaternion_t10  L_8 = Quaternion_LookRotation_m1006(NULL /*static, unused*/, L_7, /*hidden argument*/&Quaternion_LookRotation_m1006_MethodInfo);
		NullCheck(L_5);
		Transform_set_rotation_m607(L_5, L_8, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.CarUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CarUserControl_t175_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.CarUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_8MethodDeclarations.h"



// System.Void UnityStandardAssets.Vehicles.Car.CarUserControl::.ctor()
extern MethodInfo CarUserControl__ctor_m541_MethodInfo;
extern "C" void CarUserControl__ctor_m541 (CarUserControl_t175 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarUserControl::Awake()
extern MethodInfo CarUserControl_Awake_m542_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var;
extern "C" void CarUserControl_Awake_m542 (CarUserControl_t175 * __this, MethodInfo* method)
{
	static bool CarUserControl_Awake_m542_init;
	if (!CarUserControl_Awake_m542_init)
	{
		Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCarController_t163_m1043_GenericMethod);
		CarUserControl_Awake_m542_init = true;
	}
	{
		CarController_t163 * L_0 = Component_GetComponent_TisCarController_t163_m1043(__this, /*hidden argument*/Component_GetComponent_TisCarController_t163_m1043_MethodInfo_var);
		__this->___m_Car_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.CarUserControl::FixedUpdate()
extern MethodInfo CarUserControl_FixedUpdate_m543_MethodInfo;
extern "C" void CarUserControl_FixedUpdate_m543 (CarUserControl_t175 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_1;
		CarController_t163 * L_2 = (__this->___m_Car_2);
		float L_3 = V_0;
		float L_4 = V_1;
		float L_5 = V_1;
		NullCheck(L_2);
		CarController_Move_m528(L_2, L_3, L_4, L_5, (0.0f), /*hidden argument*/&CarController_Move_m528_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.Mudguard
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Mudguard_t176_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.Mudguard
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_9MethodDeclarations.h"



// System.Void UnityStandardAssets.Vehicles.Car.Mudguard::.ctor()
extern MethodInfo Mudguard__ctor_m544_MethodInfo;
extern "C" void Mudguard__ctor_m544 (Mudguard_t176 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.Mudguard::Start()
extern MethodInfo Mudguard_Start_m545_MethodInfo;
extern "C" void Mudguard_Start_m545 (Mudguard_t176 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Quaternion_t10  L_1 = Transform_get_localRotation_m611(L_0, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_OriginalRotation_3 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.Mudguard::Update()
extern MethodInfo Mudguard_Update_m546_MethodInfo;
extern "C" void Mudguard_Update_m546 (Mudguard_t176 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_1 = (__this->___m_OriginalRotation_3);
		CarController_t163 * L_2 = (__this->___carController_2);
		NullCheck(L_2);
		float L_3 = CarController_get_CurrentSteerAngle_m515(L_2, /*hidden argument*/&CarController_get_CurrentSteerAngle_m515_MethodInfo);
		Quaternion_t10  L_4 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), L_3, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_5 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		NullCheck(L_0);
		Transform_set_localRotation_m618(L_0, L_5, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CStartU3Ec__Iterator9_t178_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_10MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityStandardAssets.Vehicles.Car.SkidTrail
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_11.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo SkidTrail_t177_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo Object_Destroy_m999_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9::.ctor()
extern MethodInfo U3CStartU3Ec__Iterator9__ctor_m547_MethodInfo;
extern "C" void U3CStartU3Ec__Iterator9__ctor_m547 (U3CStartU3Ec__Iterator9_t178 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m548_MethodInfo;
extern "C" Object_t * U3CStartU3Ec__Iterator9_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m548 (U3CStartU3Ec__Iterator9_t178 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m549_MethodInfo;
extern "C" Object_t * U3CStartU3Ec__Iterator9_System_Collections_IEnumerator_get_Current_m549 (U3CStartU3Ec__Iterator9_t178 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9::MoveNext()
extern MethodInfo U3CStartU3Ec__Iterator9_MoveNext_m550_MethodInfo;
extern "C" bool U3CStartU3Ec__Iterator9_MoveNext_m550 (U3CStartU3Ec__Iterator9_t178 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_007b;
	}

IL_0021:
	{
		__this->___$current_1 = NULL;
		__this->___$PC_0 = 1;
		goto IL_007d;
	}

IL_0034:
	{
		SkidTrail_t177 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		Transform_t2 * L_3 = Component_get_transform_m598(L_2, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Transform_t2 * L_4 = Transform_get_parent_m626(L_3, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		NullCheck(L_4);
		Transform_t2 * L_5 = Transform_get_parent_m626(L_4, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		bool L_6 = Object_op_Equality_m576(NULL /*static, unused*/, L_5, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		SkidTrail_t177 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		GameObject_t92 * L_8 = Component_get_gameObject_m577(L_7, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		SkidTrail_t177 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		float L_10 = (L_9->___m_PersistTime_2);
		Object_Destroy_m999(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/&Object_Destroy_m999_MethodInfo);
	}

IL_006f:
	{
		goto IL_0021;
	}
	// Dead block : IL_0074: ldarg.0

IL_007b:
	{
		return 0;
	}

IL_007d:
	{
		return 1;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9::Dispose()
extern MethodInfo U3CStartU3Ec__Iterator9_Dispose_m551_MethodInfo;
extern "C" void U3CStartU3Ec__Iterator9_Dispose_m551 (U3CStartU3Ec__Iterator9_t178 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>c__Iterator9::Reset()
extern MethodInfo U3CStartU3Ec__Iterator9_Reset_m552_MethodInfo;
extern "C" void U3CStartU3Ec__Iterator9_Reset_m552 (U3CStartU3Ec__Iterator9_t178 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Vehicles.Car.SkidTrail
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_11MethodDeclarations.h"



// System.Void UnityStandardAssets.Vehicles.Car.SkidTrail::.ctor()
extern MethodInfo SkidTrail__ctor_m553_MethodInfo;
extern "C" void SkidTrail__ctor_m553 (SkidTrail_t177 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Vehicles.Car.SkidTrail::Start()
extern MethodInfo SkidTrail_Start_m554_MethodInfo;
extern "C" Object_t * SkidTrail_Start_m554 (SkidTrail_t177 * __this, MethodInfo* method)
{
	U3CStartU3Ec__Iterator9_t178 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator9_t178 * L_0 = (U3CStartU3Ec__Iterator9_t178 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CStartU3Ec__Iterator9_t178_il2cpp_TypeInfo));
		U3CStartU3Ec__Iterator9__ctor_m547(L_0, /*hidden argument*/&U3CStartU3Ec__Iterator9__ctor_m547_MethodInfo);
		V_0 = L_0;
		U3CStartU3Ec__Iterator9_t178 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartU3Ec__Iterator9_t178 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Vehicles.Car.Suspension
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Suspension_t179_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.Suspension
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_12MethodDeclarations.h"

extern MethodInfo Transform_get_localPosition_m632_MethodInfo;
extern MethodInfo Transform_set_localPosition_m652_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Car.Suspension::.ctor()
extern MethodInfo Suspension__ctor_m555_MethodInfo;
extern "C" void Suspension__ctor_m555 (Suspension_t179 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.Suspension::Start()
extern MethodInfo Suspension_Start_m556_MethodInfo;
extern "C" void Suspension_Start_m556 (Suspension_t179 * __this, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = (__this->___wheel_2);
		NullCheck(L_0);
		Transform_t2 * L_1 = GameObject_get_transform_m583(L_0, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_localPosition_m632(L_1, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_TargetOriginalPosition_3 = L_2;
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_localPosition_m632(L_3, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_Origin_4 = L_4;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.Suspension::Update()
extern MethodInfo Suspension_Update_m557_MethodInfo;
extern "C" void Suspension_Update_m557 (Suspension_t179 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_1 = (__this->___m_Origin_4);
		GameObject_t92 * L_2 = (__this->___wheel_2);
		NullCheck(L_2);
		Transform_t2 * L_3 = GameObject_get_transform_m583(L_2, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_localPosition_m632(L_3, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		Vector3_t8  L_5 = (__this->___m_TargetOriginalPosition_3);
		Vector3_t8  L_6 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		Vector3_t8  L_7 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_6, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		NullCheck(L_0);
		Transform_set_localPosition_m652(L_0, L_7, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CStartSkidTrailU3Ec__IteratorA_t181_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_13MethodDeclarations.h"

extern MethodInfo WheelEffects_set_skidding_m566_MethodInfo;
extern MethodInfo WheelCollider_get_radius_m1059_MethodInfo;
struct Object_t91;
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0)
extern "C" Transform_t2 * Object_Instantiate_TisTransform_t2_m1060 (Object_t * __this /* static, unused */, Transform_t2 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Object_Instantiate_TisTransform_t2_m1060_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA::.ctor()
extern MethodInfo U3CStartSkidTrailU3Ec__IteratorA__ctor_m558_MethodInfo;
extern "C" void U3CStartSkidTrailU3Ec__IteratorA__ctor_m558 (U3CStartSkidTrailU3Ec__IteratorA_t181 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CStartSkidTrailU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m559_MethodInfo;
extern "C" Object_t * U3CStartSkidTrailU3Ec__IteratorA_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m559 (U3CStartSkidTrailU3Ec__IteratorA_t181 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CStartSkidTrailU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m560_MethodInfo;
extern "C" Object_t * U3CStartSkidTrailU3Ec__IteratorA_System_Collections_IEnumerator_get_Current_m560 (U3CStartSkidTrailU3Ec__IteratorA_t181 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA::MoveNext()
extern MethodInfo U3CStartSkidTrailU3Ec__IteratorA_MoveNext_m561_MethodInfo;
extern MethodInfo* Object_Instantiate_TisTransform_t2_m1060_MethodInfo_var;
extern "C" bool U3CStartSkidTrailU3Ec__IteratorA_MoveNext_m561 (U3CStartSkidTrailU3Ec__IteratorA_t181 * __this, MethodInfo* method)
{
	static bool U3CStartSkidTrailU3Ec__IteratorA_MoveNext_m561_init;
	if (!U3CStartSkidTrailU3Ec__IteratorA_MoveNext_m561_init)
	{
		Object_Instantiate_TisTransform_t2_m1060_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_Instantiate_TisTransform_t2_m1060_GenericMethod);
		U3CStartSkidTrailU3Ec__IteratorA_MoveNext_m561_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0060;
		}
	}
	{
		goto IL_00c7;
	}

IL_0021:
	{
		WheelEffects_t180 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		WheelEffects_set_skidding_m566(L_2, 1, /*hidden argument*/&WheelEffects_set_skidding_m566_MethodInfo);
		WheelEffects_t180 * L_3 = (__this->___U3CU3Ef__this_2);
		WheelEffects_t180 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		Transform_t2 * L_5 = (L_4->___SkidTrailPrefab_2);
		Transform_t2 * L_6 = Object_Instantiate_TisTransform_t2_m1060(NULL /*static, unused*/, L_5, /*hidden argument*/Object_Instantiate_TisTransform_t2_m1060_MethodInfo_var);
		NullCheck(L_3);
		L_3->___m_SkidTrail_6 = L_6;
		goto IL_0060;
	}

IL_004d:
	{
		__this->___$current_1 = NULL;
		__this->___$PC_0 = 1;
		goto IL_00c9;
	}

IL_0060:
	{
		WheelEffects_t180 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		Transform_t2 * L_8 = (L_7->___m_SkidTrail_6);
		bool L_9 = Object_op_Equality_m576(NULL /*static, unused*/, L_8, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		WheelEffects_t180 * L_10 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_10);
		Transform_t2 * L_11 = (L_10->___m_SkidTrail_6);
		WheelEffects_t180 * L_12 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_12);
		Transform_t2 * L_13 = Component_get_transform_m598(L_12, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_11);
		Transform_set_parent_m980(L_11, L_13, /*hidden argument*/&Transform_set_parent_m980_MethodInfo);
		WheelEffects_t180 * L_14 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_14);
		Transform_t2 * L_15 = (L_14->___m_SkidTrail_6);
		Vector3_t8  L_16 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_17 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_16, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		WheelEffects_t180 * L_18 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_18);
		WheelCollider_t182 * L_19 = (L_18->___m_WheelCollider_7);
		NullCheck(L_19);
		float L_20 = WheelCollider_get_radius_m1059(L_19, /*hidden argument*/&WheelCollider_get_radius_m1059_MethodInfo);
		Vector3_t8  L_21 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_17, L_20, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_15);
		Transform_set_localPosition_m652(L_15, L_21, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		__this->___$PC_0 = (-1);
	}

IL_00c7:
	{
		return 0;
	}

IL_00c9:
	{
		return 1;
	}
	// Dead block : IL_00cb: ldloc.1
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA::Dispose()
extern MethodInfo U3CStartSkidTrailU3Ec__IteratorA_Dispose_m562_MethodInfo;
extern "C" void U3CStartSkidTrailU3Ec__IteratorA_Dispose_m562 (U3CStartSkidTrailU3Ec__IteratorA_t181 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects/<StartSkidTrail>c__IteratorA::Reset()
extern MethodInfo U3CStartSkidTrailU3Ec__IteratorA_Reset_m563_MethodInfo;
extern "C" void U3CStartSkidTrailU3Ec__IteratorA_Reset_m563 (U3CStartSkidTrailU3Ec__IteratorA_t181 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern MethodInfo Transform_get_root_m1061_MethodInfo;
extern MethodInfo Debug_LogWarning_m715_MethodInfo;
extern MethodInfo ParticleSystem_Stop_m1062_MethodInfo;
extern MethodInfo WheelEffects_set_PlayingAudio_m568_MethodInfo;
extern MethodInfo GameObject__ctor_m956_MethodInfo;
extern MethodInfo ParticleSystem_Emit_m1063_MethodInfo;
extern MethodInfo WheelEffects_get_skidding_m565_MethodInfo;
extern MethodInfo WheelEffects_StartSkidTrail_m573_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m665_MethodInfo;
extern MethodInfo AudioSource_Stop_m1064_MethodInfo;
struct Component_t185;
struct Component_t185;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m628_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m628(__this, method) (( Object_t * (*) (Component_t185 *, MethodInfo*))Component_GetComponentInChildren_TisObject_t_m628_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentInChildren_TisParticleSystem_t121_m1065(__this, method) (( ParticleSystem_t121 * (*) (Component_t185 *, MethodInfo*))Component_GetComponentInChildren_TisObject_t_m628_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.WheelCollider>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_19.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.WheelCollider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.WheelCollider>()
#define Component_GetComponent_TisWheelCollider_t182_m1066(__this, method) (( WheelCollider_t182 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.AudioSource>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t28_m691(__this, method) (( AudioSource_t28 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentInChildren_TisParticleSystem_t121_m1065_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisWheelCollider_t182_m1066_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisAudioSource_t28_m691_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::.ctor()
extern MethodInfo WheelEffects__ctor_m564_MethodInfo;
extern "C" void WheelEffects__ctor_m564 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::get_skidding()
extern "C" bool WheelEffects_get_skidding_m565 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CskiddingU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::set_skidding(System.Boolean)
extern "C" void WheelEffects_set_skidding_m566 (WheelEffects_t180 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CskiddingU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::get_PlayingAudio()
extern "C" bool WheelEffects_get_PlayingAudio_m567 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CPlayingAudioU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::set_PlayingAudio(System.Boolean)
extern "C" void WheelEffects_set_PlayingAudio_m568 (WheelEffects_t180 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CPlayingAudioU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::Start()
extern MethodInfo WheelEffects_Start_m569_MethodInfo;
extern MethodInfo* Component_GetComponentInChildren_TisParticleSystem_t121_m1065_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisWheelCollider_t182_m1066_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisAudioSource_t28_m691_MethodInfo_var;
extern "C" void WheelEffects_Start_m569 (WheelEffects_t180 * __this, MethodInfo* method)
{
	static bool WheelEffects_Start_m569_init;
	if (!WheelEffects_Start_m569_init)
	{
		Component_GetComponentInChildren_TisParticleSystem_t121_m1065_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInChildren_TisParticleSystem_t121_m1065_GenericMethod);
		Component_GetComponent_TisWheelCollider_t182_m1066_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisWheelCollider_t182_m1066_GenericMethod);
		Component_GetComponent_TisAudioSource_t28_m691_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAudioSource_t28_m691_GenericMethod);
		WheelEffects_Start_m569_init = true;
	}
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Transform_get_root_m1061(L_0, /*hidden argument*/&Transform_get_root_m1061_MethodInfo);
		NullCheck(L_1);
		ParticleSystem_t121 * L_2 = Component_GetComponentInChildren_TisParticleSystem_t121_m1065(L_1, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t121_m1065_MethodInfo_var);
		__this->___skidParticles_4 = L_2;
		ParticleSystem_t121 * L_3 = (__this->___skidParticles_4);
		bool L_4 = Object_op_Equality_m576(NULL /*static, unused*/, L_3, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Debug_LogWarning_m715(NULL /*static, unused*/, (String_t*) &_stringLiteral68, /*hidden argument*/&Debug_LogWarning_m715_MethodInfo);
		goto IL_0041;
	}

IL_0036:
	{
		ParticleSystem_t121 * L_5 = (__this->___skidParticles_4);
		NullCheck(L_5);
		ParticleSystem_Stop_m1062(L_5, /*hidden argument*/&ParticleSystem_Stop_m1062_MethodInfo);
	}

IL_0041:
	{
		WheelCollider_t182 * L_6 = Component_GetComponent_TisWheelCollider_t182_m1066(__this, /*hidden argument*/Component_GetComponent_TisWheelCollider_t182_m1066_MethodInfo_var);
		__this->___m_WheelCollider_7 = L_6;
		AudioSource_t28 * L_7 = Component_GetComponent_TisAudioSource_t28_m691(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t28_m691_MethodInfo_var);
		__this->___m_AudioSource_5 = L_7;
		WheelEffects_set_PlayingAudio_m568(__this, 0, /*hidden argument*/&WheelEffects_set_PlayingAudio_m568_MethodInfo);
		Transform_t2 * L_8 = ((WheelEffects_t180_StaticFields*)InitializedTypeInfo(&WheelEffects_t180_il2cpp_TypeInfo)->static_fields)->___skidTrailsDetachedParent_3;
		bool L_9 = Object_op_Equality_m576(NULL /*static, unused*/, L_8, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		GameObject_t92 * L_10 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m956(L_10, (String_t*) &_stringLiteral69, /*hidden argument*/&GameObject__ctor_m956_MethodInfo);
		NullCheck(L_10);
		Transform_t2 * L_11 = GameObject_get_transform_m583(L_10, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		((WheelEffects_t180_StaticFields*)InitializedTypeInfo(&WheelEffects_t180_il2cpp_TypeInfo)->static_fields)->___skidTrailsDetachedParent_3 = L_11;
	}

IL_0084:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::EmitTyreSmoke()
extern "C" void WheelEffects_EmitTyreSmoke_m570 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		ParticleSystem_t121 * L_0 = (__this->___skidParticles_4);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m598(L_0, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_up_m588(L_4, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		WheelCollider_t182 * L_6 = (__this->___m_WheelCollider_7);
		NullCheck(L_6);
		float L_7 = WheelCollider_get_radius_m1059(L_6, /*hidden argument*/&WheelCollider_get_radius_m1059_MethodInfo);
		Vector3_t8  L_8 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_9 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		NullCheck(L_1);
		Transform_set_position_m601(L_1, L_9, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		ParticleSystem_t121 * L_10 = (__this->___skidParticles_4);
		NullCheck(L_10);
		ParticleSystem_Emit_m1063(L_10, 1, /*hidden argument*/&ParticleSystem_Emit_m1063_MethodInfo);
		bool L_11 = WheelEffects_get_skidding_m565(__this, /*hidden argument*/&WheelEffects_get_skidding_m565_MethodInfo);
		if (L_11)
		{
			goto IL_005f;
		}
	}
	{
		Object_t * L_12 = WheelEffects_StartSkidTrail_m573(__this, /*hidden argument*/&WheelEffects_StartSkidTrail_m573_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_12, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
	}

IL_005f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::PlayAudio()
extern "C" void WheelEffects_PlayAudio_m571 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		AudioSource_t28 * L_0 = (__this->___m_AudioSource_5);
		NullCheck(L_0);
		AudioSource_Play_m667(L_0, /*hidden argument*/&AudioSource_Play_m667_MethodInfo);
		WheelEffects_set_PlayingAudio_m568(__this, 1, /*hidden argument*/&WheelEffects_set_PlayingAudio_m568_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::StopAudio()
extern "C" void WheelEffects_StopAudio_m572 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		AudioSource_t28 * L_0 = (__this->___m_AudioSource_5);
		NullCheck(L_0);
		AudioSource_Stop_m1064(L_0, /*hidden argument*/&AudioSource_Stop_m1064_MethodInfo);
		WheelEffects_set_PlayingAudio_m568(__this, 0, /*hidden argument*/&WheelEffects_set_PlayingAudio_m568_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Vehicles.Car.WheelEffects::StartSkidTrail()
extern "C" Object_t * WheelEffects_StartSkidTrail_m573 (WheelEffects_t180 * __this, MethodInfo* method)
{
	U3CStartSkidTrailU3Ec__IteratorA_t181 * V_0 = {0};
	{
		U3CStartSkidTrailU3Ec__IteratorA_t181 * L_0 = (U3CStartSkidTrailU3Ec__IteratorA_t181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CStartSkidTrailU3Ec__IteratorA_t181_il2cpp_TypeInfo));
		U3CStartSkidTrailU3Ec__IteratorA__ctor_m558(L_0, /*hidden argument*/&U3CStartSkidTrailU3Ec__IteratorA__ctor_m558_MethodInfo);
		V_0 = L_0;
		U3CStartSkidTrailU3Ec__IteratorA_t181 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartSkidTrailU3Ec__IteratorA_t181 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityStandardAssets.Vehicles.Car.WheelEffects::EndSkidTrail()
extern "C" void WheelEffects_EndSkidTrail_m574 (WheelEffects_t180 * __this, MethodInfo* method)
{
	{
		bool L_0 = WheelEffects_get_skidding_m565(__this, /*hidden argument*/&WheelEffects_get_skidding_m565_MethodInfo);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		WheelEffects_set_skidding_m566(__this, 0, /*hidden argument*/&WheelEffects_set_skidding_m566_MethodInfo);
		Transform_t2 * L_1 = (__this->___m_SkidTrail_6);
		Transform_t2 * L_2 = ((WheelEffects_t180_StaticFields*)InitializedTypeInfo(&WheelEffects_t180_il2cpp_TypeInfo)->static_fields)->___skidTrailsDetachedParent_3;
		NullCheck(L_1);
		Transform_set_parent_m980(L_1, L_2, /*hidden argument*/&Transform_set_parent_m980_MethodInfo);
		Transform_t2 * L_3 = (__this->___m_SkidTrail_6);
		NullCheck(L_3);
		GameObject_t92 * L_4 = Component_get_gameObject_m577(L_3, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		Object_Destroy_m999(NULL /*static, unused*/, L_4, (10.0f), /*hidden argument*/&Object_Destroy_m999_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
