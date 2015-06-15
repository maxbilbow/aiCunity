#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Ab.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UpdateType_t1_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_AbMethodDeclarations.h"



// UnityStandardAssets.Cameras.AbstractTargetFollower
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Ab_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AbstractTargetFollower_t4_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.AbstractTargetFollower
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Ab_0MethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo Single_t184_il2cpp_TypeInfo;
extern TypeInfo Transform_t2_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m575_MethodInfo;
extern MethodInfo AbstractTargetFollower_FindAndTargetPlayer_m5_MethodInfo;
extern MethodInfo Object_op_Equality_m576_MethodInfo;
extern MethodInfo Component_get_gameObject_m577_MethodInfo;
extern MethodInfo GameObject_get_activeSelf_m578_MethodInfo;
extern MethodInfo Time_get_deltaTime_m579_MethodInfo;
extern MethodInfo AbstractTargetFollower_FollowTarget_m580_MethodInfo;
extern MethodInfo GameObject_FindGameObjectWithTag_m581_MethodInfo;
extern MethodInfo Object_op_Implicit_m582_MethodInfo;
extern MethodInfo GameObject_get_transform_m583_MethodInfo;
extern MethodInfo AbstractTargetFollower_SetTarget_m6_MethodInfo;
struct Component_t185;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
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
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3_m584(__this, method) (( Rigidbody_t3 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRigidbody_t3_m584_GenericMethod;


// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
extern MethodInfo AbstractTargetFollower__ctor_m0_MethodInfo;
extern "C" void AbstractTargetFollower__ctor_m0 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	{
		__this->___m_AutoTargetPlayer_3 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
extern MethodInfo AbstractTargetFollower_Start_m1_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void AbstractTargetFollower_Start_m1 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	static bool AbstractTargetFollower_Start_m1_init;
	if (!AbstractTargetFollower_Start_m1_init)
	{
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		AbstractTargetFollower_Start_m1_init = true;
	}
	{
		bool L_0 = (__this->___m_AutoTargetPlayer_3);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		AbstractTargetFollower_FindAndTargetPlayer_m5(__this, /*hidden argument*/&AbstractTargetFollower_FindAndTargetPlayer_m5_MethodInfo);
	}

IL_0011:
	{
		Transform_t2 * L_1 = (__this->___m_Target_2);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		Transform_t2 * L_3 = (__this->___m_Target_2);
		NullCheck(L_3);
		Rigidbody_t3 * L_4 = Component_GetComponent_TisRigidbody_t3_m584(L_3, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___targetRigidbody_5 = L_4;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FixedUpdate()
extern MethodInfo AbstractTargetFollower_FixedUpdate_m2_MethodInfo;
extern "C" void AbstractTargetFollower_FixedUpdate_m2 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AutoTargetPlayer_3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Transform_t2 * L_1 = (__this->___m_Target_2);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t2 * L_3 = (__this->___m_Target_2);
		NullCheck(L_3);
		GameObject_t92 * L_4 = Component_get_gameObject_m577(L_3, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m578(L_4, /*hidden argument*/&GameObject_get_activeSelf_m578_MethodInfo);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		AbstractTargetFollower_FindAndTargetPlayer_m5(__this, /*hidden argument*/&AbstractTargetFollower_FindAndTargetPlayer_m5_MethodInfo);
	}

IL_0037:
	{
		int32_t L_6 = (__this->___m_UpdateType_4);
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		float L_7 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		VirtActionInvoker1< float >::Invoke(&AbstractTargetFollower_FollowTarget_m580_MethodInfo, __this, L_7);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::LateUpdate()
extern MethodInfo AbstractTargetFollower_LateUpdate_m3_MethodInfo;
extern "C" void AbstractTargetFollower_LateUpdate_m3 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AutoTargetPlayer_3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Transform_t2 * L_1 = (__this->___m_Target_2);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t2 * L_3 = (__this->___m_Target_2);
		NullCheck(L_3);
		GameObject_t92 * L_4 = Component_get_gameObject_m577(L_3, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m578(L_4, /*hidden argument*/&GameObject_get_activeSelf_m578_MethodInfo);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		AbstractTargetFollower_FindAndTargetPlayer_m5(__this, /*hidden argument*/&AbstractTargetFollower_FindAndTargetPlayer_m5_MethodInfo);
	}

IL_0037:
	{
		int32_t L_6 = (__this->___m_UpdateType_4);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		VirtActionInvoker1< float >::Invoke(&AbstractTargetFollower_FollowTarget_m580_MethodInfo, __this, L_7);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::ManualUpdate()
extern MethodInfo AbstractTargetFollower_ManualUpdate_m4_MethodInfo;
extern "C" void AbstractTargetFollower_ManualUpdate_m4 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AutoTargetPlayer_3);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Transform_t2 * L_1 = (__this->___m_Target_2);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t2 * L_3 = (__this->___m_Target_2);
		NullCheck(L_3);
		GameObject_t92 * L_4 = Component_get_gameObject_m577(L_3, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m578(L_4, /*hidden argument*/&GameObject_get_activeSelf_m578_MethodInfo);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		AbstractTargetFollower_FindAndTargetPlayer_m5(__this, /*hidden argument*/&AbstractTargetFollower_FindAndTargetPlayer_m5_MethodInfo);
	}

IL_0037:
	{
		int32_t L_6 = (__this->___m_UpdateType_4);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		VirtActionInvoker1< float >::Invoke(&AbstractTargetFollower_FollowTarget_m580_MethodInfo, __this, L_7);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single)
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
extern "C" void AbstractTargetFollower_FindAndTargetPlayer_m5 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	GameObject_t92 * V_0 = {0};
	{
		GameObject_t92 * L_0 = GameObject_FindGameObjectWithTag_m581(NULL /*static, unused*/, (String_t*) &_stringLiteral1, /*hidden argument*/&GameObject_FindGameObjectWithTag_m581_MethodInfo);
		V_0 = L_0;
		GameObject_t92 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m582(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t92 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_4 = GameObject_get_transform_m583(L_3, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		VirtActionInvoker1< Transform_t2 * >::Invoke(&AbstractTargetFollower_SetTarget_m6_MethodInfo, __this, L_4);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
extern "C" void AbstractTargetFollower_SetTarget_m6 (AbstractTargetFollower_t4 * __this, Transform_t2 * ___newTransform, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___newTransform;
		__this->___m_Target_2 = L_0;
		return;
	}
}
// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::get_Target()
extern MethodInfo AbstractTargetFollower_get_Target_m7_MethodInfo;
extern "C" Transform_t2 * AbstractTargetFollower_get_Target_m7 (AbstractTargetFollower_t4 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___m_Target_2);
		return L_0;
	}
}
// UnityStandardAssets.Cameras.AutoCam
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Au.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AutoCam_t6_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.AutoCam
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_AuMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern TypeInfo Mathf_t186_il2cpp_TypeInfo;
extern TypeInfo Vector3_t8_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityStandardAssets.Cameras.PivotBasedCameraRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_PiMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Vector3_get_up_m586_MethodInfo;
extern MethodInfo PivotBasedCameraRig__ctor_m21_MethodInfo;
extern MethodInfo Transform_get_forward_m587_MethodInfo;
extern MethodInfo Transform_get_up_m588_MethodInfo;
extern MethodInfo Application_get_isPlaying_m589_MethodInfo;
extern MethodInfo Rigidbody_get_velocity_m590_MethodInfo;
extern MethodInfo Vector3_get_magnitude_m591_MethodInfo;
extern MethodInfo Vector3_get_normalized_m592_MethodInfo;
extern MethodInfo Mathf_SmoothDamp_m593_MethodInfo;
extern MethodInfo Mathf_Atan2_m594_MethodInfo;
extern MethodInfo Mathf_DeltaAngle_m595_MethodInfo;
extern MethodInfo Mathf_Abs_m596_MethodInfo;
extern MethodInfo Mathf_InverseLerp_m597_MethodInfo;
extern MethodInfo Component_get_transform_m598_MethodInfo;
extern MethodInfo Transform_get_position_m599_MethodInfo;
extern MethodInfo Vector3_Lerp_m600_MethodInfo;
extern MethodInfo Transform_set_position_m601_MethodInfo;
extern MethodInfo Vector3_get_sqrMagnitude_m602_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m603_MethodInfo;
extern MethodInfo Vector3_Slerp_m604_MethodInfo;
extern MethodInfo Transform_get_rotation_m605_MethodInfo;
extern MethodInfo Quaternion_Lerp_m606_MethodInfo;
extern MethodInfo Transform_set_rotation_m607_MethodInfo;


// System.Void UnityStandardAssets.Cameras.AutoCam::.ctor()
extern MethodInfo AutoCam__ctor_m8_MethodInfo;
extern "C" void AutoCam__ctor_m8 (AutoCam_t6 * __this, MethodInfo* method)
{
	{
		__this->___m_MoveSpeed_9 = (3.0f);
		__this->___m_TurnSpeed_10 = (1.0f);
		__this->___m_RollSpeed_11 = (0.2f);
		__this->___m_FollowTilt_13 = 1;
		__this->___m_SpinTurnLimit_14 = (90.0f);
		__this->___m_TargetVelocityLowerLimit_15 = (4.0f);
		__this->___m_SmoothTurnTime_16 = (0.2f);
		Vector3_t8  L_0 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		__this->___m_RollUp_20 = L_0;
		PivotBasedCameraRig__ctor_m21(__this, /*hidden argument*/&PivotBasedCameraRig__ctor_m21_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AutoCam::FollowTarget(System.Single)
extern MethodInfo AutoCam_FollowTarget_m9_MethodInfo;
extern "C" void AutoCam_FollowTarget_m9 (AutoCam_t6 * __this, float ___deltaTime, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Quaternion_t10  V_6 = {0};
	Vector3_t8  V_7 = {0};
	Vector3_t8  V_8 = {0};
	float G_B13_0 = 0.0f;
	AutoCam_t6 * G_B24_0 = {0};
	AutoCam_t6 * G_B23_0 = {0};
	Vector3_t8  G_B25_0 = {0};
	AutoCam_t6 * G_B25_1 = {0};
	{
		float L_0 = ___deltaTime;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		Transform_t2 * L_1 = (__this->___m_Target_2);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_2)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		Transform_t2 * L_3 = (__this->___m_Target_2);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_forward_m587(L_3, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		V_0 = L_4;
		Transform_t2 * L_5 = (__this->___m_Target_2);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_up_m588(L_5, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		V_1 = L_6;
		bool L_7 = (__this->___m_FollowVelocity_12);
		if (!L_7)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_8 = Application_get_isPlaying_m589(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m589_MethodInfo);
		if (!L_8)
		{
			goto IL_00b6;
		}
	}
	{
		Rigidbody_t3 * L_9 = (__this->___targetRigidbody_5);
		NullCheck(L_9);
		Vector3_t8  L_10 = Rigidbody_get_velocity_m590(L_9, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_7 = L_10;
		float L_11 = Vector3_get_magnitude_m591((&V_7), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_12 = (__this->___m_TargetVelocityLowerLimit_15);
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Rigidbody_t3 * L_13 = (__this->___targetRigidbody_5);
		NullCheck(L_13);
		Vector3_t8  L_14 = Rigidbody_get_velocity_m590(L_13, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_8 = L_14;
		Vector3_t8  L_15 = Vector3_get_normalized_m592((&V_8), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		V_0 = L_15;
		Vector3_t8  L_16 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		V_1 = L_16;
		goto IL_008f;
	}

IL_0089:
	{
		Vector3_t8  L_17 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		V_1 = L_17;
	}

IL_008f:
	{
		float L_18 = (__this->___m_CurrentTurnAmount_18);
		float* L_19 = &(__this->___m_TurnSpeedVelocityChange_19);
		float L_20 = (__this->___m_SmoothTurnTime_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_21 = Mathf_SmoothDamp_m593(NULL /*static, unused*/, L_18, (1.0f), L_19, L_20, /*hidden argument*/&Mathf_SmoothDamp_m593_MethodInfo);
		__this->___m_CurrentTurnAmount_18 = L_21;
		goto IL_0175;
	}

IL_00b6:
	{
		float L_22 = ((&V_0)->___x_1);
		float L_23 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_24 = atan2f(L_22, L_23);
		V_2 = ((float)((float)L_24*(float)(57.29578f)));
		float L_25 = (__this->___m_SpinTurnLimit_14);
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_0163;
		}
	}
	{
		float L_26 = (__this->___m_LastFlatAngle_17);
		float L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_28 = Mathf_DeltaAngle_m595(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&Mathf_DeltaAngle_m595_MethodInfo);
		float L_29 = fabsf(L_28);
		float L_30 = ___deltaTime;
		V_3 = ((float)((float)L_29/(float)L_30));
		float L_31 = (__this->___m_SpinTurnLimit_14);
		float L_32 = (__this->___m_SpinTurnLimit_14);
		float L_33 = V_3;
		float L_34 = Mathf_InverseLerp_m597(NULL /*static, unused*/, L_31, ((float)((float)L_32*(float)(0.75f))), L_33, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_4 = L_34;
		float L_35 = (__this->___m_CurrentTurnAmount_18);
		float L_36 = V_4;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_0125;
		}
	}
	{
		G_B13_0 = (0.1f);
		goto IL_012a;
	}

IL_0125:
	{
		G_B13_0 = (1.0f);
	}

IL_012a:
	{
		V_5 = G_B13_0;
		bool L_37 = Application_get_isPlaying_m589(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m589_MethodInfo);
		if (!L_37)
		{
			goto IL_0156;
		}
	}
	{
		float L_38 = (__this->___m_CurrentTurnAmount_18);
		float L_39 = V_4;
		float* L_40 = &(__this->___m_TurnSpeedVelocityChange_19);
		float L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_42 = Mathf_SmoothDamp_m593(NULL /*static, unused*/, L_38, L_39, L_40, L_41, /*hidden argument*/&Mathf_SmoothDamp_m593_MethodInfo);
		__this->___m_CurrentTurnAmount_18 = L_42;
		goto IL_015e;
	}

IL_0156:
	{
		float L_43 = V_4;
		__this->___m_CurrentTurnAmount_18 = L_43;
	}

IL_015e:
	{
		goto IL_016e;
	}

IL_0163:
	{
		__this->___m_CurrentTurnAmount_18 = (1.0f);
	}

IL_016e:
	{
		float L_44 = V_2;
		__this->___m_LastFlatAngle_17 = L_44;
	}

IL_0175:
	{
		Transform_t2 * L_45 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_46 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_46);
		Vector3_t8  L_47 = Transform_get_position_m599(L_46, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_48 = (__this->___m_Target_2);
		NullCheck(L_48);
		Vector3_t8  L_49 = Transform_get_position_m599(L_48, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		float L_50 = ___deltaTime;
		float L_51 = (__this->___m_MoveSpeed_9);
		Vector3_t8  L_52 = Vector3_Lerp_m600(NULL /*static, unused*/, L_47, L_49, ((float)((float)L_50*(float)L_51)), /*hidden argument*/&Vector3_Lerp_m600_MethodInfo);
		NullCheck(L_45);
		Transform_set_position_m601(L_45, L_52, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		bool L_53 = (__this->___m_FollowTilt_13);
		if (L_53)
		{
			goto IL_01d7;
		}
	}
	{
		(&V_0)->___y_2 = (0.0f);
		float L_54 = Vector3_get_sqrMagnitude_m602((&V_0), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		if ((!(((float)L_54) < ((float)(1.401298E-45f)))))
		{
			goto IL_01d7;
		}
	}
	{
		Transform_t2 * L_55 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_55);
		Vector3_t8  L_56 = Transform_get_forward_m587(L_55, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		V_0 = L_56;
	}

IL_01d7:
	{
		Vector3_t8  L_57 = V_0;
		Vector3_t8  L_58 = (__this->___m_RollUp_20);
		Quaternion_t10  L_59 = Quaternion_LookRotation_m603(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/&Quaternion_LookRotation_m603_MethodInfo);
		V_6 = L_59;
		float L_60 = (__this->___m_RollSpeed_11);
		G_B23_0 = __this;
		if ((!(((float)L_60) > ((float)(0.0f)))))
		{
			G_B24_0 = __this;
			goto IL_020f;
		}
	}
	{
		Vector3_t8  L_61 = (__this->___m_RollUp_20);
		Vector3_t8  L_62 = V_1;
		float L_63 = (__this->___m_RollSpeed_11);
		float L_64 = ___deltaTime;
		Vector3_t8  L_65 = Vector3_Slerp_m604(NULL /*static, unused*/, L_61, L_62, ((float)((float)L_63*(float)L_64)), /*hidden argument*/&Vector3_Slerp_m604_MethodInfo);
		G_B25_0 = L_65;
		G_B25_1 = G_B23_0;
		goto IL_0214;
	}

IL_020f:
	{
		Vector3_t8  L_66 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		G_B25_0 = L_66;
		G_B25_1 = G_B24_0;
	}

IL_0214:
	{
		NullCheck(G_B25_1);
		G_B25_1->___m_RollUp_20 = G_B25_0;
		Transform_t2 * L_67 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_68 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_68);
		Quaternion_t10  L_69 = Transform_get_rotation_m605(L_68, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Quaternion_t10  L_70 = V_6;
		float L_71 = (__this->___m_TurnSpeed_10);
		float L_72 = (__this->___m_CurrentTurnAmount_18);
		float L_73 = ___deltaTime;
		Quaternion_t10  L_74 = Quaternion_Lerp_m606(NULL /*static, unused*/, L_69, L_70, ((float)((float)((float)((float)L_71*(float)L_72))*(float)L_73)), /*hidden argument*/&Quaternion_Lerp_m606_MethodInfo);
		NullCheck(L_67);
		Transform_set_rotation_m607(L_67, L_74, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Cameras.FreeLookCam
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Fr.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FreeLookCam_t9_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.FreeLookCam
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_FrMethodDeclarations.h"

// UnityStandardAssets.Cameras.PivotBasedCameraRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Pi.h"
// UnityEngine.CursorLockMode
#include "UnityEngine_UnityEngine_CursorLockMode.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo PivotBasedCameraRig_t7_il2cpp_TypeInfo;
extern TypeInfo Input_t187_il2cpp_TypeInfo;
extern TypeInfo CrossPlatformInputManager_t51_il2cpp_TypeInfo;
// UnityEngine.Cursor
#include "UnityEngine_UnityEngine_CursorMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
extern MethodInfo PivotBasedCameraRig_Awake_m22_MethodInfo;
extern MethodInfo Cursor_set_lockState_m608_MethodInfo;
extern MethodInfo Cursor_set_visible_m609_MethodInfo;
extern MethodInfo Quaternion_get_eulerAngles_m610_MethodInfo;
extern MethodInfo Transform_get_localRotation_m611_MethodInfo;
extern MethodInfo FreeLookCam_HandleRotationMovement_m15_MethodInfo;
extern MethodInfo Input_GetMouseButtonUp_m612_MethodInfo;
extern MethodInfo Time_get_timeScale_m613_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetAxis_m145_MethodInfo;
extern MethodInfo Quaternion_Euler_m614_MethodInfo;
extern MethodInfo Mathf_Lerp_m615_MethodInfo;
extern MethodInfo Mathf_Clamp_m616_MethodInfo;
extern MethodInfo Quaternion_Slerp_m617_MethodInfo;
extern MethodInfo Transform_set_localRotation_m618_MethodInfo;


// System.Void UnityStandardAssets.Cameras.FreeLookCam::.ctor()
extern MethodInfo FreeLookCam__ctor_m10_MethodInfo;
extern "C" void FreeLookCam__ctor_m10 (FreeLookCam_t9 * __this, MethodInfo* method)
{
	{
		__this->___m_MoveSpeed_10 = (1.0f);
		__this->___m_TurnSpeed_11 = (1.5f);
		__this->___m_TurnSmoothing_12 = (0.1f);
		__this->___m_TiltMax_13 = (75.0f);
		__this->___m_TiltMin_14 = (45.0f);
		PivotBasedCameraRig__ctor_m21(__this, /*hidden argument*/&PivotBasedCameraRig__ctor_m21_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Awake()
extern MethodInfo FreeLookCam_Awake_m11_MethodInfo;
extern "C" void FreeLookCam_Awake_m11 (FreeLookCam_t9 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		PivotBasedCameraRig_Awake_m22(__this, /*hidden argument*/&PivotBasedCameraRig_Awake_m22_MethodInfo);
		bool L_0 = (__this->___m_LockCursor_15);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		Cursor_set_lockState_m608(NULL /*static, unused*/, G_B3_0, /*hidden argument*/&Cursor_set_lockState_m608_MethodInfo);
		bool L_1 = (__this->___m_LockCursor_15);
		Cursor_set_visible_m609(NULL /*static, unused*/, ((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/&Cursor_set_visible_m609_MethodInfo);
		Transform_t2 * L_2 = (__this->___m_Pivot_7);
		NullCheck(L_2);
		Quaternion_t10  L_3 = Transform_get_rotation_m605(L_2, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		V_0 = L_3;
		Vector3_t8  L_4 = Quaternion_get_eulerAngles_m610((&V_0), /*hidden argument*/&Quaternion_get_eulerAngles_m610_MethodInfo);
		__this->___m_PivotEulers_19 = L_4;
		Transform_t2 * L_5 = (__this->___m_Pivot_7);
		NullCheck(L_5);
		Transform_t2 * L_6 = Component_get_transform_m598(L_5, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_6);
		Quaternion_t10  L_7 = Transform_get_localRotation_m611(L_6, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_PivotTargetRot_20 = L_7;
		Transform_t2 * L_8 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_8);
		Quaternion_t10  L_9 = Transform_get_localRotation_m611(L_8, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_TransformTargetRot_21 = L_9;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Update()
extern MethodInfo FreeLookCam_Update_m12_MethodInfo;
extern "C" void FreeLookCam_Update_m12 (FreeLookCam_t9 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		FreeLookCam_HandleRotationMovement_m15(__this, /*hidden argument*/&FreeLookCam_HandleRotationMovement_m15_MethodInfo);
		bool L_0 = (__this->___m_LockCursor_15);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_1 = Input_GetMouseButtonUp_m612(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonUp_m612_MethodInfo);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		bool L_2 = (__this->___m_LockCursor_15);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		Cursor_set_lockState_m608(NULL /*static, unused*/, G_B5_0, /*hidden argument*/&Cursor_set_lockState_m608_MethodInfo);
		bool L_3 = (__this->___m_LockCursor_15);
		Cursor_set_visible_m609(NULL /*static, unused*/, ((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/&Cursor_set_visible_m609_MethodInfo);
	}

IL_0041:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::OnDisable()
extern MethodInfo FreeLookCam_OnDisable_m13_MethodInfo;
extern "C" void FreeLookCam_OnDisable_m13 (FreeLookCam_t9 * __this, MethodInfo* method)
{
	{
		Cursor_set_lockState_m608(NULL /*static, unused*/, 0, /*hidden argument*/&Cursor_set_lockState_m608_MethodInfo);
		Cursor_set_visible_m609(NULL /*static, unused*/, 1, /*hidden argument*/&Cursor_set_visible_m609_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::FollowTarget(System.Single)
extern MethodInfo FreeLookCam_FollowTarget_m14_MethodInfo;
extern "C" void FreeLookCam_FollowTarget_m14 (FreeLookCam_t9 * __this, float ___deltaTime, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___m_Target_2);
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_position_m599(L_3, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_5 = (__this->___m_Target_2);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_position_m599(L_5, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		float L_7 = ___deltaTime;
		float L_8 = (__this->___m_MoveSpeed_10);
		Vector3_t8  L_9 = Vector3_Lerp_m600(NULL /*static, unused*/, L_4, L_6, ((float)((float)L_7*(float)L_8)), /*hidden argument*/&Vector3_Lerp_m600_MethodInfo);
		NullCheck(L_2);
		Transform_set_position_m601(L_2, L_9, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
extern "C" void FreeLookCam_HandleRotationMovement_m15 (FreeLookCam_t9 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	FreeLookCam_t9 * G_B5_0 = {0};
	FreeLookCam_t9 * G_B4_0 = {0};
	float G_B6_0 = 0.0f;
	FreeLookCam_t9 * G_B6_1 = {0};
	{
		float L_0 = Time_get_timeScale_m613(NULL /*static, unused*/, /*hidden argument*/&Time_get_timeScale_m613_MethodInfo);
		if ((!(((float)L_0) < ((float)(1.401298E-45f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_1;
		float L_2 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral3, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_2;
		float L_3 = (__this->___m_LookAngle_17);
		float L_4 = V_0;
		float L_5 = (__this->___m_TurnSpeed_11);
		__this->___m_LookAngle_17 = ((float)((float)L_3+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m_LookAngle_17);
		Quaternion_t10  L_7 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), L_6, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		__this->___m_TransformTargetRot_21 = L_7;
		bool L_8 = (__this->___m_VerticalAutoReturn_16);
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		float L_9 = V_1;
		G_B4_0 = __this;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			G_B5_0 = __this;
			goto IL_0084;
		}
	}
	{
		float L_10 = (__this->___m_TiltMin_14);
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_12 = Mathf_Lerp_m615(NULL /*static, unused*/, (0.0f), ((-L_10)), L_11, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		goto IL_0096;
	}

IL_0084:
	{
		float L_13 = (__this->___m_TiltMax_13);
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_15 = Mathf_Lerp_m615(NULL /*static, unused*/, (0.0f), L_13, ((-L_14)), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0096:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_TiltAngle_18 = G_B6_0;
		goto IL_00d3;
	}

IL_00a0:
	{
		float L_16 = (__this->___m_TiltAngle_18);
		float L_17 = V_1;
		float L_18 = (__this->___m_TurnSpeed_11);
		__this->___m_TiltAngle_18 = ((float)((float)L_16-(float)((float)((float)L_17*(float)L_18))));
		float L_19 = (__this->___m_TiltAngle_18);
		float L_20 = (__this->___m_TiltMin_14);
		float L_21 = (__this->___m_TiltMax_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_22 = Mathf_Clamp_m616(NULL /*static, unused*/, L_19, ((-L_20)), L_21, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		__this->___m_TiltAngle_18 = L_22;
	}

IL_00d3:
	{
		float L_23 = (__this->___m_TiltAngle_18);
		Vector3_t8 * L_24 = &(__this->___m_PivotEulers_19);
		float L_25 = (L_24->___y_2);
		Vector3_t8 * L_26 = &(__this->___m_PivotEulers_19);
		float L_27 = (L_26->___z_3);
		Quaternion_t10  L_28 = Quaternion_Euler_m614(NULL /*static, unused*/, L_23, L_25, L_27, /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		__this->___m_PivotTargetRot_20 = L_28;
		float L_29 = (__this->___m_TurnSmoothing_12);
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0169;
		}
	}
	{
		Transform_t2 * L_30 = (__this->___m_Pivot_7);
		Transform_t2 * L_31 = (__this->___m_Pivot_7);
		NullCheck(L_31);
		Quaternion_t10  L_32 = Transform_get_localRotation_m611(L_31, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		Quaternion_t10  L_33 = (__this->___m_PivotTargetRot_20);
		float L_34 = (__this->___m_TurnSmoothing_12);
		float L_35 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_36 = Quaternion_Slerp_m617(NULL /*static, unused*/, L_32, L_33, ((float)((float)L_34*(float)L_35)), /*hidden argument*/&Quaternion_Slerp_m617_MethodInfo);
		NullCheck(L_30);
		Transform_set_localRotation_m618(L_30, L_36, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Transform_t2 * L_37 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_38 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_38);
		Quaternion_t10  L_39 = Transform_get_localRotation_m611(L_38, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		Quaternion_t10  L_40 = (__this->___m_TransformTargetRot_21);
		float L_41 = (__this->___m_TurnSmoothing_12);
		float L_42 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_43 = Quaternion_Slerp_m617(NULL /*static, unused*/, L_39, L_40, ((float)((float)L_41*(float)L_42)), /*hidden argument*/&Quaternion_Slerp_m617_MethodInfo);
		NullCheck(L_37);
		Transform_set_localRotation_m618(L_37, L_43, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		goto IL_018b;
	}

IL_0169:
	{
		Transform_t2 * L_44 = (__this->___m_Pivot_7);
		Quaternion_t10  L_45 = (__this->___m_PivotTargetRot_20);
		NullCheck(L_44);
		Transform_set_localRotation_m618(L_44, L_45, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Transform_t2 * L_46 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_47 = (__this->___m_TransformTargetRot_21);
		NullCheck(L_46);
		Transform_set_localRotation_m618(L_46, L_47, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
	}

IL_018b:
	{
		return;
	}
}
// UnityStandardAssets.Cameras.HandHeldCam
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Ha.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HandHeldCam_t11_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.HandHeldCam
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_HaMethodDeclarations.h"

// UnityStandardAssets.Cameras.LookatTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Lo.h"
extern TypeInfo LookatTarget_t12_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.LookatTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_LoMethodDeclarations.h"
extern MethodInfo LookatTarget__ctor_m18_MethodInfo;
extern MethodInfo LookatTarget_FollowTarget_m20_MethodInfo;
extern MethodInfo Time_get_time_m619_MethodInfo;
extern MethodInfo Mathf_PerlinNoise_m620_MethodInfo;
extern MethodInfo Transform_Rotate_m621_MethodInfo;


// System.Void UnityStandardAssets.Cameras.HandHeldCam::.ctor()
extern MethodInfo HandHeldCam__ctor_m16_MethodInfo;
extern "C" void HandHeldCam__ctor_m16 (HandHeldCam_t11 * __this, MethodInfo* method)
{
	{
		__this->___m_SwaySpeed_11 = (0.5f);
		__this->___m_BaseSwayAmount_12 = (0.5f);
		__this->___m_TrackingSwayAmount_13 = (0.5f);
		LookatTarget__ctor_m18(__this, /*hidden argument*/&LookatTarget__ctor_m18_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.HandHeldCam::FollowTarget(System.Single)
extern MethodInfo HandHeldCam_FollowTarget_m17_MethodInfo;
extern "C" void HandHeldCam_FollowTarget_m17 (HandHeldCam_t11 * __this, float ___deltaTime, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___deltaTime;
		LookatTarget_FollowTarget_m20(__this, L_0, /*hidden argument*/&LookatTarget_FollowTarget_m20_MethodInfo);
		float L_1 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_2 = (__this->___m_SwaySpeed_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_3 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, (0.0f), ((float)((float)L_1*(float)L_2)), /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		V_0 = ((float)((float)L_3-(float)(0.5f)));
		float L_4 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_5 = (__this->___m_SwaySpeed_11);
		float L_6 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)L_4*(float)L_5))+(float)(100.0f))), /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		V_1 = ((float)((float)L_6-(float)(0.5f)));
		float L_7 = V_0;
		float L_8 = (__this->___m_BaseSwayAmount_12);
		V_0 = ((float)((float)L_7*(float)L_8));
		float L_9 = V_1;
		float L_10 = (__this->___m_BaseSwayAmount_12);
		V_1 = ((float)((float)L_9*(float)L_10));
		float L_11 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_12 = (__this->___m_SwaySpeed_11);
		float L_13 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, (0.0f), ((float)((float)L_11*(float)L_12)), /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		float L_14 = (__this->___m_TrackingBias_14);
		V_2 = ((float)((float)((float)((float)L_13-(float)(0.5f)))+(float)L_14));
		float L_15 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_16 = (__this->___m_SwaySpeed_11);
		float L_17 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)L_15*(float)L_16))+(float)(100.0f))), /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		float L_18 = (__this->___m_TrackingBias_14);
		V_3 = ((float)((float)((float)((float)L_17-(float)(0.5f)))+(float)L_18));
		float L_19 = V_2;
		float L_20 = (__this->___m_TrackingSwayAmount_13);
		Vector3_t8 * L_21 = &(__this->___m_FollowVelocity_10);
		float L_22 = (L_21->___x_1);
		V_2 = ((float)((float)L_19*(float)((float)((float)((-L_20))*(float)L_22))));
		float L_23 = V_3;
		float L_24 = (__this->___m_TrackingSwayAmount_13);
		Vector3_t8 * L_25 = &(__this->___m_FollowVelocity_10);
		float L_26 = (L_25->___y_2);
		V_3 = ((float)((float)L_23*(float)((float)((float)L_24*(float)L_26))));
		Transform_t2 * L_27 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		float L_28 = V_0;
		float L_29 = V_2;
		float L_30 = V_1;
		float L_31 = V_3;
		NullCheck(L_27);
		Transform_Rotate_m621(L_27, ((float)((float)L_28+(float)L_29)), ((float)((float)L_30+(float)L_31)), (0.0f), /*hidden argument*/&Transform_Rotate_m621_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo Vector2_t13_il2cpp_TypeInfo;
extern MethodInfo Transform_InverseTransformPoint_m622_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m623_MethodInfo;
extern MethodInfo Vector3__ctor_m624_MethodInfo;
extern MethodInfo Vector3_SmoothDamp_m625_MethodInfo;


// System.Void UnityStandardAssets.Cameras.LookatTarget::.ctor()
extern "C" void LookatTarget__ctor_m18 (LookatTarget_t12 * __this, MethodInfo* method)
{
	{
		__this->___m_FollowSpeed_7 = (1.0f);
		AbstractTargetFollower__ctor_m0(__this, /*hidden argument*/&AbstractTargetFollower__ctor_m0_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.LookatTarget::Start()
extern MethodInfo LookatTarget_Start_m19_MethodInfo;
extern "C" void LookatTarget_Start_m19 (LookatTarget_t12 * __this, MethodInfo* method)
{
	{
		AbstractTargetFollower_Start_m1(__this, /*hidden argument*/&AbstractTargetFollower_Start_m1_MethodInfo);
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Quaternion_t10  L_1 = Transform_get_localRotation_m611(L_0, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_OriginalRotation_9 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.LookatTarget::FollowTarget(System.Single)
extern "C" void LookatTarget_FollowTarget_m20 (LookatTarget_t12 * __this, float ___deltaTime, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t8  V_3 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_1 = (__this->___m_OriginalRotation_9);
		NullCheck(L_0);
		Transform_set_localRotation_m618(L_0, L_1, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_3 = (__this->___m_Target_2);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_position_m599(L_3, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_5 = Transform_InverseTransformPoint_m622(L_2, L_4, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		V_0 = L_5;
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = atan2f(L_6, L_7);
		V_1 = ((float)((float)L_8*(float)(57.29578f)));
		float L_9 = V_1;
		Vector2_t13 * L_10 = &(__this->___m_RotationRange_6);
		float L_11 = (L_10->___y_2);
		Vector2_t13 * L_12 = &(__this->___m_RotationRange_6);
		float L_13 = (L_12->___y_2);
		float L_14 = Mathf_Clamp_m616(NULL /*static, unused*/, L_9, ((float)((float)((-L_11))*(float)(0.5f))), ((float)((float)L_13*(float)(0.5f))), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_1 = L_14;
		Transform_t2 * L_15 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_16 = (__this->___m_OriginalRotation_9);
		float L_17 = V_1;
		Quaternion_t10  L_18 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), L_17, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_19 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		NullCheck(L_15);
		Transform_set_localRotation_m618(L_15, L_19, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Transform_t2 * L_20 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_21 = (__this->___m_Target_2);
		NullCheck(L_21);
		Vector3_t8  L_22 = Transform_get_position_m599(L_21, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_20);
		Vector3_t8  L_23 = Transform_InverseTransformPoint_m622(L_20, L_22, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		V_0 = L_23;
		float L_24 = ((&V_0)->___y_2);
		float L_25 = ((&V_0)->___z_3);
		float L_26 = atan2f(L_24, L_25);
		V_2 = ((float)((float)L_26*(float)(57.29578f)));
		float L_27 = V_2;
		Vector2_t13 * L_28 = &(__this->___m_RotationRange_6);
		float L_29 = (L_28->___x_1);
		Vector2_t13 * L_30 = &(__this->___m_RotationRange_6);
		float L_31 = (L_30->___x_1);
		float L_32 = Mathf_Clamp_m616(NULL /*static, unused*/, L_27, ((float)((float)((-L_29))*(float)(0.5f))), ((float)((float)L_31*(float)(0.5f))), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_2 = L_32;
		Vector3_t8 * L_33 = &(__this->___m_FollowAngles_8);
		float L_34 = (L_33->___x_1);
		Vector3_t8 * L_35 = &(__this->___m_FollowAngles_8);
		float L_36 = (L_35->___x_1);
		float L_37 = V_2;
		float L_38 = Mathf_DeltaAngle_m595(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/&Mathf_DeltaAngle_m595_MethodInfo);
		Vector3_t8 * L_39 = &(__this->___m_FollowAngles_8);
		float L_40 = (L_39->___y_2);
		Vector3_t8 * L_41 = &(__this->___m_FollowAngles_8);
		float L_42 = (L_41->___y_2);
		float L_43 = V_1;
		float L_44 = Mathf_DeltaAngle_m595(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/&Mathf_DeltaAngle_m595_MethodInfo);
		Vector3__ctor_m624((&V_3), ((float)((float)L_34+(float)L_38)), ((float)((float)L_40+(float)L_44)), /*hidden argument*/&Vector3__ctor_m624_MethodInfo);
		Vector3_t8  L_45 = (__this->___m_FollowAngles_8);
		Vector3_t8  L_46 = V_3;
		Vector3_t8 * L_47 = &(__this->___m_FollowVelocity_10);
		float L_48 = (__this->___m_FollowSpeed_7);
		Vector3_t8  L_49 = Vector3_SmoothDamp_m625(NULL /*static, unused*/, L_45, L_46, L_47, L_48, /*hidden argument*/&Vector3_SmoothDamp_m625_MethodInfo);
		__this->___m_FollowAngles_8 = L_49;
		Transform_t2 * L_50 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_51 = (__this->___m_OriginalRotation_9);
		Vector3_t8 * L_52 = &(__this->___m_FollowAngles_8);
		float L_53 = (L_52->___x_1);
		Vector3_t8 * L_54 = &(__this->___m_FollowAngles_8);
		float L_55 = (L_54->___y_2);
		Quaternion_t10  L_56 = Quaternion_Euler_m614(NULL /*static, unused*/, ((-L_53)), L_55, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_57 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_51, L_56, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		NullCheck(L_50);
		Transform_set_localRotation_m618(L_50, L_57, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern MethodInfo Transform_get_parent_m626_MethodInfo;
struct Component_t185;
struct Component_t185;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m628_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m628(__this, method) (( Object_t * (*) (Component_t185 *, MethodInfo*))Component_GetComponentInChildren_TisObject_t_m628_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
#define Component_GetComponentInChildren_TisCamera_t19_m627(__this, method) (( Camera_t19 * (*) (Component_t185 *, MethodInfo*))Component_GetComponentInChildren_TisObject_t_m628_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentInChildren_TisCamera_t19_m627_GenericMethod;


// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
extern "C" void PivotBasedCameraRig__ctor_m21 (PivotBasedCameraRig_t7 * __this, MethodInfo* method)
{
	{
		AbstractTargetFollower__ctor_m0(__this, /*hidden argument*/&AbstractTargetFollower__ctor_m0_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
extern MethodInfo* Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var;
extern "C" void PivotBasedCameraRig_Awake_m22 (PivotBasedCameraRig_t7 * __this, MethodInfo* method)
{
	static bool PivotBasedCameraRig_Awake_m22_init;
	if (!PivotBasedCameraRig_Awake_m22_init)
	{
		Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInChildren_TisCamera_t19_m627_GenericMethod);
		PivotBasedCameraRig_Awake_m22_init = true;
	}
	{
		Camera_t19 * L_0 = Component_GetComponentInChildren_TisCamera_t19_m627(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m598(L_0, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___m_Cam_6 = L_1;
		Transform_t2 * L_2 = (__this->___m_Cam_6);
		NullCheck(L_2);
		Transform_t2 * L_3 = Transform_get_parent_m626(L_2, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		__this->___m_Pivot_7 = L_3;
		return;
	}
}
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Pr.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RayHitComparer_t14_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_PrMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
extern TypeInfo RaycastHit_t16_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo RaycastHit_get_distance_m630_MethodInfo;
extern MethodInfo Single_CompareTo_m631_MethodInfo;


// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer::.ctor()
extern MethodInfo RayHitComparer__ctor_m23_MethodInfo;
extern "C" void RayHitComparer__ctor_m23 (RayHitComparer_t14 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Int32 UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer::Compare(System.Object,System.Object)
extern MethodInfo RayHitComparer_Compare_m24_MethodInfo;
extern "C" int32_t RayHitComparer_Compare_m24 (RayHitComparer_t14 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	RaycastHit_t16  V_0 = {0};
	float V_1 = 0.0f;
	RaycastHit_t16  V_2 = {0};
	{
		Object_t * L_0 = ___x;
		V_0 = ((*(RaycastHit_t16 *)((RaycastHit_t16 *)UnBox (L_0, InitializedTypeInfo(&RaycastHit_t16_il2cpp_TypeInfo)))));
		float L_1 = RaycastHit_get_distance_m630((&V_0), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		V_1 = L_1;
		Object_t * L_2 = ___y;
		V_2 = ((*(RaycastHit_t16 *)((RaycastHit_t16 *)UnBox (L_2, InitializedTypeInfo(&RaycastHit_t16_il2cpp_TypeInfo)))));
		float L_3 = RaycastHit_get_distance_m630((&V_2), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		int32_t L_4 = Single_CompareTo_m631((&V_1), L_3, /*hidden argument*/&Single_CompareTo_m631_MethodInfo);
		return L_4;
	}
}
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Pr_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProtectCameraFromWallClip_t17_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Pr_0MethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern MethodInfo Transform_get_localPosition_m632_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m633_MethodInfo;
extern MethodInfo Vector3_op_Addition_m634_MethodInfo;
extern MethodInfo Ray_set_origin_m635_MethodInfo;
extern MethodInfo Vector3_op_UnaryNegation_m636_MethodInfo;
extern MethodInfo Ray_set_direction_m637_MethodInfo;
extern MethodInfo Ray_get_origin_m638_MethodInfo;
extern MethodInfo Physics_OverlapSphere_m639_MethodInfo;
extern MethodInfo Collider_get_isTrigger_m640_MethodInfo;
extern MethodInfo Collider_get_attachedRigidbody_m641_MethodInfo;
extern MethodInfo Object_op_Inequality_m642_MethodInfo;
extern MethodInfo Component_CompareTag_m643_MethodInfo;
extern MethodInfo Physics_RaycastAll_m644_MethodInfo;
extern MethodInfo Physics_SphereCastAll_m645_MethodInfo;
extern MethodInfo Array_Sort_m646_MethodInfo;
extern MethodInfo RaycastHit_get_collider_m647_MethodInfo;
extern MethodInfo RaycastHit_get_point_m648_MethodInfo;
extern MethodInfo Color_get_red_m649_MethodInfo;
extern MethodInfo Debug_DrawRay_m650_MethodInfo;
extern MethodInfo ProtectCameraFromWallClip_set_protecting_m27_MethodInfo;
extern MethodInfo Vector3_get_forward_m651_MethodInfo;
extern MethodInfo Transform_set_localPosition_m652_MethodInfo;


// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::.ctor()
extern MethodInfo ProtectCameraFromWallClip__ctor_m25_MethodInfo;
extern "C" void ProtectCameraFromWallClip__ctor_m25 (ProtectCameraFromWallClip_t17 * __this, MethodInfo* method)
{
	{
		__this->___clipMoveTime_2 = (0.05f);
		__this->___returnTime_3 = (0.4f);
		__this->___sphereCastRadius_4 = (0.1f);
		__this->___closestDistance_6 = (0.5f);
		__this->___dontClipTag_7 = (String_t*) &_stringLiteral1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::get_protecting()
extern MethodInfo ProtectCameraFromWallClip_get_protecting_m26_MethodInfo;
extern "C" bool ProtectCameraFromWallClip_get_protecting_m26 (ProtectCameraFromWallClip_t17 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CprotectingU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::set_protecting(System.Boolean)
extern "C" void ProtectCameraFromWallClip_set_protecting_m27 (ProtectCameraFromWallClip_t17 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CprotectingU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::Start()
extern MethodInfo ProtectCameraFromWallClip_Start_m28_MethodInfo;
extern MethodInfo* Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var;
extern "C" void ProtectCameraFromWallClip_Start_m28 (ProtectCameraFromWallClip_t17 * __this, MethodInfo* method)
{
	static bool ProtectCameraFromWallClip_Start_m28_init;
	if (!ProtectCameraFromWallClip_Start_m28_init)
	{
		Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInChildren_TisCamera_t19_m627_GenericMethod);
		ProtectCameraFromWallClip_Start_m28_init = true;
	}
	Vector3_t8  V_0 = {0};
	{
		Camera_t19 * L_0 = Component_GetComponentInChildren_TisCamera_t19_m627(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m598(L_0, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___m_Cam_8 = L_1;
		Transform_t2 * L_2 = (__this->___m_Cam_8);
		NullCheck(L_2);
		Transform_t2 * L_3 = Transform_get_parent_m626(L_2, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		__this->___m_Pivot_9 = L_3;
		Transform_t2 * L_4 = (__this->___m_Cam_8);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_localPosition_m632(L_4, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_0 = L_5;
		float L_6 = Vector3_get_magnitude_m591((&V_0), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		__this->___m_OriginalDist_10 = L_6;
		float L_7 = (__this->___m_OriginalDist_10);
		__this->___m_CurrentDist_12 = L_7;
		RayHitComparer_t14 * L_8 = (RayHitComparer_t14 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RayHitComparer_t14_il2cpp_TypeInfo));
		RayHitComparer__ctor_m23(L_8, /*hidden argument*/&RayHitComparer__ctor_m23_MethodInfo);
		__this->___m_RayHitComparer_15 = L_8;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::LateUpdate()
extern MethodInfo ProtectCameraFromWallClip_LateUpdate_m29_MethodInfo;
extern "C" void ProtectCameraFromWallClip_LateUpdate_m29 (ProtectCameraFromWallClip_t17 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	ColliderU5BU5D_t189* V_1 = {0};
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Vector3_t8  V_7 = {0};
	float* G_B22_0 = {0};
	float G_B22_1 = 0.0f;
	float G_B22_2 = 0.0f;
	ProtectCameraFromWallClip_t17 * G_B22_3 = {0};
	float* G_B21_0 = {0};
	float G_B21_1 = 0.0f;
	float G_B21_2 = 0.0f;
	ProtectCameraFromWallClip_t17 * G_B21_3 = {0};
	float G_B23_0 = 0.0f;
	float* G_B23_1 = {0};
	float G_B23_2 = 0.0f;
	float G_B23_3 = 0.0f;
	ProtectCameraFromWallClip_t17 * G_B23_4 = {0};
	{
		float L_0 = (__this->___m_OriginalDist_10);
		V_0 = L_0;
		Ray_t18 * L_1 = &(__this->___m_Ray_13);
		Transform_t2 * L_2 = (__this->___m_Pivot_9);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_4 = (__this->___m_Pivot_9);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_forward_m587(L_4, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		float L_6 = (__this->___sphereCastRadius_4);
		Vector3_t8  L_7 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_8 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Ray_set_origin_m635(L_1, L_8, /*hidden argument*/&Ray_set_origin_m635_MethodInfo);
		Ray_t18 * L_9 = &(__this->___m_Ray_13);
		Transform_t2 * L_10 = (__this->___m_Pivot_9);
		NullCheck(L_10);
		Vector3_t8  L_11 = Transform_get_forward_m587(L_10, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_12 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_11, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		Ray_set_direction_m637(L_9, L_12, /*hidden argument*/&Ray_set_direction_m637_MethodInfo);
		Ray_t18 * L_13 = &(__this->___m_Ray_13);
		Vector3_t8  L_14 = Ray_get_origin_m638(L_13, /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		float L_15 = (__this->___sphereCastRadius_4);
		ColliderU5BU5D_t189* L_16 = Physics_OverlapSphere_m639(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Physics_OverlapSphere_m639_MethodInfo);
		V_1 = L_16;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_00be;
	}

IL_0076:
	{
		ColliderU5BU5D_t189* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(Collider_t94 **)(Collider_t94 **)SZArrayLdElema(L_17, L_19)));
		bool L_20 = Collider_get_isTrigger_m640((*(Collider_t94 **)(Collider_t94 **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/&Collider_get_isTrigger_m640_MethodInfo);
		if (L_20)
		{
			goto IL_00b8;
		}
	}
	{
		ColliderU5BU5D_t189* L_21 = V_1;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(Collider_t94 **)(Collider_t94 **)SZArrayLdElema(L_21, L_23)));
		Rigidbody_t3 * L_24 = Collider_get_attachedRigidbody_m641((*(Collider_t94 **)(Collider_t94 **)SZArrayLdElema(L_21, L_23)), /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		bool L_25 = Object_op_Inequality_m642(NULL /*static, unused*/, L_24, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_25)
		{
			goto IL_00b1;
		}
	}
	{
		ColliderU5BU5D_t189* L_26 = V_1;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck((*(Collider_t94 **)(Collider_t94 **)SZArrayLdElema(L_26, L_28)));
		Rigidbody_t3 * L_29 = Collider_get_attachedRigidbody_m641((*(Collider_t94 **)(Collider_t94 **)SZArrayLdElema(L_26, L_28)), /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		String_t* L_30 = (__this->___dontClipTag_7);
		NullCheck(L_29);
		bool L_31 = Component_CompareTag_m643(L_29, L_30, /*hidden argument*/&Component_CompareTag_m643_MethodInfo);
		if (L_31)
		{
			goto IL_00b8;
		}
	}

IL_00b1:
	{
		V_2 = 1;
		goto IL_00c8;
	}

IL_00b8:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00be:
	{
		int32_t L_33 = V_4;
		ColliderU5BU5D_t189* L_34 = V_1;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_0076;
		}
	}

IL_00c8:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_011d;
		}
	}
	{
		Ray_t18 * L_36 = &(__this->___m_Ray_13);
		Ray_t18 * L_37 = L_36;
		Vector3_t8  L_38 = Ray_get_origin_m638(L_37, /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Transform_t2 * L_39 = (__this->___m_Pivot_9);
		NullCheck(L_39);
		Vector3_t8  L_40 = Transform_get_forward_m587(L_39, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		float L_41 = (__this->___sphereCastRadius_4);
		Vector3_t8  L_42 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_43 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_38, L_42, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Ray_set_origin_m635(L_37, L_43, /*hidden argument*/&Ray_set_origin_m635_MethodInfo);
		Ray_t18  L_44 = (__this->___m_Ray_13);
		float L_45 = (__this->___m_OriginalDist_10);
		float L_46 = (__this->___sphereCastRadius_4);
		RaycastHitU5BU5D_t15* L_47 = Physics_RaycastAll_m644(NULL /*static, unused*/, L_44, ((float)((float)L_45-(float)L_46)), /*hidden argument*/&Physics_RaycastAll_m644_MethodInfo);
		__this->___m_Hits_14 = L_47;
		goto IL_0141;
	}

IL_011d:
	{
		Ray_t18  L_48 = (__this->___m_Ray_13);
		float L_49 = (__this->___sphereCastRadius_4);
		float L_50 = (__this->___m_OriginalDist_10);
		float L_51 = (__this->___sphereCastRadius_4);
		RaycastHitU5BU5D_t15* L_52 = Physics_SphereCastAll_m645(NULL /*static, unused*/, L_48, L_49, ((float)((float)L_50+(float)L_51)), /*hidden argument*/&Physics_SphereCastAll_m645_MethodInfo);
		__this->___m_Hits_14 = L_52;
	}

IL_0141:
	{
		RaycastHitU5BU5D_t15* L_53 = (__this->___m_Hits_14);
		RayHitComparer_t14 * L_54 = (__this->___m_RayHitComparer_15);
		Array_Sort_m646(NULL /*static, unused*/, (Array_t *)(Array_t *)L_53, L_54, /*hidden argument*/&Array_Sort_m646_MethodInfo);
		V_5 = (std::numeric_limits<float>::infinity());
		V_6 = 0;
		goto IL_0223;
	}

IL_0161:
	{
		RaycastHitU5BU5D_t15* L_55 = (__this->___m_Hits_14);
		int32_t L_56 = V_6;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		float L_57 = RaycastHit_get_distance_m630(((RaycastHit_t16 *)(RaycastHit_t16 *)SZArrayLdElema(L_55, L_56)), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		float L_58 = V_5;
		if ((!(((float)L_57) < ((float)L_58))))
		{
			goto IL_021d;
		}
	}
	{
		RaycastHitU5BU5D_t15* L_59 = (__this->___m_Hits_14);
		int32_t L_60 = V_6;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		Collider_t94 * L_61 = RaycastHit_get_collider_m647(((RaycastHit_t16 *)(RaycastHit_t16 *)SZArrayLdElema(L_59, L_60)), /*hidden argument*/&RaycastHit_get_collider_m647_MethodInfo);
		NullCheck(L_61);
		bool L_62 = Collider_get_isTrigger_m640(L_61, /*hidden argument*/&Collider_get_isTrigger_m640_MethodInfo);
		if (L_62)
		{
			goto IL_021d;
		}
	}
	{
		RaycastHitU5BU5D_t15* L_63 = (__this->___m_Hits_14);
		int32_t L_64 = V_6;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Collider_t94 * L_65 = RaycastHit_get_collider_m647(((RaycastHit_t16 *)(RaycastHit_t16 *)SZArrayLdElema(L_63, L_64)), /*hidden argument*/&RaycastHit_get_collider_m647_MethodInfo);
		NullCheck(L_65);
		Rigidbody_t3 * L_66 = Collider_get_attachedRigidbody_m641(L_65, /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		bool L_67 = Object_op_Inequality_m642(NULL /*static, unused*/, L_66, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_67)
		{
			goto IL_01df;
		}
	}
	{
		RaycastHitU5BU5D_t15* L_68 = (__this->___m_Hits_14);
		int32_t L_69 = V_6;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		Collider_t94 * L_70 = RaycastHit_get_collider_m647(((RaycastHit_t16 *)(RaycastHit_t16 *)SZArrayLdElema(L_68, L_69)), /*hidden argument*/&RaycastHit_get_collider_m647_MethodInfo);
		NullCheck(L_70);
		Rigidbody_t3 * L_71 = Collider_get_attachedRigidbody_m641(L_70, /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		String_t* L_72 = (__this->___dontClipTag_7);
		NullCheck(L_71);
		bool L_73 = Component_CompareTag_m643(L_71, L_72, /*hidden argument*/&Component_CompareTag_m643_MethodInfo);
		if (L_73)
		{
			goto IL_021d;
		}
	}

IL_01df:
	{
		RaycastHitU5BU5D_t15* L_74 = (__this->___m_Hits_14);
		int32_t L_75 = V_6;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, L_75);
		float L_76 = RaycastHit_get_distance_m630(((RaycastHit_t16 *)(RaycastHit_t16 *)SZArrayLdElema(L_74, L_75)), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		V_5 = L_76;
		Transform_t2 * L_77 = (__this->___m_Pivot_9);
		RaycastHitU5BU5D_t15* L_78 = (__this->___m_Hits_14);
		int32_t L_79 = V_6;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_79);
		Vector3_t8  L_80 = RaycastHit_get_point_m648(((RaycastHit_t16 *)(RaycastHit_t16 *)SZArrayLdElema(L_78, L_79)), /*hidden argument*/&RaycastHit_get_point_m648_MethodInfo);
		NullCheck(L_77);
		Vector3_t8  L_81 = Transform_InverseTransformPoint_m622(L_77, L_80, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		V_7 = L_81;
		float L_82 = ((&V_7)->___z_3);
		V_0 = ((-L_82));
		V_3 = 1;
	}

IL_021d:
	{
		int32_t L_83 = V_6;
		V_6 = ((int32_t)((int32_t)L_83+(int32_t)1));
	}

IL_0223:
	{
		int32_t L_84 = V_6;
		RaycastHitU5BU5D_t15* L_85 = (__this->___m_Hits_14);
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)(((Array_t *)L_85)->max_length))))))
		{
			goto IL_0161;
		}
	}
	{
		bool L_86 = V_3;
		if (!L_86)
		{
			goto IL_026a;
		}
	}
	{
		Ray_t18 * L_87 = &(__this->___m_Ray_13);
		Vector3_t8  L_88 = Ray_get_origin_m638(L_87, /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Transform_t2 * L_89 = (__this->___m_Pivot_9);
		NullCheck(L_89);
		Vector3_t8  L_90 = Transform_get_forward_m587(L_89, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_91 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_90, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		float L_92 = V_0;
		float L_93 = (__this->___sphereCastRadius_4);
		Vector3_t8  L_94 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_91, ((float)((float)L_92+(float)L_93)), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Color_t79  L_95 = Color_get_red_m649(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m649_MethodInfo);
		Debug_DrawRay_m650(NULL /*static, unused*/, L_88, L_94, L_95, /*hidden argument*/&Debug_DrawRay_m650_MethodInfo);
	}

IL_026a:
	{
		bool L_96 = V_3;
		ProtectCameraFromWallClip_set_protecting_m27(__this, L_96, /*hidden argument*/&ProtectCameraFromWallClip_set_protecting_m27_MethodInfo);
		float L_97 = (__this->___m_CurrentDist_12);
		float L_98 = V_0;
		float* L_99 = &(__this->___m_MoveVelocity_11);
		float L_100 = (__this->___m_CurrentDist_12);
		float L_101 = V_0;
		G_B21_0 = L_99;
		G_B21_1 = L_98;
		G_B21_2 = L_97;
		G_B21_3 = __this;
		if ((!(((float)L_100) > ((float)L_101))))
		{
			G_B22_0 = L_99;
			G_B22_1 = L_98;
			G_B22_2 = L_97;
			G_B22_3 = __this;
			goto IL_0296;
		}
	}
	{
		float L_102 = (__this->___clipMoveTime_2);
		G_B23_0 = L_102;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		goto IL_029c;
	}

IL_0296:
	{
		float L_103 = (__this->___returnTime_3);
		G_B23_0 = L_103;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
	}

IL_029c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_104 = Mathf_SmoothDamp_m593(NULL /*static, unused*/, G_B23_3, G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/&Mathf_SmoothDamp_m593_MethodInfo);
		NullCheck(G_B23_4);
		G_B23_4->___m_CurrentDist_12 = L_104;
		float L_105 = (__this->___m_CurrentDist_12);
		float L_106 = (__this->___closestDistance_6);
		float L_107 = (__this->___m_OriginalDist_10);
		float L_108 = Mathf_Clamp_m616(NULL /*static, unused*/, L_105, L_106, L_107, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		__this->___m_CurrentDist_12 = L_108;
		Transform_t2 * L_109 = (__this->___m_Cam_8);
		Vector3_t8  L_110 = Vector3_get_forward_m651(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m651_MethodInfo);
		Vector3_t8  L_111 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_110, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		float L_112 = (__this->___m_CurrentDist_12);
		Vector3_t8  L_113 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_109);
		Transform_set_localPosition_m652(L_109, L_113, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Cameras.TargetFieldOfView
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_Ta.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TargetFieldOfView_t20_il2cpp_TypeInfo;
// UnityStandardAssets.Cameras.TargetFieldOfView
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cameras_TaMethodDeclarations.h"

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.TrailRenderer
#include "UnityEngine_UnityEngine_TrailRenderer.h"
// UnityEngine.ParticleRenderer
#include "UnityEngine_UnityEngine_ParticleRenderer.h"
// UnityEngine.ParticleSystemRenderer
#include "UnityEngine_UnityEngine_ParticleSystemRenderer.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Bounds_t190_il2cpp_TypeInfo;
extern TypeInfo TrailRenderer_t191_il2cpp_TypeInfo;
extern TypeInfo ParticleRenderer_t192_il2cpp_TypeInfo;
extern TypeInfo ParticleSystemRenderer_t193_il2cpp_TypeInfo;
extern TypeInfo SingleU5BU5D_t143_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
extern Il2CppType SingleU5BU5D_t143_0_0_0;
extern MethodInfo TargetFieldOfView_MaxBoundsExtent_m34_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m653_MethodInfo;
extern MethodInfo Camera_get_fieldOfView_m654_MethodInfo;
extern MethodInfo Camera_set_fieldOfView_m655_MethodInfo;
extern MethodInfo Renderer_get_bounds_m656_MethodInfo;
extern MethodInfo Bounds_Encapsulate_m657_MethodInfo;
extern MethodInfo Bounds_get_extents_m658_MethodInfo;
extern MethodInfo Mathf_Max_m659_MethodInfo;
struct Component_t185;
struct Component_t185;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t194* Component_GetComponentsInChildren_TisObject_t_m661_gshared (Component_t185 * __this, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m661(__this, method) (( ObjectU5BU5D_t194* (*) (Component_t185 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m661_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
#define Component_GetComponentsInChildren_TisRenderer_t156_m660(__this, method) (( RendererU5BU5D_t195* (*) (Component_t185 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m661_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisRenderer_t156_m660_GenericMethod;


// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::.ctor()
extern MethodInfo TargetFieldOfView__ctor_m30_MethodInfo;
extern "C" void TargetFieldOfView__ctor_m30 (TargetFieldOfView_t20 * __this, MethodInfo* method)
{
	{
		__this->___m_FovAdjustTime_6 = (1.0f);
		__this->___m_ZoomAmountMultiplier_7 = (2.0f);
		AbstractTargetFollower__ctor_m0(__this, /*hidden argument*/&AbstractTargetFollower__ctor_m0_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::Start()
extern MethodInfo TargetFieldOfView_Start_m31_MethodInfo;
extern MethodInfo* Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var;
extern "C" void TargetFieldOfView_Start_m31 (TargetFieldOfView_t20 * __this, MethodInfo* method)
{
	static bool TargetFieldOfView_Start_m31_init;
	if (!TargetFieldOfView_Start_m31_init)
	{
		Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInChildren_TisCamera_t19_m627_GenericMethod);
		TargetFieldOfView_Start_m31_init = true;
	}
	{
		AbstractTargetFollower_Start_m1(__this, /*hidden argument*/&AbstractTargetFollower_Start_m1_MethodInfo);
		Transform_t2 * L_0 = (__this->___m_Target_2);
		bool L_1 = (__this->___m_IncludeEffectsInSize_8);
		float L_2 = TargetFieldOfView_MaxBoundsExtent_m34(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&TargetFieldOfView_MaxBoundsExtent_m34_MethodInfo);
		__this->___m_BoundSize_9 = L_2;
		Camera_t19 * L_3 = Component_GetComponentInChildren_TisCamera_t19_m627(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_t19_m627_MethodInfo_var);
		__this->___m_Cam_11 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::FollowTarget(System.Single)
extern MethodInfo TargetFieldOfView_FollowTarget_m32_MethodInfo;
extern "C" void TargetFieldOfView_FollowTarget_m32 (TargetFieldOfView_t20 * __this, float ___deltaTime, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	{
		Transform_t2 * L_0 = (__this->___m_Target_2);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_2 = L_4;
		float L_5 = Vector3_get_magnitude_m591((&V_2), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		V_0 = L_5;
		float L_6 = (__this->___m_BoundSize_9);
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = atan2f(L_6, L_7);
		float L_9 = (__this->___m_ZoomAmountMultiplier_7);
		V_1 = ((float)((float)((float)((float)L_8*(float)(57.29578f)))*(float)L_9));
		Camera_t19 * L_10 = (__this->___m_Cam_11);
		Camera_t19 * L_11 = (__this->___m_Cam_11);
		NullCheck(L_11);
		float L_12 = Camera_get_fieldOfView_m654(L_11, /*hidden argument*/&Camera_get_fieldOfView_m654_MethodInfo);
		float L_13 = V_1;
		float* L_14 = &(__this->___m_FovAdjustVelocity_10);
		float L_15 = (__this->___m_FovAdjustTime_6);
		float L_16 = Mathf_SmoothDamp_m593(NULL /*static, unused*/, L_12, L_13, L_14, L_15, /*hidden argument*/&Mathf_SmoothDamp_m593_MethodInfo);
		NullCheck(L_10);
		Camera_set_fieldOfView_m655(L_10, L_16, /*hidden argument*/&Camera_set_fieldOfView_m655_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::SetTarget(UnityEngine.Transform)
extern MethodInfo TargetFieldOfView_SetTarget_m33_MethodInfo;
extern "C" void TargetFieldOfView_SetTarget_m33 (TargetFieldOfView_t20 * __this, Transform_t2 * ___newTransform, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___newTransform;
		AbstractTargetFollower_SetTarget_m6(__this, L_0, /*hidden argument*/&AbstractTargetFollower_SetTarget_m6_MethodInfo);
		Transform_t2 * L_1 = ___newTransform;
		bool L_2 = (__this->___m_IncludeEffectsInSize_8);
		float L_3 = TargetFieldOfView_MaxBoundsExtent_m34(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&TargetFieldOfView_MaxBoundsExtent_m34_MethodInfo);
		__this->___m_BoundSize_9 = L_3;
		return;
	}
}
// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::MaxBoundsExtent(UnityEngine.Transform,System.Boolean)
extern TypeInfo* SingleU5BU5D_t143_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisRenderer_t156_m660_MethodInfo_var;
extern "C" float TargetFieldOfView_MaxBoundsExtent_m34 (Object_t * __this /* static, unused */, Transform_t2 * ___obj, bool ___includeEffects, MethodInfo* method)
{
	static bool TargetFieldOfView_MaxBoundsExtent_m34_init;
	if (!TargetFieldOfView_MaxBoundsExtent_m34_init)
	{
		SingleU5BU5D_t143_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t143_0_0_0);
		Component_GetComponentsInChildren_TisRenderer_t156_m660_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisRenderer_t156_m660_GenericMethod);
		TargetFieldOfView_MaxBoundsExtent_m34_init = true;
	}
	RendererU5BU5D_t195* V_0 = {0};
	Bounds_t190  V_1 = {0};
	bool V_2 = false;
	Renderer_t156 * V_3 = {0};
	RendererU5BU5D_t195* V_4 = {0};
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Vector3_t8  V_7 = {0};
	Vector3_t8  V_8 = {0};
	Vector3_t8  V_9 = {0};
	{
		Transform_t2 * L_0 = ___obj;
		NullCheck(L_0);
		RendererU5BU5D_t195* L_1 = Component_GetComponentsInChildren_TisRenderer_t156_m660(L_0, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t156_m660_MethodInfo_var);
		V_0 = L_1;
		Initobj (InitializedTypeInfo(&Bounds_t190_il2cpp_TypeInfo), (&V_1));
		V_2 = 0;
		RendererU5BU5D_t195* L_2 = V_0;
		V_4 = L_2;
		V_5 = 0;
		goto IL_006a;
	}

IL_001c:
	{
		RendererU5BU5D_t195* L_3 = V_4;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = (*(Renderer_t156 **)(Renderer_t156 **)SZArrayLdElema(L_3, L_5));
		Renderer_t156 * L_6 = V_3;
		if (((TrailRenderer_t191 *)IsInst(L_6, InitializedTypeInfo(&TrailRenderer_t191_il2cpp_TypeInfo))))
		{
			goto IL_0064;
		}
	}
	{
		Renderer_t156 * L_7 = V_3;
		if (((ParticleRenderer_t192 *)IsInst(L_7, InitializedTypeInfo(&ParticleRenderer_t192_il2cpp_TypeInfo))))
		{
			goto IL_0064;
		}
	}
	{
		Renderer_t156 * L_8 = V_3;
		if (((ParticleSystemRenderer_t193 *)IsInst(L_8, InitializedTypeInfo(&ParticleSystemRenderer_t193_il2cpp_TypeInfo))))
		{
			goto IL_0064;
		}
	}
	{
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		V_2 = 1;
		Renderer_t156 * L_10 = V_3;
		NullCheck(L_10);
		Bounds_t190  L_11 = Renderer_get_bounds_m656(L_10, /*hidden argument*/&Renderer_get_bounds_m656_MethodInfo);
		V_1 = L_11;
		goto IL_0064;
	}

IL_0057:
	{
		Renderer_t156 * L_12 = V_3;
		NullCheck(L_12);
		Bounds_t190  L_13 = Renderer_get_bounds_m656(L_12, /*hidden argument*/&Renderer_get_bounds_m656_MethodInfo);
		Bounds_Encapsulate_m657((&V_1), L_13, /*hidden argument*/&Bounds_Encapsulate_m657_MethodInfo);
	}

IL_0064:
	{
		int32_t L_14 = V_5;
		V_5 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_15 = V_5;
		RendererU5BU5D_t195* L_16 = V_4;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_t143* L_17 = ((SingleU5BU5D_t143*)SZArrayNew(SingleU5BU5D_t143_il2cpp_TypeInfo_var, 3));
		Vector3_t8  L_18 = Bounds_get_extents_m658((&V_1), /*hidden argument*/&Bounds_get_extents_m658_MethodInfo);
		V_7 = L_18;
		float L_19 = ((&V_7)->___x_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		*((float*)(float*)SZArrayLdElema(L_17, 0)) = (float)L_19;
		SingleU5BU5D_t143* L_20 = L_17;
		Vector3_t8  L_21 = Bounds_get_extents_m658((&V_1), /*hidden argument*/&Bounds_get_extents_m658_MethodInfo);
		V_8 = L_21;
		float L_22 = ((&V_8)->___y_2);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		*((float*)(float*)SZArrayLdElema(L_20, 1)) = (float)L_22;
		SingleU5BU5D_t143* L_23 = L_20;
		Vector3_t8  L_24 = Bounds_get_extents_m658((&V_1), /*hidden argument*/&Bounds_get_extents_m658_MethodInfo);
		V_9 = L_24;
		float L_25 = ((&V_9)->___z_3);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		*((float*)(float*)SZArrayLdElema(L_23, 2)) = (float)L_25;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_26 = Mathf_Max_m659(NULL /*static, unused*/, L_23, /*hidden argument*/&Mathf_Max_m659_MethodInfo);
		V_6 = L_26;
		float L_27 = V_6;
		return L_27;
	}
}
// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FirstPersonController_t29_il2cpp_TypeInfo;
// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CharactersMethodDeclarations.h"

// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1.h"
// UnityStandardAssets.Utility.CurveControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Cu.h"
// UnityStandardAssets.Utility.LerpControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le_0.h"
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterController.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityStandardAssets.Characters.FirstPerson.MouseLook
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_1.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
// UnityEngine.ControllerColliderHit
#include "UnityEngine_UnityEngine_ControllerColliderHit.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
extern TypeInfo FOVKick_t22_il2cpp_TypeInfo;
extern TypeInfo CurveControlledBob_t23_il2cpp_TypeInfo;
extern TypeInfo LerpControlledBob_t24_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.FOVKick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_1MethodDeclarations.h"
// UnityStandardAssets.Utility.CurveControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_CuMethodDeclarations.h"
// UnityStandardAssets.Utility.LerpControlledBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le_0MethodDeclarations.h"
// UnityStandardAssets.Characters.FirstPerson.MouseLook
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_1MethodDeclarations.h"
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.ControllerColliderHit
#include "UnityEngine_UnityEngine_ControllerColliderHitMethodDeclarations.h"
extern MethodInfo FOVKick__ctor_m318_MethodInfo;
extern MethodInfo CurveControlledBob__ctor_m290_MethodInfo;
extern MethodInfo LerpControlledBob__ctor_m337_MethodInfo;
extern MethodInfo Vector3_get_zero_m662_MethodInfo;
extern MethodInfo Camera_get_main_m663_MethodInfo;
extern MethodInfo FOVKick_Setup_m319_MethodInfo;
extern MethodInfo CurveControlledBob_Setup_m291_MethodInfo;
extern MethodInfo MouseLook_Init_m51_MethodInfo;
extern MethodInfo FirstPersonController_RotateView_m45_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetButtonDown_m149_MethodInfo;
extern MethodInfo CharacterController_get_isGrounded_m664_MethodInfo;
extern MethodInfo LerpControlledBob_DoBobCycle_m339_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m665_MethodInfo;
extern MethodInfo FirstPersonController_PlayLandingSound_m38_MethodInfo;
extern MethodInfo AudioSource_set_clip_m666_MethodInfo;
extern MethodInfo AudioSource_Play_m667_MethodInfo;
extern MethodInfo FirstPersonController_GetInput_m44_MethodInfo;
extern MethodInfo Transform_get_right_m668_MethodInfo;
extern MethodInfo CharacterController_get_radius_m669_MethodInfo;
extern MethodInfo Vector3_get_down_m670_MethodInfo;
extern MethodInfo CharacterController_get_height_m671_MethodInfo;
extern MethodInfo Physics_SphereCast_m672_MethodInfo;
extern MethodInfo RaycastHit_get_normal_m673_MethodInfo;
extern MethodInfo Vector3_ProjectOnPlane_m674_MethodInfo;
extern MethodInfo FirstPersonController_PlayJumpSound_m40_MethodInfo;
extern MethodInfo Physics_get_gravity_m675_MethodInfo;
extern MethodInfo Time_get_fixedDeltaTime_m676_MethodInfo;
extern MethodInfo CharacterController_Move_m677_MethodInfo;
extern MethodInfo FirstPersonController_ProgressStepCycle_m41_MethodInfo;
extern MethodInfo FirstPersonController_UpdateCameraPosition_m43_MethodInfo;
extern MethodInfo CharacterController_get_velocity_m678_MethodInfo;
extern MethodInfo FirstPersonController_PlayFootStepAudio_m42_MethodInfo;
extern MethodInfo Random_Range_m679_MethodInfo;
extern MethodInfo AudioSource_get_clip_m680_MethodInfo;
extern MethodInfo AudioSource_PlayOneShot_m681_MethodInfo;
extern MethodInfo CurveControlledBob_DoHeadBob_m292_MethodInfo;
extern MethodInfo LerpControlledBob_Offset_m338_MethodInfo;
extern MethodInfo Vector2__ctor_m682_MethodInfo;
extern MethodInfo Vector2_get_sqrMagnitude_m683_MethodInfo;
extern MethodInfo Vector2_Normalize_m684_MethodInfo;
extern MethodInfo MonoBehaviour_StopAllCoroutines_m685_MethodInfo;
extern MethodInfo FOVKick_FOVKickUp_m322_MethodInfo;
extern MethodInfo FOVKick_FOVKickDown_m323_MethodInfo;
extern MethodInfo MouseLook_LookRotation_m52_MethodInfo;
extern MethodInfo ControllerColliderHit_get_collider_m686_MethodInfo;
extern MethodInfo Rigidbody_get_isKinematic_m687_MethodInfo;
extern MethodInfo ControllerColliderHit_get_point_m688_MethodInfo;
extern MethodInfo Rigidbody_AddForceAtPosition_m689_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.CharacterController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t27_m690(__this, method) (( CharacterController_t27 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.AudioSource>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t28_m691(__this, method) (( AudioSource_t28 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisCharacterController_t27_m690_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisAudioSource_t28_m691_GenericMethod;


// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::.ctor()
extern MethodInfo FirstPersonController__ctor_m35_MethodInfo;
extern "C" void FirstPersonController__ctor_m35 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	{
		FOVKick_t22 * L_0 = (FOVKick_t22 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FOVKick_t22_il2cpp_TypeInfo));
		FOVKick__ctor_m318(L_0, /*hidden argument*/&FOVKick__ctor_m318_MethodInfo);
		__this->___m_FovKick_11 = L_0;
		CurveControlledBob_t23 * L_1 = (CurveControlledBob_t23 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CurveControlledBob_t23_il2cpp_TypeInfo));
		CurveControlledBob__ctor_m290(L_1, /*hidden argument*/&CurveControlledBob__ctor_m290_MethodInfo);
		__this->___m_HeadBob_13 = L_1;
		LerpControlledBob_t24 * L_2 = (LerpControlledBob_t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LerpControlledBob_t24_il2cpp_TypeInfo));
		LerpControlledBob__ctor_m337(L_2, /*hidden argument*/&LerpControlledBob__ctor_m337_MethodInfo);
		__this->___m_JumpBob_14 = L_2;
		Vector3_t8  L_3 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		__this->___m_MoveDir_23 = L_3;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Start()
extern MethodInfo FirstPersonController_Start_m36_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCharacterController_t27_m690_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisAudioSource_t28_m691_MethodInfo_var;
extern "C" void FirstPersonController_Start_m36 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	static bool FirstPersonController_Start_m36_init;
	if (!FirstPersonController_Start_m36_init)
	{
		Component_GetComponent_TisCharacterController_t27_m690_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCharacterController_t27_m690_GenericMethod);
		Component_GetComponent_TisAudioSource_t28_m691_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAudioSource_t28_m691_GenericMethod);
		FirstPersonController_Start_m36_init = true;
	}
	{
		CharacterController_t27 * L_0 = Component_GetComponent_TisCharacterController_t27_m690(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t27_m690_MethodInfo_var);
		__this->___m_CharacterController_24 = L_0;
		Camera_t19 * L_1 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		__this->___m_Camera_19 = L_1;
		Camera_t19 * L_2 = (__this->___m_Camera_19);
		NullCheck(L_2);
		Transform_t2 * L_3 = Component_get_transform_m598(L_2, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_localPosition_m632(L_3, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_OriginalCameraPosition_27 = L_4;
		FOVKick_t22 * L_5 = (__this->___m_FovKick_11);
		Camera_t19 * L_6 = (__this->___m_Camera_19);
		NullCheck(L_5);
		FOVKick_Setup_m319(L_5, L_6, /*hidden argument*/&FOVKick_Setup_m319_MethodInfo);
		CurveControlledBob_t23 * L_7 = (__this->___m_HeadBob_13);
		Camera_t19 * L_8 = (__this->___m_Camera_19);
		float L_9 = (__this->___m_StepInterval_15);
		NullCheck(L_7);
		CurveControlledBob_Setup_m291(L_7, L_8, L_9, /*hidden argument*/&CurveControlledBob_Setup_m291_MethodInfo);
		__this->___m_StepCycle_28 = (0.0f);
		float L_10 = (__this->___m_StepCycle_28);
		__this->___m_NextStep_29 = ((float)((float)L_10/(float)(2.0f)));
		__this->___m_Jumping_30 = 0;
		AudioSource_t28 * L_11 = Component_GetComponent_TisAudioSource_t28_m691(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t28_m691_MethodInfo_var);
		__this->___m_AudioSource_31 = L_11;
		MouseLook_t21 * L_12 = (__this->___m_MouseLook_9);
		Transform_t2 * L_13 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_14 = (__this->___m_Camera_19);
		NullCheck(L_14);
		Transform_t2 * L_15 = Component_get_transform_m598(L_14, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_12);
		MouseLook_Init_m51(L_12, L_13, L_15, /*hidden argument*/&MouseLook_Init_m51_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Update()
extern MethodInfo FirstPersonController_Update_m37_MethodInfo;
extern "C" void FirstPersonController_Update_m37 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	{
		FirstPersonController_RotateView_m45(__this, /*hidden argument*/&FirstPersonController_RotateView_m45_MethodInfo);
		bool L_0 = (__this->___m_Jump_20);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_1 = CrossPlatformInputManager_GetButtonDown_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&CrossPlatformInputManager_GetButtonDown_m149_MethodInfo);
		__this->___m_Jump_20 = L_1;
	}

IL_0021:
	{
		bool L_2 = (__this->___m_PreviouslyGrounded_26);
		if (L_2)
		{
			goto IL_006b;
		}
	}
	{
		CharacterController_t27 * L_3 = (__this->___m_CharacterController_24);
		NullCheck(L_3);
		bool L_4 = CharacterController_get_isGrounded_m664(L_3, /*hidden argument*/&CharacterController_get_isGrounded_m664_MethodInfo);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		LerpControlledBob_t24 * L_5 = (__this->___m_JumpBob_14);
		NullCheck(L_5);
		Object_t * L_6 = LerpControlledBob_DoBobCycle_m339(L_5, /*hidden argument*/&LerpControlledBob_DoBobCycle_m339_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_6, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		FirstPersonController_PlayLandingSound_m38(__this, /*hidden argument*/&FirstPersonController_PlayLandingSound_m38_MethodInfo);
		Vector3_t8 * L_7 = &(__this->___m_MoveDir_23);
		L_7->___y_2 = (0.0f);
		__this->___m_Jumping_30 = 0;
	}

IL_006b:
	{
		CharacterController_t27 * L_8 = (__this->___m_CharacterController_24);
		NullCheck(L_8);
		bool L_9 = CharacterController_get_isGrounded_m664(L_8, /*hidden argument*/&CharacterController_get_isGrounded_m664_MethodInfo);
		if (L_9)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_10 = (__this->___m_Jumping_30);
		if (L_10)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_11 = (__this->___m_PreviouslyGrounded_26);
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		Vector3_t8 * L_12 = &(__this->___m_MoveDir_23);
		L_12->___y_2 = (0.0f);
	}

IL_00a1:
	{
		CharacterController_t27 * L_13 = (__this->___m_CharacterController_24);
		NullCheck(L_13);
		bool L_14 = CharacterController_get_isGrounded_m664(L_13, /*hidden argument*/&CharacterController_get_isGrounded_m664_MethodInfo);
		__this->___m_PreviouslyGrounded_26 = L_14;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
extern "C" void FirstPersonController_PlayLandingSound_m38 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	{
		AudioSource_t28 * L_0 = (__this->___m_AudioSource_31);
		AudioClip_t26 * L_1 = (__this->___m_LandSound_18);
		NullCheck(L_0);
		AudioSource_set_clip_m666(L_0, L_1, /*hidden argument*/&AudioSource_set_clip_m666_MethodInfo);
		AudioSource_t28 * L_2 = (__this->___m_AudioSource_31);
		NullCheck(L_2);
		AudioSource_Play_m667(L_2, /*hidden argument*/&AudioSource_Play_m667_MethodInfo);
		float L_3 = (__this->___m_StepCycle_28);
		__this->___m_NextStep_29 = ((float)((float)L_3+(float)(0.5f)));
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::FixedUpdate()
extern MethodInfo FirstPersonController_FixedUpdate_m39_MethodInfo;
extern "C" void FirstPersonController_FixedUpdate_m39 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t8  V_1 = {0};
	RaycastHit_t16  V_2 = {0};
	Vector3_t8  V_3 = {0};
	{
		FirstPersonController_GetInput_m44(__this, (&V_0), /*hidden argument*/&FirstPersonController_GetInput_m44_MethodInfo);
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_forward_m587(L_0, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector2_t13 * L_2 = &(__this->___m_Input_22);
		float L_3 = (L_2->___y_2);
		Vector3_t8  L_4 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Transform_t2 * L_5 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_right_m668(L_5, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		Vector2_t13 * L_7 = &(__this->___m_Input_22);
		float L_8 = (L_7->___x_1);
		Vector3_t8  L_9 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_10 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_4, L_9, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_1 = L_10;
		Transform_t2 * L_11 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_11);
		Vector3_t8  L_12 = Transform_get_position_m599(L_11, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		CharacterController_t27 * L_13 = (__this->___m_CharacterController_24);
		NullCheck(L_13);
		float L_14 = CharacterController_get_radius_m669(L_13, /*hidden argument*/&CharacterController_get_radius_m669_MethodInfo);
		Vector3_t8  L_15 = Vector3_get_down_m670(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_down_m670_MethodInfo);
		CharacterController_t27 * L_16 = (__this->___m_CharacterController_24);
		NullCheck(L_16);
		float L_17 = CharacterController_get_height_m671(L_16, /*hidden argument*/&CharacterController_get_height_m671_MethodInfo);
		Physics_SphereCast_m672(NULL /*static, unused*/, L_12, L_14, L_15, (&V_2), ((float)((float)L_17/(float)(2.0f))), /*hidden argument*/&Physics_SphereCast_m672_MethodInfo);
		Vector3_t8  L_18 = V_1;
		Vector3_t8  L_19 = RaycastHit_get_normal_m673((&V_2), /*hidden argument*/&RaycastHit_get_normal_m673_MethodInfo);
		Vector3_t8  L_20 = Vector3_ProjectOnPlane_m674(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_ProjectOnPlane_m674_MethodInfo);
		V_3 = L_20;
		Vector3_t8  L_21 = Vector3_get_normalized_m592((&V_3), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		V_1 = L_21;
		Vector3_t8 * L_22 = &(__this->___m_MoveDir_23);
		float L_23 = ((&V_1)->___x_1);
		float L_24 = V_0;
		L_22->___x_1 = ((float)((float)L_23*(float)L_24));
		Vector3_t8 * L_25 = &(__this->___m_MoveDir_23);
		float L_26 = ((&V_1)->___z_3);
		float L_27 = V_0;
		L_25->___z_3 = ((float)((float)L_26*(float)L_27));
		CharacterController_t27 * L_28 = (__this->___m_CharacterController_24);
		NullCheck(L_28);
		bool L_29 = CharacterController_get_isGrounded_m664(L_28, /*hidden argument*/&CharacterController_get_isGrounded_m664_MethodInfo);
		if (!L_29)
		{
			goto IL_010d;
		}
	}
	{
		Vector3_t8 * L_30 = &(__this->___m_MoveDir_23);
		float L_31 = (__this->___m_StickToGroundForce_7);
		L_30->___y_2 = ((-L_31));
		bool L_32 = (__this->___m_Jump_20);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		Vector3_t8 * L_33 = &(__this->___m_MoveDir_23);
		float L_34 = (__this->___m_JumpSpeed_6);
		L_33->___y_2 = L_34;
		FirstPersonController_PlayJumpSound_m40(__this, /*hidden argument*/&FirstPersonController_PlayJumpSound_m40_MethodInfo);
		__this->___m_Jump_20 = 0;
		__this->___m_Jumping_30 = 1;
	}

IL_0108:
	{
		goto IL_0138;
	}

IL_010d:
	{
		Vector3_t8  L_35 = (__this->___m_MoveDir_23);
		Vector3_t8  L_36 = Physics_get_gravity_m675(NULL /*static, unused*/, /*hidden argument*/&Physics_get_gravity_m675_MethodInfo);
		float L_37 = (__this->___m_GravityMultiplier_8);
		Vector3_t8  L_38 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_39 = Time_get_fixedDeltaTime_m676(NULL /*static, unused*/, /*hidden argument*/&Time_get_fixedDeltaTime_m676_MethodInfo);
		Vector3_t8  L_40 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_41 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_35, L_40, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		__this->___m_MoveDir_23 = L_41;
	}

IL_0138:
	{
		CharacterController_t27 * L_42 = (__this->___m_CharacterController_24);
		Vector3_t8  L_43 = (__this->___m_MoveDir_23);
		float L_44 = Time_get_fixedDeltaTime_m676(NULL /*static, unused*/, /*hidden argument*/&Time_get_fixedDeltaTime_m676_MethodInfo);
		Vector3_t8  L_45 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_42);
		int32_t L_46 = CharacterController_Move_m677(L_42, L_45, /*hidden argument*/&CharacterController_Move_m677_MethodInfo);
		__this->___m_CollisionFlags_25 = L_46;
		float L_47 = V_0;
		FirstPersonController_ProgressStepCycle_m41(__this, L_47, /*hidden argument*/&FirstPersonController_ProgressStepCycle_m41_MethodInfo);
		float L_48 = V_0;
		FirstPersonController_UpdateCameraPosition_m43(__this, L_48, /*hidden argument*/&FirstPersonController_UpdateCameraPosition_m43_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
extern "C" void FirstPersonController_PlayJumpSound_m40 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	{
		AudioSource_t28 * L_0 = (__this->___m_AudioSource_31);
		AudioClip_t26 * L_1 = (__this->___m_JumpSound_17);
		NullCheck(L_0);
		AudioSource_set_clip_m666(L_0, L_1, /*hidden argument*/&AudioSource_set_clip_m666_MethodInfo);
		AudioSource_t28 * L_2 = (__this->___m_AudioSource_31);
		NullCheck(L_2);
		AudioSource_Play_m667(L_2, /*hidden argument*/&AudioSource_Play_m667_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
extern "C" void FirstPersonController_ProgressStepCycle_m41 (FirstPersonController_t29 * __this, float ___speed, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	FirstPersonController_t29 * G_B5_3 = {0};
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	FirstPersonController_t29 * G_B4_3 = {0};
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	FirstPersonController_t29 * G_B6_4 = {0};
	{
		CharacterController_t27 * L_0 = (__this->___m_CharacterController_24);
		NullCheck(L_0);
		Vector3_t8  L_1 = CharacterController_get_velocity_m678(L_0, /*hidden argument*/&CharacterController_get_velocity_m678_MethodInfo);
		V_0 = L_1;
		float L_2 = Vector3_get_sqrMagnitude_m602((&V_0), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_008b;
		}
	}
	{
		Vector2_t13 * L_3 = &(__this->___m_Input_22);
		float L_4 = (L_3->___x_1);
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		Vector2_t13 * L_5 = &(__this->___m_Input_22);
		float L_6 = (L_5->___y_2);
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_008b;
		}
	}

IL_0047:
	{
		float L_7 = (__this->___m_StepCycle_28);
		CharacterController_t27 * L_8 = (__this->___m_CharacterController_24);
		NullCheck(L_8);
		Vector3_t8  L_9 = CharacterController_get_velocity_m678(L_8, /*hidden argument*/&CharacterController_get_velocity_m678_MethodInfo);
		V_1 = L_9;
		float L_10 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_11 = ___speed;
		bool L_12 = (__this->___m_IsWalking_2);
		G_B4_0 = L_11;
		G_B4_1 = L_10;
		G_B4_2 = L_7;
		G_B4_3 = __this;
		if (!L_12)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			G_B5_2 = L_7;
			G_B5_3 = __this;
			goto IL_0077;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007d;
	}

IL_0077:
	{
		float L_13 = (__this->___m_RunstepLenghten_5);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007d:
	{
		float L_14 = Time_get_fixedDeltaTime_m676(NULL /*static, unused*/, /*hidden argument*/&Time_get_fixedDeltaTime_m676_MethodInfo);
		NullCheck(G_B6_4);
		G_B6_4->___m_StepCycle_28 = ((float)((float)G_B6_3+(float)((float)((float)((float)((float)G_B6_2+(float)((float)((float)G_B6_1*(float)G_B6_0))))*(float)L_14))));
	}

IL_008b:
	{
		float L_15 = (__this->___m_StepCycle_28);
		float L_16 = (__this->___m_NextStep_29);
		if ((((float)L_15) > ((float)L_16)))
		{
			goto IL_009d;
		}
	}
	{
		return;
	}

IL_009d:
	{
		float L_17 = (__this->___m_StepCycle_28);
		float L_18 = (__this->___m_StepInterval_15);
		__this->___m_NextStep_29 = ((float)((float)L_17+(float)L_18));
		FirstPersonController_PlayFootStepAudio_m42(__this, /*hidden argument*/&FirstPersonController_PlayFootStepAudio_m42_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
extern "C" void FirstPersonController_PlayFootStepAudio_m42 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		CharacterController_t27 * L_0 = (__this->___m_CharacterController_24);
		NullCheck(L_0);
		bool L_1 = CharacterController_get_isGrounded_m664(L_0, /*hidden argument*/&CharacterController_get_isGrounded_m664_MethodInfo);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		AudioClipU5BU5D_t25* L_2 = (__this->___m_FootstepSounds_16);
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m679(NULL /*static, unused*/, 1, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/&Random_Range_m679_MethodInfo);
		V_0 = L_3;
		AudioSource_t28 * L_4 = (__this->___m_AudioSource_31);
		AudioClipU5BU5D_t25* L_5 = (__this->___m_FootstepSounds_16);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_4);
		AudioSource_set_clip_m666(L_4, (*(AudioClip_t26 **)(AudioClip_t26 **)SZArrayLdElema(L_5, L_7)), /*hidden argument*/&AudioSource_set_clip_m666_MethodInfo);
		AudioSource_t28 * L_8 = (__this->___m_AudioSource_31);
		AudioSource_t28 * L_9 = (__this->___m_AudioSource_31);
		NullCheck(L_9);
		AudioClip_t26 * L_10 = AudioSource_get_clip_m680(L_9, /*hidden argument*/&AudioSource_get_clip_m680_MethodInfo);
		NullCheck(L_8);
		AudioSource_PlayOneShot_m681(L_8, L_10, /*hidden argument*/&AudioSource_PlayOneShot_m681_MethodInfo);
		AudioClipU5BU5D_t25* L_11 = (__this->___m_FootstepSounds_16);
		int32_t L_12 = V_0;
		AudioClipU5BU5D_t25* L_13 = (__this->___m_FootstepSounds_16);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		ArrayElementTypeCheck (L_11, (*(AudioClip_t26 **)(AudioClip_t26 **)SZArrayLdElema(L_13, L_14)));
		*((AudioClip_t26 **)(AudioClip_t26 **)SZArrayLdElema(L_11, L_12)) = (AudioClip_t26 *)(*(AudioClip_t26 **)(AudioClip_t26 **)SZArrayLdElema(L_13, L_14));
		AudioClipU5BU5D_t25* L_15 = (__this->___m_FootstepSounds_16);
		AudioSource_t28 * L_16 = (__this->___m_AudioSource_31);
		NullCheck(L_16);
		AudioClip_t26 * L_17 = AudioSource_get_clip_m680(L_16, /*hidden argument*/&AudioSource_get_clip_m680_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_17);
		*((AudioClip_t26 **)(AudioClip_t26 **)SZArrayLdElema(L_15, 0)) = (AudioClip_t26 *)L_17;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
extern "C" void FirstPersonController_UpdateCameraPosition_m43 (FirstPersonController_t29 * __this, float ___speed, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	CurveControlledBob_t23 * G_B6_2 = {0};
	Transform_t2 * G_B6_3 = {0};
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_t23 * G_B5_2 = {0};
	Transform_t2 * G_B5_3 = {0};
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	CurveControlledBob_t23 * G_B7_3 = {0};
	Transform_t2 * G_B7_4 = {0};
	{
		bool L_0 = (__this->___m_UseHeadBob_12);
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
		CharacterController_t27 * L_1 = (__this->___m_CharacterController_24);
		NullCheck(L_1);
		Vector3_t8  L_2 = CharacterController_get_velocity_m678(L_1, /*hidden argument*/&CharacterController_get_velocity_m678_MethodInfo);
		V_1 = L_2;
		float L_3 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_00c6;
		}
	}
	{
		CharacterController_t27 * L_4 = (__this->___m_CharacterController_24);
		NullCheck(L_4);
		bool L_5 = CharacterController_get_isGrounded_m664(L_4, /*hidden argument*/&CharacterController_get_isGrounded_m664_MethodInfo);
		if (!L_5)
		{
			goto IL_00c6;
		}
	}
	{
		Camera_t19 * L_6 = (__this->___m_Camera_19);
		NullCheck(L_6);
		Transform_t2 * L_7 = Component_get_transform_m598(L_6, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		CurveControlledBob_t23 * L_8 = (__this->___m_HeadBob_13);
		CharacterController_t27 * L_9 = (__this->___m_CharacterController_24);
		NullCheck(L_9);
		Vector3_t8  L_10 = CharacterController_get_velocity_m678(L_9, /*hidden argument*/&CharacterController_get_velocity_m678_MethodInfo);
		V_2 = L_10;
		float L_11 = Vector3_get_magnitude_m591((&V_2), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_12 = ___speed;
		bool L_13 = (__this->___m_IsWalking_2);
		G_B5_0 = L_12;
		G_B5_1 = L_11;
		G_B5_2 = L_8;
		G_B5_3 = L_7;
		if (!L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			G_B6_2 = L_8;
			G_B6_3 = L_7;
			goto IL_0073;
		}
	}
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_0079;
	}

IL_0073:
	{
		float L_14 = (__this->___m_RunstepLenghten_5);
		G_B7_0 = L_14;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_0079:
	{
		NullCheck(G_B7_3);
		Vector3_t8  L_15 = CurveControlledBob_DoHeadBob_m292(G_B7_3, ((float)((float)G_B7_2+(float)((float)((float)G_B7_1*(float)G_B7_0)))), /*hidden argument*/&CurveControlledBob_DoHeadBob_m292_MethodInfo);
		NullCheck(G_B7_4);
		Transform_set_localPosition_m652(G_B7_4, L_15, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		Camera_t19 * L_16 = (__this->___m_Camera_19);
		NullCheck(L_16);
		Transform_t2 * L_17 = Component_get_transform_m598(L_16, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_17);
		Vector3_t8  L_18 = Transform_get_localPosition_m632(L_17, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_0 = L_18;
		Camera_t19 * L_19 = (__this->___m_Camera_19);
		NullCheck(L_19);
		Transform_t2 * L_20 = Component_get_transform_m598(L_19, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_20);
		Vector3_t8  L_21 = Transform_get_localPosition_m632(L_20, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_3 = L_21;
		float L_22 = ((&V_3)->___y_2);
		LerpControlledBob_t24 * L_23 = (__this->___m_JumpBob_14);
		NullCheck(L_23);
		float L_24 = LerpControlledBob_Offset_m338(L_23, /*hidden argument*/&LerpControlledBob_Offset_m338_MethodInfo);
		(&V_0)->___y_2 = ((float)((float)L_22-(float)L_24));
		goto IL_00f5;
	}

IL_00c6:
	{
		Camera_t19 * L_25 = (__this->___m_Camera_19);
		NullCheck(L_25);
		Transform_t2 * L_26 = Component_get_transform_m598(L_25, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_26);
		Vector3_t8  L_27 = Transform_get_localPosition_m632(L_26, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_0 = L_27;
		Vector3_t8 * L_28 = &(__this->___m_OriginalCameraPosition_27);
		float L_29 = (L_28->___y_2);
		LerpControlledBob_t24 * L_30 = (__this->___m_JumpBob_14);
		NullCheck(L_30);
		float L_31 = LerpControlledBob_Offset_m338(L_30, /*hidden argument*/&LerpControlledBob_Offset_m338_MethodInfo);
		(&V_0)->___y_2 = ((float)((float)L_29-(float)L_31));
	}

IL_00f5:
	{
		Camera_t19 * L_32 = (__this->___m_Camera_19);
		NullCheck(L_32);
		Transform_t2 * L_33 = Component_get_transform_m598(L_32, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_34 = V_0;
		NullCheck(L_33);
		Transform_set_localPosition_m652(L_33, L_34, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
extern "C" void FirstPersonController_GetInput_m44 (FirstPersonController_t29 * __this, float* ___speed, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t8  V_3 = {0};
	Object_t * V_4 = {0};
	float* G_B2_0 = {0};
	float* G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	float* G_B3_1 = {0};
	FirstPersonController_t29 * G_B10_0 = {0};
	FirstPersonController_t29 * G_B9_0 = {0};
	Object_t * G_B11_0 = {0};
	FirstPersonController_t29 * G_B11_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_1;
		bool L_2 = (__this->___m_IsWalking_2);
		V_2 = L_2;
		float* L_3 = ___speed;
		bool L_4 = (__this->___m_IsWalking_2);
		G_B1_0 = L_3;
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0034;
		}
	}
	{
		float L_5 = (__this->___m_WalkSpeed_3);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0034:
	{
		float L_6 = (__this->___m_RunSpeed_4);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		*((float*)(G_B3_1)) = (float)G_B3_0;
		float L_7 = V_0;
		float L_8 = V_1;
		Vector2_t13  L_9 = {0};
		Vector2__ctor_m682(&L_9, L_7, L_8, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		__this->___m_Input_22 = L_9;
		Vector2_t13 * L_10 = &(__this->___m_Input_22);
		float L_11 = Vector2_get_sqrMagnitude_m683(L_10, /*hidden argument*/&Vector2_get_sqrMagnitude_m683_MethodInfo);
		if ((!(((float)L_11) > ((float)(1.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		Vector2_t13 * L_12 = &(__this->___m_Input_22);
		Vector2_Normalize_m684(L_12, /*hidden argument*/&Vector2_Normalize_m684_MethodInfo);
	}

IL_0068:
	{
		bool L_13 = (__this->___m_IsWalking_2);
		bool L_14 = V_2;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_00d3;
		}
	}
	{
		bool L_15 = (__this->___m_UseFovKick_10);
		if (!L_15)
		{
			goto IL_00d3;
		}
	}
	{
		CharacterController_t27 * L_16 = (__this->___m_CharacterController_24);
		NullCheck(L_16);
		Vector3_t8  L_17 = CharacterController_get_velocity_m678(L_16, /*hidden argument*/&CharacterController_get_velocity_m678_MethodInfo);
		V_3 = L_17;
		float L_18 = Vector3_get_sqrMagnitude_m602((&V_3), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_00d3;
		}
	}
	{
		MonoBehaviour_StopAllCoroutines_m685(__this, /*hidden argument*/&MonoBehaviour_StopAllCoroutines_m685_MethodInfo);
		bool L_19 = (__this->___m_IsWalking_2);
		G_B9_0 = __this;
		if (L_19)
		{
			G_B10_0 = __this;
			goto IL_00c2;
		}
	}
	{
		FOVKick_t22 * L_20 = (__this->___m_FovKick_11);
		NullCheck(L_20);
		Object_t * L_21 = FOVKick_FOVKickUp_m322(L_20, /*hidden argument*/&FOVKick_FOVKickUp_m322_MethodInfo);
		V_4 = L_21;
		Object_t * L_22 = V_4;
		G_B11_0 = L_22;
		G_B11_1 = G_B9_0;
		goto IL_00cd;
	}

IL_00c2:
	{
		FOVKick_t22 * L_23 = (__this->___m_FovKick_11);
		NullCheck(L_23);
		Object_t * L_24 = FOVKick_FOVKickDown_m323(L_23, /*hidden argument*/&FOVKick_FOVKickDown_m323_MethodInfo);
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
	}

IL_00cd:
	{
		NullCheck(G_B11_1);
		MonoBehaviour_StartCoroutine_m665(G_B11_1, G_B11_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
	}

IL_00d3:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
extern "C" void FirstPersonController_RotateView_m45 (FirstPersonController_t29 * __this, MethodInfo* method)
{
	{
		MouseLook_t21 * L_0 = (__this->___m_MouseLook_9);
		Transform_t2 * L_1 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_2 = (__this->___m_Camera_19);
		NullCheck(L_2);
		Transform_t2 * L_3 = Component_get_transform_m598(L_2, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		MouseLook_LookRotation_m52(L_0, L_1, L_3, /*hidden argument*/&MouseLook_LookRotation_m52_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern MethodInfo FirstPersonController_OnControllerColliderHit_m46_MethodInfo;
extern "C" void FirstPersonController_OnControllerColliderHit_m46 (FirstPersonController_t29 * __this, ControllerColliderHit_t30 * ___hit, MethodInfo* method)
{
	Rigidbody_t3 * V_0 = {0};
	{
		ControllerColliderHit_t30 * L_0 = ___hit;
		NullCheck(L_0);
		Collider_t94 * L_1 = ControllerColliderHit_get_collider_m686(L_0, /*hidden argument*/&ControllerColliderHit_get_collider_m686_MethodInfo);
		NullCheck(L_1);
		Rigidbody_t3 * L_2 = Collider_get_attachedRigidbody_m641(L_1, /*hidden argument*/&Collider_get_attachedRigidbody_m641_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___m_CollisionFlags_25);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Rigidbody_t3 * L_4 = V_0;
		bool L_5 = Object_op_Equality_m576(NULL /*static, unused*/, L_4, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		Rigidbody_t3 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Rigidbody_get_isKinematic_m687(L_6, /*hidden argument*/&Rigidbody_get_isKinematic_m687_MethodInfo);
		if (!L_7)
		{
			goto IL_0031;
		}
	}

IL_0030:
	{
		return;
	}

IL_0031:
	{
		Rigidbody_t3 * L_8 = V_0;
		CharacterController_t27 * L_9 = (__this->___m_CharacterController_24);
		NullCheck(L_9);
		Vector3_t8  L_10 = CharacterController_get_velocity_m678(L_9, /*hidden argument*/&CharacterController_get_velocity_m678_MethodInfo);
		Vector3_t8  L_11 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_10, (0.1f), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		ControllerColliderHit_t30 * L_12 = ___hit;
		NullCheck(L_12);
		Vector3_t8  L_13 = ControllerColliderHit_get_point_m688(L_12, /*hidden argument*/&ControllerColliderHit_get_point_m688_MethodInfo);
		NullCheck(L_8);
		Rigidbody_AddForceAtPosition_m689(L_8, L_11, L_13, 1, /*hidden argument*/&Rigidbody_AddForceAtPosition_m689_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Characters.FirstPerson.HeadBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HeadBob_t32_il2cpp_TypeInfo;
// UnityStandardAssets.Characters.FirstPerson.HeadBob
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_0MethodDeclarations.h"

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_4.h"
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_4MethodDeclarations.h"
extern MethodInfo RigidbodyFirstPersonController_get_Velocity_m58_MethodInfo;
extern MethodInfo RigidbodyFirstPersonController_get_Grounded_m59_MethodInfo;
extern MethodInfo RigidbodyFirstPersonController_get_Running_m61_MethodInfo;


// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::.ctor()
extern MethodInfo HeadBob__ctor_m47_MethodInfo;
extern "C" void HeadBob__ctor_m47 (HeadBob_t32 * __this, MethodInfo* method)
{
	{
		CurveControlledBob_t23 * L_0 = (CurveControlledBob_t23 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CurveControlledBob_t23_il2cpp_TypeInfo));
		CurveControlledBob__ctor_m290(L_0, /*hidden argument*/&CurveControlledBob__ctor_m290_MethodInfo);
		__this->___motionBob_3 = L_0;
		LerpControlledBob_t24 * L_1 = (LerpControlledBob_t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LerpControlledBob_t24_il2cpp_TypeInfo));
		LerpControlledBob__ctor_m337(L_1, /*hidden argument*/&LerpControlledBob__ctor_m337_MethodInfo);
		__this->___jumpAndLandingBob_4 = L_1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Start()
extern MethodInfo HeadBob_Start_m48_MethodInfo;
extern "C" void HeadBob_Start_m48 (HeadBob_t32 * __this, MethodInfo* method)
{
	{
		CurveControlledBob_t23 * L_0 = (__this->___motionBob_3);
		Camera_t19 * L_1 = (__this->___Camera_2);
		float L_2 = (__this->___StrideInterval_6);
		NullCheck(L_0);
		CurveControlledBob_Setup_m291(L_0, L_1, L_2, /*hidden argument*/&CurveControlledBob_Setup_m291_MethodInfo);
		Camera_t19 * L_3 = (__this->___Camera_2);
		NullCheck(L_3);
		Transform_t2 * L_4 = Component_get_transform_m598(L_3, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_localPosition_m632(L_4, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_OriginalCameraPosition_9 = L_5;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Update()
extern MethodInfo HeadBob_Update_m49_MethodInfo;
extern "C" void HeadBob_Update_m49 (HeadBob_t32 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	float G_B4_0 = 0.0f;
	CurveControlledBob_t23 * G_B4_1 = {0};
	Transform_t2 * G_B4_2 = {0};
	float G_B3_0 = 0.0f;
	CurveControlledBob_t23 * G_B3_1 = {0};
	Transform_t2 * G_B3_2 = {0};
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_t23 * G_B5_2 = {0};
	Transform_t2 * G_B5_3 = {0};
	{
		RigidbodyFirstPersonController_t31 * L_0 = (__this->___rigidbodyFirstPersonController_5);
		NullCheck(L_0);
		Vector3_t8  L_1 = RigidbodyFirstPersonController_get_Velocity_m58(L_0, /*hidden argument*/&RigidbodyFirstPersonController_get_Velocity_m58_MethodInfo);
		V_1 = L_1;
		float L_2 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		RigidbodyFirstPersonController_t31 * L_3 = (__this->___rigidbodyFirstPersonController_5);
		NullCheck(L_3);
		bool L_4 = RigidbodyFirstPersonController_get_Grounded_m59(L_3, /*hidden argument*/&RigidbodyFirstPersonController_get_Grounded_m59_MethodInfo);
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		Camera_t19 * L_5 = (__this->___Camera_2);
		NullCheck(L_5);
		Transform_t2 * L_6 = Component_get_transform_m598(L_5, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		CurveControlledBob_t23 * L_7 = (__this->___motionBob_3);
		RigidbodyFirstPersonController_t31 * L_8 = (__this->___rigidbodyFirstPersonController_5);
		NullCheck(L_8);
		Vector3_t8  L_9 = RigidbodyFirstPersonController_get_Velocity_m58(L_8, /*hidden argument*/&RigidbodyFirstPersonController_get_Velocity_m58_MethodInfo);
		V_2 = L_9;
		float L_10 = Vector3_get_magnitude_m591((&V_2), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		RigidbodyFirstPersonController_t31 * L_11 = (__this->___rigidbodyFirstPersonController_5);
		NullCheck(L_11);
		bool L_12 = RigidbodyFirstPersonController_get_Running_m61(L_11, /*hidden argument*/&RigidbodyFirstPersonController_get_Running_m61_MethodInfo);
		G_B3_0 = L_10;
		G_B3_1 = L_7;
		G_B3_2 = L_6;
		if (!L_12)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_7;
			G_B4_2 = L_6;
			goto IL_006c;
		}
	}
	{
		float L_13 = (__this->___RunningStrideLengthen_7);
		G_B5_0 = L_13;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0071;
	}

IL_006c:
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0071:
	{
		NullCheck(G_B5_2);
		Vector3_t8  L_14 = CurveControlledBob_DoHeadBob_m292(G_B5_2, ((float)((float)G_B5_1*(float)G_B5_0)), /*hidden argument*/&CurveControlledBob_DoHeadBob_m292_MethodInfo);
		NullCheck(G_B5_3);
		Transform_set_localPosition_m652(G_B5_3, L_14, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		Camera_t19 * L_15 = (__this->___Camera_2);
		NullCheck(L_15);
		Transform_t2 * L_16 = Component_get_transform_m598(L_15, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_16);
		Vector3_t8  L_17 = Transform_get_localPosition_m632(L_16, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_0 = L_17;
		Camera_t19 * L_18 = (__this->___Camera_2);
		NullCheck(L_18);
		Transform_t2 * L_19 = Component_get_transform_m598(L_18, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_19);
		Vector3_t8  L_20 = Transform_get_localPosition_m632(L_19, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_3 = L_20;
		float L_21 = ((&V_3)->___y_2);
		LerpControlledBob_t24 * L_22 = (__this->___jumpAndLandingBob_4);
		NullCheck(L_22);
		float L_23 = LerpControlledBob_Offset_m338(L_22, /*hidden argument*/&LerpControlledBob_Offset_m338_MethodInfo);
		(&V_0)->___y_2 = ((float)((float)L_21-(float)L_23));
		goto IL_00ec;
	}

IL_00bd:
	{
		Camera_t19 * L_24 = (__this->___Camera_2);
		NullCheck(L_24);
		Transform_t2 * L_25 = Component_get_transform_m598(L_24, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_25);
		Vector3_t8  L_26 = Transform_get_localPosition_m632(L_25, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_0 = L_26;
		Vector3_t8 * L_27 = &(__this->___m_OriginalCameraPosition_9);
		float L_28 = (L_27->___y_2);
		LerpControlledBob_t24 * L_29 = (__this->___jumpAndLandingBob_4);
		NullCheck(L_29);
		float L_30 = LerpControlledBob_Offset_m338(L_29, /*hidden argument*/&LerpControlledBob_Offset_m338_MethodInfo);
		(&V_0)->___y_2 = ((float)((float)L_28-(float)L_30));
	}

IL_00ec:
	{
		Camera_t19 * L_31 = (__this->___Camera_2);
		NullCheck(L_31);
		Transform_t2 * L_32 = Component_get_transform_m598(L_31, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_33 = V_0;
		NullCheck(L_32);
		Transform_set_localPosition_m652(L_32, L_33, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		bool L_34 = (__this->___m_PreviouslyGrounded_8);
		if (L_34)
		{
			goto IL_012a;
		}
	}
	{
		RigidbodyFirstPersonController_t31 * L_35 = (__this->___rigidbodyFirstPersonController_5);
		NullCheck(L_35);
		bool L_36 = RigidbodyFirstPersonController_get_Grounded_m59(L_35, /*hidden argument*/&RigidbodyFirstPersonController_get_Grounded_m59_MethodInfo);
		if (!L_36)
		{
			goto IL_012a;
		}
	}
	{
		LerpControlledBob_t24 * L_37 = (__this->___jumpAndLandingBob_4);
		NullCheck(L_37);
		Object_t * L_38 = LerpControlledBob_DoBobCycle_m339(L_37, /*hidden argument*/&LerpControlledBob_DoBobCycle_m339_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_38, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
	}

IL_012a:
	{
		RigidbodyFirstPersonController_t31 * L_39 = (__this->___rigidbodyFirstPersonController_5);
		NullCheck(L_39);
		bool L_40 = RigidbodyFirstPersonController_get_Grounded_m59(L_39, /*hidden argument*/&RigidbodyFirstPersonController_get_Grounded_m59_MethodInfo);
		__this->___m_PreviouslyGrounded_8 = L_40;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MouseLook_t21_il2cpp_TypeInfo;

extern TypeInfo Quaternion_t10_il2cpp_TypeInfo;
extern MethodInfo MouseLook_ClampRotationAroundXAxis_m53_MethodInfo;
extern MethodInfo Mathf_Atan_m692_MethodInfo;
extern MethodInfo Mathf_Tan_m693_MethodInfo;


// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern MethodInfo MouseLook__ctor_m50_MethodInfo;
extern "C" void MouseLook__ctor_m50 (MouseLook_t21 * __this, MethodInfo* method)
{
	{
		__this->___XSensitivity_0 = (2.0f);
		__this->___YSensitivity_1 = (2.0f);
		__this->___clampVerticalRotation_2 = 1;
		__this->___MinimumX_3 = (-90.0f);
		__this->___MaximumX_4 = (90.0f);
		__this->___smoothTime_6 = (5.0f);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_Init_m51 (MouseLook_t21 * __this, Transform_t2 * ___character, Transform_t2 * ___camera, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___character;
		NullCheck(L_0);
		Quaternion_t10  L_1 = Transform_get_localRotation_m611(L_0, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_CharacterTargetRot_7 = L_1;
		Transform_t2 * L_2 = ___camera;
		NullCheck(L_2);
		Quaternion_t10  L_3 = Transform_get_localRotation_m611(L_2, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_CameraTargetRot_8 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_LookRotation_m52 (MouseLook_t21 * __this, Transform_t2 * ___character, Transform_t2 * ___camera, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		float L_1 = (__this->___XSensitivity_0);
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral3, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		float L_3 = (__this->___YSensitivity_1);
		V_1 = ((float)((float)L_2*(float)L_3));
		Quaternion_t10  L_4 = (__this->___m_CharacterTargetRot_7);
		float L_5 = V_0;
		Quaternion_t10  L_6 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), L_5, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_7 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		__this->___m_CharacterTargetRot_7 = L_7;
		Quaternion_t10  L_8 = (__this->___m_CameraTargetRot_8);
		float L_9 = V_1;
		Quaternion_t10  L_10 = Quaternion_Euler_m614(NULL /*static, unused*/, ((-L_9)), (0.0f), (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_11 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		__this->___m_CameraTargetRot_8 = L_11;
		bool L_12 = (__this->___clampVerticalRotation_2);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Quaternion_t10  L_13 = (__this->___m_CameraTargetRot_8);
		Quaternion_t10  L_14 = MouseLook_ClampRotationAroundXAxis_m53(__this, L_13, /*hidden argument*/&MouseLook_ClampRotationAroundXAxis_m53_MethodInfo);
		__this->___m_CameraTargetRot_8 = L_14;
	}

IL_0084:
	{
		bool L_15 = (__this->___smooth_5);
		if (!L_15)
		{
			goto IL_00da;
		}
	}
	{
		Transform_t2 * L_16 = ___character;
		Transform_t2 * L_17 = ___character;
		NullCheck(L_17);
		Quaternion_t10  L_18 = Transform_get_localRotation_m611(L_17, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		Quaternion_t10  L_19 = (__this->___m_CharacterTargetRot_7);
		float L_20 = (__this->___smoothTime_6);
		float L_21 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_22 = Quaternion_Slerp_m617(NULL /*static, unused*/, L_18, L_19, ((float)((float)L_20*(float)L_21)), /*hidden argument*/&Quaternion_Slerp_m617_MethodInfo);
		NullCheck(L_16);
		Transform_set_localRotation_m618(L_16, L_22, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Transform_t2 * L_23 = ___camera;
		Transform_t2 * L_24 = ___camera;
		NullCheck(L_24);
		Quaternion_t10  L_25 = Transform_get_localRotation_m611(L_24, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		Quaternion_t10  L_26 = (__this->___m_CameraTargetRot_8);
		float L_27 = (__this->___smoothTime_6);
		float L_28 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_29 = Quaternion_Slerp_m617(NULL /*static, unused*/, L_25, L_26, ((float)((float)L_27*(float)L_28)), /*hidden argument*/&Quaternion_Slerp_m617_MethodInfo);
		NullCheck(L_23);
		Transform_set_localRotation_m618(L_23, L_29, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		goto IL_00f2;
	}

IL_00da:
	{
		Transform_t2 * L_30 = ___character;
		Quaternion_t10  L_31 = (__this->___m_CharacterTargetRot_7);
		NullCheck(L_30);
		Transform_set_localRotation_m618(L_30, L_31, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Transform_t2 * L_32 = ___camera;
		Quaternion_t10  L_33 = (__this->___m_CameraTargetRot_8);
		NullCheck(L_32);
		Transform_set_localRotation_m618(L_32, L_33, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
	}

IL_00f2:
	{
		return;
	}
}
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C" Quaternion_t10  MouseLook_ClampRotationAroundXAxis_m53 (MouseLook_t21 * __this, Quaternion_t10  ___q, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Quaternion_t10 * L_0 = (&___q);
		float L_1 = (L_0->___x_1);
		float L_2 = ((&___q)->___w_4);
		L_0->___x_1 = ((float)((float)L_1/(float)L_2));
		Quaternion_t10 * L_3 = (&___q);
		float L_4 = (L_3->___y_2);
		float L_5 = ((&___q)->___w_4);
		L_3->___y_2 = ((float)((float)L_4/(float)L_5));
		Quaternion_t10 * L_6 = (&___q);
		float L_7 = (L_6->___z_3);
		float L_8 = ((&___q)->___w_4);
		L_6->___z_3 = ((float)((float)L_7/(float)L_8));
		(&___q)->___w_4 = (1.0f);
		float L_9 = ((&___q)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_10 = atanf(L_9);
		V_0 = ((float)((float)(114.59156f)*(float)L_10));
		float L_11 = V_0;
		float L_12 = (__this->___MinimumX_3);
		float L_13 = (__this->___MaximumX_4);
		float L_14 = Mathf_Clamp_m616(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_0 = L_14;
		float L_15 = V_0;
		float L_16 = tanf(((float)((float)(0.008726646f)*(float)L_15)));
		(&___q)->___x_1 = L_16;
		Quaternion_t10  L_17 = ___q;
		return L_17;
	}
}
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MovementSettings_t34_il2cpp_TypeInfo;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_2MethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
extern TypeInfo KeyframeU5BU5D_t196_il2cpp_TypeInfo;
extern TypeInfo Keyframe_t197_il2cpp_TypeInfo;
extern TypeInfo AnimationCurve_t33_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern Il2CppType KeyframeU5BU5D_t196_0_0_0;
extern MethodInfo Keyframe__ctor_m694_MethodInfo;
extern MethodInfo AnimationCurve__ctor_m695_MethodInfo;
extern MethodInfo Vector2_get_zero_m696_MethodInfo;
extern MethodInfo Vector2_op_Equality_m697_MethodInfo;


// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
extern MethodInfo MovementSettings__ctor_m54_MethodInfo;
extern TypeInfo* KeyframeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" void MovementSettings__ctor_m54 (MovementSettings_t34 * __this, MethodInfo* method)
{
	static bool MovementSettings__ctor_m54_init;
	if (!MovementSettings__ctor_m54_init)
	{
		KeyframeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&KeyframeU5BU5D_t196_0_0_0);
		MovementSettings__ctor_m54_init = true;
	}
	{
		__this->___ForwardSpeed_0 = (8.0f);
		__this->___BackwardSpeed_1 = (4.0f);
		__this->___StrafeSpeed_2 = (4.0f);
		__this->___RunMultiplier_3 = (2.0f);
		__this->___RunKey_4 = ((int32_t)304);
		__this->___JumpForce_5 = (30.0f);
		KeyframeU5BU5D_t196* L_0 = ((KeyframeU5BU5D_t196*)SZArrayNew(KeyframeU5BU5D_t196_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t197  L_1 = {0};
		Keyframe__ctor_m694(&L_1, (-90.0f), (1.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_0, 0)) = L_1;
		KeyframeU5BU5D_t196* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t197  L_3 = {0};
		Keyframe__ctor_m694(&L_3, (0.0f), (1.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_2, 1)) = L_3;
		KeyframeU5BU5D_t196* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Keyframe_t197  L_5 = {0};
		Keyframe__ctor_m694(&L_5, (90.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_4, 2)) = L_5;
		AnimationCurve_t33 * L_6 = (AnimationCurve_t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnimationCurve_t33_il2cpp_TypeInfo));
		AnimationCurve__ctor_m695(L_6, L_4, /*hidden argument*/&AnimationCurve__ctor_m695_MethodInfo);
		__this->___SlopeCurveModifier_6 = L_6;
		__this->___CurrentTargetSpeed_7 = (8.0f);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
extern MethodInfo MovementSettings_UpdateDesiredTargetSpeed_m55_MethodInfo;
extern "C" void MovementSettings_UpdateDesiredTargetSpeed_m55 (MovementSettings_t34 * __this, Vector2_t13  ___input, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = ___input;
		Vector2_t13  L_1 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		bool L_2 = Vector2_op_Equality_m697(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector2_op_Equality_m697_MethodInfo);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		float L_3 = ((&___input)->___x_1);
		if ((((float)L_3) > ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		float L_4 = ((&___input)->___x_1);
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		float L_5 = (__this->___StrafeSpeed_2);
		__this->___CurrentTargetSpeed_7 = L_5;
	}

IL_003f:
	{
		float L_6 = ((&___input)->___y_2);
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		float L_7 = (__this->___BackwardSpeed_1);
		__this->___CurrentTargetSpeed_7 = L_7;
	}

IL_005c:
	{
		float L_8 = ((&___input)->___y_2);
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		float L_9 = (__this->___ForwardSpeed_0);
		__this->___CurrentTargetSpeed_7 = L_9;
	}

IL_0079:
	{
		return;
	}
}
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AdvancedSettings_t35_il2cpp_TypeInfo;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_3MethodDeclarations.h"



// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
extern MethodInfo AdvancedSettings__ctor_m56_MethodInfo;
extern "C" void AdvancedSettings__ctor_m56 (AdvancedSettings_t35 * __this, MethodInfo* method)
{
	{
		__this->___groundCheckDistance_0 = (0.01f);
		__this->___stickToGroundHelperDistance_1 = (0.5f);
		__this->___slowDownRate_2 = (20.0f);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RigidbodyFirstPersonController_t31_il2cpp_TypeInfo;

// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleCollider.h"
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleColliderMethodDeclarations.h"
extern MethodInfo RigidbodyFirstPersonController_RotateView_m68_MethodInfo;
extern MethodInfo RigidbodyFirstPersonController_GroundCheck_m69_MethodInfo;
extern MethodInfo RigidbodyFirstPersonController_GetInput_m67_MethodInfo;
extern MethodInfo RigidbodyFirstPersonController_SlopeMultiplier_m65_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m698_MethodInfo;
extern MethodInfo Rigidbody_set_drag_m699_MethodInfo;
extern MethodInfo Vector3__ctor_m700_MethodInfo;
extern MethodInfo Rigidbody_set_velocity_m701_MethodInfo;
extern MethodInfo Rigidbody_Sleep_m702_MethodInfo;
extern MethodInfo RigidbodyFirstPersonController_StickToGroundHelper_m66_MethodInfo;
extern MethodInfo Vector3_Angle_m703_MethodInfo;
extern MethodInfo AnimationCurve_Evaluate_m704_MethodInfo;
extern MethodInfo CapsuleCollider_get_radius_m705_MethodInfo;
extern MethodInfo CapsuleCollider_get_height_m706_MethodInfo;
extern MethodInfo Transform_get_eulerAngles_m707_MethodInfo;
extern MethodInfo Quaternion_AngleAxis_m708_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m709_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.CapsuleCollider>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
#define Component_GetComponent_TisCapsuleCollider_t36_m710(__this, method) (( CapsuleCollider_t36 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisCapsuleCollider_t36_m710_GenericMethod;


// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::.ctor()
extern MethodInfo RigidbodyFirstPersonController__ctor_m57_MethodInfo;
extern "C" void RigidbodyFirstPersonController__ctor_m57 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	{
		MovementSettings_t34 * L_0 = (MovementSettings_t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MovementSettings_t34_il2cpp_TypeInfo));
		MovementSettings__ctor_m54(L_0, /*hidden argument*/&MovementSettings__ctor_m54_MethodInfo);
		__this->___movementSettings_3 = L_0;
		MouseLook_t21 * L_1 = (MouseLook_t21 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MouseLook_t21_il2cpp_TypeInfo));
		MouseLook__ctor_m50(L_1, /*hidden argument*/&MouseLook__ctor_m50_MethodInfo);
		__this->___mouseLook_4 = L_1;
		AdvancedSettings_t35 * L_2 = (AdvancedSettings_t35 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AdvancedSettings_t35_il2cpp_TypeInfo));
		AdvancedSettings__ctor_m56(L_2, /*hidden argument*/&AdvancedSettings__ctor_m56_MethodInfo);
		__this->___advancedSettings_5 = L_2;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
extern "C" Vector3_t8  RigidbodyFirstPersonController_get_Velocity_m58 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	{
		Rigidbody_t3 * L_0 = (__this->___m_RigidBody_6);
		NullCheck(L_0);
		Vector3_t8  L_1 = Rigidbody_get_velocity_m590(L_0, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
extern "C" bool RigidbodyFirstPersonController_get_Grounded_m59 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsGrounded_13);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Jumping()
extern MethodInfo RigidbodyFirstPersonController_get_Jumping_m60_MethodInfo;
extern "C" bool RigidbodyFirstPersonController_get_Jumping_m60 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Jumping_12);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
extern "C" bool RigidbodyFirstPersonController_get_Running_m61 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Start()
extern MethodInfo RigidbodyFirstPersonController_Start_m62_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisCapsuleCollider_t36_m710_MethodInfo_var;
extern "C" void RigidbodyFirstPersonController_Start_m62 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	static bool RigidbodyFirstPersonController_Start_m62_init;
	if (!RigidbodyFirstPersonController_Start_m62_init)
	{
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		Component_GetComponent_TisCapsuleCollider_t36_m710_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCapsuleCollider_t36_m710_GenericMethod);
		RigidbodyFirstPersonController_Start_m62_init = true;
	}
	{
		Rigidbody_t3 * L_0 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_RigidBody_6 = L_0;
		CapsuleCollider_t36 * L_1 = Component_GetComponent_TisCapsuleCollider_t36_m710(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t36_m710_MethodInfo_var);
		__this->___m_Capsule_7 = L_1;
		MouseLook_t21 * L_2 = (__this->___mouseLook_4);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_4 = (__this->___cam_2);
		NullCheck(L_4);
		Transform_t2 * L_5 = Component_get_transform_m598(L_4, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		MouseLook_Init_m51(L_2, L_3, L_5, /*hidden argument*/&MouseLook_Init_m51_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Update()
extern MethodInfo RigidbodyFirstPersonController_Update_m63_MethodInfo;
extern "C" void RigidbodyFirstPersonController_Update_m63 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	{
		RigidbodyFirstPersonController_RotateView_m68(__this, /*hidden argument*/&RigidbodyFirstPersonController_RotateView_m68_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_0 = CrossPlatformInputManager_GetButtonDown_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&CrossPlatformInputManager_GetButtonDown_m149_MethodInfo);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___m_Jump_10);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		__this->___m_Jump_10 = 1;
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::FixedUpdate()
extern MethodInfo RigidbodyFirstPersonController_FixedUpdate_m64_MethodInfo;
extern "C" void RigidbodyFirstPersonController_FixedUpdate_m64 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	Vector3_t8  V_5 = {0};
	Vector3_t8  V_6 = {0};
	{
		RigidbodyFirstPersonController_GroundCheck_m69(__this, /*hidden argument*/&RigidbodyFirstPersonController_GroundCheck_m69_MethodInfo);
		Vector2_t13  L_0 = RigidbodyFirstPersonController_GetInput_m67(__this, /*hidden argument*/&RigidbodyFirstPersonController_GetInput_m67_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_2 = fabsf(L_1);
		if ((((float)L_2) > ((float)(1.401298E-45f))))
		{
			goto IL_0039;
		}
	}
	{
		float L_3 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_4 = fabsf(L_3);
		if ((!(((float)L_4) > ((float)(1.401298E-45f)))))
		{
			goto IL_013c;
		}
	}

IL_0039:
	{
		AdvancedSettings_t35 * L_5 = (__this->___advancedSettings_5);
		NullCheck(L_5);
		bool L_6 = (L_5->___airControl_3);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		bool L_7 = (__this->___m_IsGrounded_13);
		if (!L_7)
		{
			goto IL_013c;
		}
	}

IL_0054:
	{
		Camera_t19 * L_8 = (__this->___cam_2);
		NullCheck(L_8);
		Transform_t2 * L_9 = Component_get_transform_m598(L_8, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_forward_m587(L_9, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		float L_11 = ((&V_0)->___y_2);
		Vector3_t8  L_12 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Camera_t19 * L_13 = (__this->___cam_2);
		NullCheck(L_13);
		Transform_t2 * L_14 = Component_get_transform_m598(L_13, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_14);
		Vector3_t8  L_15 = Transform_get_right_m668(L_14, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		float L_16 = ((&V_0)->___x_1);
		Vector3_t8  L_17 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_18 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_1 = L_18;
		Vector3_t8  L_19 = V_1;
		Vector3_t8  L_20 = (__this->___m_GroundContactNormal_9);
		Vector3_t8  L_21 = Vector3_ProjectOnPlane_m674(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Vector3_ProjectOnPlane_m674_MethodInfo);
		V_2 = L_21;
		Vector3_t8  L_22 = Vector3_get_normalized_m592((&V_2), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		V_1 = L_22;
		float L_23 = ((&V_1)->___x_1);
		MovementSettings_t34 * L_24 = (__this->___movementSettings_3);
		NullCheck(L_24);
		float L_25 = (L_24->___CurrentTargetSpeed_7);
		(&V_1)->___x_1 = ((float)((float)L_23*(float)L_25));
		float L_26 = ((&V_1)->___z_3);
		MovementSettings_t34 * L_27 = (__this->___movementSettings_3);
		NullCheck(L_27);
		float L_28 = (L_27->___CurrentTargetSpeed_7);
		(&V_1)->___z_3 = ((float)((float)L_26*(float)L_28));
		float L_29 = ((&V_1)->___y_2);
		MovementSettings_t34 * L_30 = (__this->___movementSettings_3);
		NullCheck(L_30);
		float L_31 = (L_30->___CurrentTargetSpeed_7);
		(&V_1)->___y_2 = ((float)((float)L_29*(float)L_31));
		Rigidbody_t3 * L_32 = (__this->___m_RigidBody_6);
		NullCheck(L_32);
		Vector3_t8  L_33 = Rigidbody_get_velocity_m590(L_32, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_3 = L_33;
		float L_34 = Vector3_get_sqrMagnitude_m602((&V_3), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		MovementSettings_t34 * L_35 = (__this->___movementSettings_3);
		NullCheck(L_35);
		float L_36 = (L_35->___CurrentTargetSpeed_7);
		MovementSettings_t34 * L_37 = (__this->___movementSettings_3);
		NullCheck(L_37);
		float L_38 = (L_37->___CurrentTargetSpeed_7);
		if ((!(((float)L_34) < ((float)((float)((float)L_36*(float)L_38))))))
		{
			goto IL_013c;
		}
	}
	{
		Rigidbody_t3 * L_39 = (__this->___m_RigidBody_6);
		Vector3_t8  L_40 = V_1;
		float L_41 = RigidbodyFirstPersonController_SlopeMultiplier_m65(__this, /*hidden argument*/&RigidbodyFirstPersonController_SlopeMultiplier_m65_MethodInfo);
		Vector3_t8  L_42 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_39);
		Rigidbody_AddForce_m698(L_39, L_42, 1, /*hidden argument*/&Rigidbody_AddForce_m698_MethodInfo);
	}

IL_013c:
	{
		bool L_43 = (__this->___m_IsGrounded_13);
		if (!L_43)
		{
			goto IL_0241;
		}
	}
	{
		Rigidbody_t3 * L_44 = (__this->___m_RigidBody_6);
		NullCheck(L_44);
		Rigidbody_set_drag_m699(L_44, (5.0f), /*hidden argument*/&Rigidbody_set_drag_m699_MethodInfo);
		bool L_45 = (__this->___m_Jump_10);
		if (!L_45)
		{
			goto IL_01dc;
		}
	}
	{
		Rigidbody_t3 * L_46 = (__this->___m_RigidBody_6);
		NullCheck(L_46);
		Rigidbody_set_drag_m699(L_46, (0.0f), /*hidden argument*/&Rigidbody_set_drag_m699_MethodInfo);
		Rigidbody_t3 * L_47 = (__this->___m_RigidBody_6);
		Rigidbody_t3 * L_48 = (__this->___m_RigidBody_6);
		NullCheck(L_48);
		Vector3_t8  L_49 = Rigidbody_get_velocity_m590(L_48, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_4 = L_49;
		float L_50 = ((&V_4)->___x_1);
		Rigidbody_t3 * L_51 = (__this->___m_RigidBody_6);
		NullCheck(L_51);
		Vector3_t8  L_52 = Rigidbody_get_velocity_m590(L_51, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_5 = L_52;
		float L_53 = ((&V_5)->___z_3);
		Vector3_t8  L_54 = {0};
		Vector3__ctor_m700(&L_54, L_50, (0.0f), L_53, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_47);
		Rigidbody_set_velocity_m701(L_47, L_54, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
		Rigidbody_t3 * L_55 = (__this->___m_RigidBody_6);
		MovementSettings_t34 * L_56 = (__this->___movementSettings_3);
		NullCheck(L_56);
		float L_57 = (L_56->___JumpForce_5);
		Vector3_t8  L_58 = {0};
		Vector3__ctor_m700(&L_58, (0.0f), L_57, (0.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_55);
		Rigidbody_AddForce_m698(L_55, L_58, 1, /*hidden argument*/&Rigidbody_AddForce_m698_MethodInfo);
		__this->___m_Jumping_12 = 1;
	}

IL_01dc:
	{
		bool L_59 = (__this->___m_Jumping_12);
		if (L_59)
		{
			goto IL_023c;
		}
	}
	{
		float L_60 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_61 = fabsf(L_60);
		if ((!(((float)L_61) < ((float)(1.401298E-45f)))))
		{
			goto IL_023c;
		}
	}
	{
		float L_62 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_63 = fabsf(L_62);
		if ((!(((float)L_63) < ((float)(1.401298E-45f)))))
		{
			goto IL_023c;
		}
	}
	{
		Rigidbody_t3 * L_64 = (__this->___m_RigidBody_6);
		NullCheck(L_64);
		Vector3_t8  L_65 = Rigidbody_get_velocity_m590(L_64, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_6 = L_65;
		float L_66 = Vector3_get_magnitude_m591((&V_6), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		if ((!(((float)L_66) < ((float)(1.0f)))))
		{
			goto IL_023c;
		}
	}
	{
		Rigidbody_t3 * L_67 = (__this->___m_RigidBody_6);
		NullCheck(L_67);
		Rigidbody_Sleep_m702(L_67, /*hidden argument*/&Rigidbody_Sleep_m702_MethodInfo);
	}

IL_023c:
	{
		goto IL_026d;
	}

IL_0241:
	{
		Rigidbody_t3 * L_68 = (__this->___m_RigidBody_6);
		NullCheck(L_68);
		Rigidbody_set_drag_m699(L_68, (0.0f), /*hidden argument*/&Rigidbody_set_drag_m699_MethodInfo);
		bool L_69 = (__this->___m_PreviouslyGrounded_11);
		if (!L_69)
		{
			goto IL_026d;
		}
	}
	{
		bool L_70 = (__this->___m_Jumping_12);
		if (L_70)
		{
			goto IL_026d;
		}
	}
	{
		RigidbodyFirstPersonController_StickToGroundHelper_m66(__this, /*hidden argument*/&RigidbodyFirstPersonController_StickToGroundHelper_m66_MethodInfo);
	}

IL_026d:
	{
		__this->___m_Jump_10 = 0;
		return;
	}
}
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
extern "C" float RigidbodyFirstPersonController_SlopeMultiplier_m65 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t8  L_0 = (__this->___m_GroundContactNormal_9);
		Vector3_t8  L_1 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		float L_2 = Vector3_Angle_m703(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Angle_m703_MethodInfo);
		V_0 = L_2;
		MovementSettings_t34 * L_3 = (__this->___movementSettings_3);
		NullCheck(L_3);
		AnimationCurve_t33 * L_4 = (L_3->___SlopeCurveModifier_6);
		float L_5 = V_0;
		NullCheck(L_4);
		float L_6 = AnimationCurve_Evaluate_m704(L_4, L_5, /*hidden argument*/&AnimationCurve_Evaluate_m704_MethodInfo);
		return L_6;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
extern "C" void RigidbodyFirstPersonController_StickToGroundHelper_m66 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	RaycastHit_t16  V_0 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		CapsuleCollider_t36 * L_2 = (__this->___m_Capsule_7);
		NullCheck(L_2);
		float L_3 = CapsuleCollider_get_radius_m705(L_2, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		Vector3_t8  L_4 = Vector3_get_down_m670(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_down_m670_MethodInfo);
		CapsuleCollider_t36 * L_5 = (__this->___m_Capsule_7);
		NullCheck(L_5);
		float L_6 = CapsuleCollider_get_height_m706(L_5, /*hidden argument*/&CapsuleCollider_get_height_m706_MethodInfo);
		CapsuleCollider_t36 * L_7 = (__this->___m_Capsule_7);
		NullCheck(L_7);
		float L_8 = CapsuleCollider_get_radius_m705(L_7, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		AdvancedSettings_t35 * L_9 = (__this->___advancedSettings_5);
		NullCheck(L_9);
		float L_10 = (L_9->___stickToGroundHelperDistance_1);
		bool L_11 = Physics_SphereCast_m672(NULL /*static, unused*/, L_1, L_3, L_4, (&V_0), ((float)((float)((float)((float)((float)((float)L_6/(float)(2.0f)))-(float)L_8))+(float)L_10)), /*hidden argument*/&Physics_SphereCast_m672_MethodInfo);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		Vector3_t8  L_12 = RaycastHit_get_normal_m673((&V_0), /*hidden argument*/&RaycastHit_get_normal_m673_MethodInfo);
		Vector3_t8  L_13 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		float L_14 = Vector3_Angle_m703(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Vector3_Angle_m703_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_15 = fabsf(L_14);
		if ((!(((float)L_15) < ((float)(85.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		Rigidbody_t3 * L_16 = (__this->___m_RigidBody_6);
		Rigidbody_t3 * L_17 = (__this->___m_RigidBody_6);
		NullCheck(L_17);
		Vector3_t8  L_18 = Rigidbody_get_velocity_m590(L_17, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		Vector3_t8  L_19 = RaycastHit_get_normal_m673((&V_0), /*hidden argument*/&RaycastHit_get_normal_m673_MethodInfo);
		Vector3_t8  L_20 = Vector3_ProjectOnPlane_m674(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_ProjectOnPlane_m674_MethodInfo);
		NullCheck(L_16);
		Rigidbody_set_velocity_m701(L_16, L_20, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
	}

IL_0092:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
extern "C" Vector2_t13  RigidbodyFirstPersonController_GetInput_m67 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	Vector2_t13  V_1 = {0};
	{
		Initobj (InitializedTypeInfo(&Vector2_t13_il2cpp_TypeInfo), (&V_0));
		Vector2_t13  L_0 = V_0;
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		(&V_1)->___x_1 = L_1;
		float L_2 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		(&V_1)->___y_2 = L_2;
		Vector2_t13  L_3 = V_1;
		V_0 = L_3;
		MovementSettings_t34 * L_4 = (__this->___movementSettings_3);
		Vector2_t13  L_5 = V_0;
		NullCheck(L_4);
		MovementSettings_UpdateDesiredTargetSpeed_m55(L_4, L_5, /*hidden argument*/&MovementSettings_UpdateDesiredTargetSpeed_m55_MethodInfo);
		Vector2_t13  L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
extern "C" void RigidbodyFirstPersonController_RotateView_m68 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Quaternion_t10  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	{
		float L_0 = Time_get_timeScale_m613(NULL /*static, unused*/, /*hidden argument*/&Time_get_timeScale_m613_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(1.401298E-45f)))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_eulerAngles_m707(L_2, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_2 = L_3;
		float L_4 = ((&V_2)->___y_2);
		V_0 = L_4;
		MouseLook_t21 * L_5 = (__this->___mouseLook_4);
		Transform_t2 * L_6 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_7 = (__this->___cam_2);
		NullCheck(L_7);
		Transform_t2 * L_8 = Component_get_transform_m598(L_7, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_5);
		MouseLook_LookRotation_m52(L_5, L_6, L_8, /*hidden argument*/&MouseLook_LookRotation_m52_MethodInfo);
		bool L_9 = (__this->___m_IsGrounded_13);
		if (L_9)
		{
			goto IL_0060;
		}
	}
	{
		AdvancedSettings_t35 * L_10 = (__this->___advancedSettings_5);
		NullCheck(L_10);
		bool L_11 = (L_10->___airControl_3);
		if (!L_11)
		{
			goto IL_009c;
		}
	}

IL_0060:
	{
		Transform_t2 * L_12 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_12);
		Vector3_t8  L_13 = Transform_get_eulerAngles_m707(L_12, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_3 = L_13;
		float L_14 = ((&V_3)->___y_2);
		float L_15 = V_0;
		Vector3_t8  L_16 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Quaternion_t10  L_17 = Quaternion_AngleAxis_m708(NULL /*static, unused*/, ((float)((float)L_14-(float)L_15)), L_16, /*hidden argument*/&Quaternion_AngleAxis_m708_MethodInfo);
		V_1 = L_17;
		Rigidbody_t3 * L_18 = (__this->___m_RigidBody_6);
		Quaternion_t10  L_19 = V_1;
		Rigidbody_t3 * L_20 = (__this->___m_RigidBody_6);
		NullCheck(L_20);
		Vector3_t8  L_21 = Rigidbody_get_velocity_m590(L_20, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		Vector3_t8  L_22 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		NullCheck(L_18);
		Rigidbody_set_velocity_m701(L_18, L_22, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
	}

IL_009c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
extern "C" void RigidbodyFirstPersonController_GroundCheck_m69 (RigidbodyFirstPersonController_t31 * __this, MethodInfo* method)
{
	RaycastHit_t16  V_0 = {0};
	{
		bool L_0 = (__this->___m_IsGrounded_13);
		__this->___m_PreviouslyGrounded_11 = L_0;
		Transform_t2 * L_1 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m599(L_1, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		CapsuleCollider_t36 * L_3 = (__this->___m_Capsule_7);
		NullCheck(L_3);
		float L_4 = CapsuleCollider_get_radius_m705(L_3, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		Vector3_t8  L_5 = Vector3_get_down_m670(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_down_m670_MethodInfo);
		CapsuleCollider_t36 * L_6 = (__this->___m_Capsule_7);
		NullCheck(L_6);
		float L_7 = CapsuleCollider_get_height_m706(L_6, /*hidden argument*/&CapsuleCollider_get_height_m706_MethodInfo);
		CapsuleCollider_t36 * L_8 = (__this->___m_Capsule_7);
		NullCheck(L_8);
		float L_9 = CapsuleCollider_get_radius_m705(L_8, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		AdvancedSettings_t35 * L_10 = (__this->___advancedSettings_5);
		NullCheck(L_10);
		float L_11 = (L_10->___groundCheckDistance_0);
		bool L_12 = Physics_SphereCast_m672(NULL /*static, unused*/, L_2, L_4, L_5, (&V_0), ((float)((float)((float)((float)((float)((float)L_7/(float)(2.0f)))-(float)L_9))+(float)L_11)), /*hidden argument*/&Physics_SphereCast_m672_MethodInfo);
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		__this->___m_IsGrounded_13 = 1;
		Vector3_t8  L_13 = RaycastHit_get_normal_m673((&V_0), /*hidden argument*/&RaycastHit_get_normal_m673_MethodInfo);
		__this->___m_GroundContactNormal_9 = L_13;
		goto IL_0087;
	}

IL_0075:
	{
		__this->___m_IsGrounded_13 = 0;
		Vector3_t8  L_14 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		__this->___m_GroundContactNormal_9 = L_14;
	}

IL_0087:
	{
		bool L_15 = (__this->___m_PreviouslyGrounded_11);
		if (L_15)
		{
			goto IL_00af;
		}
	}
	{
		bool L_16 = (__this->___m_IsGrounded_13);
		if (!L_16)
		{
			goto IL_00af;
		}
	}
	{
		bool L_17 = (__this->___m_Jumping_12);
		if (!L_17)
		{
			goto IL_00af;
		}
	}
	{
		__this->___m_Jumping_12 = 0;
	}

IL_00af:
	{
		return;
	}
}
// UnityStandardAssets.Vehicles.Ball.Ball
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_B.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Ball_t37_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Ball.Ball
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_BMethodDeclarations.h"

extern MethodInfo Rigidbody_set_maxAngularVelocity_m711_MethodInfo;
extern MethodInfo Rigidbody_AddTorque_m712_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m713_MethodInfo;
extern MethodInfo Physics_Raycast_m714_MethodInfo;


// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
extern MethodInfo Ball__ctor_m70_MethodInfo;
extern "C" void Ball__ctor_m70 (Ball_t37 * __this, MethodInfo* method)
{
	{
		__this->___m_MovePower_3 = (5.0f);
		__this->___m_UseTorque_4 = 1;
		__this->___m_MaxAngularVelocity_5 = (25.0f);
		__this->___m_JumpPower_6 = (2.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
extern MethodInfo Ball_Start_m71_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void Ball_Start_m71 (Ball_t37 * __this, MethodInfo* method)
{
	static bool Ball_Start_m71_init;
	if (!Ball_Start_m71_init)
	{
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		Ball_Start_m71_init = true;
	}
	{
		Rigidbody_t3 * L_0 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_7 = L_0;
		Rigidbody_t3 * L_1 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		float L_2 = (__this->___m_MaxAngularVelocity_5);
		NullCheck(L_1);
		Rigidbody_set_maxAngularVelocity_m711(L_1, L_2, /*hidden argument*/&Rigidbody_set_maxAngularVelocity_m711_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern MethodInfo Ball_Move_m72_MethodInfo;
extern "C" void Ball_Move_m72 (Ball_t37 * __this, Vector3_t8  ___moveDirection, bool ___jump, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseTorque_4);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		Rigidbody_t3 * L_1 = (__this->___m_Rigidbody_7);
		float L_2 = ((&___moveDirection)->___z_3);
		float L_3 = ((&___moveDirection)->___x_1);
		Vector3_t8  L_4 = {0};
		Vector3__ctor_m700(&L_4, L_2, (0.0f), ((-L_3)), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		float L_5 = (__this->___m_MovePower_3);
		Vector3_t8  L_6 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_1);
		Rigidbody_AddTorque_m712(L_1, L_6, /*hidden argument*/&Rigidbody_AddTorque_m712_MethodInfo);
		goto IL_0056;
	}

IL_003f:
	{
		Rigidbody_t3 * L_7 = (__this->___m_Rigidbody_7);
		Vector3_t8  L_8 = ___moveDirection;
		float L_9 = (__this->___m_MovePower_3);
		Vector3_t8  L_10 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_7);
		Rigidbody_AddForce_m713(L_7, L_10, /*hidden argument*/&Rigidbody_AddForce_m713_MethodInfo);
	}

IL_0056:
	{
		Transform_t2 * L_11 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_11);
		Vector3_t8  L_12 = Transform_get_position_m599(L_11, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_13 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_14 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_13, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		bool L_15 = Physics_Raycast_m714(NULL /*static, unused*/, L_12, L_14, (1.0f), /*hidden argument*/&Physics_Raycast_m714_MethodInfo);
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		bool L_16 = ___jump;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		Rigidbody_t3 * L_17 = (__this->___m_Rigidbody_7);
		Vector3_t8  L_18 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		float L_19 = (__this->___m_JumpPower_6);
		Vector3_t8  L_20 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_17);
		Rigidbody_AddForce_m698(L_17, L_20, 1, /*hidden argument*/&Rigidbody_AddForce_m698_MethodInfo);
	}

IL_009c:
	{
		return;
	}
}
// UnityStandardAssets.Vehicles.Ball.BallUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_B_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BallUserControl_t38_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_B_0MethodDeclarations.h"

extern MethodInfo Debug_LogWarning_m715_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetButton_m148_MethodInfo;
extern MethodInfo Vector3_Scale_m716_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m717_MethodInfo;
extern MethodInfo Vector3_get_right_m718_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Ball.Ball>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
#define Component_GetComponent_TisBall_t37_m719(__this, method) (( Ball_t37 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisBall_t37_m719_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::.ctor()
extern MethodInfo BallUserControl__ctor_m73_MethodInfo;
extern "C" void BallUserControl__ctor_m73 (BallUserControl_t38 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Awake()
extern MethodInfo BallUserControl_Awake_m74_MethodInfo;
extern MethodInfo* Component_GetComponent_TisBall_t37_m719_MethodInfo_var;
extern "C" void BallUserControl_Awake_m74 (BallUserControl_t38 * __this, MethodInfo* method)
{
	static bool BallUserControl_Awake_m74_init;
	if (!BallUserControl_Awake_m74_init)
	{
		Component_GetComponent_TisBall_t37_m719_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisBall_t37_m719_GenericMethod);
		BallUserControl_Awake_m74_init = true;
	}
	{
		Ball_t37 * L_0 = Component_GetComponent_TisBall_t37_m719(__this, /*hidden argument*/Component_GetComponent_TisBall_t37_m719_MethodInfo_var);
		__this->___ball_2 = L_0;
		Camera_t19 * L_1 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		bool L_2 = Object_op_Inequality_m642(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Camera_t19 * L_3 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		NullCheck(L_3);
		Transform_t2 * L_4 = Component_get_transform_m598(L_3, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___cam_4 = L_4;
		goto IL_003b;
	}

IL_0031:
	{
		Debug_LogWarning_m715(NULL /*static, unused*/, (String_t*) &_stringLiteral7, /*hidden argument*/&Debug_LogWarning_m715_MethodInfo);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Update()
extern MethodInfo BallUserControl_Update_m75_MethodInfo;
extern "C" void BallUserControl_Update_m75 (BallUserControl_t38 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m148(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&CrossPlatformInputManager_GetButton_m148_MethodInfo);
		__this->___jump_6 = L_2;
		Transform_t2 * L_3 = (__this->___cam_4);
		bool L_4 = Object_op_Inequality_m642(NULL /*static, unused*/, L_3, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_4)
		{
			goto IL_009e;
		}
	}
	{
		Transform_t2 * L_5 = (__this->___cam_4);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_forward_m587(L_5, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_7 = {0};
		Vector3__ctor_m700(&L_7, (1.0f), (0.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		Vector3_t8  L_8 = Vector3_Scale_m716(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector3_Scale_m716_MethodInfo);
		V_2 = L_8;
		Vector3_t8  L_9 = Vector3_get_normalized_m592((&V_2), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		__this->___camForward_5 = L_9;
		float L_10 = V_1;
		Vector3_t8  L_11 = (__this->___camForward_5);
		Vector3_t8  L_12 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		float L_13 = V_0;
		Transform_t2 * L_14 = (__this->___cam_4);
		NullCheck(L_14);
		Vector3_t8  L_15 = Transform_get_right_m668(L_14, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_17 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_3 = L_17;
		Vector3_t8  L_18 = Vector3_get_normalized_m592((&V_3), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		__this->___move_3 = L_18;
		goto IL_00c8;
	}

IL_009e:
	{
		float L_19 = V_1;
		Vector3_t8  L_20 = Vector3_get_forward_m651(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m651_MethodInfo);
		Vector3_t8  L_21 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		float L_22 = V_0;
		Vector3_t8  L_23 = Vector3_get_right_m718(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m718_MethodInfo);
		Vector3_t8  L_24 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_25 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_4 = L_25;
		Vector3_t8  L_26 = Vector3_get_normalized_m592((&V_4), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		__this->___move_3 = L_26;
	}

IL_00c8:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::FixedUpdate()
extern MethodInfo BallUserControl_FixedUpdate_m76_MethodInfo;
extern "C" void BallUserControl_FixedUpdate_m76 (BallUserControl_t38 * __this, MethodInfo* method)
{
	{
		Ball_t37 * L_0 = (__this->___ball_2);
		Vector3_t8  L_1 = (__this->___move_3);
		bool L_2 = (__this->___jump_6);
		NullCheck(L_0);
		Ball_Move_m72(L_0, L_1, L_2, /*hidden argument*/&Ball_Move_m72_MethodInfo);
		__this->___jump_6 = 0;
		return;
	}
}
// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AICharacterControl_t41_il2cpp_TypeInfo;
// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_5MethodDeclarations.h"

// UnityEngine.NavMeshAgent
#include "UnityEngine_UnityEngine_NavMeshAgent.h"
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_6.h"
// UnityEngine.NavMeshAgent
#include "UnityEngine_UnityEngine_NavMeshAgentMethodDeclarations.h"
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_6MethodDeclarations.h"
extern MethodInfo AICharacterControl_set_agent_m79_MethodInfo;
extern MethodInfo AICharacterControl_set_character_m81_MethodInfo;
extern MethodInfo AICharacterControl_get_agent_m78_MethodInfo;
extern MethodInfo NavMeshAgent_set_updateRotation_m720_MethodInfo;
extern MethodInfo NavMeshAgent_set_updatePosition_m721_MethodInfo;
extern MethodInfo NavMeshAgent_SetDestination_m722_MethodInfo;
extern MethodInfo AICharacterControl_get_character_m80_MethodInfo;
extern MethodInfo NavMeshAgent_get_desiredVelocity_m723_MethodInfo;
extern MethodInfo ThirdPersonCharacter_Move_m87_MethodInfo;
struct Component_t185;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.NavMeshAgent>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.NavMeshAgent>()
#define Component_GetComponentInChildren_TisNavMeshAgent_t39_m724(__this, method) (( NavMeshAgent_t39 * (*) (Component_t185 *, MethodInfo*))Component_GetComponentInChildren_TisObject_t_m628_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter>()
#define Component_GetComponent_TisThirdPersonCharacter_t40_m725(__this, method) (( ThirdPersonCharacter_t40 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentInChildren_TisNavMeshAgent_t39_m724_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisThirdPersonCharacter_t40_m725_GenericMethod;


// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::.ctor()
extern MethodInfo AICharacterControl__ctor_m77_MethodInfo;
extern "C" void AICharacterControl__ctor_m77 (AICharacterControl_t41 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// UnityEngine.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_agent()
extern "C" NavMeshAgent_t39 * AICharacterControl_get_agent_m78 (AICharacterControl_t41 * __this, MethodInfo* method)
{
	{
		NavMeshAgent_t39 * L_0 = (__this->___U3CagentU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_agent(UnityEngine.NavMeshAgent)
extern "C" void AICharacterControl_set_agent_m79 (AICharacterControl_t41 * __this, NavMeshAgent_t39 * ___value, MethodInfo* method)
{
	{
		NavMeshAgent_t39 * L_0 = ___value;
		__this->___U3CagentU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_character()
extern "C" ThirdPersonCharacter_t40 * AICharacterControl_get_character_m80 (AICharacterControl_t41 * __this, MethodInfo* method)
{
	{
		ThirdPersonCharacter_t40 * L_0 = (__this->___U3CcharacterU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_character(UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter)
extern "C" void AICharacterControl_set_character_m81 (AICharacterControl_t41 * __this, ThirdPersonCharacter_t40 * ___value, MethodInfo* method)
{
	{
		ThirdPersonCharacter_t40 * L_0 = ___value;
		__this->___U3CcharacterU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::Start()
extern MethodInfo AICharacterControl_Start_m82_MethodInfo;
extern MethodInfo* Component_GetComponentInChildren_TisNavMeshAgent_t39_m724_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisThirdPersonCharacter_t40_m725_MethodInfo_var;
extern "C" void AICharacterControl_Start_m82 (AICharacterControl_t41 * __this, MethodInfo* method)
{
	static bool AICharacterControl_Start_m82_init;
	if (!AICharacterControl_Start_m82_init)
	{
		Component_GetComponentInChildren_TisNavMeshAgent_t39_m724_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInChildren_TisNavMeshAgent_t39_m724_GenericMethod);
		Component_GetComponent_TisThirdPersonCharacter_t40_m725_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisThirdPersonCharacter_t40_m725_GenericMethod);
		AICharacterControl_Start_m82_init = true;
	}
	{
		NavMeshAgent_t39 * L_0 = Component_GetComponentInChildren_TisNavMeshAgent_t39_m724(__this, /*hidden argument*/Component_GetComponentInChildren_TisNavMeshAgent_t39_m724_MethodInfo_var);
		AICharacterControl_set_agent_m79(__this, L_0, /*hidden argument*/&AICharacterControl_set_agent_m79_MethodInfo);
		ThirdPersonCharacter_t40 * L_1 = Component_GetComponent_TisThirdPersonCharacter_t40_m725(__this, /*hidden argument*/Component_GetComponent_TisThirdPersonCharacter_t40_m725_MethodInfo_var);
		AICharacterControl_set_character_m81(__this, L_1, /*hidden argument*/&AICharacterControl_set_character_m81_MethodInfo);
		NavMeshAgent_t39 * L_2 = AICharacterControl_get_agent_m78(__this, /*hidden argument*/&AICharacterControl_get_agent_m78_MethodInfo);
		NullCheck(L_2);
		NavMeshAgent_set_updateRotation_m720(L_2, 0, /*hidden argument*/&NavMeshAgent_set_updateRotation_m720_MethodInfo);
		NavMeshAgent_t39 * L_3 = AICharacterControl_get_agent_m78(__this, /*hidden argument*/&AICharacterControl_get_agent_m78_MethodInfo);
		NullCheck(L_3);
		NavMeshAgent_set_updatePosition_m721(L_3, 1, /*hidden argument*/&NavMeshAgent_set_updatePosition_m721_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::Update()
extern MethodInfo AICharacterControl_Update_m83_MethodInfo;
extern "C" void AICharacterControl_Update_m83 (AICharacterControl_t41 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		NavMeshAgent_t39 * L_2 = AICharacterControl_get_agent_m78(__this, /*hidden argument*/&AICharacterControl_get_agent_m78_MethodInfo);
		Transform_t2 * L_3 = (__this->___target_2);
		NullCheck(L_3);
		Vector3_t8  L_4 = Transform_get_position_m599(L_3, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_2);
		NavMeshAgent_SetDestination_m722(L_2, L_4, /*hidden argument*/&NavMeshAgent_SetDestination_m722_MethodInfo);
		ThirdPersonCharacter_t40 * L_5 = AICharacterControl_get_character_m80(__this, /*hidden argument*/&AICharacterControl_get_character_m80_MethodInfo);
		NavMeshAgent_t39 * L_6 = AICharacterControl_get_agent_m78(__this, /*hidden argument*/&AICharacterControl_get_agent_m78_MethodInfo);
		NullCheck(L_6);
		Vector3_t8  L_7 = NavMeshAgent_get_desiredVelocity_m723(L_6, /*hidden argument*/&NavMeshAgent_get_desiredVelocity_m723_MethodInfo);
		NullCheck(L_5);
		ThirdPersonCharacter_Move_m87(L_5, L_7, 0, 0, /*hidden argument*/&ThirdPersonCharacter_Move_m87_MethodInfo);
		goto IL_0057;
	}

IL_0045:
	{
		ThirdPersonCharacter_t40 * L_8 = AICharacterControl_get_character_m80(__this, /*hidden argument*/&AICharacterControl_get_character_m80_MethodInfo);
		Vector3_t8  L_9 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		NullCheck(L_8);
		ThirdPersonCharacter_Move_m87(L_8, L_9, 0, 0, /*hidden argument*/&ThirdPersonCharacter_Move_m87_MethodInfo);
	}

IL_0057:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::SetTarget(UnityEngine.Transform)
extern MethodInfo AICharacterControl_SetTarget_m84_MethodInfo;
extern "C" void AICharacterControl_SetTarget_m84 (AICharacterControl_t41 * __this, Transform_t2 * ___target, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___target;
		__this->___target_2 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ThirdPersonCharacter_t40_il2cpp_TypeInfo;

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.RigidbodyConstraints
#include "UnityEngine_UnityEngine_RigidbodyConstraints.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
extern MethodInfo CapsuleCollider_get_center_m726_MethodInfo;
extern MethodInfo Rigidbody_set_constraints_m727_MethodInfo;
extern MethodInfo Vector3_Normalize_m728_MethodInfo;
extern MethodInfo Transform_InverseTransformDirection_m729_MethodInfo;
extern MethodInfo ThirdPersonCharacter_CheckGroundStatus_m95_MethodInfo;
extern MethodInfo ThirdPersonCharacter_ApplyExtraTurnRotation_m93_MethodInfo;
extern MethodInfo ThirdPersonCharacter_HandleGroundedMovement_m92_MethodInfo;
extern MethodInfo ThirdPersonCharacter_HandleAirborneMovement_m91_MethodInfo;
extern MethodInfo ThirdPersonCharacter_ScaleCapsuleForCrouching_m88_MethodInfo;
extern MethodInfo ThirdPersonCharacter_PreventStandingInLowHeadroom_m89_MethodInfo;
extern MethodInfo ThirdPersonCharacter_UpdateAnimator_m90_MethodInfo;
extern MethodInfo CapsuleCollider_set_height_m730_MethodInfo;
extern MethodInfo Vector3_op_Division_m731_MethodInfo;
extern MethodInfo CapsuleCollider_set_center_m732_MethodInfo;
extern MethodInfo Rigidbody_get_position_m733_MethodInfo;
extern MethodInfo Ray__ctor_m734_MethodInfo;
extern MethodInfo Physics_SphereCast_m735_MethodInfo;
extern MethodInfo Animator_SetFloat_m736_MethodInfo;
extern MethodInfo Animator_SetBool_m737_MethodInfo;
extern MethodInfo Animator_SetFloat_m738_MethodInfo;
extern MethodInfo Animator_GetCurrentAnimatorStateInfo_m739_MethodInfo;
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m740_MethodInfo;
extern MethodInfo Mathf_Repeat_m741_MethodInfo;
extern MethodInfo Animator_set_speed_m742_MethodInfo;
extern MethodInfo AnimatorStateInfo_IsName_m743_MethodInfo;
extern MethodInfo Animator_set_applyRootMotion_m744_MethodInfo;
extern MethodInfo Animator_get_deltaPosition_m745_MethodInfo;
extern MethodInfo Physics_Raycast_m746_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t42_m747(__this, method) (( Animator_t42 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisAnimator_t42_m747_GenericMethod;


// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
extern MethodInfo ThirdPersonCharacter__ctor_m85_MethodInfo;
extern "C" void ThirdPersonCharacter__ctor_m85 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	{
		__this->___m_MovingTurnSpeed_3 = (360.0f);
		__this->___m_StationaryTurnSpeed_4 = (180.0f);
		__this->___m_JumpPower_5 = (12.0f);
		__this->___m_GravityMultiplier_6 = (2.0f);
		__this->___m_RunCycleLegOffset_7 = (0.2f);
		__this->___m_MoveSpeedMultiplier_8 = (1.0f);
		__this->___m_AnimSpeedMultiplier_9 = (1.0f);
		__this->___m_GroundCheckDistance_10 = (0.1f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
extern MethodInfo ThirdPersonCharacter_Start_m86_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAnimator_t42_m747_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisCapsuleCollider_t36_m710_MethodInfo_var;
extern "C" void ThirdPersonCharacter_Start_m86 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	static bool ThirdPersonCharacter_Start_m86_init;
	if (!ThirdPersonCharacter_Start_m86_init)
	{
		Component_GetComponent_TisAnimator_t42_m747_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAnimator_t42_m747_GenericMethod);
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		Component_GetComponent_TisCapsuleCollider_t36_m710_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCapsuleCollider_t36_m710_GenericMethod);
		ThirdPersonCharacter_Start_m86_init = true;
	}
	{
		Animator_t42 * L_0 = Component_GetComponent_TisAnimator_t42_m747(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t42_m747_MethodInfo_var);
		__this->___m_Animator_12 = L_0;
		Rigidbody_t3 * L_1 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_11 = L_1;
		CapsuleCollider_t36 * L_2 = Component_GetComponent_TisCapsuleCollider_t36_m710(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t36_m710_MethodInfo_var);
		__this->___m_Capsule_20 = L_2;
		CapsuleCollider_t36 * L_3 = (__this->___m_Capsule_20);
		NullCheck(L_3);
		float L_4 = CapsuleCollider_get_height_m706(L_3, /*hidden argument*/&CapsuleCollider_get_height_m706_MethodInfo);
		__this->___m_CapsuleHeight_18 = L_4;
		CapsuleCollider_t36 * L_5 = (__this->___m_Capsule_20);
		NullCheck(L_5);
		Vector3_t8  L_6 = CapsuleCollider_get_center_m726(L_5, /*hidden argument*/&CapsuleCollider_get_center_m726_MethodInfo);
		__this->___m_CapsuleCenter_19 = L_6;
		Rigidbody_t3 * L_7 = (__this->___m_Rigidbody_11);
		NullCheck(L_7);
		Rigidbody_set_constraints_m727(L_7, ((int32_t)112), /*hidden argument*/&Rigidbody_set_constraints_m727_MethodInfo);
		float L_8 = (__this->___m_GroundCheckDistance_10);
		__this->___m_OrigGroundCheckDistance_14 = L_8;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_Move_m87 (ThirdPersonCharacter_t40 * __this, Vector3_t8  ___move, bool ___crouch, bool ___jump, MethodInfo* method)
{
	{
		float L_0 = Vector3_get_magnitude_m591((&___move), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		Vector3_Normalize_m728((&___move), /*hidden argument*/&Vector3_Normalize_m728_MethodInfo);
	}

IL_0018:
	{
		Transform_t2 * L_1 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_2 = ___move;
		NullCheck(L_1);
		Vector3_t8  L_3 = Transform_InverseTransformDirection_m729(L_1, L_2, /*hidden argument*/&Transform_InverseTransformDirection_m729_MethodInfo);
		___move = L_3;
		ThirdPersonCharacter_CheckGroundStatus_m95(__this, /*hidden argument*/&ThirdPersonCharacter_CheckGroundStatus_m95_MethodInfo);
		Vector3_t8  L_4 = ___move;
		Vector3_t8  L_5 = (__this->___m_GroundNormal_17);
		Vector3_t8  L_6 = Vector3_ProjectOnPlane_m674(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_ProjectOnPlane_m674_MethodInfo);
		___move = L_6;
		float L_7 = ((&___move)->___x_1);
		float L_8 = ((&___move)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_9 = atan2f(L_7, L_8);
		__this->___m_TurnAmount_15 = L_9;
		float L_10 = ((&___move)->___z_3);
		__this->___m_ForwardAmount_16 = L_10;
		ThirdPersonCharacter_ApplyExtraTurnRotation_m93(__this, /*hidden argument*/&ThirdPersonCharacter_ApplyExtraTurnRotation_m93_MethodInfo);
		bool L_11 = (__this->___m_IsGrounded_13);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		bool L_12 = ___crouch;
		bool L_13 = ___jump;
		ThirdPersonCharacter_HandleGroundedMovement_m92(__this, L_12, L_13, /*hidden argument*/&ThirdPersonCharacter_HandleGroundedMovement_m92_MethodInfo);
		goto IL_0084;
	}

IL_007e:
	{
		ThirdPersonCharacter_HandleAirborneMovement_m91(__this, /*hidden argument*/&ThirdPersonCharacter_HandleAirborneMovement_m91_MethodInfo);
	}

IL_0084:
	{
		bool L_14 = ___crouch;
		ThirdPersonCharacter_ScaleCapsuleForCrouching_m88(__this, L_14, /*hidden argument*/&ThirdPersonCharacter_ScaleCapsuleForCrouching_m88_MethodInfo);
		ThirdPersonCharacter_PreventStandingInLowHeadroom_m89(__this, /*hidden argument*/&ThirdPersonCharacter_PreventStandingInLowHeadroom_m89_MethodInfo);
		Vector3_t8  L_15 = ___move;
		ThirdPersonCharacter_UpdateAnimator_m90(__this, L_15, /*hidden argument*/&ThirdPersonCharacter_UpdateAnimator_m90_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C" void ThirdPersonCharacter_ScaleCapsuleForCrouching_m88 (ThirdPersonCharacter_t40 * __this, bool ___crouch, MethodInfo* method)
{
	Ray_t18  V_0 = {0};
	float V_1 = 0.0f;
	{
		bool L_0 = (__this->___m_IsGrounded_13);
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		bool L_1 = ___crouch;
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		bool L_2 = (__this->___m_Crouching_21);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		CapsuleCollider_t36 * L_3 = (__this->___m_Capsule_20);
		CapsuleCollider_t36 * L_4 = (__this->___m_Capsule_20);
		NullCheck(L_4);
		float L_5 = CapsuleCollider_get_height_m706(L_4, /*hidden argument*/&CapsuleCollider_get_height_m706_MethodInfo);
		NullCheck(L_3);
		CapsuleCollider_set_height_m730(L_3, ((float)((float)L_5/(float)(2.0f))), /*hidden argument*/&CapsuleCollider_set_height_m730_MethodInfo);
		CapsuleCollider_t36 * L_6 = (__this->___m_Capsule_20);
		CapsuleCollider_t36 * L_7 = (__this->___m_Capsule_20);
		NullCheck(L_7);
		Vector3_t8  L_8 = CapsuleCollider_get_center_m726(L_7, /*hidden argument*/&CapsuleCollider_get_center_m726_MethodInfo);
		Vector3_t8  L_9 = Vector3_op_Division_m731(NULL /*static, unused*/, L_8, (2.0f), /*hidden argument*/&Vector3_op_Division_m731_MethodInfo);
		NullCheck(L_6);
		CapsuleCollider_set_center_m732(L_6, L_9, /*hidden argument*/&CapsuleCollider_set_center_m732_MethodInfo);
		__this->___m_Crouching_21 = 1;
		goto IL_0107;
	}

IL_0065:
	{
		Rigidbody_t3 * L_10 = (__this->___m_Rigidbody_11);
		NullCheck(L_10);
		Vector3_t8  L_11 = Rigidbody_get_position_m733(L_10, /*hidden argument*/&Rigidbody_get_position_m733_MethodInfo);
		Vector3_t8  L_12 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		CapsuleCollider_t36 * L_13 = (__this->___m_Capsule_20);
		NullCheck(L_13);
		float L_14 = CapsuleCollider_get_radius_m705(L_13, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		Vector3_t8  L_15 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_15, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_17 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_18 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Ray__ctor_m734((&V_0), L_17, L_18, /*hidden argument*/&Ray__ctor_m734_MethodInfo);
		float L_19 = (__this->___m_CapsuleHeight_18);
		CapsuleCollider_t36 * L_20 = (__this->___m_Capsule_20);
		NullCheck(L_20);
		float L_21 = CapsuleCollider_get_radius_m705(L_20, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		V_1 = ((float)((float)L_19-(float)((float)((float)L_21*(float)(0.5f)))));
		Ray_t18  L_22 = V_0;
		CapsuleCollider_t36 * L_23 = (__this->___m_Capsule_20);
		NullCheck(L_23);
		float L_24 = CapsuleCollider_get_radius_m705(L_23, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		float L_25 = V_1;
		bool L_26 = Physics_SphereCast_m735(NULL /*static, unused*/, L_22, ((float)((float)L_24*(float)(0.5f))), L_25, /*hidden argument*/&Physics_SphereCast_m735_MethodInfo);
		if (!L_26)
		{
			goto IL_00de;
		}
	}
	{
		__this->___m_Crouching_21 = 1;
		return;
	}

IL_00de:
	{
		CapsuleCollider_t36 * L_27 = (__this->___m_Capsule_20);
		float L_28 = (__this->___m_CapsuleHeight_18);
		NullCheck(L_27);
		CapsuleCollider_set_height_m730(L_27, L_28, /*hidden argument*/&CapsuleCollider_set_height_m730_MethodInfo);
		CapsuleCollider_t36 * L_29 = (__this->___m_Capsule_20);
		Vector3_t8  L_30 = (__this->___m_CapsuleCenter_19);
		NullCheck(L_29);
		CapsuleCollider_set_center_m732(L_29, L_30, /*hidden argument*/&CapsuleCollider_set_center_m732_MethodInfo);
		__this->___m_Crouching_21 = 0;
	}

IL_0107:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C" void ThirdPersonCharacter_PreventStandingInLowHeadroom_m89 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	Ray_t18  V_0 = {0};
	float V_1 = 0.0f;
	{
		bool L_0 = (__this->___m_Crouching_21);
		if (L_0)
		{
			goto IL_0083;
		}
	}
	{
		Rigidbody_t3 * L_1 = (__this->___m_Rigidbody_11);
		NullCheck(L_1);
		Vector3_t8  L_2 = Rigidbody_get_position_m733(L_1, /*hidden argument*/&Rigidbody_get_position_m733_MethodInfo);
		Vector3_t8  L_3 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		CapsuleCollider_t36 * L_4 = (__this->___m_Capsule_20);
		NullCheck(L_4);
		float L_5 = CapsuleCollider_get_radius_m705(L_4, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		Vector3_t8  L_6 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_7 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_6, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_8 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_9 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Ray__ctor_m734((&V_0), L_8, L_9, /*hidden argument*/&Ray__ctor_m734_MethodInfo);
		float L_10 = (__this->___m_CapsuleHeight_18);
		CapsuleCollider_t36 * L_11 = (__this->___m_Capsule_20);
		NullCheck(L_11);
		float L_12 = CapsuleCollider_get_radius_m705(L_11, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		V_1 = ((float)((float)L_10-(float)((float)((float)L_12*(float)(0.5f)))));
		Ray_t18  L_13 = V_0;
		CapsuleCollider_t36 * L_14 = (__this->___m_Capsule_20);
		NullCheck(L_14);
		float L_15 = CapsuleCollider_get_radius_m705(L_14, /*hidden argument*/&CapsuleCollider_get_radius_m705_MethodInfo);
		float L_16 = V_1;
		bool L_17 = Physics_SphereCast_m735(NULL /*static, unused*/, L_13, ((float)((float)L_15*(float)(0.5f))), L_16, /*hidden argument*/&Physics_SphereCast_m735_MethodInfo);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		__this->___m_Crouching_21 = 1;
	}

IL_0083:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C" void ThirdPersonCharacter_UpdateAnimator_m90 (ThirdPersonCharacter_t40 * __this, Vector3_t8  ___move, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	AnimatorStateInfo_t198  V_3 = {0};
	int32_t G_B5_0 = 0;
	{
		Animator_t42 * L_0 = (__this->___m_Animator_12);
		float L_1 = (__this->___m_ForwardAmount_16);
		float L_2 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		NullCheck(L_0);
		Animator_SetFloat_m736(L_0, (String_t*) &_stringLiteral8, L_1, (0.1f), L_2, /*hidden argument*/&Animator_SetFloat_m736_MethodInfo);
		Animator_t42 * L_3 = (__this->___m_Animator_12);
		float L_4 = (__this->___m_TurnAmount_15);
		float L_5 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		NullCheck(L_3);
		Animator_SetFloat_m736(L_3, (String_t*) &_stringLiteral9, L_4, (0.1f), L_5, /*hidden argument*/&Animator_SetFloat_m736_MethodInfo);
		Animator_t42 * L_6 = (__this->___m_Animator_12);
		bool L_7 = (__this->___m_Crouching_21);
		NullCheck(L_6);
		Animator_SetBool_m737(L_6, (String_t*) &_stringLiteral10, L_7, /*hidden argument*/&Animator_SetBool_m737_MethodInfo);
		Animator_t42 * L_8 = (__this->___m_Animator_12);
		bool L_9 = (__this->___m_IsGrounded_13);
		NullCheck(L_8);
		Animator_SetBool_m737(L_8, (String_t*) &_stringLiteral11, L_9, /*hidden argument*/&Animator_SetBool_m737_MethodInfo);
		bool L_10 = (__this->___m_IsGrounded_13);
		if (L_10)
		{
			goto IL_009a;
		}
	}
	{
		Animator_t42 * L_11 = (__this->___m_Animator_12);
		Rigidbody_t3 * L_12 = (__this->___m_Rigidbody_11);
		NullCheck(L_12);
		Vector3_t8  L_13 = Rigidbody_get_velocity_m590(L_12, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_2 = L_13;
		float L_14 = ((&V_2)->___y_2);
		NullCheck(L_11);
		Animator_SetFloat_m738(L_11, (String_t*) &_stringLiteral4, L_14, /*hidden argument*/&Animator_SetFloat_m738_MethodInfo);
	}

IL_009a:
	{
		Animator_t42 * L_15 = (__this->___m_Animator_12);
		NullCheck(L_15);
		AnimatorStateInfo_t198  L_16 = Animator_GetCurrentAnimatorStateInfo_m739(L_15, 0, /*hidden argument*/&Animator_GetCurrentAnimatorStateInfo_m739_MethodInfo);
		V_3 = L_16;
		float L_17 = AnimatorStateInfo_get_normalizedTime_m740((&V_3), /*hidden argument*/&AnimatorStateInfo_get_normalizedTime_m740_MethodInfo);
		float L_18 = (__this->___m_RunCycleLegOffset_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_19 = Mathf_Repeat_m741(NULL /*static, unused*/, ((float)((float)L_17+(float)L_18)), (1.0f), /*hidden argument*/&Mathf_Repeat_m741_MethodInfo);
		V_0 = L_19;
		float L_20 = V_0;
		if ((!(((float)L_20) < ((float)(0.5f)))))
		{
			goto IL_00d1;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B5_0 = (-1);
	}

IL_00d2:
	{
		float L_21 = (__this->___m_ForwardAmount_16);
		V_1 = ((float)((float)(((float)G_B5_0))*(float)L_21));
		bool L_22 = (__this->___m_IsGrounded_13);
		if (!L_22)
		{
			goto IL_00f7;
		}
	}
	{
		Animator_t42 * L_23 = (__this->___m_Animator_12);
		float L_24 = V_1;
		NullCheck(L_23);
		Animator_SetFloat_m738(L_23, (String_t*) &_stringLiteral12, L_24, /*hidden argument*/&Animator_SetFloat_m738_MethodInfo);
	}

IL_00f7:
	{
		bool L_25 = (__this->___m_IsGrounded_13);
		if (!L_25)
		{
			goto IL_0129;
		}
	}
	{
		float L_26 = Vector3_get_magnitude_m591((&___move), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		if ((!(((float)L_26) > ((float)(0.0f)))))
		{
			goto IL_0129;
		}
	}
	{
		Animator_t42 * L_27 = (__this->___m_Animator_12);
		float L_28 = (__this->___m_AnimSpeedMultiplier_9);
		NullCheck(L_27);
		Animator_set_speed_m742(L_27, L_28, /*hidden argument*/&Animator_set_speed_m742_MethodInfo);
		goto IL_0139;
	}

IL_0129:
	{
		Animator_t42 * L_29 = (__this->___m_Animator_12);
		NullCheck(L_29);
		Animator_set_speed_m742(L_29, (1.0f), /*hidden argument*/&Animator_set_speed_m742_MethodInfo);
	}

IL_0139:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C" void ThirdPersonCharacter_HandleAirborneMovement_m91 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	ThirdPersonCharacter_t40 * G_B2_0 = {0};
	ThirdPersonCharacter_t40 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	ThirdPersonCharacter_t40 * G_B3_1 = {0};
	{
		Vector3_t8  L_0 = Physics_get_gravity_m675(NULL /*static, unused*/, /*hidden argument*/&Physics_get_gravity_m675_MethodInfo);
		float L_1 = (__this->___m_GravityMultiplier_6);
		Vector3_t8  L_2 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_3 = Physics_get_gravity_m675(NULL /*static, unused*/, /*hidden argument*/&Physics_get_gravity_m675_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_0 = L_4;
		Rigidbody_t3 * L_5 = (__this->___m_Rigidbody_11);
		Vector3_t8  L_6 = V_0;
		NullCheck(L_5);
		Rigidbody_AddForce_m713(L_5, L_6, /*hidden argument*/&Rigidbody_AddForce_m713_MethodInfo);
		Rigidbody_t3 * L_7 = (__this->___m_Rigidbody_11);
		NullCheck(L_7);
		Vector3_t8  L_8 = Rigidbody_get_velocity_m590(L_7, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_8;
		float L_9 = ((&V_1)->___y_2);
		G_B1_0 = __this;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0050;
		}
	}
	{
		float L_10 = (__this->___m_OrigGroundCheckDistance_14);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0055;
	}

IL_0050:
	{
		G_B3_0 = (0.01f);
		G_B3_1 = G_B2_0;
	}

IL_0055:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_GroundCheckDistance_10 = G_B3_0;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_HandleGroundedMovement_m92 (ThirdPersonCharacter_t40 * __this, bool ___crouch, bool ___jump, MethodInfo* method)
{
	AnimatorStateInfo_t198  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	{
		bool L_0 = ___jump;
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		bool L_1 = ___crouch;
		if (L_1)
		{
			goto IL_0084;
		}
	}
	{
		Animator_t42 * L_2 = (__this->___m_Animator_12);
		NullCheck(L_2);
		AnimatorStateInfo_t198  L_3 = Animator_GetCurrentAnimatorStateInfo_m739(L_2, 0, /*hidden argument*/&Animator_GetCurrentAnimatorStateInfo_m739_MethodInfo);
		V_0 = L_3;
		bool L_4 = AnimatorStateInfo_IsName_m743((&V_0), (String_t*) &_stringLiteral13, /*hidden argument*/&AnimatorStateInfo_IsName_m743_MethodInfo);
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		Rigidbody_t3 * L_5 = (__this->___m_Rigidbody_11);
		Rigidbody_t3 * L_6 = (__this->___m_Rigidbody_11);
		NullCheck(L_6);
		Vector3_t8  L_7 = Rigidbody_get_velocity_m590(L_6, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_7;
		float L_8 = ((&V_1)->___x_1);
		float L_9 = (__this->___m_JumpPower_5);
		Rigidbody_t3 * L_10 = (__this->___m_Rigidbody_11);
		NullCheck(L_10);
		Vector3_t8  L_11 = Rigidbody_get_velocity_m590(L_10, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_2 = L_11;
		float L_12 = ((&V_2)->___z_3);
		Vector3_t8  L_13 = {0};
		Vector3__ctor_m700(&L_13, L_8, L_9, L_12, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_5);
		Rigidbody_set_velocity_m701(L_5, L_13, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
		__this->___m_IsGrounded_13 = 0;
		Animator_t42 * L_14 = (__this->___m_Animator_12);
		NullCheck(L_14);
		Animator_set_applyRootMotion_m744(L_14, 0, /*hidden argument*/&Animator_set_applyRootMotion_m744_MethodInfo);
		__this->___m_GroundCheckDistance_10 = (0.1f);
	}

IL_0084:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C" void ThirdPersonCharacter_ApplyExtraTurnRotation_m93 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (__this->___m_StationaryTurnSpeed_4);
		float L_1 = (__this->___m_MovingTurnSpeed_3);
		float L_2 = (__this->___m_ForwardAmount_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_3 = Mathf_Lerp_m615(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		V_0 = L_3;
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		float L_5 = (__this->___m_TurnAmount_15);
		float L_6 = V_0;
		float L_7 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		NullCheck(L_4);
		Transform_Rotate_m621(L_4, (0.0f), ((float)((float)((float)((float)L_5*(float)L_6))*(float)L_7)), (0.0f), /*hidden argument*/&Transform_Rotate_m621_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern MethodInfo ThirdPersonCharacter_OnAnimatorMove_m94_MethodInfo;
extern "C" void ThirdPersonCharacter_OnAnimatorMove_m94 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		bool L_0 = (__this->___m_IsGrounded_13);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		Animator_t42 * L_2 = (__this->___m_Animator_12);
		NullCheck(L_2);
		Vector3_t8  L_3 = Animator_get_deltaPosition_m745(L_2, /*hidden argument*/&Animator_get_deltaPosition_m745_MethodInfo);
		float L_4 = (__this->___m_MoveSpeedMultiplier_8);
		Vector3_t8  L_5 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_6 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Vector3_t8  L_7 = Vector3_op_Division_m731(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Division_m731_MethodInfo);
		V_0 = L_7;
		Rigidbody_t3 * L_8 = (__this->___m_Rigidbody_11);
		NullCheck(L_8);
		Vector3_t8  L_9 = Rigidbody_get_velocity_m590(L_8, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_1 = L_9;
		float L_10 = ((&V_1)->___y_2);
		(&V_0)->___y_2 = L_10;
		Rigidbody_t3 * L_11 = (__this->___m_Rigidbody_11);
		Vector3_t8  L_12 = V_0;
		NullCheck(L_11);
		Rigidbody_set_velocity_m701(L_11, L_12, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
	}

IL_0061:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C" void ThirdPersonCharacter_CheckGroundStatus_m95 (ThirdPersonCharacter_t40 * __this, MethodInfo* method)
{
	RaycastHit_t16  V_0 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_2 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_3 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_2, (0.1f), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_5 = Vector3_get_down_m670(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_down_m670_MethodInfo);
		float L_6 = (__this->___m_GroundCheckDistance_10);
		bool L_7 = Physics_Raycast_m746(NULL /*static, unused*/, L_4, L_5, (&V_0), L_6, /*hidden argument*/&Physics_Raycast_m746_MethodInfo);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t8  L_8 = RaycastHit_get_normal_m673((&V_0), /*hidden argument*/&RaycastHit_get_normal_m673_MethodInfo);
		__this->___m_GroundNormal_17 = L_8;
		__this->___m_IsGrounded_13 = 1;
		Animator_t42 * L_9 = (__this->___m_Animator_12);
		NullCheck(L_9);
		Animator_set_applyRootMotion_m744(L_9, 1, /*hidden argument*/&Animator_set_applyRootMotion_m744_MethodInfo);
		goto IL_0079;
	}

IL_005b:
	{
		__this->___m_IsGrounded_13 = 0;
		Vector3_t8  L_10 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		__this->___m_GroundNormal_17 = L_10;
		Animator_t42 * L_11 = (__this->___m_Animator_12);
		NullCheck(L_11);
		Animator_set_applyRootMotion_m744(L_11, 0, /*hidden argument*/&Animator_set_applyRootMotion_m744_MethodInfo);
	}

IL_0079:
	{
		return;
	}
}
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ThirdPersonUserControl_t43_il2cpp_TypeInfo;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Characters_7MethodDeclarations.h"

extern MethodInfo Input_GetKey_m748_MethodInfo;


// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::.ctor()
extern MethodInfo ThirdPersonUserControl__ctor_m96_MethodInfo;
extern "C" void ThirdPersonUserControl__ctor_m96 (ThirdPersonUserControl_t43 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::Start()
extern MethodInfo ThirdPersonUserControl_Start_m97_MethodInfo;
extern MethodInfo* Component_GetComponent_TisThirdPersonCharacter_t40_m725_MethodInfo_var;
extern "C" void ThirdPersonUserControl_Start_m97 (ThirdPersonUserControl_t43 * __this, MethodInfo* method)
{
	static bool ThirdPersonUserControl_Start_m97_init;
	if (!ThirdPersonUserControl_Start_m97_init)
	{
		Component_GetComponent_TisThirdPersonCharacter_t40_m725_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisThirdPersonCharacter_t40_m725_GenericMethod);
		ThirdPersonUserControl_Start_m97_init = true;
	}
	{
		Camera_t19 * L_0 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Camera_t19 * L_2 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		NullCheck(L_2);
		Transform_t2 * L_3 = Component_get_transform_m598(L_2, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___m_Cam_3 = L_3;
		goto IL_002f;
	}

IL_0025:
	{
		Debug_LogWarning_m715(NULL /*static, unused*/, (String_t*) &_stringLiteral14, /*hidden argument*/&Debug_LogWarning_m715_MethodInfo);
	}

IL_002f:
	{
		ThirdPersonCharacter_t40 * L_4 = Component_GetComponent_TisThirdPersonCharacter_t40_m725(__this, /*hidden argument*/Component_GetComponent_TisThirdPersonCharacter_t40_m725_MethodInfo_var);
		__this->___m_Character_2 = L_4;
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::Update()
extern MethodInfo ThirdPersonUserControl_Update_m98_MethodInfo;
extern "C" void ThirdPersonUserControl_Update_m98 (ThirdPersonUserControl_t43 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Jump_6);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_1 = CrossPlatformInputManager_GetButtonDown_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&CrossPlatformInputManager_GetButtonDown_m149_MethodInfo);
		__this->___m_Jump_6 = L_1;
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::FixedUpdate()
extern MethodInfo ThirdPersonUserControl_FixedUpdate_m99_MethodInfo;
extern "C" void ThirdPersonUserControl_FixedUpdate_m99 (ThirdPersonUserControl_t43 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t8  V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_0 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_2 = Input_GetKey_m748(NULL /*static, unused*/, ((int32_t)99), /*hidden argument*/&Input_GetKey_m748_MethodInfo);
		V_2 = L_2;
		Transform_t2 * L_3 = (__this->___m_Cam_3);
		bool L_4 = Object_op_Inequality_m642(NULL /*static, unused*/, L_3, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		Transform_t2 * L_5 = (__this->___m_Cam_3);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_forward_m587(L_5, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_7 = {0};
		Vector3__ctor_m700(&L_7, (1.0f), (0.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		Vector3_t8  L_8 = Vector3_Scale_m716(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector3_Scale_m716_MethodInfo);
		V_3 = L_8;
		Vector3_t8  L_9 = Vector3_get_normalized_m592((&V_3), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		__this->___m_CamForward_4 = L_9;
		float L_10 = V_1;
		Vector3_t8  L_11 = (__this->___m_CamForward_4);
		Vector3_t8  L_12 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		float L_13 = V_0;
		Transform_t2 * L_14 = (__this->___m_Cam_3);
		NullCheck(L_14);
		Vector3_t8  L_15 = Transform_get_right_m668(L_14, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_17 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		__this->___m_Move_5 = L_17;
		goto IL_00af;
	}

IL_008e:
	{
		float L_18 = V_1;
		Vector3_t8  L_19 = Vector3_get_forward_m651(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m651_MethodInfo);
		Vector3_t8  L_20 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		float L_21 = V_0;
		Vector3_t8  L_22 = Vector3_get_right_m718(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m718_MethodInfo);
		Vector3_t8  L_23 = Vector3_op_Multiply_m717(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_24 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_20, L_23, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		__this->___m_Move_5 = L_24;
	}

IL_00af:
	{
		ThirdPersonCharacter_t40 * L_25 = (__this->___m_Character_2);
		Vector3_t8  L_26 = (__this->___m_Move_5);
		bool L_27 = V_2;
		bool L_28 = (__this->___m_Jump_6);
		NullCheck(L_25);
		ThirdPersonCharacter_Move_m87(L_25, L_26, L_27, L_28, /*hidden argument*/&ThirdPersonCharacter_Move_m87_MethodInfo);
		__this->___m_Jump_6 = 0;
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisTouchButton_t44_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatfMethodDeclarations.h"

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2.h"
#include "Assembly-CSharp-firstpass_ArrayTypes.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
extern TypeInfo VirtualAxis_t45_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo AxisTouchButtonU5BU5D_t199_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType AxisTouchButton_t44_0_0_0;
extern Il2CppType AxisTouchButtonU5BU5D_t199_0_0_0;
extern MethodInfo CrossPlatformInputManager_AxisExists_m138_MethodInfo;
extern MethodInfo VirtualAxis__ctor_m114_MethodInfo;
extern MethodInfo CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo;
extern MethodInfo CrossPlatformInputManager_VirtualAxisReference_m144_MethodInfo;
extern MethodInfo AxisTouchButton_FindPairedButton_m102_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m749_MethodInfo;
extern MethodInfo Object_FindObjectsOfType_m750_MethodInfo;
extern MethodInfo String_op_Equality_m751_MethodInfo;
extern MethodInfo VirtualAxis_Remove_m120_MethodInfo;
extern MethodInfo VirtualAxis_get_GetValue_m122_MethodInfo;
extern MethodInfo Mathf_MoveTowards_m752_MethodInfo;
extern MethodInfo VirtualAxis_Update_m121_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
extern MethodInfo AxisTouchButton__ctor_m100_MethodInfo;
extern "C" void AxisTouchButton__ctor_m100 (AxisTouchButton_t44 * __this, MethodInfo* method)
{
	{
		__this->___axisName_2 = (String_t*) &_stringLiteral5;
		__this->___axisValue_3 = (1.0f);
		__this->___responseSpeed_4 = (3.0f);
		__this->___returnToCentreSpeed_5 = (3.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
extern MethodInfo AxisTouchButton_OnEnable_m101_MethodInfo;
extern "C" void AxisTouchButton_OnEnable_m101 (AxisTouchButton_t44 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_1 = CrossPlatformInputManager_AxisExists_m138(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_AxisExists_m138_MethodInfo);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = (__this->___axisName_2);
		VirtualAxis_t45 * L_3 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_3, L_2, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_Axis_7 = L_3;
		VirtualAxis_t45 * L_4 = (__this->___m_Axis_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_4, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
		goto IL_0042;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualAxis_t45 * L_6 = CrossPlatformInputManager_VirtualAxisReference_m144(NULL /*static, unused*/, L_5, /*hidden argument*/&CrossPlatformInputManager_VirtualAxisReference_m144_MethodInfo);
		__this->___m_Axis_7 = L_6;
	}

IL_0042:
	{
		AxisTouchButton_FindPairedButton_m102(__this, /*hidden argument*/&AxisTouchButton_FindPairedButton_m102_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
extern TypeInfo* AxisTouchButtonU5BU5D_t199_il2cpp_TypeInfo_var;
extern "C" void AxisTouchButton_FindPairedButton_m102 (AxisTouchButton_t44 * __this, MethodInfo* method)
{
	static bool AxisTouchButton_FindPairedButton_m102_init;
	if (!AxisTouchButton_FindPairedButton_m102_init)
	{
		AxisTouchButtonU5BU5D_t199_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AxisTouchButtonU5BU5D_t199_0_0_0);
		AxisTouchButton_FindPairedButton_m102_init = true;
	}
	AxisTouchButtonU5BU5D_t199* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&AxisTouchButton_t44_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		ObjectU5BU5D_t200* L_1 = Object_FindObjectsOfType_m750(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_FindObjectsOfType_m750_MethodInfo);
		V_0 = ((AxisTouchButtonU5BU5D_t199*)IsInst(L_1, AxisTouchButtonU5BU5D_t199_il2cpp_TypeInfo_var));
		AxisTouchButtonU5BU5D_t199* L_2 = V_0;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		AxisTouchButtonU5BU5D_t199* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(AxisTouchButton_t44 **)(AxisTouchButton_t44 **)SZArrayLdElema(L_3, L_5)));
		String_t* L_6 = ((*(AxisTouchButton_t44 **)(AxisTouchButton_t44 **)SZArrayLdElema(L_3, L_5))->___axisName_2);
		String_t* L_7 = (__this->___axisName_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_8 = String_op_Equality_m751(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t199* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = Object_op_Inequality_m642(NULL /*static, unused*/, (*(AxisTouchButton_t44 **)(AxisTouchButton_t44 **)SZArrayLdElema(L_9, L_11)), __this, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t199* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		__this->___m_PairedWith_6 = (*(AxisTouchButton_t44 **)(AxisTouchButton_t44 **)SZArrayLdElema(L_13, L_15));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		AxisTouchButtonU5BU5D_t199* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0022;
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
extern MethodInfo AxisTouchButton_OnDisable_m103_MethodInfo;
extern "C" void AxisTouchButton_OnDisable_m103 (AxisTouchButton_t44 * __this, MethodInfo* method)
{
	{
		VirtualAxis_t45 * L_0 = (__this->___m_Axis_7);
		NullCheck(L_0);
		VirtualAxis_Remove_m120(L_0, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo AxisTouchButton_OnPointerDown_m104_MethodInfo;
extern "C" void AxisTouchButton_OnPointerDown_m104 (AxisTouchButton_t44 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		AxisTouchButton_t44 * L_0 = (__this->___m_PairedWith_6);
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AxisTouchButton_FindPairedButton_m102(__this, /*hidden argument*/&AxisTouchButton_FindPairedButton_m102_MethodInfo);
	}

IL_0017:
	{
		VirtualAxis_t45 * L_2 = (__this->___m_Axis_7);
		VirtualAxis_t45 * L_3 = (__this->___m_Axis_7);
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_GetValue_m122(L_3, /*hidden argument*/&VirtualAxis_get_GetValue_m122_MethodInfo);
		float L_5 = (__this->___axisValue_3);
		float L_6 = (__this->___responseSpeed_4);
		float L_7 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = Mathf_MoveTowards_m752(NULL /*static, unused*/, L_4, L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/&Mathf_MoveTowards_m752_MethodInfo);
		NullCheck(L_2);
		VirtualAxis_Update_m121(L_2, L_8, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo AxisTouchButton_OnPointerUp_m105_MethodInfo;
extern "C" void AxisTouchButton_OnPointerUp_m105 (AxisTouchButton_t44 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		VirtualAxis_t45 * L_0 = (__this->___m_Axis_7);
		VirtualAxis_t45 * L_1 = (__this->___m_Axis_7);
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_GetValue_m122(L_1, /*hidden argument*/&VirtualAxis_get_GetValue_m122_MethodInfo);
		float L_3 = (__this->___responseSpeed_4);
		float L_4 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_5 = Mathf_MoveTowards_m752(NULL /*static, unused*/, L_2, (0.0f), ((float)((float)L_3*(float)L_4)), /*hidden argument*/&Mathf_MoveTowards_m752_MethodInfo);
		NullCheck(L_0);
		VirtualAxis_Update_m121(L_0, L_5, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ButtonHandler_t47_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_0MethodDeclarations.h"

extern MethodInfo CrossPlatformInputManager_SetButtonDown_m151_MethodInfo;
extern MethodInfo CrossPlatformInputManager_SetButtonUp_m152_MethodInfo;
extern MethodInfo CrossPlatformInputManager_SetAxisPositive_m153_MethodInfo;
extern MethodInfo CrossPlatformInputManager_SetAxisZero_m155_MethodInfo;
extern MethodInfo CrossPlatformInputManager_SetAxisNegative_m154_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
extern MethodInfo ButtonHandler__ctor_m106_MethodInfo;
extern "C" void ButtonHandler__ctor_m106 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
extern MethodInfo ButtonHandler_OnEnable_m107_MethodInfo;
extern "C" void ButtonHandler_OnEnable_m107 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
extern MethodInfo ButtonHandler_SetDownState_m108_MethodInfo;
extern "C" void ButtonHandler_SetDownState_m108 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetButtonDown_m151(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_SetButtonDown_m151_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
extern MethodInfo ButtonHandler_SetUpState_m109_MethodInfo;
extern "C" void ButtonHandler_SetUpState_m109 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetButtonUp_m152(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_SetButtonUp_m152_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
extern MethodInfo ButtonHandler_SetAxisPositiveState_m110_MethodInfo;
extern "C" void ButtonHandler_SetAxisPositiveState_m110 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetAxisPositive_m153(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_SetAxisPositive_m153_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
extern MethodInfo ButtonHandler_SetAxisNeutralState_m111_MethodInfo;
extern "C" void ButtonHandler_SetAxisNeutralState_m111 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetAxisZero_m155(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_SetAxisZero_m155_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
extern MethodInfo ButtonHandler_SetAxisNegativeState_m112_MethodInfo;
extern "C" void ButtonHandler_SetAxisNegativeState_m112 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___Name_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetAxisNegative_m154(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_SetAxisNegative_m154_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
extern MethodInfo ButtonHandler_Update_m113_MethodInfo;
extern "C" void ButtonHandler_Update_m113 (ButtonHandler_t47 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActiveInputMethod_t48_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo VirtualAxis__ctor_m115_MethodInfo;
extern MethodInfo VirtualAxis_set_name_m117_MethodInfo;
extern MethodInfo VirtualAxis_set_matchWithInputManager_m119_MethodInfo;
extern MethodInfo VirtualAxis_get_name_m116_MethodInfo;
extern MethodInfo CrossPlatformInputManager_UnRegisterVirtualAxis_m142_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C" void VirtualAxis__ctor_m114 (VirtualAxis_t45 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualAxis__ctor_m115(__this, L_0, 1, /*hidden argument*/&VirtualAxis__ctor_m115_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C" void VirtualAxis__ctor_m115 (VirtualAxis_t45 * __this, String_t* ___name, bool ___matchToInputSettings, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___name;
		VirtualAxis_set_name_m117(__this, L_0, /*hidden argument*/&VirtualAxis_set_name_m117_MethodInfo);
		bool L_1 = ___matchToInputSettings;
		VirtualAxis_set_matchWithInputManager_m119(__this, L_1, /*hidden argument*/&VirtualAxis_set_matchWithInputManager_m119_MethodInfo);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C" String_t* VirtualAxis_get_name_m116 (VirtualAxis_t45 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C" void VirtualAxis_set_name_m117 (VirtualAxis_t45 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern MethodInfo VirtualAxis_get_matchWithInputManager_m118_MethodInfo;
extern "C" bool VirtualAxis_get_matchWithInputManager_m118 (VirtualAxis_t45 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmatchWithInputManagerU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualAxis_set_matchWithInputManager_m119 (VirtualAxis_t45 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C" void VirtualAxis_Remove_m120 (VirtualAxis_t45 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = VirtualAxis_get_name_m116(__this, /*hidden argument*/&VirtualAxis_get_name_m116_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_UnRegisterVirtualAxis_m142(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_UnRegisterVirtualAxis_m142_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C" void VirtualAxis_Update_m121 (VirtualAxis_t45 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Value_0 = L_0;
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C" float VirtualAxis_get_GetValue_m122 (VirtualAxis_t45 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Value_0);
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern MethodInfo VirtualAxis_get_GetValueRaw_m123_MethodInfo;
extern "C" float VirtualAxis_get_GetValueRaw_m123 (VirtualAxis_t45 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Value_0);
		return L_0;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VirtualButton_t49_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_3MethodDeclarations.h"

extern MethodInfo Time_get_frameCount_m753_MethodInfo;
extern MethodInfo VirtualButton__ctor_m125_MethodInfo;
extern MethodInfo VirtualButton_set_name_m127_MethodInfo;
extern MethodInfo VirtualButton_set_matchWithInputManager_m129_MethodInfo;
extern MethodInfo VirtualButton_get_name_m126_MethodInfo;
extern MethodInfo CrossPlatformInputManager_UnRegisterVirtualButton_m143_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern MethodInfo VirtualButton__ctor_m124_MethodInfo;
extern "C" void VirtualButton__ctor_m124 (VirtualButton_t49 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualButton__ctor_m125(__this, L_0, 1, /*hidden argument*/&VirtualButton__ctor_m125_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C" void VirtualButton__ctor_m125 (VirtualButton_t49 * __this, String_t* ___name, bool ___matchToInputSettings, MethodInfo* method)
{
	{
		__this->___m_LastPressedFrame_0 = ((int32_t)-5);
		__this->___m_ReleasedFrame_1 = ((int32_t)-5);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		String_t* L_0 = ___name;
		VirtualButton_set_name_m127(__this, L_0, /*hidden argument*/&VirtualButton_set_name_m127_MethodInfo);
		bool L_1 = ___matchToInputSettings;
		VirtualButton_set_matchWithInputManager_m129(__this, L_1, /*hidden argument*/&VirtualButton_set_matchWithInputManager_m129_MethodInfo);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C" String_t* VirtualButton_get_name_m126 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C" void VirtualButton_set_name_m127 (VirtualButton_t49 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern MethodInfo VirtualButton_get_matchWithInputManager_m128_MethodInfo;
extern "C" bool VirtualButton_get_matchWithInputManager_m128 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CmatchWithInputManagerU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualButton_set_matchWithInputManager_m129 (VirtualButton_t49 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern MethodInfo VirtualButton_Pressed_m130_MethodInfo;
extern "C" void VirtualButton_Pressed_m130 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Pressed_2);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___m_Pressed_2 = 1;
		int32_t L_1 = Time_get_frameCount_m753(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m753_MethodInfo);
		__this->___m_LastPressedFrame_0 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern MethodInfo VirtualButton_Released_m131_MethodInfo;
extern "C" void VirtualButton_Released_m131 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		__this->___m_Pressed_2 = 0;
		int32_t L_0 = Time_get_frameCount_m753(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m753_MethodInfo);
		__this->___m_ReleasedFrame_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
extern MethodInfo VirtualButton_Remove_m132_MethodInfo;
extern "C" void VirtualButton_Remove_m132 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = VirtualButton_get_name_m126(__this, /*hidden argument*/&VirtualButton_get_name_m126_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_UnRegisterVirtualButton_m143(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_UnRegisterVirtualButton_m143_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern MethodInfo VirtualButton_get_GetButton_m133_MethodInfo;
extern "C" bool VirtualButton_get_GetButton_m133 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Pressed_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern MethodInfo VirtualButton_get_GetButtonDown_m134_MethodInfo;
extern "C" bool VirtualButton_get_GetButtonDown_m134 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_LastPressedFrame_0);
		int32_t L_1 = Time_get_frameCount_m753(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m753_MethodInfo);
		return ((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern MethodInfo VirtualButton_get_GetButtonUp_m135_MethodInfo;
extern "C" bool VirtualButton_get_GetButtonUp_m135 (VirtualButton_t49 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_ReleasedFrame_1);
		int32_t L_1 = Time_get_frameCount_m753(NULL /*static, unused*/, /*hidden argument*/&Time_get_frameCount_m753_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))))? 1 : 0);
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4.h"
#ifndef _MSC_VER
#else
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo VirtualInput_t50_il2cpp_TypeInfo;
extern TypeInfo MobileInput_t56_il2cpp_TypeInfo;
extern TypeInfo StandaloneInput_t57_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t201_il2cpp_TypeInfo;
extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_10MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_9MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_11MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern MethodInfo VirtualInput_MousePosition_m754_MethodInfo;
extern MethodInfo MobileInput__ctor_m176_MethodInfo;
extern MethodInfo StandaloneInput__ctor_m190_MethodInfo;
extern MethodInfo VirtualInput_AxisExists_m218_MethodInfo;
extern MethodInfo VirtualInput_ButtonExists_m219_MethodInfo;
extern MethodInfo VirtualInput_RegisterVirtualAxis_m220_MethodInfo;
extern MethodInfo VirtualInput_RegisterVirtualButton_m221_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m755_MethodInfo;
extern MethodInfo VirtualInput_UnRegisterVirtualAxis_m222_MethodInfo;
extern MethodInfo VirtualInput_UnRegisterVirtualButton_m223_MethodInfo;
extern MethodInfo VirtualInput_VirtualAxisReference_m224_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetAxis_m147_MethodInfo;
extern MethodInfo VirtualInput_GetAxis_m756_MethodInfo;
extern MethodInfo VirtualInput_GetButton_m757_MethodInfo;
extern MethodInfo VirtualInput_GetButtonDown_m758_MethodInfo;
extern MethodInfo VirtualInput_GetButtonUp_m759_MethodInfo;
extern MethodInfo VirtualInput_SetButtonDown_m760_MethodInfo;
extern MethodInfo VirtualInput_SetButtonUp_m761_MethodInfo;
extern MethodInfo VirtualInput_SetAxisPositive_m762_MethodInfo;
extern MethodInfo VirtualInput_SetAxisNegative_m763_MethodInfo;
extern MethodInfo VirtualInput_SetAxisZero_m764_MethodInfo;
extern MethodInfo VirtualInput_SetAxis_m765_MethodInfo;
extern MethodInfo VirtualInput_SetVirtualMousePositionX_m225_MethodInfo;
extern MethodInfo VirtualInput_SetVirtualMousePositionY_m226_MethodInfo;
extern MethodInfo VirtualInput_SetVirtualMousePositionZ_m227_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern MethodInfo CrossPlatformInputManager__cctor_m136_MethodInfo;
extern "C" void CrossPlatformInputManager__cctor_m136 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		MobileInput_t56 * L_0 = (MobileInput_t56 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MobileInput_t56_il2cpp_TypeInfo));
		MobileInput__ctor_m176(L_0, /*hidden argument*/&MobileInput__ctor_m176_MethodInfo);
		((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___s_TouchInput_1 = L_0;
		StandaloneInput_t57 * L_1 = (StandaloneInput_t57 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StandaloneInput_t57_il2cpp_TypeInfo));
		StandaloneInput__ctor_m190(L_1, /*hidden argument*/&StandaloneInput__ctor_m190_MethodInfo);
		((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___s_HardwareInput_2 = L_1;
		VirtualInput_t50 * L_2 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___s_TouchInput_1;
		((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
extern MethodInfo CrossPlatformInputManager_SwitchActiveInputMethod_m137_MethodInfo;
extern "C" void CrossPlatformInputManager_SwitchActiveInputMethod_m137 (Object_t * __this /* static, unused */, int32_t ___activeInputMethod, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___activeInputMethod;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0032;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_3 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___s_HardwareInput_2;
		((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0 = L_3;
		goto IL_0032;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_4 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___s_TouchInput_1;
		((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0 = L_4;
		goto IL_0032;
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C" bool CrossPlatformInputManager_AxisExists_m138 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = VirtualInput_AxisExists_m218(L_0, L_1, /*hidden argument*/&VirtualInput_AxisExists_m218_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern MethodInfo CrossPlatformInputManager_ButtonExists_m139_MethodInfo;
extern "C" bool CrossPlatformInputManager_ButtonExists_m139 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = VirtualInput_ButtonExists_m219(L_0, L_1, /*hidden argument*/&VirtualInput_ButtonExists_m219_MethodInfo);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" void CrossPlatformInputManager_RegisterVirtualAxis_m140 (Object_t * __this /* static, unused */, VirtualAxis_t45 * ___axis, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		VirtualAxis_t45 * L_1 = ___axis;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m220(L_0, L_1, /*hidden argument*/&VirtualInput_RegisterVirtualAxis_m220_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern MethodInfo CrossPlatformInputManager_RegisterVirtualButton_m141_MethodInfo;
extern "C" void CrossPlatformInputManager_RegisterVirtualButton_m141 (Object_t * __this /* static, unused */, VirtualButton_t49 * ___button, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		VirtualButton_t49 * L_1 = ___button;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m221(L_0, L_1, /*hidden argument*/&VirtualInput_RegisterVirtualButton_m221_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C" void CrossPlatformInputManager_UnRegisterVirtualAxis_m142 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t201 * L_1 = (ArgumentNullException_t201 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t201_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m755(L_1, (String_t*) &_stringLiteral15, /*hidden argument*/&ArgumentNullException__ctor_m755_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_2 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_3 = ___name;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m222(L_2, L_3, /*hidden argument*/&VirtualInput_UnRegisterVirtualAxis_m222_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C" void CrossPlatformInputManager_UnRegisterVirtualButton_m143 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m223(L_0, L_1, /*hidden argument*/&VirtualInput_UnRegisterVirtualButton_m223_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C" VirtualAxis_t45 * CrossPlatformInputManager_VirtualAxisReference_m144 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtualAxis_t45 * L_2 = VirtualInput_VirtualAxisReference_m224(L_0, L_1, /*hidden argument*/&VirtualInput_VirtualAxisReference_m224_MethodInfo);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C" float CrossPlatformInputManager_GetAxis_m145 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_1 = CrossPlatformInputManager_GetAxis_m147(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m147_MethodInfo);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern MethodInfo CrossPlatformInputManager_GetAxisRaw_m146_MethodInfo;
extern "C" float CrossPlatformInputManager_GetAxisRaw_m146 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_1 = CrossPlatformInputManager_GetAxis_m147(NULL /*static, unused*/, L_0, 1, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m147_MethodInfo);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C" float CrossPlatformInputManager_GetAxis_m147 (Object_t * __this /* static, unused */, String_t* ___name, bool ___raw, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		bool L_2 = ___raw;
		NullCheck(L_0);
		float L_3 = (float)VirtFuncInvoker2< float, String_t*, bool >::Invoke(&VirtualInput_GetAxis_m756_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C" bool CrossPlatformInputManager_GetButton_m148 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&VirtualInput_GetButton_m757_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C" bool CrossPlatformInputManager_GetButtonDown_m149 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&VirtualInput_GetButtonDown_m758_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern MethodInfo CrossPlatformInputManager_GetButtonUp_m150_MethodInfo;
extern "C" bool CrossPlatformInputManager_GetButtonUp_m150 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&VirtualInput_GetButtonUp_m759_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C" void CrossPlatformInputManager_SetButtonDown_m151 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&VirtualInput_SetButtonDown_m760_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C" void CrossPlatformInputManager_SetButtonUp_m152 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&VirtualInput_SetButtonUp_m761_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C" void CrossPlatformInputManager_SetAxisPositive_m153 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&VirtualInput_SetAxisPositive_m762_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C" void CrossPlatformInputManager_SetAxisNegative_m154 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&VirtualInput_SetAxisNegative_m763_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C" void CrossPlatformInputManager_SetAxisZero_m155 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&VirtualInput_SetAxisZero_m764_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern MethodInfo CrossPlatformInputManager_SetAxis_m156_MethodInfo;
extern "C" void CrossPlatformInputManager_SetAxis_m156 (Object_t * __this /* static, unused */, String_t* ___name, float ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		String_t* L_1 = ___name;
		float L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(&VirtualInput_SetAxis_m765_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern MethodInfo CrossPlatformInputManager_get_mousePosition_m157_MethodInfo;
extern "C" Vector3_t8  CrossPlatformInputManager_get_mousePosition_m157 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		NullCheck(L_0);
		Vector3_t8  L_1 = (Vector3_t8 )VirtFuncInvoker0< Vector3_t8  >::Invoke(&VirtualInput_MousePosition_m754_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern MethodInfo CrossPlatformInputManager_SetVirtualMousePositionX_m158_MethodInfo;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionX_m158 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m225(L_0, L_1, /*hidden argument*/&VirtualInput_SetVirtualMousePositionX_m225_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern MethodInfo CrossPlatformInputManager_SetVirtualMousePositionY_m159_MethodInfo;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionY_m159 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m226(L_0, L_1, /*hidden argument*/&VirtualInput_SetVirtualMousePositionY_m226_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern MethodInfo CrossPlatformInputManager_SetVirtualMousePositionZ_m160_MethodInfo;
extern "C" void CrossPlatformInputManager_SetVirtualMousePositionZ_m160 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		VirtualInput_t50 * L_0 = ((CrossPlatformInputManager_t51_StaticFields*)InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo)->static_fields)->___activeInput_0;
		float L_1 = ___f;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m227(L_0, L_1, /*hidden argument*/&VirtualInput_SetVirtualMousePositionZ_m227_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InputAxisScrollbar_t52_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_5MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
extern MethodInfo InputAxisScrollbar__ctor_m161_MethodInfo;
extern "C" void InputAxisScrollbar__ctor_m161 (InputAxisScrollbar_t52 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
extern MethodInfo InputAxisScrollbar_Update_m162_MethodInfo;
extern "C" void InputAxisScrollbar_Update_m162 (InputAxisScrollbar_t52 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
extern MethodInfo InputAxisScrollbar_HandleInput_m163_MethodInfo;
extern "C" void InputAxisScrollbar_HandleInput_m163 (InputAxisScrollbar_t52 * __this, float ___value, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___axis_2);
		float L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetAxis_m156(NULL /*static, unused*/, L_0, ((float)((float)((float)((float)L_1*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/&CrossPlatformInputManager_SetAxis_m156_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisOption_t53_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_6MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Joystick_t54_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.Joystick
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_7MethodDeclarations.h"

// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
extern MethodInfo Joystick_CreateVirtualAxes_m167_MethodInfo;
extern MethodInfo PointerEventData_get_position_m766_MethodInfo;
extern MethodInfo Mathf_Clamp_m767_MethodInfo;
extern MethodInfo Joystick_UpdateVirtualAxes_m166_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern MethodInfo Joystick__ctor_m164_MethodInfo;
extern "C" void Joystick__ctor_m164 (Joystick_t54 * __this, MethodInfo* method)
{
	{
		__this->___MovementRange_2 = ((int32_t)100);
		__this->___horizontalAxisName_4 = (String_t*) &_stringLiteral5;
		__this->___verticalAxisName_5 = (String_t*) &_stringLiteral6;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern MethodInfo Joystick_OnEnable_m165_MethodInfo;
extern "C" void Joystick_OnEnable_m165 (Joystick_t54 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___m_StartPos_6 = L_1;
		Joystick_CreateVirtualAxes_m167(__this, /*hidden argument*/&Joystick_CreateVirtualAxes_m167_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void Joystick_UpdateVirtualAxes_m166 (Joystick_t54 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector3_t8  L_0 = (__this->___m_StartPos_6);
		Vector3_t8  L_1 = ___value;
		Vector3_t8  L_2 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_0 = L_2;
		float L_3 = ((&V_0)->___y_2);
		(&V_0)->___y_2 = ((-L_3));
		Vector3_t8  L_4 = V_0;
		int32_t L_5 = (__this->___MovementRange_2);
		Vector3_t8  L_6 = Vector3_op_Division_m731(NULL /*static, unused*/, L_4, (((float)L_5)), /*hidden argument*/&Vector3_op_Division_m731_MethodInfo);
		V_0 = L_6;
		bool L_7 = (__this->___m_UseX_7);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t45 * L_8 = (__this->___m_HorizontalVirtualAxis_9);
		float L_9 = ((&V_0)->___x_1);
		NullCheck(L_8);
		VirtualAxis_Update_m121(L_8, ((-L_9)), /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0048:
	{
		bool L_10 = (__this->___m_UseY_8);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_10);
		float L_12 = ((&V_0)->___y_2);
		NullCheck(L_11);
		VirtualAxis_Update_m121(L_11, L_12, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C" void Joystick_CreateVirtualAxes_m167 (Joystick_t54 * __this, MethodInfo* method)
{
	Joystick_t54 * G_B2_0 = {0};
	Joystick_t54 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	Joystick_t54 * G_B3_1 = {0};
	Joystick_t54 * G_B5_0 = {0};
	Joystick_t54 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Joystick_t54 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___axesToUse_3);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->___axesToUse_3);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseX_7 = G_B3_0;
		int32_t L_2 = (__this->___axesToUse_3);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___axesToUse_3);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_UseY_8 = G_B6_0;
		bool L_4 = (__this->___m_UseX_7);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = (__this->___horizontalAxisName_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_6, L_5, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_HorizontalVirtualAxis_9 = L_6;
		VirtualAxis_t45 * L_7 = (__this->___m_HorizontalVirtualAxis_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_7, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0061:
	{
		bool L_8 = (__this->___m_UseY_8);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = (__this->___verticalAxisName_5);
		VirtualAxis_t45 * L_10 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_10, L_9, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_VerticalVirtualAxis_10 = L_10;
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_11, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo Joystick_OnDrag_m168_MethodInfo;
extern "C" void Joystick_OnDrag_m168 (Joystick_t54 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t13  V_3 = {0};
	Vector2_t13  V_4 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		V_0 = L_0;
		bool L_1 = (__this->___m_UseX_7);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PointerEventData_t46 * L_2 = ___data;
		NullCheck(L_2);
		Vector2_t13  L_3 = PointerEventData_get_position_m766(L_2, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		V_3 = L_3;
		float L_4 = ((&V_3)->___x_1);
		Vector3_t8 * L_5 = &(__this->___m_StartPos_6);
		float L_6 = (L_5->___x_1);
		V_1 = (((int32_t)((float)((float)L_4-(float)L_6))));
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___MovementRange_2);
		int32_t L_9 = (__this->___MovementRange_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_10 = Mathf_Clamp_m767(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/&Mathf_Clamp_m767_MethodInfo);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->___x_1 = (((float)L_11));
	}

IL_004a:
	{
		bool L_12 = (__this->___m_UseY_8);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		PointerEventData_t46 * L_13 = ___data;
		NullCheck(L_13);
		Vector2_t13  L_14 = PointerEventData_get_position_m766(L_13, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		V_4 = L_14;
		float L_15 = ((&V_4)->___y_2);
		Vector3_t8 * L_16 = &(__this->___m_StartPos_6);
		float L_17 = (L_16->___y_2);
		V_2 = (((int32_t)((float)((float)L_15-(float)L_17))));
		int32_t L_18 = V_2;
		int32_t L_19 = (__this->___MovementRange_2);
		int32_t L_20 = (__this->___MovementRange_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_21 = Mathf_Clamp_m767(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/&Mathf_Clamp_m767_MethodInfo);
		V_2 = L_21;
		int32_t L_22 = V_2;
		(&V_0)->___y_2 = (((float)L_22));
	}

IL_008f:
	{
		Transform_t2 * L_23 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8 * L_24 = &(__this->___m_StartPos_6);
		float L_25 = (L_24->___x_1);
		float L_26 = ((&V_0)->___x_1);
		Vector3_t8 * L_27 = &(__this->___m_StartPos_6);
		float L_28 = (L_27->___y_2);
		float L_29 = ((&V_0)->___y_2);
		Vector3_t8 * L_30 = &(__this->___m_StartPos_6);
		float L_31 = (L_30->___z_3);
		float L_32 = ((&V_0)->___z_3);
		Vector3_t8  L_33 = {0};
		Vector3__ctor_m700(&L_33, ((float)((float)L_25+(float)L_26)), ((float)((float)L_28+(float)L_29)), ((float)((float)L_31+(float)L_32)), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m601(L_23, L_33, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_34 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_34);
		Vector3_t8  L_35 = Transform_get_position_m599(L_34, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Joystick_UpdateVirtualAxes_m166(__this, L_35, /*hidden argument*/&Joystick_UpdateVirtualAxes_m166_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo Joystick_OnPointerUp_m169_MethodInfo;
extern "C" void Joystick_OnPointerUp_m169 (Joystick_t54 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_1 = (__this->___m_StartPos_6);
		NullCheck(L_0);
		Transform_set_position_m601(L_0, L_1, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Vector3_t8  L_2 = (__this->___m_StartPos_6);
		Joystick_UpdateVirtualAxes_m166(__this, L_2, /*hidden argument*/&Joystick_UpdateVirtualAxes_m166_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo Joystick_OnPointerDown_m170_MethodInfo;
extern "C" void Joystick_OnPointerDown_m170 (Joystick_t54 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern MethodInfo Joystick_OnDisable_m171_MethodInfo;
extern "C" void Joystick_OnDisable_m171 (Joystick_t54 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseX_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t45 * L_1 = (__this->___m_HorizontalVirtualAxis_9);
		NullCheck(L_1);
		VirtualAxis_Remove_m120(L_1, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
	}

IL_0016:
	{
		bool L_2 = (__this->___m_UseY_8);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t45 * L_3 = (__this->___m_VerticalVirtualAxis_10);
		NullCheck(L_3);
		VirtualAxis_Remove_m120(L_3, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
	}

IL_002c:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MobileControlRig_t55_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_8MethodDeclarations.h"

extern TypeInfo IEnumerator_t106_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t203_il2cpp_TypeInfo;
extern MethodInfo MobileControlRig_CheckEnableControlRig_m174_MethodInfo;
extern MethodInfo MobileControlRig_EnableControlRig_m175_MethodInfo;
extern MethodInfo Transform_GetEnumerator_m768_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m769_MethodInfo;
extern MethodInfo GameObject_SetActive_m770_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m771_MethodInfo;
extern MethodInfo IDisposable_Dispose_m772_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
extern MethodInfo MobileControlRig__ctor_m172_MethodInfo;
extern "C" void MobileControlRig__ctor_m172 (MobileControlRig_t55 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
extern MethodInfo MobileControlRig_OnEnable_m173_MethodInfo;
extern "C" void MobileControlRig_OnEnable_m173 (MobileControlRig_t55 * __this, MethodInfo* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m174(__this, /*hidden argument*/&MobileControlRig_CheckEnableControlRig_m174_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C" void MobileControlRig_CheckEnableControlRig_m174 (MobileControlRig_t55 * __this, MethodInfo* method)
{
	{
		MobileControlRig_EnableControlRig_m175(__this, 1, /*hidden argument*/&MobileControlRig_EnableControlRig_m175_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C" void MobileControlRig_EnableControlRig_m175 (MobileControlRig_t55 * __this, bool ___enabled, MethodInfo* method)
{
	Transform_t2 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m768_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_2);
			V_0 = ((Transform_t2 *)Castclass(L_3, InitializedTypeInfo(&Transform_t2_il2cpp_TypeInfo)));
			Transform_t2 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t92 * L_5 = Component_get_gameObject_m577(L_4, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
			bool L_6 = ___enabled;
			NullCheck(L_5);
			GameObject_SetActive_m770(L_5, L_6, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		}

IL_0029:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			Object_t * L_9 = V_1;
			V_2 = ((Object_t *)IsInst(L_9, InitializedTypeInfo(&IDisposable_t203_il2cpp_TypeInfo)));
			Object_t * L_10 = V_2;
			if (L_10)
			{
				goto IL_0044;
			}
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(57)
		}

IL_0044:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_11);
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_004b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
extern TypeInfo Dictionary_2_t66_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t67_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
extern Il2CppType Dictionary_2_t66_0_0_0;
extern Il2CppType Dictionary_2_t67_0_0_0;
extern MethodInfo VirtualInput__ctor_m215_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m773_MethodInfo;
extern MethodInfo MobileInput_AddAxes_m178_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m774_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m775_MethodInfo;
extern MethodInfo MobileInput_AddButton_m177_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m776_MethodInfo;
extern MethodInfo VirtualInput_get_virtualMousePosition_m216_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m773_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m774_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m775_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m776_GenericMethod;


// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C" void MobileInput__ctor_m176 (MobileInput_t56 * __this, MethodInfo* method)
{
	{
		VirtualInput__ctor_m215(__this, /*hidden argument*/&VirtualInput__ctor_m215_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C" void MobileInput_AddButton_m177 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualButton_t49 * L_1 = (VirtualButton_t49 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualButton_t49_il2cpp_TypeInfo));
		VirtualButton__ctor_m124(L_1, L_0, /*hidden argument*/&VirtualButton__ctor_m124_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualButton_m141(NULL /*static, unused*/, L_1, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualButton_m141_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C" void MobileInput_AddAxes_m178 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		VirtualAxis_t45 * L_1 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_1, L_0, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_1, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern MethodInfo MobileInput_GetAxis_m179_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m774_MethodInfo_var;
extern "C" float MobileInput_GetAxis_m179 (MobileInput_t56 * __this, String_t* ___name, bool ___raw, MethodInfo* method)
{
	static bool MobileInput_GetAxis_m179_init;
	if (!MobileInput_GetAxis_m179_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_get_Item_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m774_GenericMethod);
		MobileInput_GetAxis_m179_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m178(__this, L_3, /*hidden argument*/&MobileInput_AddAxes_m178_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t66 * L_4 = (__this->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)VirtFuncInvoker1< VirtualAxis_t45 *, String_t* >::Invoke(Dictionary_2_get_Item_m774_MethodInfo_var, L_4, L_5);
		NullCheck(L_6);
		float L_7 = VirtualAxis_get_GetValue_m122(L_6, /*hidden argument*/&VirtualAxis_get_GetValue_m122_MethodInfo);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern MethodInfo MobileInput_SetButtonDown_m180_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m776_MethodInfo_var;
extern "C" void MobileInput_SetButtonDown_m180 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_SetButtonDown_m180_init;
	if (!MobileInput_SetButtonDown_m180_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_get_Item_m776_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m776_GenericMethod);
		MobileInput_SetButtonDown_m180_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddButton_m177(__this, L_3, /*hidden argument*/&MobileInput_AddButton_m177_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t67 * L_4 = (__this->___m_VirtualButtons_1);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualButton_t49 * L_6 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_4, L_5);
		NullCheck(L_6);
		VirtualButton_Pressed_m130(L_6, /*hidden argument*/&VirtualButton_Pressed_m130_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern MethodInfo MobileInput_SetButtonUp_m181_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m776_MethodInfo_var;
extern "C" void MobileInput_SetButtonUp_m181 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_SetButtonUp_m181_init;
	if (!MobileInput_SetButtonUp_m181_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_get_Item_m776_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m776_GenericMethod);
		MobileInput_SetButtonUp_m181_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddButton_m177(__this, L_3, /*hidden argument*/&MobileInput_AddButton_m177_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t67 * L_4 = (__this->___m_VirtualButtons_1);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualButton_t49 * L_6 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_4, L_5);
		NullCheck(L_6);
		VirtualButton_Released_m131(L_6, /*hidden argument*/&VirtualButton_Released_m131_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern MethodInfo MobileInput_SetAxisPositive_m182_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m774_MethodInfo_var;
extern "C" void MobileInput_SetAxisPositive_m182 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_SetAxisPositive_m182_init;
	if (!MobileInput_SetAxisPositive_m182_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_get_Item_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m774_GenericMethod);
		MobileInput_SetAxisPositive_m182_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m178(__this, L_3, /*hidden argument*/&MobileInput_AddAxes_m178_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t66 * L_4 = (__this->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)VirtFuncInvoker1< VirtualAxis_t45 *, String_t* >::Invoke(Dictionary_2_get_Item_m774_MethodInfo_var, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m121(L_6, (1.0f), /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern MethodInfo MobileInput_SetAxisNegative_m183_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m774_MethodInfo_var;
extern "C" void MobileInput_SetAxisNegative_m183 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_SetAxisNegative_m183_init;
	if (!MobileInput_SetAxisNegative_m183_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_get_Item_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m774_GenericMethod);
		MobileInput_SetAxisNegative_m183_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m178(__this, L_3, /*hidden argument*/&MobileInput_AddAxes_m178_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t66 * L_4 = (__this->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)VirtFuncInvoker1< VirtualAxis_t45 *, String_t* >::Invoke(Dictionary_2_get_Item_m774_MethodInfo_var, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m121(L_6, (-1.0f), /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern MethodInfo MobileInput_SetAxisZero_m184_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m774_MethodInfo_var;
extern "C" void MobileInput_SetAxisZero_m184 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_SetAxisZero_m184_init;
	if (!MobileInput_SetAxisZero_m184_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_get_Item_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m774_GenericMethod);
		MobileInput_SetAxisZero_m184_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m178(__this, L_3, /*hidden argument*/&MobileInput_AddAxes_m178_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t66 * L_4 = (__this->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)VirtFuncInvoker1< VirtualAxis_t45 *, String_t* >::Invoke(Dictionary_2_get_Item_m774_MethodInfo_var, L_4, L_5);
		NullCheck(L_6);
		VirtualAxis_Update_m121(L_6, (0.0f), /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern MethodInfo MobileInput_SetAxis_m185_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m774_MethodInfo_var;
extern "C" void MobileInput_SetAxis_m185 (MobileInput_t56 * __this, String_t* ___name, float ___value, MethodInfo* method)
{
	static bool MobileInput_SetAxis_m185_init;
	if (!MobileInput_SetAxis_m185_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_get_Item_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m774_GenericMethod);
		MobileInput_SetAxis_m185_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name;
		MobileInput_AddAxes_m178(__this, L_3, /*hidden argument*/&MobileInput_AddAxes_m178_MethodInfo);
	}

IL_0018:
	{
		Dictionary_2_t66 * L_4 = (__this->___m_VirtualAxes_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)VirtFuncInvoker1< VirtualAxis_t45 *, String_t* >::Invoke(Dictionary_2_get_Item_m774_MethodInfo_var, L_4, L_5);
		float L_7 = ___value;
		NullCheck(L_6);
		VirtualAxis_Update_m121(L_6, L_7, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern MethodInfo MobileInput_GetButtonDown_m186_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m776_MethodInfo_var;
extern "C" bool MobileInput_GetButtonDown_m186 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_GetButtonDown_m186_init;
	if (!MobileInput_GetButtonDown_m186_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_get_Item_m776_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m776_GenericMethod);
		MobileInput_GetButtonDown_m186_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t67 * L_3 = (__this->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t49 * L_5 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m134(L_5, /*hidden argument*/&VirtualButton_get_GetButtonDown_m134_MethodInfo);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m177(__this, L_7, /*hidden argument*/&MobileInput_AddButton_m177_MethodInfo);
		Dictionary_2_t67 * L_8 = (__this->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t49 * L_10 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m134(L_10, /*hidden argument*/&VirtualButton_get_GetButtonDown_m134_MethodInfo);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern MethodInfo MobileInput_GetButtonUp_m187_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m776_MethodInfo_var;
extern "C" bool MobileInput_GetButtonUp_m187 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_GetButtonUp_m187_init;
	if (!MobileInput_GetButtonUp_m187_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_get_Item_m776_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m776_GenericMethod);
		MobileInput_GetButtonUp_m187_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t67 * L_3 = (__this->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t49 * L_5 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m135(L_5, /*hidden argument*/&VirtualButton_get_GetButtonUp_m135_MethodInfo);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m177(__this, L_7, /*hidden argument*/&MobileInput_AddButton_m177_MethodInfo);
		Dictionary_2_t67 * L_8 = (__this->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t49 * L_10 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m135(L_10, /*hidden argument*/&VirtualButton_get_GetButtonUp_m135_MethodInfo);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern MethodInfo MobileInput_GetButton_m188_MethodInfo;
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m776_MethodInfo_var;
extern "C" bool MobileInput_GetButton_m188 (MobileInput_t56 * __this, String_t* ___name, MethodInfo* method)
{
	static bool MobileInput_GetButton_m188_init;
	if (!MobileInput_GetButton_m188_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_get_Item_m776_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m776_GenericMethod);
		MobileInput_GetButton_m188_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t67 * L_3 = (__this->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualButton_t49 * L_5 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_3, L_4);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m133(L_5, /*hidden argument*/&VirtualButton_get_GetButton_m133_MethodInfo);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name;
		MobileInput_AddButton_m177(__this, L_7, /*hidden argument*/&MobileInput_AddButton_m177_MethodInfo);
		Dictionary_2_t67 * L_8 = (__this->___m_VirtualButtons_1);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		VirtualButton_t49 * L_10 = (VirtualButton_t49 *)VirtFuncInvoker1< VirtualButton_t49 *, String_t* >::Invoke(Dictionary_2_get_Item_m776_MethodInfo_var, L_8, L_9);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m133(L_10, /*hidden argument*/&VirtualButton_get_GetButton_m133_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern MethodInfo MobileInput_MousePosition_m189_MethodInfo;
extern "C" Vector3_t8  MobileInput_MousePosition_m189 (MobileInput_t56 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo Exception_t204_il2cpp_TypeInfo;
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Input_GetAxisRaw_m777_MethodInfo;
extern MethodInfo Input_GetAxis_m778_MethodInfo;
extern MethodInfo Input_GetButton_m779_MethodInfo;
extern MethodInfo Input_GetButtonDown_m780_MethodInfo;
extern MethodInfo Input_GetButtonUp_m781_MethodInfo;
extern MethodInfo Exception__ctor_m782_MethodInfo;
extern MethodInfo Input_get_mousePosition_m783_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C" void StandaloneInput__ctor_m190 (StandaloneInput_t57 * __this, MethodInfo* method)
{
	{
		VirtualInput__ctor_m215(__this, /*hidden argument*/&VirtualInput__ctor_m215_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern MethodInfo StandaloneInput_GetAxis_m191_MethodInfo;
extern "C" float StandaloneInput_GetAxis_m191 (StandaloneInput_t57 * __this, String_t* ___name, bool ___raw, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___raw;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		float L_2 = Input_GetAxisRaw_m777(NULL /*static, unused*/, L_1, /*hidden argument*/&Input_GetAxisRaw_m777_MethodInfo);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		float L_4 = Input_GetAxis_m778(NULL /*static, unused*/, L_3, /*hidden argument*/&Input_GetAxis_m778_MethodInfo);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern MethodInfo StandaloneInput_GetButton_m192_MethodInfo;
extern "C" bool StandaloneInput_GetButton_m192 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_1 = Input_GetButton_m779(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetButton_m779_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern MethodInfo StandaloneInput_GetButtonDown_m193_MethodInfo;
extern "C" bool StandaloneInput_GetButtonDown_m193 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_1 = Input_GetButtonDown_m780(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetButtonDown_m780_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern MethodInfo StandaloneInput_GetButtonUp_m194_MethodInfo;
extern "C" bool StandaloneInput_GetButtonUp_m194 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_1 = Input_GetButtonUp_m781(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetButtonUp_m781_MethodInfo);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern MethodInfo StandaloneInput_SetButtonDown_m195_MethodInfo;
extern "C" void StandaloneInput_SetButtonDown_m195 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_0, (String_t*) &_stringLiteral16, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern MethodInfo StandaloneInput_SetButtonUp_m196_MethodInfo;
extern "C" void StandaloneInput_SetButtonUp_m196 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_0, (String_t*) &_stringLiteral16, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern MethodInfo StandaloneInput_SetAxisPositive_m197_MethodInfo;
extern "C" void StandaloneInput_SetAxisPositive_m197 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_0, (String_t*) &_stringLiteral16, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern MethodInfo StandaloneInput_SetAxisNegative_m198_MethodInfo;
extern "C" void StandaloneInput_SetAxisNegative_m198 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_0, (String_t*) &_stringLiteral16, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern MethodInfo StandaloneInput_SetAxisZero_m199_MethodInfo;
extern "C" void StandaloneInput_SetAxisZero_m199 (StandaloneInput_t57 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_0, (String_t*) &_stringLiteral16, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern MethodInfo StandaloneInput_SetAxis_m200_MethodInfo;
extern "C" void StandaloneInput_SetAxis_m200 (StandaloneInput_t57 * __this, String_t* ___name, float ___value, MethodInfo* method)
{
	{
		Exception_t204 * L_0 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_0, (String_t*) &_stringLiteral16, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern MethodInfo StandaloneInput_MousePosition_m201_MethodInfo;
extern "C" Vector3_t8  StandaloneInput_MousePosition_m201 (StandaloneInput_t57 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_0 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		return L_0;
	}
}
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisOptions_t58_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_12MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MappingType_t59_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_13MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisMapping_t60_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_14MethodDeclarations.h"



// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
extern MethodInfo AxisMapping__ctor_m202_MethodInfo;
extern "C" void AxisMapping__ctor_m202 (AxisMapping_t60 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.TiltInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TiltInput_t61_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TiltInput
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_15MethodDeclarations.h"

// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern MethodInfo Input_get_acceleration_m784_MethodInfo;
extern MethodInfo Vector3_op_Inequality_m785_MethodInfo;
extern MethodInfo Screen_get_width_m786_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
extern MethodInfo TiltInput__ctor_m203_MethodInfo;
extern "C" void TiltInput__ctor_m203 (TiltInput_t61 * __this, MethodInfo* method)
{
	{
		__this->___fullTiltAngle_4 = (25.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
extern MethodInfo TiltInput_OnEnable_m204_MethodInfo;
extern "C" void TiltInput_OnEnable_m204 (TiltInput_t61 * __this, MethodInfo* method)
{
	{
		AxisMapping_t60 * L_0 = (__this->___mapping_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___type_0);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		AxisMapping_t60 * L_2 = (__this->___mapping_2);
		NullCheck(L_2);
		String_t* L_3 = (L_2->___axisName_1);
		VirtualAxis_t45 * L_4 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_4, L_3, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_SteerAxis_6 = L_4;
		VirtualAxis_t45 * L_5 = (__this->___m_SteerAxis_6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_5, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
extern MethodInfo TiltInput_Update_m205_MethodInfo;
extern "C" void TiltInput_Update_m205 (TiltInput_t61 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	Vector3_t8  V_5 = {0};
	Vector3_t8  V_6 = {0};
	int32_t V_7 = {0};
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_0 = Input_get_acceleration_m784(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m784_MethodInfo);
		Vector3_t8  L_1 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		bool L_2 = Vector3_op_Inequality_m785(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Inequality_m785_MethodInfo);
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_3 = (__this->___tiltAroundAxis_3);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_009c;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_6 = Input_get_acceleration_m784(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m784_MethodInfo);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		Vector3_t8  L_8 = Input_get_acceleration_m784(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m784_MethodInfo);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = (__this->___centreAngleOffset_5);
		V_0 = ((float)((float)((float)((float)L_10*(float)(57.29578f)))+(float)L_11));
		goto IL_009c;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_12 = Input_get_acceleration_m784(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m784_MethodInfo);
		V_5 = L_12;
		float L_13 = ((&V_5)->___z_3);
		Vector3_t8  L_14 = Input_get_acceleration_m784(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m784_MethodInfo);
		V_6 = L_14;
		float L_15 = ((&V_6)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = (__this->___centreAngleOffset_5);
		V_0 = ((float)((float)((float)((float)L_16*(float)(57.29578f)))+(float)L_17));
		goto IL_009c;
	}

IL_009c:
	{
		float L_18 = (__this->___fullTiltAngle_4);
		float L_19 = (__this->___fullTiltAngle_4);
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_21 = Mathf_InverseLerp_m597(NULL /*static, unused*/, ((-L_18)), L_19, L_20, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_1 = ((float)((float)((float)((float)L_21*(float)(2.0f)))-(float)(1.0f)));
		AxisMapping_t60 * L_22 = (__this->___mapping_2);
		NullCheck(L_22);
		int32_t L_23 = (L_22->___type_0);
		V_7 = L_23;
		int32_t L_24 = V_7;
		if (L_24 == 0)
		{
			goto IL_00e5;
		}
		if (L_24 == 1)
		{
			goto IL_00f6;
		}
		if (L_24 == 2)
		{
			goto IL_0108;
		}
		if (L_24 == 3)
		{
			goto IL_011a;
		}
	}
	{
		goto IL_012c;
	}

IL_00e5:
	{
		VirtualAxis_t45 * L_25 = (__this->___m_SteerAxis_6);
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m121(L_25, L_26, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
		goto IL_012c;
	}

IL_00f6:
	{
		float L_27 = V_1;
		int32_t L_28 = Screen_get_width_m786(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m786_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetVirtualMousePositionX_m158(NULL /*static, unused*/, ((float)((float)L_27*(float)(((float)L_28)))), /*hidden argument*/&CrossPlatformInputManager_SetVirtualMousePositionX_m158_MethodInfo);
		goto IL_012c;
	}

IL_0108:
	{
		float L_29 = V_1;
		int32_t L_30 = Screen_get_width_m786(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m786_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetVirtualMousePositionY_m159(NULL /*static, unused*/, ((float)((float)L_29*(float)(((float)L_30)))), /*hidden argument*/&CrossPlatformInputManager_SetVirtualMousePositionY_m159_MethodInfo);
		goto IL_012c;
	}

IL_011a:
	{
		float L_31 = V_1;
		int32_t L_32 = Screen_get_width_m786(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m786_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_SetVirtualMousePositionZ_m160(NULL /*static, unused*/, ((float)((float)L_31*(float)(((float)L_32)))), /*hidden argument*/&CrossPlatformInputManager_SetVirtualMousePositionZ_m160_MethodInfo);
		goto IL_012c;
	}

IL_012c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
extern MethodInfo TiltInput_OnDisable_m206_MethodInfo;
extern "C" void TiltInput_OnDisable_m206 (TiltInput_t61 * __this, MethodInfo* method)
{
	{
		VirtualAxis_t45 * L_0 = (__this->___m_SteerAxis_6);
		NullCheck(L_0);
		VirtualAxis_Remove_m120(L_0, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisOption_t62_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_16MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ControlStyle_t63_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_17MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPad_t65_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.TouchPad
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_18MethodDeclarations.h"

// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
extern MethodInfo TouchPad_CreateVirtualAxes_m209_MethodInfo;
extern MethodInfo PointerEventData_get_pointerId_m787_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m788_MethodInfo;
extern MethodInfo Input_get_touchCount_m789_MethodInfo;
extern MethodInfo Input_get_touches_m790_MethodInfo;
extern MethodInfo Touch_get_position_m791_MethodInfo;
extern MethodInfo Vector2_get_normalized_m792_MethodInfo;
extern MethodInfo TouchPad_UpdateVirtualAxes_m210_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_7.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t64_m793(__this, method) (( Image_t64 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisImage_t64_m793_GenericMethod;


// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
extern MethodInfo TouchPad__ctor_m207_MethodInfo;
extern "C" void TouchPad__ctor_m207 (TouchPad_t65 * __this, MethodInfo* method)
{
	{
		__this->___horizontalAxisName_4 = (String_t*) &_stringLiteral5;
		__this->___verticalAxisName_5 = (String_t*) &_stringLiteral6;
		__this->___Xsensitivity_6 = (1.0f);
		__this->___Ysensitivity_7 = (1.0f);
		__this->___m_Id_16 = (-1);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
extern MethodInfo TouchPad_OnEnable_m208_MethodInfo;
extern MethodInfo* Component_GetComponent_TisImage_t64_m793_MethodInfo_var;
extern "C" void TouchPad_OnEnable_m208 (TouchPad_t65 * __this, MethodInfo* method)
{
	static bool TouchPad_OnEnable_m208_init;
	if (!TouchPad_OnEnable_m208_init)
	{
		Component_GetComponent_TisImage_t64_m793_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisImage_t64_m793_GenericMethod);
		TouchPad_OnEnable_m208_init = true;
	}
	{
		TouchPad_CreateVirtualAxes_m209(__this, /*hidden argument*/&TouchPad_CreateVirtualAxes_m209_MethodInfo);
		Image_t64 * L_0 = Component_GetComponent_TisImage_t64_m793(__this, /*hidden argument*/Component_GetComponent_TisImage_t64_m793_MethodInfo_var);
		__this->___m_Image_19 = L_0;
		Image_t64 * L_1 = (__this->___m_Image_19);
		NullCheck(L_1);
		Transform_t2 * L_2 = Component_get_transform_m598(L_1, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___m_Center_18 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
extern "C" void TouchPad_CreateVirtualAxes_m209 (TouchPad_t65 * __this, MethodInfo* method)
{
	TouchPad_t65 * G_B2_0 = {0};
	TouchPad_t65 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	TouchPad_t65 * G_B3_1 = {0};
	TouchPad_t65 * G_B5_0 = {0};
	TouchPad_t65 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	TouchPad_t65 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___axesToUse_2);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->___axesToUse_2);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseX_11 = G_B3_0;
		int32_t L_2 = (__this->___axesToUse_2);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___axesToUse_2);
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_UseY_12 = G_B6_0;
		bool L_4 = (__this->___m_UseX_11);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = (__this->___horizontalAxisName_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_6, L_5, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_HorizontalVirtualAxis_13 = L_6;
		VirtualAxis_t45 * L_7 = (__this->___m_HorizontalVirtualAxis_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_7, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0061:
	{
		bool L_8 = (__this->___m_UseY_12);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = (__this->___verticalAxisName_5);
		VirtualAxis_t45 * L_10 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_10, L_9, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_VerticalVirtualAxis_14 = L_10;
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_11, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void TouchPad_UpdateVirtualAxes_m210 (TouchPad_t65 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = Vector3_get_normalized_m592((&___value), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		___value = L_0;
		bool L_1 = (__this->___m_UseX_11);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VirtualAxis_t45 * L_2 = (__this->___m_HorizontalVirtualAxis_13);
		float L_3 = ((&___value)->___x_1);
		NullCheck(L_2);
		VirtualAxis_Update_m121(L_2, L_3, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0026:
	{
		bool L_4 = (__this->___m_UseY_12);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		VirtualAxis_t45 * L_5 = (__this->___m_VerticalVirtualAxis_14);
		float L_6 = ((&___value)->___y_2);
		NullCheck(L_5);
		VirtualAxis_Update_m121(L_5, L_6, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo TouchPad_OnPointerDown_m211_MethodInfo;
extern "C" void TouchPad_OnPointerDown_m211 (TouchPad_t65 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		__this->___m_Dragging_15 = 1;
		PointerEventData_t46 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_pointerId_m787(L_0, /*hidden argument*/&PointerEventData_get_pointerId_m787_MethodInfo);
		__this->___m_Id_16 = L_1;
		int32_t L_2 = (__this->___controlStyle_3);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PointerEventData_t46 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t13  L_4 = PointerEventData_get_position_m766(L_3, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		Vector3_t8  L_5 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_4, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		__this->___m_Center_18 = L_5;
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
extern MethodInfo TouchPad_Update_m212_MethodInfo;
extern "C" void TouchPad_Update_m212 (TouchPad_t65 * __this, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	Vector2_t13  V_1 = {0};
	Vector2_t13  V_2 = {0};
	Vector2_t13  V_3 = {0};
	{
		bool L_0 = (__this->___m_Dragging_15);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		int32_t L_1 = Input_get_touchCount_m789(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m789_MethodInfo);
		int32_t L_2 = (__this->___m_Id_16);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)L_2+(int32_t)1)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_3 = (__this->___m_Id_16);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_4 = (__this->___controlStyle_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		Vector2_t13  L_5 = (__this->___m_PreviousTouchPos_17);
		Vector3_t8  L_6 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_5, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		__this->___m_Center_18 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		TouchU5BU5D_t205* L_7 = Input_get_touches_m790(NULL /*static, unused*/, /*hidden argument*/&Input_get_touches_m790_MethodInfo);
		int32_t L_8 = (__this->___m_Id_16);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Vector2_t13  L_9 = Touch_get_position_m791(((Touch_t206 *)(Touch_t206 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		__this->___m_PreviousTouchPos_17 = L_9;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		TouchU5BU5D_t205* L_10 = Input_get_touches_m790(NULL /*static, unused*/, /*hidden argument*/&Input_get_touches_m790_MethodInfo);
		int32_t L_11 = (__this->___m_Id_16);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		Vector2_t13  L_12 = Touch_get_position_m791(((Touch_t206 *)(Touch_t206 *)SZArrayLdElema(L_10, L_11)), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		V_2 = L_12;
		float L_13 = ((&V_2)->___x_1);
		Vector3_t8 * L_14 = &(__this->___m_Center_18);
		float L_15 = (L_14->___x_1);
		TouchU5BU5D_t205* L_16 = Input_get_touches_m790(NULL /*static, unused*/, /*hidden argument*/&Input_get_touches_m790_MethodInfo);
		int32_t L_17 = (__this->___m_Id_16);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		Vector2_t13  L_18 = Touch_get_position_m791(((Touch_t206 *)(Touch_t206 *)SZArrayLdElema(L_16, L_17)), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		V_3 = L_18;
		float L_19 = ((&V_3)->___y_2);
		Vector3_t8 * L_20 = &(__this->___m_Center_18);
		float L_21 = (L_20->___y_2);
		Vector2__ctor_m682((&V_1), ((float)((float)L_13-(float)L_15)), ((float)((float)L_19-(float)L_21)), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		Vector2_t13  L_22 = Vector2_get_normalized_m792((&V_1), /*hidden argument*/&Vector2_get_normalized_m792_MethodInfo);
		V_0 = L_22;
		Vector2_t13 * L_23 = (&V_0);
		float L_24 = (L_23->___x_1);
		float L_25 = (__this->___Xsensitivity_6);
		L_23->___x_1 = ((float)((float)L_24*(float)L_25));
		Vector2_t13 * L_26 = (&V_0);
		float L_27 = (L_26->___y_2);
		float L_28 = (__this->___Ysensitivity_7);
		L_26->___y_2 = ((float)((float)L_27*(float)L_28));
		float L_29 = ((&V_0)->___x_1);
		float L_30 = ((&V_0)->___y_2);
		Vector3_t8  L_31 = {0};
		Vector3__ctor_m700(&L_31, L_29, L_30, (0.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		TouchPad_UpdateVirtualAxes_m210(__this, L_31, /*hidden argument*/&TouchPad_UpdateVirtualAxes_m210_MethodInfo);
	}

IL_0109:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo TouchPad_OnPointerUp_m213_MethodInfo;
extern "C" void TouchPad_OnPointerUp_m213 (TouchPad_t65 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		__this->___m_Dragging_15 = 0;
		__this->___m_Id_16 = (-1);
		Vector3_t8  L_0 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		TouchPad_UpdateVirtualAxes_m210(__this, L_0, /*hidden argument*/&TouchPad_UpdateVirtualAxes_m210_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
extern MethodInfo TouchPad_OnDisable_m214_MethodInfo;
extern "C" void TouchPad_OnDisable_m214 (TouchPad_t65 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___horizontalAxisName_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_1 = CrossPlatformInputManager_AxisExists_m138(NULL /*static, unused*/, L_0, /*hidden argument*/&CrossPlatformInputManager_AxisExists_m138_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = (__this->___horizontalAxisName_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_UnRegisterVirtualAxis_m142(NULL /*static, unused*/, L_2, /*hidden argument*/&CrossPlatformInputManager_UnRegisterVirtualAxis_m142_MethodInfo);
	}

IL_001b:
	{
		String_t* L_3 = (__this->___verticalAxisName_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_4 = CrossPlatformInputManager_AxisExists_m138(NULL /*static, unused*/, L_3, /*hidden argument*/&CrossPlatformInputManager_AxisExists_m138_MethodInfo);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = (__this->___verticalAxisName_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_UnRegisterVirtualAxis_m142(NULL /*static, unused*/, L_5, /*hidden argument*/&CrossPlatformInputManager_UnRegisterVirtualAxis_m142_MethodInfo);
	}

IL_0036:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
extern TypeInfo List_1_t68_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
extern Il2CppType List_1_t68_0_0_0;
extern MethodInfo Dictionary_2__ctor_m794_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m795_MethodInfo;
extern MethodInfo List_1__ctor_m796_MethodInfo;
extern MethodInfo String_Concat_m797_MethodInfo;
extern MethodInfo Debug_LogError_m798_MethodInfo;
extern MethodInfo Dictionary_2_Add_m799_MethodInfo;
extern MethodInfo List_1_Add_m800_MethodInfo;
extern MethodInfo Dictionary_2_Add_m801_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m802_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m803_MethodInfo;
extern MethodInfo VirtualInput_set_virtualMousePosition_m217_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m794_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m795_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m796_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m799_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m800_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m801_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m802_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m803_GenericMethod;


// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern TypeInfo* Dictionary_2_t66_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t67_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t68_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m794_MethodInfo_var;
extern MethodInfo* Dictionary_2__ctor_m795_MethodInfo_var;
extern MethodInfo* List_1__ctor_m796_MethodInfo_var;
extern "C" void VirtualInput__ctor_m215 (VirtualInput_t50 * __this, MethodInfo* method)
{
	static bool VirtualInput__ctor_m215_init;
	if (!VirtualInput__ctor_m215_init)
	{
		Dictionary_2_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t66_0_0_0);
		Dictionary_2_t67_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t67_0_0_0);
		List_1_t68_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t68_0_0_0);
		Dictionary_2__ctor_m794_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m794_GenericMethod);
		Dictionary_2__ctor_m795_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m795_GenericMethod);
		List_1__ctor_m796_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m796_GenericMethod);
		VirtualInput__ctor_m215_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (Dictionary_2_t66 *)il2cpp_codegen_object_new (Dictionary_2_t66_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m794(L_0, /*hidden argument*/Dictionary_2__ctor_m794_MethodInfo_var);
		__this->___m_VirtualAxes_0 = L_0;
		Dictionary_2_t67 * L_1 = (Dictionary_2_t67 *)il2cpp_codegen_object_new (Dictionary_2_t67_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m795(L_1, /*hidden argument*/Dictionary_2__ctor_m795_MethodInfo_var);
		__this->___m_VirtualButtons_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t68_il2cpp_TypeInfo_var);
		List_1_t68 * L_2 = (List_1_t68 *)il2cpp_codegen_object_new (List_1_t68_il2cpp_TypeInfo_var);
		List_1__ctor_m796(L_2, /*hidden argument*/List_1__ctor_m796_MethodInfo_var);
		__this->___m_AlwaysUseVirtual_2 = L_2;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" Vector3_t8  VirtualInput_get_virtualMousePosition_m216 (VirtualInput_t50 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___U3CvirtualMousePositionU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C" void VirtualInput_set_virtualMousePosition_m217 (VirtualInput_t50 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___value;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern "C" bool VirtualInput_AxisExists_m218 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method)
{
	static bool VirtualInput_AxisExists_m218_init;
	if (!VirtualInput_AxisExists_m218_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		VirtualInput_AxisExists_m218_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern "C" bool VirtualInput_ButtonExists_m219 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method)
{
	static bool VirtualInput_ButtonExists_m219_init;
	if (!VirtualInput_ButtonExists_m219_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		VirtualInput_ButtonExists_m219_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m799_MethodInfo_var;
extern MethodInfo* List_1_Add_m800_MethodInfo_var;
extern "C" void VirtualInput_RegisterVirtualAxis_m220 (VirtualInput_t50 * __this, VirtualAxis_t45 * ___axis, MethodInfo* method)
{
	static bool VirtualInput_RegisterVirtualAxis_m220_init;
	if (!VirtualInput_RegisterVirtualAxis_m220_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_Add_m799_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m799_GenericMethod);
		List_1_Add_m800_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m800_GenericMethod);
		VirtualInput_RegisterVirtualAxis_m220_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		VirtualAxis_t45 * L_1 = ___axis;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m116(L_1, /*hidden argument*/&VirtualAxis_get_name_m116_MethodInfo);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t45 * L_4 = ___axis;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m116(L_4, /*hidden argument*/&VirtualAxis_get_name_m116_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m797(NULL /*static, unused*/, (String_t*) &_stringLiteral17, L_5, (String_t*) &_stringLiteral18, /*hidden argument*/&String_Concat_m797_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_6, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t66 * L_7 = (__this->___m_VirtualAxes_0);
		VirtualAxis_t45 * L_8 = ___axis;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m116(L_8, /*hidden argument*/&VirtualAxis_get_name_m116_MethodInfo);
		VirtualAxis_t45 * L_10 = ___axis;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, VirtualAxis_t45 * >::Invoke(Dictionary_2_Add_m799_MethodInfo_var, L_7, L_9, L_10);
		VirtualAxis_t45 * L_11 = ___axis;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m118(L_11, /*hidden argument*/&VirtualAxis_get_matchWithInputManager_m118_MethodInfo);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t68 * L_13 = (__this->___m_AlwaysUseVirtual_2);
		VirtualAxis_t45 * L_14 = ___axis;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m116(L_14, /*hidden argument*/&VirtualAxis_get_name_m116_MethodInfo);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m800_MethodInfo_var, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m801_MethodInfo_var;
extern MethodInfo* List_1_Add_m800_MethodInfo_var;
extern "C" void VirtualInput_RegisterVirtualButton_m221 (VirtualInput_t50 * __this, VirtualButton_t49 * ___button, MethodInfo* method)
{
	static bool VirtualInput_RegisterVirtualButton_m221_init;
	if (!VirtualInput_RegisterVirtualButton_m221_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_Add_m801_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m801_GenericMethod);
		List_1_Add_m800_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m800_GenericMethod);
		VirtualInput_RegisterVirtualButton_m221_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		VirtualButton_t49 * L_1 = ___button;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m126(L_1, /*hidden argument*/&VirtualButton_get_name_m126_MethodInfo);
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t49 * L_4 = ___button;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m126(L_4, /*hidden argument*/&VirtualButton_get_name_m126_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m797(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_5, (String_t*) &_stringLiteral18, /*hidden argument*/&String_Concat_m797_MethodInfo);
		Debug_LogError_m798(NULL /*static, unused*/, L_6, /*hidden argument*/&Debug_LogError_m798_MethodInfo);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t67 * L_7 = (__this->___m_VirtualButtons_1);
		VirtualButton_t49 * L_8 = ___button;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m126(L_8, /*hidden argument*/&VirtualButton_get_name_m126_MethodInfo);
		VirtualButton_t49 * L_10 = ___button;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, VirtualButton_t49 * >::Invoke(Dictionary_2_Add_m801_MethodInfo_var, L_7, L_9, L_10);
		VirtualButton_t49 * L_11 = ___button;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m128(L_11, /*hidden argument*/&VirtualButton_get_matchWithInputManager_m128_MethodInfo);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t68 * L_13 = (__this->___m_AlwaysUseVirtual_2);
		VirtualButton_t49 * L_14 = ___button;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m126(L_14, /*hidden argument*/&VirtualButton_get_name_m126_MethodInfo);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m800_MethodInfo_var, L_13, L_15);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_Remove_m802_MethodInfo_var;
extern "C" void VirtualInput_UnRegisterVirtualAxis_m222 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method)
{
	static bool VirtualInput_UnRegisterVirtualAxis_m222_init;
	if (!VirtualInput_UnRegisterVirtualAxis_m222_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_Remove_m802_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m802_GenericMethod);
		VirtualInput_UnRegisterVirtualAxis_m222_init = true;
	}
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t66 * L_3 = (__this->___m_VirtualAxes_0);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m802_MethodInfo_var, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern MethodInfo* Dictionary_2_ContainsKey_m775_MethodInfo_var;
extern MethodInfo* Dictionary_2_Remove_m803_MethodInfo_var;
extern "C" void VirtualInput_UnRegisterVirtualButton_m223 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method)
{
	static bool VirtualInput_UnRegisterVirtualButton_m223_init;
	if (!VirtualInput_UnRegisterVirtualButton_m223_init)
	{
		Dictionary_2_ContainsKey_m775_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m775_GenericMethod);
		Dictionary_2_Remove_m803_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m803_GenericMethod);
		VirtualInput_UnRegisterVirtualButton_m223_init = true;
	}
	{
		Dictionary_2_t67 * L_0 = (__this->___m_VirtualButtons_1);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m775_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t67 * L_3 = (__this->___m_VirtualButtons_1);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m803_MethodInfo_var, L_3, L_4);
	}

IL_001e:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern MethodInfo* Dictionary_2_ContainsKey_m773_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m774_MethodInfo_var;
extern "C" VirtualAxis_t45 * VirtualInput_VirtualAxisReference_m224 (VirtualInput_t50 * __this, String_t* ___name, MethodInfo* method)
{
	static bool VirtualInput_VirtualAxisReference_m224_init;
	if (!VirtualInput_VirtualAxisReference_m224_init)
	{
		Dictionary_2_ContainsKey_m773_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m773_GenericMethod);
		Dictionary_2_get_Item_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m774_GenericMethod);
		VirtualInput_VirtualAxisReference_m224_init = true;
	}
	VirtualAxis_t45 * G_B3_0 = {0};
	{
		Dictionary_2_t66 * L_0 = (__this->___m_VirtualAxes_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m773_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t66 * L_3 = (__this->___m_VirtualAxes_0);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtualAxis_t45 * L_5 = (VirtualAxis_t45 *)VirtFuncInvoker1< VirtualAxis_t45 *, String_t* >::Invoke(Dictionary_2_get_Item_m774_MethodInfo_var, L_3, L_4);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t45 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionX_m225 (VirtualInput_t50 * __this, float ___f, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		float L_0 = ___f;
		Vector3_t8  L_1 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		Vector3_t8  L_3 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		V_1 = L_3;
		float L_4 = ((&V_1)->___z_3);
		Vector3_t8  L_5 = {0};
		Vector3__ctor_m700(&L_5, L_0, L_2, L_4, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		VirtualInput_set_virtualMousePosition_m217(__this, L_5, /*hidden argument*/&VirtualInput_set_virtualMousePosition_m217_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionY_m226 (VirtualInput_t50 * __this, float ___f, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		Vector3_t8  L_0 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		float L_2 = ___f;
		Vector3_t8  L_3 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		V_1 = L_3;
		float L_4 = ((&V_1)->___z_3);
		Vector3_t8  L_5 = {0};
		Vector3__ctor_m700(&L_5, L_1, L_2, L_4, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		VirtualInput_set_virtualMousePosition_m217(__this, L_5, /*hidden argument*/&VirtualInput_set_virtualMousePosition_m217_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionZ_m227 (VirtualInput_t50 * __this, float ___f, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		Vector3_t8  L_0 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t8  L_2 = VirtualInput_get_virtualMousePosition_m216(__this, /*hidden argument*/&VirtualInput_get_virtualMousePosition_m216_MethodInfo);
		V_1 = L_2;
		float L_3 = ((&V_1)->___y_2);
		float L_4 = ___f;
		Vector3_t8  L_5 = {0};
		Vector3__ctor_m700(&L_5, L_1, L_3, L_4, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		VirtualInput_set_virtualMousePosition_m217(__this, L_5, /*hidden argument*/&VirtualInput_set_virtualMousePosition_m217_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single)
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition()
// UnityStandardAssets.Water.WaterBasic
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaterBasic_t69_il2cpp_TypeInfo;
// UnityStandardAssets.Water.WaterBasic
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_WateMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Vector4_t82_il2cpp_TypeInfo;
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Renderer_get_sharedMaterial_m804_MethodInfo;
extern MethodInfo Material_GetVector_m805_MethodInfo;
extern MethodInfo Material_GetFloat_m806_MethodInfo;
extern MethodInfo Vector4_op_Multiply_m807_MethodInfo;
extern MethodInfo Vector4__ctor_m808_MethodInfo;
extern MethodInfo Material_SetVector_m809_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_8.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t156_m810(__this, method) (( Renderer_t156 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRenderer_t156_m810_GenericMethod;


// System.Void UnityStandardAssets.Water.WaterBasic::.ctor()
extern MethodInfo WaterBasic__ctor_m228_MethodInfo;
extern "C" void WaterBasic__ctor_m228 (WaterBasic_t69 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBasic::Update()
extern MethodInfo WaterBasic_Update_m229_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern "C" void WaterBasic_Update_m229 (WaterBasic_t69 * __this, MethodInfo* method)
{
	static bool WaterBasic_Update_m229_init;
	if (!WaterBasic_Update_m229_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		WaterBasic_Update_m229_init = true;
	}
	Renderer_t156 * V_0 = {0};
	Material_t75 * V_1 = {0};
	Vector4_t82  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector4_t82  V_5 = {0};
	Vector4_t82  V_6 = {0};
	{
		Renderer_t156 * L_0 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		V_0 = L_0;
		Renderer_t156 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m582(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Renderer_t156 * L_3 = V_0;
		NullCheck(L_3);
		Material_t75 * L_4 = Renderer_get_sharedMaterial_m804(L_3, /*hidden argument*/&Renderer_get_sharedMaterial_m804_MethodInfo);
		V_1 = L_4;
		Material_t75 * L_5 = V_1;
		bool L_6 = Object_op_Implicit_m582(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		Material_t75 * L_7 = V_1;
		NullCheck(L_7);
		Vector4_t82  L_8 = Material_GetVector_m805(L_7, (String_t*) &_stringLiteral20, /*hidden argument*/&Material_GetVector_m805_MethodInfo);
		V_2 = L_8;
		Material_t75 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = Material_GetFloat_m806(L_9, (String_t*) &_stringLiteral21, /*hidden argument*/&Material_GetFloat_m806_MethodInfo);
		V_3 = L_10;
		float L_11 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		V_4 = ((float)((float)L_11/(float)(20.0f)));
		Vector4_t82  L_12 = V_2;
		float L_13 = V_4;
		float L_14 = V_3;
		Vector4_t82  L_15 = Vector4_op_Multiply_m807(NULL /*static, unused*/, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/&Vector4_op_Multiply_m807_MethodInfo);
		V_5 = L_15;
		float L_16 = ((&V_5)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_17 = Mathf_Repeat_m741(NULL /*static, unused*/, L_16, (1.0f), /*hidden argument*/&Mathf_Repeat_m741_MethodInfo);
		float L_18 = ((&V_5)->___y_2);
		float L_19 = Mathf_Repeat_m741(NULL /*static, unused*/, L_18, (1.0f), /*hidden argument*/&Mathf_Repeat_m741_MethodInfo);
		float L_20 = ((&V_5)->___z_3);
		float L_21 = Mathf_Repeat_m741(NULL /*static, unused*/, L_20, (1.0f), /*hidden argument*/&Mathf_Repeat_m741_MethodInfo);
		float L_22 = ((&V_5)->___w_4);
		float L_23 = Mathf_Repeat_m741(NULL /*static, unused*/, L_22, (1.0f), /*hidden argument*/&Mathf_Repeat_m741_MethodInfo);
		Vector4__ctor_m808((&V_6), L_17, L_19, L_21, L_23, /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		Material_t75 * L_24 = V_1;
		Vector4_t82  L_25 = V_6;
		NullCheck(L_24);
		Material_SetVector_m809(L_24, (String_t*) &_stringLiteral22, L_25, /*hidden argument*/&Material_SetVector_m809_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Water.Displace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Disp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Displace_t70_il2cpp_TypeInfo;
// UnityStandardAssets.Water.Displace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_DispMethodDeclarations.h"

// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern MethodInfo Behaviour_get_enabled_m811_MethodInfo;
extern MethodInfo Displace_OnEnable_m232_MethodInfo;
extern MethodInfo Displace_OnDisable_m233_MethodInfo;
extern MethodInfo Shader_EnableKeyword_m812_MethodInfo;
extern MethodInfo Shader_DisableKeyword_m813_MethodInfo;


// System.Void UnityStandardAssets.Water.Displace::.ctor()
extern MethodInfo Displace__ctor_m230_MethodInfo;
extern "C" void Displace__ctor_m230 (Displace_t70 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.Displace::Awake()
extern MethodInfo Displace_Awake_m231_MethodInfo;
extern "C" void Displace_Awake_m231 (Displace_t70 * __this, MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m811(__this, /*hidden argument*/&Behaviour_get_enabled_m811_MethodInfo);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Displace_OnEnable_m232(__this, /*hidden argument*/&Displace_OnEnable_m232_MethodInfo);
		goto IL_001c;
	}

IL_0016:
	{
		Displace_OnDisable_m233(__this, /*hidden argument*/&Displace_OnDisable_m233_MethodInfo);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Water.Displace::OnEnable()
extern "C" void Displace_OnEnable_m232 (Displace_t70 * __this, MethodInfo* method)
{
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral23, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral24, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.Displace::OnDisable()
extern "C" void Displace_OnDisable_m233 (Displace_t70 * __this, MethodInfo* method)
{
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral24, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral23, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Water.GerstnerDisplace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Gers.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GerstnerDisplace_t71_il2cpp_TypeInfo;
// UnityStandardAssets.Water.GerstnerDisplace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_GersMethodDeclarations.h"



// System.Void UnityStandardAssets.Water.GerstnerDisplace::.ctor()
extern MethodInfo GerstnerDisplace__ctor_m234_MethodInfo;
extern "C" void GerstnerDisplace__ctor_m234 (GerstnerDisplace_t71 * __this, MethodInfo* method)
{
	{
		Displace__ctor_m230(__this, /*hidden argument*/&Displace__ctor_m230_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Water.MeshContainer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Mesh.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MeshContainer_t74_il2cpp_TypeInfo;
// UnityStandardAssets.Water.MeshContainer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_MeshMethodDeclarations.h"

// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
extern MethodInfo Mesh_get_vertices_m814_MethodInfo;
extern MethodInfo Mesh_get_normals_m815_MethodInfo;
extern MethodInfo Mesh_set_vertices_m816_MethodInfo;
extern MethodInfo Mesh_set_normals_m817_MethodInfo;


// System.Void UnityStandardAssets.Water.MeshContainer::.ctor(UnityEngine.Mesh)
extern MethodInfo MeshContainer__ctor_m235_MethodInfo;
extern "C" void MeshContainer__ctor_m235 (MeshContainer_t74 * __this, Mesh_t72 * ___m, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Mesh_t72 * L_0 = ___m;
		__this->___mesh_0 = L_0;
		Mesh_t72 * L_1 = ___m;
		NullCheck(L_1);
		Vector3U5BU5D_t73* L_2 = Mesh_get_vertices_m814(L_1, /*hidden argument*/&Mesh_get_vertices_m814_MethodInfo);
		__this->___vertices_1 = L_2;
		Mesh_t72 * L_3 = ___m;
		NullCheck(L_3);
		Vector3U5BU5D_t73* L_4 = Mesh_get_normals_m815(L_3, /*hidden argument*/&Mesh_get_normals_m815_MethodInfo);
		__this->___normals_2 = L_4;
		return;
	}
}
// System.Void UnityStandardAssets.Water.MeshContainer::Update()
extern MethodInfo MeshContainer_Update_m236_MethodInfo;
extern "C" void MeshContainer_Update_m236 (MeshContainer_t74 * __this, MethodInfo* method)
{
	{
		Mesh_t72 * L_0 = (__this->___mesh_0);
		Vector3U5BU5D_t73* L_1 = (__this->___vertices_1);
		NullCheck(L_0);
		Mesh_set_vertices_m816(L_0, L_1, /*hidden argument*/&Mesh_set_vertices_m816_MethodInfo);
		Mesh_t72 * L_2 = (__this->___mesh_0);
		Vector3U5BU5D_t73* L_3 = (__this->___normals_2);
		NullCheck(L_2);
		Mesh_set_normals_m817(L_2, L_3, /*hidden argument*/&Mesh_set_normals_m817_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Water.PlanarReflection
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Plan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlanarReflection_t77_il2cpp_TypeInfo;
// UnityStandardAssets.Water.PlanarReflection
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_PlanMethodDeclarations.h"

// UnityStandardAssets.Water.WaterBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_3.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Skybox
#include "UnityEngine_UnityEngine_Skybox.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
// UnityEngine.RenderingPath
#include "UnityEngine_UnityEngine_RenderingPath.h"
extern TypeInfo WaterBase_t83_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t207_il2cpp_TypeInfo;
extern TypeInfo GameObject_t92_il2cpp_TypeInfo;
extern TypeInfo RenderTexture_t80_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t76_il2cpp_TypeInfo;
extern TypeInfo Camera_t19_il2cpp_TypeInfo;
extern TypeInfo Skybox_t208_il2cpp_TypeInfo;
extern TypeInfo Matrix4x4_t81_il2cpp_TypeInfo;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// UnityEngine.Skybox
#include "UnityEngine_UnityEngine_SkyboxMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern Il2CppType WaterBase_t83_0_0_0;
extern Il2CppType TypeU5BU5D_t207_0_0_0;
extern Il2CppType Camera_t19_0_0_0;
extern Il2CppType Dictionary_2_t76_0_0_0;
extern Il2CppType Skybox_t208_0_0_0;
extern MethodInfo Color_get_grey_m818_MethodInfo;
extern MethodInfo GameObject_GetComponent_m819_MethodInfo;
extern MethodInfo Object_get_name_m820_MethodInfo;
extern MethodInfo GameObject_Find_m821_MethodInfo;
extern MethodInfo GameObject__ctor_m822_MethodInfo;
extern MethodInfo GameObject_AddComponent_m823_MethodInfo;
extern MethodInfo Camera_set_backgroundColor_m824_MethodInfo;
extern MethodInfo Camera_set_clearFlags_m825_MethodInfo;
extern MethodInfo PlanarReflection_SetStandardCameraParameter_m240_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m826_MethodInfo;
extern MethodInfo PlanarReflection_CreateTextureFor_m241_MethodInfo;
extern MethodInfo Camera_set_targetTexture_m827_MethodInfo;
extern MethodInfo LayerMask_op_Implicit_m828_MethodInfo;
extern MethodInfo LayerMask_NameToLayer_m829_MethodInfo;
extern MethodInfo Camera_set_cullingMask_m830_MethodInfo;
extern MethodInfo Color_get_black_m831_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m832_MethodInfo;
extern MethodInfo Camera_get_pixelWidth_m833_MethodInfo;
extern MethodInfo Mathf_FloorToInt_m834_MethodInfo;
extern MethodInfo Camera_get_pixelHeight_m835_MethodInfo;
extern MethodInfo RenderTexture__ctor_m836_MethodInfo;
extern MethodInfo Object_set_hideFlags_m837_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m838_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m839_MethodInfo;
extern MethodInfo Dictionary_2_Add_m840_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m841_MethodInfo;
extern MethodInfo PlanarReflection_CreateReflectionCameraFor_m239_MethodInfo;
extern MethodInfo PlanarReflection_RenderReflectionFor_m247_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m842_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m843_MethodInfo;
extern MethodInfo PlanarReflection_RenderHelpCameras_m242_MethodInfo;
extern MethodInfo Material_SetTexture_m844_MethodInfo;
extern MethodInfo Material_HasProperty_m845_MethodInfo;
extern MethodInfo PlanarReflection_SaneCameraSettings_m248_MethodInfo;
extern MethodInfo Component_GetComponent_m846_MethodInfo;
extern MethodInfo Skybox_get_material_m847_MethodInfo;
extern MethodInfo Skybox_set_material_m848_MethodInfo;
extern MethodInfo GL_set_invertCulling_m849_MethodInfo;
extern MethodInfo Transform_set_eulerAngles_m850_MethodInfo;
extern MethodInfo Vector3_Dot_m851_MethodInfo;
extern MethodInfo Matrix4x4_get_zero_m852_MethodInfo;
extern MethodInfo PlanarReflection_CalculateReflectionMatrix_m250_MethodInfo;
extern MethodInfo Matrix4x4_MultiplyPoint_m853_MethodInfo;
extern MethodInfo Camera_get_worldToCameraMatrix_m854_MethodInfo;
extern MethodInfo Matrix4x4_op_Multiply_m855_MethodInfo;
extern MethodInfo Camera_set_worldToCameraMatrix_m856_MethodInfo;
extern MethodInfo PlanarReflection_CameraSpacePlane_m252_MethodInfo;
extern MethodInfo Camera_get_projectionMatrix_m857_MethodInfo;
extern MethodInfo PlanarReflection_CalculateObliqueMatrix_m249_MethodInfo;
extern MethodInfo Camera_set_projectionMatrix_m858_MethodInfo;
extern MethodInfo Camera_Render_m859_MethodInfo;
extern MethodInfo Camera_set_depthTextureMode_m860_MethodInfo;
extern MethodInfo Camera_set_renderingPath_m861_MethodInfo;
extern MethodInfo Matrix4x4_get_inverse_m862_MethodInfo;
extern MethodInfo PlanarReflection_Sgn_m251_MethodInfo;
extern MethodInfo Matrix4x4_op_Multiply_m863_MethodInfo;
extern MethodInfo Vector4_Dot_m864_MethodInfo;
extern MethodInfo Matrix4x4_get_Item_m865_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m866_MethodInfo;
extern MethodInfo Vector4_get_Item_m867_MethodInfo;
extern MethodInfo Matrix4x4_MultiplyVector_m868_MethodInfo;
struct GameObject_t92;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_9.h"
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m870_gshared (GameObject_t92 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m870(__this, method) (( Object_t * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t19_m869(__this, method) (( Camera_t19 * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisCamera_t19_m869_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m838_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m839_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m840_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m841_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m842_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m843_GenericMethod;


// System.Void UnityStandardAssets.Water.PlanarReflection::.ctor()
extern MethodInfo PlanarReflection__ctor_m237_MethodInfo;
extern "C" void PlanarReflection__ctor_m237 (PlanarReflection_t77 * __this, MethodInfo* method)
{
	{
		Color_t79  L_0 = Color_get_grey_m818(NULL /*static, unused*/, /*hidden argument*/&Color_get_grey_m818_MethodInfo);
		__this->___clearColor_4 = L_0;
		__this->___reflectionSampler_5 = (String_t*) &_stringLiteral25;
		__this->___clipPlaneOffset_6 = (0.07f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::Start()
extern MethodInfo PlanarReflection_Start_m238_MethodInfo;
extern "C" void PlanarReflection_Start_m238 (PlanarReflection_t77 * __this, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&WaterBase_t83_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_0);
		Component_t185 * L_2 = GameObject_GetComponent_m819(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		NullCheck(((WaterBase_t83 *)Castclass(L_2, InitializedTypeInfo(&WaterBase_t83_il2cpp_TypeInfo))));
		Material_t75 * L_3 = (((WaterBase_t83 *)Castclass(L_2, InitializedTypeInfo(&WaterBase_t83_il2cpp_TypeInfo)))->___sharedMaterial_2);
		__this->___m_SharedMaterial_9 = L_3;
		return;
	}
}
// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern MethodInfo* GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var;
extern "C" Camera_t19 * PlanarReflection_CreateReflectionCameraFor_m239 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, MethodInfo* method)
{
	static bool PlanarReflection_CreateReflectionCameraFor_m239_init;
	if (!PlanarReflection_CreateReflectionCameraFor_m239_init)
	{
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisCamera_t19_m869_GenericMethod);
		PlanarReflection_CreateReflectionCameraFor_m239_init = true;
	}
	String_t* V_0 = {0};
	GameObject_t92 * V_1 = {0};
	Camera_t19 * V_2 = {0};
	Camera_t19 * G_B6_0 = {0};
	Camera_t19 * G_B5_0 = {0};
	int32_t G_B7_0 = 0;
	Camera_t19 * G_B7_1 = {0};
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m820(L_0, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		Camera_t19 * L_2 = ___cam;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m820(L_2, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m797(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral26, L_3, /*hidden argument*/&String_Concat_m797_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = V_0;
		GameObject_t92 * L_6 = GameObject_Find_m821(NULL /*static, unused*/, L_5, /*hidden argument*/&GameObject_Find_m821_MethodInfo);
		V_1 = L_6;
		GameObject_t92 * L_7 = V_1;
		bool L_8 = Object_op_Implicit_m582(NULL /*static, unused*/, L_7, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9 = V_0;
		TypeU5BU5D_t207* L_10 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_11 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Camera_t19_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		GameObject_t92 * L_12 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m822(L_12, L_9, L_10, /*hidden argument*/&GameObject__ctor_m822_MethodInfo);
		V_1 = L_12;
	}

IL_0048:
	{
		GameObject_t92 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_14 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Camera_t19_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_13);
		Component_t185 * L_15 = GameObject_GetComponent_m819(L_13, L_14, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		bool L_16 = Object_op_Implicit_m582(NULL /*static, unused*/, L_15, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		GameObject_t92 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_18 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Camera_t19_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_17);
		GameObject_AddComponent_m823(L_17, L_18, /*hidden argument*/&GameObject_AddComponent_m823_MethodInfo);
	}

IL_0073:
	{
		GameObject_t92 * L_19 = V_1;
		NullCheck(L_19);
		Camera_t19 * L_20 = GameObject_GetComponent_TisCamera_t19_m869(L_19, /*hidden argument*/GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var);
		V_2 = L_20;
		Camera_t19 * L_21 = V_2;
		Color_t79  L_22 = (__this->___clearColor_4);
		NullCheck(L_21);
		Camera_set_backgroundColor_m824(L_21, L_22, /*hidden argument*/&Camera_set_backgroundColor_m824_MethodInfo);
		Camera_t19 * L_23 = V_2;
		bool L_24 = (__this->___reflectSkybox_3);
		G_B5_0 = L_23;
		if (!L_24)
		{
			G_B6_0 = L_23;
			goto IL_0098;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_0099;
	}

IL_0098:
	{
		G_B7_0 = 2;
		G_B7_1 = G_B6_0;
	}

IL_0099:
	{
		NullCheck(G_B7_1);
		Camera_set_clearFlags_m825(G_B7_1, G_B7_0, /*hidden argument*/&Camera_set_clearFlags_m825_MethodInfo);
		Camera_t19 * L_25 = V_2;
		LayerMask_t78  L_26 = (__this->___reflectionMask_2);
		PlanarReflection_SetStandardCameraParameter_m240(__this, L_25, L_26, /*hidden argument*/&PlanarReflection_SetStandardCameraParameter_m240_MethodInfo);
		Camera_t19 * L_27 = V_2;
		NullCheck(L_27);
		RenderTexture_t80 * L_28 = Camera_get_targetTexture_m826(L_27, /*hidden argument*/&Camera_get_targetTexture_m826_MethodInfo);
		bool L_29 = Object_op_Implicit_m582(NULL /*static, unused*/, L_28, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_29)
		{
			goto IL_00c8;
		}
	}
	{
		Camera_t19 * L_30 = V_2;
		Camera_t19 * L_31 = ___cam;
		RenderTexture_t80 * L_32 = PlanarReflection_CreateTextureFor_m241(__this, L_31, /*hidden argument*/&PlanarReflection_CreateTextureFor_m241_MethodInfo);
		NullCheck(L_30);
		Camera_set_targetTexture_m827(L_30, L_32, /*hidden argument*/&Camera_set_targetTexture_m827_MethodInfo);
	}

IL_00c8:
	{
		Camera_t19 * L_33 = V_2;
		return L_33;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C" void PlanarReflection_SetStandardCameraParameter_m240 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, LayerMask_t78  ___mask, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___cam;
		LayerMask_t78  L_1 = ___mask;
		int32_t L_2 = LayerMask_op_Implicit_m828(NULL /*static, unused*/, L_1, /*hidden argument*/&LayerMask_op_Implicit_m828_MethodInfo);
		int32_t L_3 = LayerMask_NameToLayer_m829(NULL /*static, unused*/, (String_t*) &_stringLiteral27, /*hidden argument*/&LayerMask_NameToLayer_m829_MethodInfo);
		NullCheck(L_0);
		Camera_set_cullingMask_m830(L_0, ((int32_t)((int32_t)L_2&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))))), /*hidden argument*/&Camera_set_cullingMask_m830_MethodInfo);
		Camera_t19 * L_4 = ___cam;
		Color_t79  L_5 = Color_get_black_m831(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m831_MethodInfo);
		NullCheck(L_4);
		Camera_set_backgroundColor_m824(L_4, L_5, /*hidden argument*/&Camera_set_backgroundColor_m824_MethodInfo);
		Camera_t19 * L_6 = ___cam;
		NullCheck(L_6);
		Behaviour_set_enabled_m832(L_6, 0, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		return;
	}
}
// UnityEngine.RenderTexture UnityStandardAssets.Water.PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C" RenderTexture_t80 * PlanarReflection_CreateTextureFor_m241 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, MethodInfo* method)
{
	RenderTexture_t80 * V_0 = {0};
	{
		Camera_t19 * L_0 = ___cam;
		NullCheck(L_0);
		int32_t L_1 = Camera_get_pixelWidth_m833(L_0, /*hidden argument*/&Camera_get_pixelWidth_m833_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_2 = Mathf_FloorToInt_m834(NULL /*static, unused*/, ((float)((float)(((float)L_1))*(float)(0.5f))), /*hidden argument*/&Mathf_FloorToInt_m834_MethodInfo);
		Camera_t19 * L_3 = ___cam;
		NullCheck(L_3);
		int32_t L_4 = Camera_get_pixelHeight_m835(L_3, /*hidden argument*/&Camera_get_pixelHeight_m835_MethodInfo);
		int32_t L_5 = Mathf_FloorToInt_m834(NULL /*static, unused*/, ((float)((float)(((float)L_4))*(float)(0.5f))), /*hidden argument*/&Mathf_FloorToInt_m834_MethodInfo);
		RenderTexture_t80 * L_6 = (RenderTexture_t80 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t80_il2cpp_TypeInfo));
		RenderTexture__ctor_m836(L_6, L_2, L_5, ((int32_t)24), /*hidden argument*/&RenderTexture__ctor_m836_MethodInfo);
		V_0 = L_6;
		RenderTexture_t80 * L_7 = V_0;
		NullCheck(L_7);
		Object_set_hideFlags_m837(L_7, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m837_MethodInfo);
		RenderTexture_t80 * L_8 = V_0;
		return L_8;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern TypeInfo* Dictionary_2_t76_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m838_MethodInfo_var;
extern MethodInfo* Dictionary_2_ContainsKey_m839_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m840_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m841_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m842_MethodInfo_var;
extern "C" void PlanarReflection_RenderHelpCameras_m242 (PlanarReflection_t77 * __this, Camera_t19 * ___currentCam, MethodInfo* method)
{
	static bool PlanarReflection_RenderHelpCameras_m242_init;
	if (!PlanarReflection_RenderHelpCameras_m242_init)
	{
		Dictionary_2_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t76_0_0_0);
		Dictionary_2__ctor_m838_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m838_GenericMethod);
		Dictionary_2_ContainsKey_m839_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m839_GenericMethod);
		Dictionary_2_Add_m840_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m840_GenericMethod);
		Dictionary_2_get_Item_m841_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m841_GenericMethod);
		Dictionary_2_set_Item_m842_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m842_GenericMethod);
		PlanarReflection_RenderHelpCameras_m242_init = true;
	}
	{
		Dictionary_2_t76 * L_0 = (__this->___m_HelperCameras_10);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_t76 * L_1 = (Dictionary_2_t76 *)il2cpp_codegen_object_new (Dictionary_2_t76_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m838(L_1, /*hidden argument*/Dictionary_2__ctor_m838_MethodInfo_var);
		__this->___m_HelperCameras_10 = L_1;
	}

IL_0016:
	{
		Dictionary_2_t76 * L_2 = (__this->___m_HelperCameras_10);
		Camera_t19 * L_3 = ___currentCam;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Camera_t19 * >::Invoke(Dictionary_2_ContainsKey_m839_MethodInfo_var, L_2, L_3);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t76 * L_5 = (__this->___m_HelperCameras_10);
		Camera_t19 * L_6 = ___currentCam;
		NullCheck(L_5);
		VirtActionInvoker2< Camera_t19 *, bool >::Invoke(Dictionary_2_Add_m840_MethodInfo_var, L_5, L_6, 0);
	}

IL_0034:
	{
		Dictionary_2_t76 * L_7 = (__this->___m_HelperCameras_10);
		Camera_t19 * L_8 = ___currentCam;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Camera_t19 * >::Invoke(Dictionary_2_get_Item_m841_MethodInfo_var, L_7, L_8);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		Camera_t19 * L_10 = (__this->___m_ReflectionCamera_8);
		bool L_11 = Object_op_Implicit_m582(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		Camera_t19 * L_12 = ___currentCam;
		Camera_t19 * L_13 = PlanarReflection_CreateReflectionCameraFor_m239(__this, L_12, /*hidden argument*/&PlanarReflection_CreateReflectionCameraFor_m239_MethodInfo);
		__this->___m_ReflectionCamera_8 = L_13;
	}

IL_0063:
	{
		Camera_t19 * L_14 = ___currentCam;
		Camera_t19 * L_15 = (__this->___m_ReflectionCamera_8);
		PlanarReflection_RenderReflectionFor_m247(__this, L_14, L_15, /*hidden argument*/&PlanarReflection_RenderReflectionFor_m247_MethodInfo);
		Dictionary_2_t76 * L_16 = (__this->___m_HelperCameras_10);
		Camera_t19 * L_17 = ___currentCam;
		NullCheck(L_16);
		VirtActionInvoker2< Camera_t19 *, bool >::Invoke(Dictionary_2_set_Item_m842_MethodInfo_var, L_16, L_17, 1);
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::LateUpdate()
extern MethodInfo PlanarReflection_LateUpdate_m243_MethodInfo;
extern MethodInfo* Dictionary_2_Clear_m843_MethodInfo_var;
extern "C" void PlanarReflection_LateUpdate_m243 (PlanarReflection_t77 * __this, MethodInfo* method)
{
	static bool PlanarReflection_LateUpdate_m243_init;
	if (!PlanarReflection_LateUpdate_m243_init)
	{
		Dictionary_2_Clear_m843_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Clear_m843_GenericMethod);
		PlanarReflection_LateUpdate_m243_init = true;
	}
	{
		Dictionary_2_t76 * L_0 = (__this->___m_HelperCameras_10);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_t76 * L_1 = (__this->___m_HelperCameras_10);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m843_MethodInfo_var, L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern MethodInfo PlanarReflection_WaterTileBeingRendered_m244_MethodInfo;
extern "C" void PlanarReflection_WaterTileBeingRendered_m244 (PlanarReflection_t77 * __this, Transform_t2 * ___tr, Camera_t19 * ___currentCam, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___currentCam;
		PlanarReflection_RenderHelpCameras_m242(__this, L_0, /*hidden argument*/&PlanarReflection_RenderHelpCameras_m242_MethodInfo);
		Camera_t19 * L_1 = (__this->___m_ReflectionCamera_8);
		bool L_2 = Object_op_Implicit_m582(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		Material_t75 * L_3 = (__this->___m_SharedMaterial_9);
		bool L_4 = Object_op_Implicit_m582(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Material_t75 * L_5 = (__this->___m_SharedMaterial_9);
		String_t* L_6 = (__this->___reflectionSampler_5);
		Camera_t19 * L_7 = (__this->___m_ReflectionCamera_8);
		NullCheck(L_7);
		RenderTexture_t80 * L_8 = Camera_get_targetTexture_m826(L_7, /*hidden argument*/&Camera_get_targetTexture_m826_MethodInfo);
		NullCheck(L_5);
		Material_SetTexture_m844(L_5, L_6, L_8, /*hidden argument*/&Material_SetTexture_m844_MethodInfo);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::OnEnable()
extern MethodInfo PlanarReflection_OnEnable_m245_MethodInfo;
extern "C" void PlanarReflection_OnEnable_m245 (PlanarReflection_t77 * __this, MethodInfo* method)
{
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral28, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::OnDisable()
extern MethodInfo PlanarReflection_OnDisable_m246_MethodInfo;
extern "C" void PlanarReflection_OnDisable_m246 (PlanarReflection_t77 * __this, MethodInfo* method)
{
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral28, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C" void PlanarReflection_RenderReflectionFor_m247 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, Camera_t19 * ___reflectCamera, MethodInfo* method)
{
	Skybox_t208 * V_0 = {0};
	Transform_t2 * V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	float V_5 = 0.0f;
	Vector4_t82  V_6 = {0};
	Matrix4x4_t81  V_7 = {0};
	Vector3_t8  V_8 = {0};
	Vector4_t82  V_9 = {0};
	Matrix4x4_t81  V_10 = {0};
	Vector3_t8  V_11 = {0};
	Vector3_t8  V_12 = {0};
	Camera_t19 * G_B7_0 = {0};
	Camera_t19 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	Camera_t19 * G_B8_1 = {0};
	{
		Camera_t19 * L_0 = ___reflectCamera;
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Material_t75 * L_2 = (__this->___m_SharedMaterial_9);
		bool L_3 = Object_op_Implicit_m582(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Material_t75 * L_4 = (__this->___m_SharedMaterial_9);
		String_t* L_5 = (__this->___reflectionSampler_5);
		NullCheck(L_4);
		bool L_6 = Material_HasProperty_m845(L_4, L_5, /*hidden argument*/&Material_HasProperty_m845_MethodInfo);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		Camera_t19 * L_7 = ___reflectCamera;
		LayerMask_t78  L_8 = (__this->___reflectionMask_2);
		int32_t L_9 = LayerMask_op_Implicit_m828(NULL /*static, unused*/, L_8, /*hidden argument*/&LayerMask_op_Implicit_m828_MethodInfo);
		int32_t L_10 = LayerMask_NameToLayer_m829(NULL /*static, unused*/, (String_t*) &_stringLiteral27, /*hidden argument*/&LayerMask_NameToLayer_m829_MethodInfo);
		NullCheck(L_7);
		Camera_set_cullingMask_m830(L_7, ((int32_t)((int32_t)L_9&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31))))))))), /*hidden argument*/&Camera_set_cullingMask_m830_MethodInfo);
		Camera_t19 * L_11 = ___reflectCamera;
		PlanarReflection_SaneCameraSettings_m248(__this, L_11, /*hidden argument*/&PlanarReflection_SaneCameraSettings_m248_MethodInfo);
		Camera_t19 * L_12 = ___reflectCamera;
		Color_t79  L_13 = (__this->___clearColor_4);
		NullCheck(L_12);
		Camera_set_backgroundColor_m824(L_12, L_13, /*hidden argument*/&Camera_set_backgroundColor_m824_MethodInfo);
		Camera_t19 * L_14 = ___reflectCamera;
		bool L_15 = (__this->___reflectSkybox_3);
		G_B6_0 = L_14;
		if (!L_15)
		{
			G_B7_0 = L_14;
			goto IL_007a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
	}

IL_007b:
	{
		NullCheck(G_B8_1);
		Camera_set_clearFlags_m825(G_B8_1, G_B8_0, /*hidden argument*/&Camera_set_clearFlags_m825_MethodInfo);
		bool L_16 = (__this->___reflectSkybox_3);
		if (!L_16)
		{
			goto IL_010b;
		}
	}
	{
		Camera_t19 * L_17 = ___cam;
		NullCheck(L_17);
		GameObject_t92 * L_18 = Component_get_gameObject_m577(L_17, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_19 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Skybox_t208_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_18);
		Component_t185 * L_20 = GameObject_GetComponent_m819(L_18, L_19, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		bool L_21 = Object_op_Implicit_m582(NULL /*static, unused*/, L_20, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_21)
		{
			goto IL_010b;
		}
	}
	{
		Camera_t19 * L_22 = ___reflectCamera;
		NullCheck(L_22);
		GameObject_t92 * L_23 = Component_get_gameObject_m577(L_22, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_24 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Skybox_t208_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_23);
		Component_t185 * L_25 = GameObject_GetComponent_m819(L_23, L_24, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		V_0 = ((Skybox_t208 *)Castclass(L_25, InitializedTypeInfo(&Skybox_t208_il2cpp_TypeInfo)));
		Skybox_t208 * L_26 = V_0;
		bool L_27 = Object_op_Implicit_m582(NULL /*static, unused*/, L_26, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_27)
		{
			goto IL_00eb;
		}
	}
	{
		Camera_t19 * L_28 = ___reflectCamera;
		NullCheck(L_28);
		GameObject_t92 * L_29 = Component_get_gameObject_m577(L_28, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_30 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Skybox_t208_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_29);
		Component_t185 * L_31 = GameObject_AddComponent_m823(L_29, L_30, /*hidden argument*/&GameObject_AddComponent_m823_MethodInfo);
		V_0 = ((Skybox_t208 *)Castclass(L_31, InitializedTypeInfo(&Skybox_t208_il2cpp_TypeInfo)));
	}

IL_00eb:
	{
		Skybox_t208 * L_32 = V_0;
		Camera_t19 * L_33 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_34 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Skybox_t208_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_33);
		Component_t185 * L_35 = Component_GetComponent_m846(L_33, L_34, /*hidden argument*/&Component_GetComponent_m846_MethodInfo);
		NullCheck(((Skybox_t208 *)Castclass(L_35, InitializedTypeInfo(&Skybox_t208_il2cpp_TypeInfo))));
		Material_t75 * L_36 = Skybox_get_material_m847(((Skybox_t208 *)Castclass(L_35, InitializedTypeInfo(&Skybox_t208_il2cpp_TypeInfo))), /*hidden argument*/&Skybox_get_material_m847_MethodInfo);
		NullCheck(L_32);
		Skybox_set_material_m848(L_32, L_36, /*hidden argument*/&Skybox_set_material_m848_MethodInfo);
	}

IL_010b:
	{
		GL_set_invertCulling_m849(NULL /*static, unused*/, 1, /*hidden argument*/&GL_set_invertCulling_m849_MethodInfo);
		Transform_t2 * L_37 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		V_1 = L_37;
		Camera_t19 * L_38 = ___cam;
		NullCheck(L_38);
		Transform_t2 * L_39 = Component_get_transform_m598(L_38, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_39);
		Vector3_t8  L_40 = Transform_get_eulerAngles_m707(L_39, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_2 = L_40;
		Camera_t19 * L_41 = ___reflectCamera;
		NullCheck(L_41);
		Transform_t2 * L_42 = Component_get_transform_m598(L_41, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		float L_43 = ((&V_2)->___x_1);
		float L_44 = ((&V_2)->___y_2);
		float L_45 = ((&V_2)->___z_3);
		Vector3_t8  L_46 = {0};
		Vector3__ctor_m700(&L_46, ((-L_43)), L_44, L_45, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_42);
		Transform_set_eulerAngles_m850(L_42, L_46, /*hidden argument*/&Transform_set_eulerAngles_m850_MethodInfo);
		Camera_t19 * L_47 = ___reflectCamera;
		NullCheck(L_47);
		Transform_t2 * L_48 = Component_get_transform_m598(L_47, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_49 = ___cam;
		NullCheck(L_49);
		Transform_t2 * L_50 = Component_get_transform_m598(L_49, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_50);
		Vector3_t8  L_51 = Transform_get_position_m599(L_50, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_48);
		Transform_set_position_m601(L_48, L_51, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_52 = V_1;
		NullCheck(L_52);
		Transform_t2 * L_53 = Component_get_transform_m598(L_52, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_53);
		Vector3_t8  L_54 = Transform_get_position_m599(L_53, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_3 = L_54;
		Transform_t2 * L_55 = V_1;
		NullCheck(L_55);
		Vector3_t8  L_56 = Transform_get_position_m599(L_55, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_12 = L_56;
		float L_57 = ((&V_12)->___y_2);
		(&V_3)->___y_2 = L_57;
		Transform_t2 * L_58 = V_1;
		NullCheck(L_58);
		Transform_t2 * L_59 = Component_get_transform_m598(L_58, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_59);
		Vector3_t8  L_60 = Transform_get_up_m588(L_59, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		V_4 = L_60;
		Vector3_t8  L_61 = V_4;
		Vector3_t8  L_62 = V_3;
		float L_63 = Vector3_Dot_m851(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		float L_64 = (__this->___clipPlaneOffset_6);
		V_5 = ((float)((float)((-L_63))-(float)L_64));
		float L_65 = ((&V_4)->___x_1);
		float L_66 = ((&V_4)->___y_2);
		float L_67 = ((&V_4)->___z_3);
		float L_68 = V_5;
		Vector4__ctor_m808((&V_6), L_65, L_66, L_67, L_68, /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		Matrix4x4_t81  L_69 = Matrix4x4_get_zero_m852(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_zero_m852_MethodInfo);
		V_7 = L_69;
		Matrix4x4_t81  L_70 = V_7;
		Vector4_t82  L_71 = V_6;
		Matrix4x4_t81  L_72 = PlanarReflection_CalculateReflectionMatrix_m250(NULL /*static, unused*/, L_70, L_71, /*hidden argument*/&PlanarReflection_CalculateReflectionMatrix_m250_MethodInfo);
		V_7 = L_72;
		Camera_t19 * L_73 = ___cam;
		NullCheck(L_73);
		Transform_t2 * L_74 = Component_get_transform_m598(L_73, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_74);
		Vector3_t8  L_75 = Transform_get_position_m599(L_74, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___m_Oldpos_7 = L_75;
		Vector3_t8  L_76 = (__this->___m_Oldpos_7);
		Vector3_t8  L_77 = Matrix4x4_MultiplyPoint_m853((&V_7), L_76, /*hidden argument*/&Matrix4x4_MultiplyPoint_m853_MethodInfo);
		V_8 = L_77;
		Camera_t19 * L_78 = ___reflectCamera;
		Camera_t19 * L_79 = ___cam;
		NullCheck(L_79);
		Matrix4x4_t81  L_80 = Camera_get_worldToCameraMatrix_m854(L_79, /*hidden argument*/&Camera_get_worldToCameraMatrix_m854_MethodInfo);
		Matrix4x4_t81  L_81 = V_7;
		Matrix4x4_t81  L_82 = Matrix4x4_op_Multiply_m855(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/&Matrix4x4_op_Multiply_m855_MethodInfo);
		NullCheck(L_78);
		Camera_set_worldToCameraMatrix_m856(L_78, L_82, /*hidden argument*/&Camera_set_worldToCameraMatrix_m856_MethodInfo);
		Camera_t19 * L_83 = ___reflectCamera;
		Vector3_t8  L_84 = V_3;
		Vector3_t8  L_85 = V_4;
		Vector4_t82  L_86 = PlanarReflection_CameraSpacePlane_m252(__this, L_83, L_84, L_85, (1.0f), /*hidden argument*/&PlanarReflection_CameraSpacePlane_m252_MethodInfo);
		V_9 = L_86;
		Camera_t19 * L_87 = ___cam;
		NullCheck(L_87);
		Matrix4x4_t81  L_88 = Camera_get_projectionMatrix_m857(L_87, /*hidden argument*/&Camera_get_projectionMatrix_m857_MethodInfo);
		V_10 = L_88;
		Matrix4x4_t81  L_89 = V_10;
		Vector4_t82  L_90 = V_9;
		Matrix4x4_t81  L_91 = PlanarReflection_CalculateObliqueMatrix_m249(NULL /*static, unused*/, L_89, L_90, /*hidden argument*/&PlanarReflection_CalculateObliqueMatrix_m249_MethodInfo);
		V_10 = L_91;
		Camera_t19 * L_92 = ___reflectCamera;
		Matrix4x4_t81  L_93 = V_10;
		NullCheck(L_92);
		Camera_set_projectionMatrix_m858(L_92, L_93, /*hidden argument*/&Camera_set_projectionMatrix_m858_MethodInfo);
		Camera_t19 * L_94 = ___reflectCamera;
		NullCheck(L_94);
		Transform_t2 * L_95 = Component_get_transform_m598(L_94, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_96 = V_8;
		NullCheck(L_95);
		Transform_set_position_m601(L_95, L_96, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Camera_t19 * L_97 = ___cam;
		NullCheck(L_97);
		Transform_t2 * L_98 = Component_get_transform_m598(L_97, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_98);
		Vector3_t8  L_99 = Transform_get_eulerAngles_m707(L_98, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_11 = L_99;
		Camera_t19 * L_100 = ___reflectCamera;
		NullCheck(L_100);
		Transform_t2 * L_101 = Component_get_transform_m598(L_100, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		float L_102 = ((&V_11)->___x_1);
		float L_103 = ((&V_11)->___y_2);
		float L_104 = ((&V_11)->___z_3);
		Vector3_t8  L_105 = {0};
		Vector3__ctor_m700(&L_105, ((-L_102)), L_103, L_104, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_101);
		Transform_set_eulerAngles_m850(L_101, L_105, /*hidden argument*/&Transform_set_eulerAngles_m850_MethodInfo);
		Camera_t19 * L_106 = ___reflectCamera;
		NullCheck(L_106);
		Camera_Render_m859(L_106, /*hidden argument*/&Camera_Render_m859_MethodInfo);
		GL_set_invertCulling_m849(NULL /*static, unused*/, 0, /*hidden argument*/&GL_set_invertCulling_m849_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C" void PlanarReflection_SaneCameraSettings_m248 (PlanarReflection_t77 * __this, Camera_t19 * ___helperCam, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___helperCam;
		NullCheck(L_0);
		Camera_set_depthTextureMode_m860(L_0, 0, /*hidden argument*/&Camera_set_depthTextureMode_m860_MethodInfo);
		Camera_t19 * L_1 = ___helperCam;
		Color_t79  L_2 = Color_get_black_m831(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m831_MethodInfo);
		NullCheck(L_1);
		Camera_set_backgroundColor_m824(L_1, L_2, /*hidden argument*/&Camera_set_backgroundColor_m824_MethodInfo);
		Camera_t19 * L_3 = ___helperCam;
		NullCheck(L_3);
		Camera_set_clearFlags_m825(L_3, 2, /*hidden argument*/&Camera_set_clearFlags_m825_MethodInfo);
		Camera_t19 * L_4 = ___helperCam;
		NullCheck(L_4);
		Camera_set_renderingPath_m861(L_4, 1, /*hidden argument*/&Camera_set_renderingPath_m861_MethodInfo);
		return;
	}
}
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t81  PlanarReflection_CalculateObliqueMatrix_m249 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___projection, Vector4_t82  ___clipPlane, MethodInfo* method)
{
	Vector4_t82  V_0 = {0};
	Vector4_t82  V_1 = {0};
	{
		Matrix4x4_t81  L_0 = Matrix4x4_get_inverse_m862((&___projection), /*hidden argument*/&Matrix4x4_get_inverse_m862_MethodInfo);
		float L_1 = ((&___clipPlane)->___x_1);
		float L_2 = PlanarReflection_Sgn_m251(NULL /*static, unused*/, L_1, /*hidden argument*/&PlanarReflection_Sgn_m251_MethodInfo);
		float L_3 = ((&___clipPlane)->___y_2);
		float L_4 = PlanarReflection_Sgn_m251(NULL /*static, unused*/, L_3, /*hidden argument*/&PlanarReflection_Sgn_m251_MethodInfo);
		Vector4_t82  L_5 = {0};
		Vector4__ctor_m808(&L_5, L_2, L_4, (1.0f), (1.0f), /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		Vector4_t82  L_6 = Matrix4x4_op_Multiply_m863(NULL /*static, unused*/, L_0, L_5, /*hidden argument*/&Matrix4x4_op_Multiply_m863_MethodInfo);
		V_0 = L_6;
		Vector4_t82  L_7 = ___clipPlane;
		Vector4_t82  L_8 = ___clipPlane;
		Vector4_t82  L_9 = V_0;
		float L_10 = Vector4_Dot_m864(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&Vector4_Dot_m864_MethodInfo);
		Vector4_t82  L_11 = Vector4_op_Multiply_m807(NULL /*static, unused*/, L_7, ((float)((float)(2.0f)/(float)L_10)), /*hidden argument*/&Vector4_op_Multiply_m807_MethodInfo);
		V_1 = L_11;
		float L_12 = ((&V_1)->___x_1);
		float L_13 = Matrix4x4_get_Item_m865((&___projection), 3, /*hidden argument*/&Matrix4x4_get_Item_m865_MethodInfo);
		Matrix4x4_set_Item_m866((&___projection), 2, ((float)((float)L_12-(float)L_13)), /*hidden argument*/&Matrix4x4_set_Item_m866_MethodInfo);
		float L_14 = ((&V_1)->___y_2);
		float L_15 = Matrix4x4_get_Item_m865((&___projection), 7, /*hidden argument*/&Matrix4x4_get_Item_m865_MethodInfo);
		Matrix4x4_set_Item_m866((&___projection), 6, ((float)((float)L_14-(float)L_15)), /*hidden argument*/&Matrix4x4_set_Item_m866_MethodInfo);
		float L_16 = ((&V_1)->___z_3);
		float L_17 = Matrix4x4_get_Item_m865((&___projection), ((int32_t)11), /*hidden argument*/&Matrix4x4_get_Item_m865_MethodInfo);
		Matrix4x4_set_Item_m866((&___projection), ((int32_t)10), ((float)((float)L_16-(float)L_17)), /*hidden argument*/&Matrix4x4_set_Item_m866_MethodInfo);
		float L_18 = ((&V_1)->___w_4);
		float L_19 = Matrix4x4_get_Item_m865((&___projection), ((int32_t)15), /*hidden argument*/&Matrix4x4_get_Item_m865_MethodInfo);
		Matrix4x4_set_Item_m866((&___projection), ((int32_t)14), ((float)((float)L_18-(float)L_19)), /*hidden argument*/&Matrix4x4_set_Item_m866_MethodInfo);
		Matrix4x4_t81  L_20 = ___projection;
		return L_20;
	}
}
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Matrix4x4_t81  PlanarReflection_CalculateReflectionMatrix_m250 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___reflectionMat, Vector4_t82  ___plane, MethodInfo* method)
{
	{
		float L_0 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_1 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m00_0 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_0))*(float)L_1))));
		float L_2 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_3 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m01_4 = ((float)((float)((float)((float)(-2.0f)*(float)L_2))*(float)L_3));
		float L_4 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_5 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m02_8 = ((float)((float)((float)((float)(-2.0f)*(float)L_4))*(float)L_5));
		float L_6 = Vector4_get_Item_m867((&___plane), 3, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_7 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m03_12 = ((float)((float)((float)((float)(-2.0f)*(float)L_6))*(float)L_7));
		float L_8 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_9 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m10_1 = ((float)((float)((float)((float)(-2.0f)*(float)L_8))*(float)L_9));
		float L_10 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_11 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m11_5 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_10))*(float)L_11))));
		float L_12 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_13 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m12_9 = ((float)((float)((float)((float)(-2.0f)*(float)L_12))*(float)L_13));
		float L_14 = Vector4_get_Item_m867((&___plane), 3, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_15 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m13_13 = ((float)((float)((float)((float)(-2.0f)*(float)L_14))*(float)L_15));
		float L_16 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_17 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m20_2 = ((float)((float)((float)((float)(-2.0f)*(float)L_16))*(float)L_17));
		float L_18 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_19 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m21_6 = ((float)((float)((float)((float)(-2.0f)*(float)L_18))*(float)L_19));
		float L_20 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_21 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m22_10 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_20))*(float)L_21))));
		float L_22 = Vector4_get_Item_m867((&___plane), 3, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_23 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		(&___reflectionMat)->___m23_14 = ((float)((float)((float)((float)(-2.0f)*(float)L_22))*(float)L_23));
		(&___reflectionMat)->___m30_3 = (0.0f);
		(&___reflectionMat)->___m31_7 = (0.0f);
		(&___reflectionMat)->___m32_11 = (0.0f);
		(&___reflectionMat)->___m33_15 = (1.0f);
		Matrix4x4_t81  L_24 = ___reflectionMat;
		return L_24;
	}
}
// System.Single UnityStandardAssets.Water.PlanarReflection::Sgn(System.Single)
extern "C" float PlanarReflection_Sgn_m251 (Object_t * __this /* static, unused */, float ___a, MethodInfo* method)
{
	{
		float L_0 = ___a;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (1.0f);
	}

IL_0011:
	{
		float L_1 = ___a;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (-1.0f);
	}

IL_0022:
	{
		return (0.0f);
	}
}
// UnityEngine.Vector4 UnityStandardAssets.Water.PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t82  PlanarReflection_CameraSpacePlane_m252 (PlanarReflection_t77 * __this, Camera_t19 * ___cam, Vector3_t8  ___pos, Vector3_t8  ___normal, float ___sideSign, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Matrix4x4_t81  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	{
		Vector3_t8  L_0 = ___pos;
		Vector3_t8  L_1 = ___normal;
		float L_2 = (__this->___clipPlaneOffset_6);
		Vector3_t8  L_3 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_4;
		Camera_t19 * L_5 = ___cam;
		NullCheck(L_5);
		Matrix4x4_t81  L_6 = Camera_get_worldToCameraMatrix_m854(L_5, /*hidden argument*/&Camera_get_worldToCameraMatrix_m854_MethodInfo);
		V_1 = L_6;
		Vector3_t8  L_7 = V_0;
		Vector3_t8  L_8 = Matrix4x4_MultiplyPoint_m853((&V_1), L_7, /*hidden argument*/&Matrix4x4_MultiplyPoint_m853_MethodInfo);
		V_2 = L_8;
		Vector3_t8  L_9 = ___normal;
		Vector3_t8  L_10 = Matrix4x4_MultiplyVector_m868((&V_1), L_9, /*hidden argument*/&Matrix4x4_MultiplyVector_m868_MethodInfo);
		V_4 = L_10;
		Vector3_t8  L_11 = Vector3_get_normalized_m592((&V_4), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		float L_12 = ___sideSign;
		Vector3_t8  L_13 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		V_3 = L_13;
		float L_14 = ((&V_3)->___x_1);
		float L_15 = ((&V_3)->___y_2);
		float L_16 = ((&V_3)->___z_3);
		Vector3_t8  L_17 = V_2;
		Vector3_t8  L_18 = V_3;
		float L_19 = Vector3_Dot_m851(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		Vector4_t82  L_20 = {0};
		Vector4__ctor_m808(&L_20, L_14, L_15, L_16, ((-L_19)), /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		return L_20;
	}
}
// UnityStandardAssets.Water.SpecularLighting
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Spec.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpecularLighting_t84_il2cpp_TypeInfo;
// UnityStandardAssets.Water.SpecularLighting
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_SpecMethodDeclarations.h"

extern MethodInfo Vector4_op_Implicit_m871_MethodInfo;


// System.Void UnityStandardAssets.Water.SpecularLighting::.ctor()
extern MethodInfo SpecularLighting__ctor_m253_MethodInfo;
extern "C" void SpecularLighting__ctor_m253 (SpecularLighting_t84 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.SpecularLighting::Start()
extern MethodInfo SpecularLighting_Start_m254_MethodInfo;
extern "C" void SpecularLighting_Start_m254 (SpecularLighting_t84 * __this, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&WaterBase_t83_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_0);
		Component_t185 * L_2 = GameObject_GetComponent_m819(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		__this->___m_WaterBase_3 = ((WaterBase_t83 *)Castclass(L_2, InitializedTypeInfo(&WaterBase_t83_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityStandardAssets.Water.SpecularLighting::Update()
extern MethodInfo SpecularLighting_Update_m255_MethodInfo;
extern "C" void SpecularLighting_Update_m255 (SpecularLighting_t84 * __this, MethodInfo* method)
{
	{
		WaterBase_t83 * L_0 = (__this->___m_WaterBase_3);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		GameObject_t92 * L_2 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&WaterBase_t83_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_2);
		Component_t185 * L_4 = GameObject_GetComponent_m819(L_2, L_3, /*hidden argument*/&GameObject_GetComponent_m819_MethodInfo);
		__this->___m_WaterBase_3 = ((WaterBase_t83 *)Castclass(L_4, InitializedTypeInfo(&WaterBase_t83_il2cpp_TypeInfo)));
	}

IL_0030:
	{
		Transform_t2 * L_5 = (__this->___specularLight_2);
		bool L_6 = Object_op_Implicit_m582(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		WaterBase_t83 * L_7 = (__this->___m_WaterBase_3);
		NullCheck(L_7);
		Material_t75 * L_8 = (L_7->___sharedMaterial_2);
		bool L_9 = Object_op_Implicit_m582(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		WaterBase_t83 * L_10 = (__this->___m_WaterBase_3);
		NullCheck(L_10);
		Material_t75 * L_11 = (L_10->___sharedMaterial_2);
		Transform_t2 * L_12 = (__this->___specularLight_2);
		NullCheck(L_12);
		Transform_t2 * L_13 = Component_get_transform_m598(L_12, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_13);
		Vector3_t8  L_14 = Transform_get_forward_m587(L_13, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector4_t82  L_15 = Vector4_op_Implicit_m871(NULL /*static, unused*/, L_14, /*hidden argument*/&Vector4_op_Implicit_m871_MethodInfo);
		NullCheck(L_11);
		Material_SetVector_m809(L_11, (String_t*) &_stringLiteral30, L_15, /*hidden argument*/&Material_SetVector_m809_MethodInfo);
	}

IL_007f:
	{
		return;
	}
}
// UnityStandardAssets.Water.Water/WaterMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaterMode_t85_il2cpp_TypeInfo;
// UnityStandardAssets.Water.Water/WaterMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_0MethodDeclarations.h"



// UnityStandardAssets.Water.Water
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Water_t87_il2cpp_TypeInfo;
// UnityStandardAssets.Water.Water
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_1MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.FlareLayer
#include "UnityEngine_UnityEngine_FlareLayer.h"
extern TypeInfo Dictionary_2_t86_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t209_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t210_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t194_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t86_0_0_0;
extern Il2CppType Enumerator_t209_0_0_0;
extern Il2CppType ObjectU5BU5D_t194_0_0_0;
extern MethodInfo LayerMask_op_Implicit_m872_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m873_MethodInfo;
extern MethodInfo Renderer_get_enabled_m874_MethodInfo;
extern MethodInfo Camera_get_current_m875_MethodInfo;
extern MethodInfo Water_FindHardwareWaterSupport_m263_MethodInfo;
extern MethodInfo Water_GetWaterMode_m262_MethodInfo;
extern MethodInfo Water_CreateWaterObjects_m261_MethodInfo;
extern MethodInfo QualitySettings_get_pixelLightCount_m876_MethodInfo;
extern MethodInfo QualitySettings_set_pixelLightCount_m877_MethodInfo;
extern MethodInfo Water_UpdateCameraModes_m260_MethodInfo;
extern MethodInfo Water_CalculateReflectionMatrix_m265_MethodInfo;
extern MethodInfo Water_CameraSpacePlane_m264_MethodInfo;
extern MethodInfo Camera_CalculateObliqueMatrix_m878_MethodInfo;
extern MethodInfo LayerMask_get_value_m879_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m880_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m881_MethodInfo;
extern MethodInfo Time_get_timeSinceLevelLoad_m882_MethodInfo;
extern MethodInfo Math_IEEERemainder_m883_MethodInfo;
extern MethodInfo Camera_get_clearFlags_m884_MethodInfo;
extern MethodInfo Camera_get_backgroundColor_m885_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m886_MethodInfo;
extern MethodInfo Camera_set_farClipPlane_m887_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m888_MethodInfo;
extern MethodInfo Camera_set_nearClipPlane_m889_MethodInfo;
extern MethodInfo Camera_get_orthographic_m890_MethodInfo;
extern MethodInfo Camera_set_orthographic_m891_MethodInfo;
extern MethodInfo Camera_get_aspect_m892_MethodInfo;
extern MethodInfo Camera_set_aspect_m893_MethodInfo;
extern MethodInfo Camera_get_orthographicSize_m894_MethodInfo;
extern MethodInfo Camera_set_orthographicSize_m895_MethodInfo;
extern MethodInfo Object_GetInstanceID_m896_MethodInfo;
extern MethodInfo String_Concat_m897_MethodInfo;
extern MethodInfo Object_set_name_m898_MethodInfo;
extern MethodInfo RenderTexture_set_isPowerOfTwo_m899_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m900_MethodInfo;
extern MethodInfo String_Concat_m901_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m902_MethodInfo;
extern MethodInfo SystemInfo_get_supportsRenderTextures_m903_MethodInfo;
extern MethodInfo Material_GetTag_m904_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Skybox>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_10.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Skybox>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Skybox>()
#define Component_GetComponent_TisSkybox_t208_m905(__this, method) (( Skybox_t208 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.FlareLayer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.FlareLayer>()
extern "C" FlareLayer_t211 * GameObject_AddComponent_TisFlareLayer_t211_m906 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2__ctor_m873_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m907_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m908_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m909_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m910_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m881_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisSkybox_t208_m905_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m900_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisFlareLayer_t211_m906_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m902_GenericMethod;


// System.Void UnityStandardAssets.Water.Water::.ctor()
extern MethodInfo Water__ctor_m256_MethodInfo;
extern TypeInfo* Dictionary_2_t86_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m873_MethodInfo_var;
extern "C" void Water__ctor_m256 (Water_t87 * __this, MethodInfo* method)
{
	static bool Water__ctor_m256_init;
	if (!Water__ctor_m256_init)
	{
		Dictionary_2_t86_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t86_0_0_0);
		Dictionary_2__ctor_m873_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m873_GenericMethod);
		Water__ctor_m256_init = true;
	}
	{
		__this->___waterMode_2 = 2;
		__this->___disablePixelLights_3 = 1;
		__this->___textureSize_4 = ((int32_t)256);
		__this->___clipPlaneOffset_5 = (0.07f);
		LayerMask_t78  L_0 = LayerMask_op_Implicit_m872(NULL /*static, unused*/, (-1), /*hidden argument*/&LayerMask_op_Implicit_m872_MethodInfo);
		__this->___reflectLayers_6 = L_0;
		LayerMask_t78  L_1 = LayerMask_op_Implicit_m872(NULL /*static, unused*/, (-1), /*hidden argument*/&LayerMask_op_Implicit_m872_MethodInfo);
		__this->___refractLayers_7 = L_1;
		Dictionary_2_t86 * L_2 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m873(L_2, /*hidden argument*/Dictionary_2__ctor_m873_MethodInfo_var);
		__this->___m_ReflectionCameras_8 = L_2;
		Dictionary_2_t86 * L_3 = (Dictionary_2_t86 *)il2cpp_codegen_object_new (Dictionary_2_t86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m873(L_3, /*hidden argument*/Dictionary_2__ctor_m873_MethodInfo_var);
		__this->___m_RefractionCameras_9 = L_3;
		__this->___m_HardwareWaterSupport_12 = 2;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.Water::OnWillRenderObject()
extern MethodInfo Water_OnWillRenderObject_m257_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern "C" void Water_OnWillRenderObject_m257 (Water_t87 * __this, MethodInfo* method)
{
	static bool Water_OnWillRenderObject_m257_init;
	if (!Water_OnWillRenderObject_m257_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		Water_OnWillRenderObject_m257_init = true;
	}
	Camera_t19 * V_0 = {0};
	int32_t V_1 = {0};
	Camera_t19 * V_2 = {0};
	Camera_t19 * V_3 = {0};
	Vector3_t8  V_4 = {0};
	Vector3_t8  V_5 = {0};
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Vector4_t82  V_8 = {0};
	Matrix4x4_t81  V_9 = {0};
	Vector3_t8  V_10 = {0};
	Vector3_t8  V_11 = {0};
	Vector4_t82  V_12 = {0};
	Vector3_t8  V_13 = {0};
	Vector4_t82  V_14 = {0};
	int32_t V_15 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m811(__this, /*hidden argument*/&Behaviour_get_enabled_m811_MethodInfo);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		Renderer_t156 * L_1 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		bool L_2 = Object_op_Implicit_m582(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		Renderer_t156 * L_3 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_3);
		Material_t75 * L_4 = Renderer_get_sharedMaterial_m804(L_3, /*hidden argument*/&Renderer_get_sharedMaterial_m804_MethodInfo);
		bool L_5 = Object_op_Implicit_m582(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Renderer_t156 * L_6 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_6);
		bool L_7 = Renderer_get_enabled_m874(L_6, /*hidden argument*/&Renderer_get_enabled_m874_MethodInfo);
		if (L_7)
		{
			goto IL_0041;
		}
	}

IL_0040:
	{
		return;
	}

IL_0041:
	{
		Camera_t19 * L_8 = Camera_get_current_m875(NULL /*static, unused*/, /*hidden argument*/&Camera_get_current_m875_MethodInfo);
		V_0 = L_8;
		Camera_t19 * L_9 = V_0;
		bool L_10 = Object_op_Implicit_m582(NULL /*static, unused*/, L_9, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		bool L_11 = ((Water_t87_StaticFields*)InitializedTypeInfo(&Water_t87_il2cpp_TypeInfo)->static_fields)->___s_InsideWater_15;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		return;
	}

IL_005e:
	{
		((Water_t87_StaticFields*)InitializedTypeInfo(&Water_t87_il2cpp_TypeInfo)->static_fields)->___s_InsideWater_15 = 1;
		int32_t L_12 = Water_FindHardwareWaterSupport_m263(__this, /*hidden argument*/&Water_FindHardwareWaterSupport_m263_MethodInfo);
		__this->___m_HardwareWaterSupport_12 = L_12;
		int32_t L_13 = Water_GetWaterMode_m262(__this, /*hidden argument*/&Water_GetWaterMode_m262_MethodInfo);
		V_1 = L_13;
		Camera_t19 * L_14 = V_0;
		Water_CreateWaterObjects_m261(__this, L_14, (&V_2), (&V_3), /*hidden argument*/&Water_CreateWaterObjects_m261_MethodInfo);
		Transform_t2 * L_15 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_15);
		Vector3_t8  L_16 = Transform_get_position_m599(L_15, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_4 = L_16;
		Transform_t2 * L_17 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_17);
		Vector3_t8  L_18 = Transform_get_up_m588(L_17, /*hidden argument*/&Transform_get_up_m588_MethodInfo);
		V_5 = L_18;
		int32_t L_19 = QualitySettings_get_pixelLightCount_m876(NULL /*static, unused*/, /*hidden argument*/&QualitySettings_get_pixelLightCount_m876_MethodInfo);
		V_6 = L_19;
		bool L_20 = (__this->___disablePixelLights_3);
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		QualitySettings_set_pixelLightCount_m877(NULL /*static, unused*/, 0, /*hidden argument*/&QualitySettings_set_pixelLightCount_m877_MethodInfo);
	}

IL_00b4:
	{
		Camera_t19 * L_21 = V_0;
		Camera_t19 * L_22 = V_2;
		Water_UpdateCameraModes_m260(__this, L_21, L_22, /*hidden argument*/&Water_UpdateCameraModes_m260_MethodInfo);
		Camera_t19 * L_23 = V_0;
		Camera_t19 * L_24 = V_3;
		Water_UpdateCameraModes_m260(__this, L_23, L_24, /*hidden argument*/&Water_UpdateCameraModes_m260_MethodInfo);
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)1)))
		{
			goto IL_01f1;
		}
	}
	{
		Vector3_t8  L_26 = V_5;
		Vector3_t8  L_27 = V_4;
		float L_28 = Vector3_Dot_m851(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		float L_29 = (__this->___clipPlaneOffset_5);
		V_7 = ((float)((float)((-L_28))-(float)L_29));
		float L_30 = ((&V_5)->___x_1);
		float L_31 = ((&V_5)->___y_2);
		float L_32 = ((&V_5)->___z_3);
		float L_33 = V_7;
		Vector4__ctor_m808((&V_8), L_30, L_31, L_32, L_33, /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		Matrix4x4_t81  L_34 = Matrix4x4_get_zero_m852(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_zero_m852_MethodInfo);
		V_9 = L_34;
		Vector4_t82  L_35 = V_8;
		Water_CalculateReflectionMatrix_m265(NULL /*static, unused*/, (&V_9), L_35, /*hidden argument*/&Water_CalculateReflectionMatrix_m265_MethodInfo);
		Camera_t19 * L_36 = V_0;
		NullCheck(L_36);
		Transform_t2 * L_37 = Component_get_transform_m598(L_36, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_37);
		Vector3_t8  L_38 = Transform_get_position_m599(L_37, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_10 = L_38;
		Vector3_t8  L_39 = V_10;
		Vector3_t8  L_40 = Matrix4x4_MultiplyPoint_m853((&V_9), L_39, /*hidden argument*/&Matrix4x4_MultiplyPoint_m853_MethodInfo);
		V_11 = L_40;
		Camera_t19 * L_41 = V_2;
		Camera_t19 * L_42 = V_0;
		NullCheck(L_42);
		Matrix4x4_t81  L_43 = Camera_get_worldToCameraMatrix_m854(L_42, /*hidden argument*/&Camera_get_worldToCameraMatrix_m854_MethodInfo);
		Matrix4x4_t81  L_44 = V_9;
		Matrix4x4_t81  L_45 = Matrix4x4_op_Multiply_m855(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/&Matrix4x4_op_Multiply_m855_MethodInfo);
		NullCheck(L_41);
		Camera_set_worldToCameraMatrix_m856(L_41, L_45, /*hidden argument*/&Camera_set_worldToCameraMatrix_m856_MethodInfo);
		Camera_t19 * L_46 = V_2;
		Vector3_t8  L_47 = V_4;
		Vector3_t8  L_48 = V_5;
		Vector4_t82  L_49 = Water_CameraSpacePlane_m264(__this, L_46, L_47, L_48, (1.0f), /*hidden argument*/&Water_CameraSpacePlane_m264_MethodInfo);
		V_12 = L_49;
		Camera_t19 * L_50 = V_2;
		Camera_t19 * L_51 = V_0;
		Vector4_t82  L_52 = V_12;
		NullCheck(L_51);
		Matrix4x4_t81  L_53 = Camera_CalculateObliqueMatrix_m878(L_51, L_52, /*hidden argument*/&Camera_CalculateObliqueMatrix_m878_MethodInfo);
		NullCheck(L_50);
		Camera_set_projectionMatrix_m858(L_50, L_53, /*hidden argument*/&Camera_set_projectionMatrix_m858_MethodInfo);
		Camera_t19 * L_54 = V_2;
		LayerMask_t78 * L_55 = &(__this->___reflectLayers_6);
		int32_t L_56 = LayerMask_get_value_m879(L_55, /*hidden argument*/&LayerMask_get_value_m879_MethodInfo);
		NullCheck(L_54);
		Camera_set_cullingMask_m830(L_54, ((int32_t)((int32_t)((int32_t)-17)&(int32_t)L_56)), /*hidden argument*/&Camera_set_cullingMask_m830_MethodInfo);
		Camera_t19 * L_57 = V_2;
		RenderTexture_t80 * L_58 = (__this->___m_ReflectionTexture_10);
		NullCheck(L_57);
		Camera_set_targetTexture_m827(L_57, L_58, /*hidden argument*/&Camera_set_targetTexture_m827_MethodInfo);
		GL_set_invertCulling_m849(NULL /*static, unused*/, 1, /*hidden argument*/&GL_set_invertCulling_m849_MethodInfo);
		Camera_t19 * L_59 = V_2;
		NullCheck(L_59);
		Transform_t2 * L_60 = Component_get_transform_m598(L_59, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_61 = V_11;
		NullCheck(L_60);
		Transform_set_position_m601(L_60, L_61, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Camera_t19 * L_62 = V_0;
		NullCheck(L_62);
		Transform_t2 * L_63 = Component_get_transform_m598(L_62, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_63);
		Vector3_t8  L_64 = Transform_get_eulerAngles_m707(L_63, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_13 = L_64;
		Camera_t19 * L_65 = V_2;
		NullCheck(L_65);
		Transform_t2 * L_66 = Component_get_transform_m598(L_65, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		float L_67 = ((&V_13)->___x_1);
		float L_68 = ((&V_13)->___y_2);
		float L_69 = ((&V_13)->___z_3);
		Vector3_t8  L_70 = {0};
		Vector3__ctor_m700(&L_70, ((-L_67)), L_68, L_69, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_66);
		Transform_set_eulerAngles_m850(L_66, L_70, /*hidden argument*/&Transform_set_eulerAngles_m850_MethodInfo);
		Camera_t19 * L_71 = V_2;
		NullCheck(L_71);
		Camera_Render_m859(L_71, /*hidden argument*/&Camera_Render_m859_MethodInfo);
		Camera_t19 * L_72 = V_2;
		NullCheck(L_72);
		Transform_t2 * L_73 = Component_get_transform_m598(L_72, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_74 = V_10;
		NullCheck(L_73);
		Transform_set_position_m601(L_73, L_74, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		GL_set_invertCulling_m849(NULL /*static, unused*/, 0, /*hidden argument*/&GL_set_invertCulling_m849_MethodInfo);
		Renderer_t156 * L_75 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_75);
		Material_t75 * L_76 = Renderer_get_sharedMaterial_m804(L_75, /*hidden argument*/&Renderer_get_sharedMaterial_m804_MethodInfo);
		RenderTexture_t80 * L_77 = (__this->___m_ReflectionTexture_10);
		NullCheck(L_76);
		Material_SetTexture_m844(L_76, (String_t*) &_stringLiteral25, L_77, /*hidden argument*/&Material_SetTexture_m844_MethodInfo);
	}

IL_01f1:
	{
		int32_t L_78 = V_1;
		if ((((int32_t)L_78) < ((int32_t)2)))
		{
			goto IL_0291;
		}
	}
	{
		Camera_t19 * L_79 = V_3;
		Camera_t19 * L_80 = V_0;
		NullCheck(L_80);
		Matrix4x4_t81  L_81 = Camera_get_worldToCameraMatrix_m854(L_80, /*hidden argument*/&Camera_get_worldToCameraMatrix_m854_MethodInfo);
		NullCheck(L_79);
		Camera_set_worldToCameraMatrix_m856(L_79, L_81, /*hidden argument*/&Camera_set_worldToCameraMatrix_m856_MethodInfo);
		Camera_t19 * L_82 = V_3;
		Vector3_t8  L_83 = V_4;
		Vector3_t8  L_84 = V_5;
		Vector4_t82  L_85 = Water_CameraSpacePlane_m264(__this, L_82, L_83, L_84, (-1.0f), /*hidden argument*/&Water_CameraSpacePlane_m264_MethodInfo);
		V_14 = L_85;
		Camera_t19 * L_86 = V_3;
		Camera_t19 * L_87 = V_0;
		Vector4_t82  L_88 = V_14;
		NullCheck(L_87);
		Matrix4x4_t81  L_89 = Camera_CalculateObliqueMatrix_m878(L_87, L_88, /*hidden argument*/&Camera_CalculateObliqueMatrix_m878_MethodInfo);
		NullCheck(L_86);
		Camera_set_projectionMatrix_m858(L_86, L_89, /*hidden argument*/&Camera_set_projectionMatrix_m858_MethodInfo);
		Camera_t19 * L_90 = V_3;
		LayerMask_t78 * L_91 = &(__this->___refractLayers_7);
		int32_t L_92 = LayerMask_get_value_m879(L_91, /*hidden argument*/&LayerMask_get_value_m879_MethodInfo);
		NullCheck(L_90);
		Camera_set_cullingMask_m830(L_90, ((int32_t)((int32_t)((int32_t)-17)&(int32_t)L_92)), /*hidden argument*/&Camera_set_cullingMask_m830_MethodInfo);
		Camera_t19 * L_93 = V_3;
		RenderTexture_t80 * L_94 = (__this->___m_RefractionTexture_11);
		NullCheck(L_93);
		Camera_set_targetTexture_m827(L_93, L_94, /*hidden argument*/&Camera_set_targetTexture_m827_MethodInfo);
		Camera_t19 * L_95 = V_3;
		NullCheck(L_95);
		Transform_t2 * L_96 = Component_get_transform_m598(L_95, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_97 = V_0;
		NullCheck(L_97);
		Transform_t2 * L_98 = Component_get_transform_m598(L_97, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_98);
		Vector3_t8  L_99 = Transform_get_position_m599(L_98, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_96);
		Transform_set_position_m601(L_96, L_99, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Camera_t19 * L_100 = V_3;
		NullCheck(L_100);
		Transform_t2 * L_101 = Component_get_transform_m598(L_100, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_102 = V_0;
		NullCheck(L_102);
		Transform_t2 * L_103 = Component_get_transform_m598(L_102, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_103);
		Quaternion_t10  L_104 = Transform_get_rotation_m605(L_103, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		NullCheck(L_101);
		Transform_set_rotation_m607(L_101, L_104, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		Camera_t19 * L_105 = V_3;
		NullCheck(L_105);
		Camera_Render_m859(L_105, /*hidden argument*/&Camera_Render_m859_MethodInfo);
		Renderer_t156 * L_106 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_106);
		Material_t75 * L_107 = Renderer_get_sharedMaterial_m804(L_106, /*hidden argument*/&Renderer_get_sharedMaterial_m804_MethodInfo);
		RenderTexture_t80 * L_108 = (__this->___m_RefractionTexture_11);
		NullCheck(L_107);
		Material_SetTexture_m844(L_107, (String_t*) &_stringLiteral31, L_108, /*hidden argument*/&Material_SetTexture_m844_MethodInfo);
	}

IL_0291:
	{
		bool L_109 = (__this->___disablePixelLights_3);
		if (!L_109)
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_110 = V_6;
		QualitySettings_set_pixelLightCount_m877(NULL /*static, unused*/, L_110, /*hidden argument*/&QualitySettings_set_pixelLightCount_m877_MethodInfo);
	}

IL_02a3:
	{
		int32_t L_111 = V_1;
		V_15 = L_111;
		int32_t L_112 = V_15;
		if (L_112 == 0)
		{
			goto IL_02be;
		}
		if (L_112 == 1)
		{
			goto IL_02e1;
		}
		if (L_112 == 2)
		{
			goto IL_0304;
		}
	}
	{
		goto IL_0327;
	}

IL_02be:
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral28, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral32, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		goto IL_0327;
	}

IL_02e1:
	{
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral28, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral32, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		goto IL_0327;
	}

IL_0304:
	{
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral28, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral32, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		goto IL_0327;
	}

IL_0327:
	{
		((Water_t87_StaticFields*)InitializedTypeInfo(&Water_t87_il2cpp_TypeInfo)->static_fields)->___s_InsideWater_15 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.Water.Water::OnDisable()
extern MethodInfo Water_OnDisable_m258_MethodInfo;
extern TypeInfo* Enumerator_t209_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m907_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m908_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m909_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m910_MethodInfo_var;
extern MethodInfo* Dictionary_2_Clear_m881_MethodInfo_var;
extern "C" void Water_OnDisable_m258 (Water_t87 * __this, MethodInfo* method)
{
	static bool Water_OnDisable_m258_init;
	if (!Water_OnDisable_m258_init)
	{
		Enumerator_t209_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t209_0_0_0);
		Dictionary_2_GetEnumerator_m907_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m907_GenericMethod);
		Enumerator_get_Current_m908_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m908_GenericMethod);
		KeyValuePair_2_get_Value_m909_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m909_GenericMethod);
		Enumerator_MoveNext_m910_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m910_GenericMethod);
		Dictionary_2_Clear_m881_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Clear_m881_GenericMethod);
		Water_OnDisable_m258_init = true;
	}
	KeyValuePair_2_t210  V_0 = {0};
	Enumerator_t209  V_1 = {0};
	KeyValuePair_2_t210  V_2 = {0};
	Enumerator_t209  V_3 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RenderTexture_t80 * L_0 = (__this->___m_ReflectionTexture_10);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RenderTexture_t80 * L_2 = (__this->___m_ReflectionTexture_10);
		Object_DestroyImmediate_m880(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
		__this->___m_ReflectionTexture_10 = (RenderTexture_t80 *)NULL;
	}

IL_0022:
	{
		RenderTexture_t80 * L_3 = (__this->___m_RefractionTexture_11);
		bool L_4 = Object_op_Implicit_m582(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		RenderTexture_t80 * L_5 = (__this->___m_RefractionTexture_11);
		Object_DestroyImmediate_m880(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
		__this->___m_RefractionTexture_11 = (RenderTexture_t80 *)NULL;
	}

IL_0044:
	{
		Dictionary_2_t86 * L_6 = (__this->___m_ReflectionCameras_8);
		NullCheck(L_6);
		Enumerator_t209  L_7 = Dictionary_2_GetEnumerator_m907(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m907_MethodInfo_var);
		V_1 = L_7;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0055:
		{
			KeyValuePair_2_t210  L_8 = Enumerator_get_Current_m908((&V_1), /*hidden argument*/Enumerator_get_Current_m908_MethodInfo_var);
			V_0 = L_8;
			Camera_t19 * L_9 = KeyValuePair_2_get_Value_m909((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m909_MethodInfo_var);
			NullCheck(L_9);
			GameObject_t92 * L_10 = Component_get_gameObject_m577(L_9, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
			Object_DestroyImmediate_m880(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
		}

IL_006e:
		{
			bool L_11 = Enumerator_MoveNext_m910((&V_1), /*hidden argument*/Enumerator_MoveNext_m910_MethodInfo_var);
			if (L_11)
			{
				goto IL_0055;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		Enumerator_t209  L_12 = V_1;
		Enumerator_t209  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t209_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_14);
		IL2CPP_END_FINALLY(127)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_008b:
	{
		Dictionary_2_t86 * L_15 = (__this->___m_ReflectionCameras_8);
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m881_MethodInfo_var, L_15);
		Dictionary_2_t86 * L_16 = (__this->___m_RefractionCameras_9);
		NullCheck(L_16);
		Enumerator_t209  L_17 = Dictionary_2_GetEnumerator_m907(L_16, /*hidden argument*/Dictionary_2_GetEnumerator_m907_MethodInfo_var);
		V_3 = L_17;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c0;
		}

IL_00a7:
		{
			KeyValuePair_2_t210  L_18 = Enumerator_get_Current_m908((&V_3), /*hidden argument*/Enumerator_get_Current_m908_MethodInfo_var);
			V_2 = L_18;
			Camera_t19 * L_19 = KeyValuePair_2_get_Value_m909((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m909_MethodInfo_var);
			NullCheck(L_19);
			GameObject_t92 * L_20 = Component_get_gameObject_m577(L_19, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
			Object_DestroyImmediate_m880(NULL /*static, unused*/, L_20, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
		}

IL_00c0:
		{
			bool L_21 = Enumerator_MoveNext_m910((&V_3), /*hidden argument*/Enumerator_MoveNext_m910_MethodInfo_var);
			if (L_21)
			{
				goto IL_00a7;
			}
		}

IL_00cc:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00d1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_00d1;
	}

FINALLY_00d1:
	{ // begin finally (depth: 1)
		Enumerator_t209  L_22 = V_3;
		Enumerator_t209  L_23 = L_22;
		Object_t * L_24 = Box(Enumerator_t209_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_24);
		IL2CPP_END_FINALLY(209)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(209)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_00dd:
	{
		Dictionary_2_t86 * L_25 = (__this->___m_RefractionCameras_9);
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m881_MethodInfo_var, L_25);
		return;
	}
}
// System.Void UnityStandardAssets.Water.Water::Update()
extern MethodInfo Water_Update_m259_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern "C" void Water_Update_m259 (Water_t87 * __this, MethodInfo* method)
{
	static bool Water_Update_m259_init;
	if (!Water_Update_m259_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		Water_Update_m259_init = true;
	}
	Material_t75 * V_0 = {0};
	Vector4_t82  V_1 = {0};
	float V_2 = 0.0f;
	Vector4_t82  V_3 = {0};
	double V_4 = 0.0;
	Vector4_t82  V_5 = {0};
	{
		Renderer_t156 * L_0 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Renderer_t156 * L_2 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_2);
		Material_t75 * L_3 = Renderer_get_sharedMaterial_m804(L_2, /*hidden argument*/&Renderer_get_sharedMaterial_m804_MethodInfo);
		V_0 = L_3;
		Material_t75 * L_4 = V_0;
		bool L_5 = Object_op_Implicit_m582(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		Material_t75 * L_6 = V_0;
		NullCheck(L_6);
		Vector4_t82  L_7 = Material_GetVector_m805(L_6, (String_t*) &_stringLiteral20, /*hidden argument*/&Material_GetVector_m805_MethodInfo);
		V_1 = L_7;
		Material_t75 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = Material_GetFloat_m806(L_8, (String_t*) &_stringLiteral21, /*hidden argument*/&Material_GetFloat_m806_MethodInfo);
		V_2 = L_9;
		float L_10 = V_2;
		float L_11 = V_2;
		float L_12 = V_2;
		float L_13 = V_2;
		Vector4__ctor_m808((&V_3), L_10, L_11, ((float)((float)L_12*(float)(0.4f))), ((float)((float)L_13*(float)(0.45f))), /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		float L_14 = Time_get_timeSinceLevelLoad_m882(NULL /*static, unused*/, /*hidden argument*/&Time_get_timeSinceLevelLoad_m882_MethodInfo);
		V_4 = ((double)((double)(((double)L_14))/(double)(20.0)));
		float L_15 = ((&V_1)->___x_1);
		float L_16 = ((&V_3)->___x_1);
		double L_17 = V_4;
		double L_18 = Math_IEEERemainder_m883(NULL /*static, unused*/, ((double)((double)(((double)((float)((float)L_15*(float)L_16))))*(double)L_17)), (1.0), /*hidden argument*/&Math_IEEERemainder_m883_MethodInfo);
		float L_19 = ((&V_1)->___y_2);
		float L_20 = ((&V_3)->___y_2);
		double L_21 = V_4;
		double L_22 = Math_IEEERemainder_m883(NULL /*static, unused*/, ((double)((double)(((double)((float)((float)L_19*(float)L_20))))*(double)L_21)), (1.0), /*hidden argument*/&Math_IEEERemainder_m883_MethodInfo);
		float L_23 = ((&V_1)->___z_3);
		float L_24 = ((&V_3)->___z_3);
		double L_25 = V_4;
		double L_26 = Math_IEEERemainder_m883(NULL /*static, unused*/, ((double)((double)(((double)((float)((float)L_23*(float)L_24))))*(double)L_25)), (1.0), /*hidden argument*/&Math_IEEERemainder_m883_MethodInfo);
		float L_27 = ((&V_1)->___w_4);
		float L_28 = ((&V_3)->___w_4);
		double L_29 = V_4;
		double L_30 = Math_IEEERemainder_m883(NULL /*static, unused*/, ((double)((double)(((double)((float)((float)L_27*(float)L_28))))*(double)L_29)), (1.0), /*hidden argument*/&Math_IEEERemainder_m883_MethodInfo);
		Vector4__ctor_m808((&V_5), (((float)L_18)), (((float)L_22)), (((float)L_26)), (((float)L_30)), /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		Material_t75 * L_31 = V_0;
		Vector4_t82  L_32 = V_5;
		NullCheck(L_31);
		Material_SetVector_m809(L_31, (String_t*) &_stringLiteral22, L_32, /*hidden argument*/&Material_SetVector_m809_MethodInfo);
		Material_t75 * L_33 = V_0;
		Vector4_t82  L_34 = V_3;
		NullCheck(L_33);
		Material_SetVector_m809(L_33, (String_t*) &_stringLiteral33, L_34, /*hidden argument*/&Material_SetVector_m809_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern MethodInfo* Component_GetComponent_TisSkybox_t208_m905_MethodInfo_var;
extern "C" void Water_UpdateCameraModes_m260 (Water_t87 * __this, Camera_t19 * ___src, Camera_t19 * ___dest, MethodInfo* method)
{
	static bool Water_UpdateCameraModes_m260_init;
	if (!Water_UpdateCameraModes_m260_init)
	{
		Component_GetComponent_TisSkybox_t208_m905_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisSkybox_t208_m905_GenericMethod);
		Water_UpdateCameraModes_m260_init = true;
	}
	Skybox_t208 * V_0 = {0};
	Skybox_t208 * V_1 = {0};
	{
		Camera_t19 * L_0 = ___dest;
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		Camera_t19 * L_2 = ___dest;
		Camera_t19 * L_3 = ___src;
		NullCheck(L_3);
		int32_t L_4 = Camera_get_clearFlags_m884(L_3, /*hidden argument*/&Camera_get_clearFlags_m884_MethodInfo);
		NullCheck(L_2);
		Camera_set_clearFlags_m825(L_2, L_4, /*hidden argument*/&Camera_set_clearFlags_m825_MethodInfo);
		Camera_t19 * L_5 = ___dest;
		Camera_t19 * L_6 = ___src;
		NullCheck(L_6);
		Color_t79  L_7 = Camera_get_backgroundColor_m885(L_6, /*hidden argument*/&Camera_get_backgroundColor_m885_MethodInfo);
		NullCheck(L_5);
		Camera_set_backgroundColor_m824(L_5, L_7, /*hidden argument*/&Camera_set_backgroundColor_m824_MethodInfo);
		Camera_t19 * L_8 = ___src;
		NullCheck(L_8);
		int32_t L_9 = Camera_get_clearFlags_m884(L_8, /*hidden argument*/&Camera_get_clearFlags_m884_MethodInfo);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		Camera_t19 * L_10 = ___src;
		NullCheck(L_10);
		Skybox_t208 * L_11 = Component_GetComponent_TisSkybox_t208_m905(L_10, /*hidden argument*/Component_GetComponent_TisSkybox_t208_m905_MethodInfo_var);
		V_0 = L_11;
		Camera_t19 * L_12 = ___dest;
		NullCheck(L_12);
		Skybox_t208 * L_13 = Component_GetComponent_TisSkybox_t208_m905(L_12, /*hidden argument*/Component_GetComponent_TisSkybox_t208_m905_MethodInfo_var);
		V_1 = L_13;
		Skybox_t208 * L_14 = V_0;
		bool L_15 = Object_op_Implicit_m582(NULL /*static, unused*/, L_14, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		Skybox_t208 * L_16 = V_0;
		NullCheck(L_16);
		Material_t75 * L_17 = Skybox_get_material_m847(L_16, /*hidden argument*/&Skybox_get_material_m847_MethodInfo);
		bool L_18 = Object_op_Implicit_m582(NULL /*static, unused*/, L_17, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_18)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		Skybox_t208 * L_19 = V_1;
		NullCheck(L_19);
		Behaviour_set_enabled_m832(L_19, 0, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		goto IL_0079;
	}

IL_0066:
	{
		Skybox_t208 * L_20 = V_1;
		NullCheck(L_20);
		Behaviour_set_enabled_m832(L_20, 1, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		Skybox_t208 * L_21 = V_1;
		Skybox_t208 * L_22 = V_0;
		NullCheck(L_22);
		Material_t75 * L_23 = Skybox_get_material_m847(L_22, /*hidden argument*/&Skybox_get_material_m847_MethodInfo);
		NullCheck(L_21);
		Skybox_set_material_m848(L_21, L_23, /*hidden argument*/&Skybox_set_material_m848_MethodInfo);
	}

IL_0079:
	{
		Camera_t19 * L_24 = ___dest;
		Camera_t19 * L_25 = ___src;
		NullCheck(L_25);
		float L_26 = Camera_get_farClipPlane_m886(L_25, /*hidden argument*/&Camera_get_farClipPlane_m886_MethodInfo);
		NullCheck(L_24);
		Camera_set_farClipPlane_m887(L_24, L_26, /*hidden argument*/&Camera_set_farClipPlane_m887_MethodInfo);
		Camera_t19 * L_27 = ___dest;
		Camera_t19 * L_28 = ___src;
		NullCheck(L_28);
		float L_29 = Camera_get_nearClipPlane_m888(L_28, /*hidden argument*/&Camera_get_nearClipPlane_m888_MethodInfo);
		NullCheck(L_27);
		Camera_set_nearClipPlane_m889(L_27, L_29, /*hidden argument*/&Camera_set_nearClipPlane_m889_MethodInfo);
		Camera_t19 * L_30 = ___dest;
		Camera_t19 * L_31 = ___src;
		NullCheck(L_31);
		bool L_32 = Camera_get_orthographic_m890(L_31, /*hidden argument*/&Camera_get_orthographic_m890_MethodInfo);
		NullCheck(L_30);
		Camera_set_orthographic_m891(L_30, L_32, /*hidden argument*/&Camera_set_orthographic_m891_MethodInfo);
		Camera_t19 * L_33 = ___dest;
		Camera_t19 * L_34 = ___src;
		NullCheck(L_34);
		float L_35 = Camera_get_fieldOfView_m654(L_34, /*hidden argument*/&Camera_get_fieldOfView_m654_MethodInfo);
		NullCheck(L_33);
		Camera_set_fieldOfView_m655(L_33, L_35, /*hidden argument*/&Camera_set_fieldOfView_m655_MethodInfo);
		Camera_t19 * L_36 = ___dest;
		Camera_t19 * L_37 = ___src;
		NullCheck(L_37);
		float L_38 = Camera_get_aspect_m892(L_37, /*hidden argument*/&Camera_get_aspect_m892_MethodInfo);
		NullCheck(L_36);
		Camera_set_aspect_m893(L_36, L_38, /*hidden argument*/&Camera_set_aspect_m893_MethodInfo);
		Camera_t19 * L_39 = ___dest;
		Camera_t19 * L_40 = ___src;
		NullCheck(L_40);
		float L_41 = Camera_get_orthographicSize_m894(L_40, /*hidden argument*/&Camera_get_orthographicSize_m894_MethodInfo);
		NullCheck(L_39);
		Camera_set_orthographicSize_m895(L_39, L_41, /*hidden argument*/&Camera_set_orthographicSize_m895_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t207_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m900_MethodInfo_var;
extern MethodInfo* GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisFlareLayer_t211_m906_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m902_MethodInfo_var;
extern "C" void Water_CreateWaterObjects_m261 (Water_t87 * __this, Camera_t19 * ___currentCamera, Camera_t19 ** ___reflectionCamera, Camera_t19 ** ___refractionCamera, MethodInfo* method)
{
	static bool Water_CreateWaterObjects_m261_init;
	if (!Water_CreateWaterObjects_m261_init)
	{
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		TypeU5BU5D_t207_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t207_0_0_0);
		Dictionary_2_TryGetValue_m900_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m900_GenericMethod);
		GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisCamera_t19_m869_GenericMethod);
		GameObject_AddComponent_TisFlareLayer_t211_m906_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisFlareLayer_t211_m906_GenericMethod);
		Dictionary_2_set_Item_m902_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m902_GenericMethod);
		Water_CreateWaterObjects_m261_init = true;
	}
	int32_t V_0 = {0};
	GameObject_t92 * V_1 = {0};
	GameObject_t92 * V_2 = {0};
	{
		int32_t L_0 = Water_GetWaterMode_m262(__this, /*hidden argument*/&Water_GetWaterMode_m262_MethodInfo);
		V_0 = L_0;
		Camera_t19 ** L_1 = ___reflectionCamera;
		*((Object_t **)(L_1)) = (Object_t *)NULL;
		Camera_t19 ** L_2 = ___refractionCamera;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0186;
		}
	}
	{
		RenderTexture_t80 * L_4 = (__this->___m_ReflectionTexture_10);
		bool L_5 = Object_op_Implicit_m582(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = (__this->___m_OldReflectionTextureSize_13);
		int32_t L_7 = (__this->___textureSize_4);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_00ae;
		}
	}

IL_0035:
	{
		RenderTexture_t80 * L_8 = (__this->___m_ReflectionTexture_10);
		bool L_9 = Object_op_Implicit_m582(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		RenderTexture_t80 * L_10 = (__this->___m_ReflectionTexture_10);
		Object_DestroyImmediate_m880(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
	}

IL_0050:
	{
		int32_t L_11 = (__this->___textureSize_4);
		int32_t L_12 = (__this->___textureSize_4);
		RenderTexture_t80 * L_13 = (RenderTexture_t80 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t80_il2cpp_TypeInfo));
		RenderTexture__ctor_m836(L_13, L_11, L_12, ((int32_t)16), /*hidden argument*/&RenderTexture__ctor_m836_MethodInfo);
		__this->___m_ReflectionTexture_10 = L_13;
		RenderTexture_t80 * L_14 = (__this->___m_ReflectionTexture_10);
		int32_t L_15 = Object_GetInstanceID_m896(__this, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_16);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_18 = String_Concat_m897(NULL /*static, unused*/, (String_t*) &_stringLiteral34, L_17, /*hidden argument*/&String_Concat_m897_MethodInfo);
		NullCheck(L_14);
		Object_set_name_m898(L_14, L_18, /*hidden argument*/&Object_set_name_m898_MethodInfo);
		RenderTexture_t80 * L_19 = (__this->___m_ReflectionTexture_10);
		NullCheck(L_19);
		RenderTexture_set_isPowerOfTwo_m899(L_19, 1, /*hidden argument*/&RenderTexture_set_isPowerOfTwo_m899_MethodInfo);
		RenderTexture_t80 * L_20 = (__this->___m_ReflectionTexture_10);
		NullCheck(L_20);
		Object_set_hideFlags_m837(L_20, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m837_MethodInfo);
		int32_t L_21 = (__this->___textureSize_4);
		__this->___m_OldReflectionTextureSize_13 = L_21;
	}

IL_00ae:
	{
		Dictionary_2_t86 * L_22 = (__this->___m_ReflectionCameras_8);
		Camera_t19 * L_23 = ___currentCamera;
		Camera_t19 ** L_24 = ___reflectionCamera;
		NullCheck(L_22);
		VirtFuncInvoker2< bool, Camera_t19 *, Camera_t19 ** >::Invoke(Dictionary_2_TryGetValue_m900_MethodInfo_var, L_22, L_23, L_24);
		Camera_t19 ** L_25 = ___reflectionCamera;
		bool L_26 = Object_op_Implicit_m582(NULL /*static, unused*/, (*((Camera_t19 **)L_25)), /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_26)
		{
			goto IL_0186;
		}
	}
	{
		ObjectU5BU5D_t194* L_27 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 4));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, (String_t*) &_stringLiteral35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 0)) = (Object_t *)(String_t*) &_stringLiteral35;
		ObjectU5BU5D_t194* L_28 = L_27;
		int32_t L_29 = Object_GetInstanceID_m896(__this, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		int32_t L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 1)) = (Object_t *)L_31;
		ObjectU5BU5D_t194* L_32 = L_28;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 2);
		ArrayElementTypeCheck (L_32, (String_t*) &_stringLiteral36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 2)) = (Object_t *)(String_t*) &_stringLiteral36;
		ObjectU5BU5D_t194* L_33 = L_32;
		Camera_t19 * L_34 = ___currentCamera;
		NullCheck(L_34);
		int32_t L_35 = Object_GetInstanceID_m896(L_34, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_36);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 3);
		ArrayElementTypeCheck (L_33, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 3)) = (Object_t *)L_37;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Concat_m901(NULL /*static, unused*/, L_33, /*hidden argument*/&String_Concat_m901_MethodInfo);
		TypeU5BU5D_t207* L_39 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_40 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Camera_t19_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, L_40);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_39, 0)) = (Type_t *)L_40;
		TypeU5BU5D_t207* L_41 = L_39;
		Type_t * L_42 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Skybox_t208_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		ArrayElementTypeCheck (L_41, L_42);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_41, 1)) = (Type_t *)L_42;
		GameObject_t92 * L_43 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m822(L_43, L_38, L_41, /*hidden argument*/&GameObject__ctor_m822_MethodInfo);
		V_1 = L_43;
		Camera_t19 ** L_44 = ___reflectionCamera;
		GameObject_t92 * L_45 = V_1;
		NullCheck(L_45);
		Camera_t19 * L_46 = GameObject_GetComponent_TisCamera_t19_m869(L_45, /*hidden argument*/GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var);
		*((Object_t **)(L_44)) = (Object_t *)L_46;
		Camera_t19 ** L_47 = ___reflectionCamera;
		NullCheck((*((Camera_t19 **)L_47)));
		Behaviour_set_enabled_m832((*((Camera_t19 **)L_47)), 0, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		Camera_t19 ** L_48 = ___reflectionCamera;
		NullCheck((*((Camera_t19 **)L_48)));
		Transform_t2 * L_49 = Component_get_transform_m598((*((Camera_t19 **)L_48)), /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_50 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_50);
		Vector3_t8  L_51 = Transform_get_position_m599(L_50, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_49);
		Transform_set_position_m601(L_49, L_51, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Camera_t19 ** L_52 = ___reflectionCamera;
		NullCheck((*((Camera_t19 **)L_52)));
		Transform_t2 * L_53 = Component_get_transform_m598((*((Camera_t19 **)L_52)), /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_54 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_54);
		Quaternion_t10  L_55 = Transform_get_rotation_m605(L_54, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		NullCheck(L_53);
		Transform_set_rotation_m607(L_53, L_55, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		Camera_t19 ** L_56 = ___reflectionCamera;
		NullCheck((*((Camera_t19 **)L_56)));
		GameObject_t92 * L_57 = Component_get_gameObject_m577((*((Camera_t19 **)L_56)), /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_57);
		GameObject_AddComponent_TisFlareLayer_t211_m906(L_57, /*hidden argument*/GameObject_AddComponent_TisFlareLayer_t211_m906_MethodInfo_var);
		GameObject_t92 * L_58 = V_1;
		NullCheck(L_58);
		Object_set_hideFlags_m837(L_58, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m837_MethodInfo);
		Dictionary_2_t86 * L_59 = (__this->___m_ReflectionCameras_8);
		Camera_t19 * L_60 = ___currentCamera;
		Camera_t19 ** L_61 = ___reflectionCamera;
		NullCheck(L_59);
		VirtActionInvoker2< Camera_t19 *, Camera_t19 * >::Invoke(Dictionary_2_set_Item_m902_MethodInfo_var, L_59, L_60, (*((Camera_t19 **)L_61)));
	}

IL_0186:
	{
		int32_t L_62 = V_0;
		if ((((int32_t)L_62) < ((int32_t)2)))
		{
			goto IL_02ff;
		}
	}
	{
		RenderTexture_t80 * L_63 = (__this->___m_RefractionTexture_11);
		bool L_64 = Object_op_Implicit_m582(NULL /*static, unused*/, L_63, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_64)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_65 = (__this->___m_OldRefractionTextureSize_14);
		int32_t L_66 = (__this->___textureSize_4);
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0227;
		}
	}

IL_01ae:
	{
		RenderTexture_t80 * L_67 = (__this->___m_RefractionTexture_11);
		bool L_68 = Object_op_Implicit_m582(NULL /*static, unused*/, L_67, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_68)
		{
			goto IL_01c9;
		}
	}
	{
		RenderTexture_t80 * L_69 = (__this->___m_RefractionTexture_11);
		Object_DestroyImmediate_m880(NULL /*static, unused*/, L_69, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
	}

IL_01c9:
	{
		int32_t L_70 = (__this->___textureSize_4);
		int32_t L_71 = (__this->___textureSize_4);
		RenderTexture_t80 * L_72 = (RenderTexture_t80 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t80_il2cpp_TypeInfo));
		RenderTexture__ctor_m836(L_72, L_70, L_71, ((int32_t)16), /*hidden argument*/&RenderTexture__ctor_m836_MethodInfo);
		__this->___m_RefractionTexture_11 = L_72;
		RenderTexture_t80 * L_73 = (__this->___m_RefractionTexture_11);
		int32_t L_74 = Object_GetInstanceID_m896(__this, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		int32_t L_75 = L_74;
		Object_t * L_76 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_75);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_77 = String_Concat_m897(NULL /*static, unused*/, (String_t*) &_stringLiteral37, L_76, /*hidden argument*/&String_Concat_m897_MethodInfo);
		NullCheck(L_73);
		Object_set_name_m898(L_73, L_77, /*hidden argument*/&Object_set_name_m898_MethodInfo);
		RenderTexture_t80 * L_78 = (__this->___m_RefractionTexture_11);
		NullCheck(L_78);
		RenderTexture_set_isPowerOfTwo_m899(L_78, 1, /*hidden argument*/&RenderTexture_set_isPowerOfTwo_m899_MethodInfo);
		RenderTexture_t80 * L_79 = (__this->___m_RefractionTexture_11);
		NullCheck(L_79);
		Object_set_hideFlags_m837(L_79, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m837_MethodInfo);
		int32_t L_80 = (__this->___textureSize_4);
		__this->___m_OldRefractionTextureSize_14 = L_80;
	}

IL_0227:
	{
		Dictionary_2_t86 * L_81 = (__this->___m_RefractionCameras_9);
		Camera_t19 * L_82 = ___currentCamera;
		Camera_t19 ** L_83 = ___refractionCamera;
		NullCheck(L_81);
		VirtFuncInvoker2< bool, Camera_t19 *, Camera_t19 ** >::Invoke(Dictionary_2_TryGetValue_m900_MethodInfo_var, L_81, L_82, L_83);
		Camera_t19 ** L_84 = ___refractionCamera;
		bool L_85 = Object_op_Implicit_m582(NULL /*static, unused*/, (*((Camera_t19 **)L_84)), /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_85)
		{
			goto IL_02ff;
		}
	}
	{
		ObjectU5BU5D_t194* L_86 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 4));
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 0);
		ArrayElementTypeCheck (L_86, (String_t*) &_stringLiteral38);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_86, 0)) = (Object_t *)(String_t*) &_stringLiteral38;
		ObjectU5BU5D_t194* L_87 = L_86;
		int32_t L_88 = Object_GetInstanceID_m896(__this, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		int32_t L_89 = L_88;
		Object_t * L_90 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_89);
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 1);
		ArrayElementTypeCheck (L_87, L_90);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_87, 1)) = (Object_t *)L_90;
		ObjectU5BU5D_t194* L_91 = L_87;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		ArrayElementTypeCheck (L_91, (String_t*) &_stringLiteral36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_91, 2)) = (Object_t *)(String_t*) &_stringLiteral36;
		ObjectU5BU5D_t194* L_92 = L_91;
		Camera_t19 * L_93 = ___currentCamera;
		NullCheck(L_93);
		int32_t L_94 = Object_GetInstanceID_m896(L_93, /*hidden argument*/&Object_GetInstanceID_m896_MethodInfo);
		int32_t L_95 = L_94;
		Object_t * L_96 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_95);
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 3);
		ArrayElementTypeCheck (L_92, L_96);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_92, 3)) = (Object_t *)L_96;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m901(NULL /*static, unused*/, L_92, /*hidden argument*/&String_Concat_m901_MethodInfo);
		TypeU5BU5D_t207* L_98 = ((TypeU5BU5D_t207*)SZArrayNew(TypeU5BU5D_t207_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_99 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Camera_t19_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 0);
		ArrayElementTypeCheck (L_98, L_99);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_98, 0)) = (Type_t *)L_99;
		TypeU5BU5D_t207* L_100 = L_98;
		Type_t * L_101 = Type_GetTypeFromHandle_m749(NULL /*static, unused*/, LoadTypeToken(&Skybox_t208_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m749_MethodInfo);
		NullCheck(L_100);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_100, 1);
		ArrayElementTypeCheck (L_100, L_101);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_100, 1)) = (Type_t *)L_101;
		GameObject_t92 * L_102 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m822(L_102, L_97, L_100, /*hidden argument*/&GameObject__ctor_m822_MethodInfo);
		V_2 = L_102;
		Camera_t19 ** L_103 = ___refractionCamera;
		GameObject_t92 * L_104 = V_2;
		NullCheck(L_104);
		Camera_t19 * L_105 = GameObject_GetComponent_TisCamera_t19_m869(L_104, /*hidden argument*/GameObject_GetComponent_TisCamera_t19_m869_MethodInfo_var);
		*((Object_t **)(L_103)) = (Object_t *)L_105;
		Camera_t19 ** L_106 = ___refractionCamera;
		NullCheck((*((Camera_t19 **)L_106)));
		Behaviour_set_enabled_m832((*((Camera_t19 **)L_106)), 0, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		Camera_t19 ** L_107 = ___refractionCamera;
		NullCheck((*((Camera_t19 **)L_107)));
		Transform_t2 * L_108 = Component_get_transform_m598((*((Camera_t19 **)L_107)), /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_109 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_109);
		Vector3_t8  L_110 = Transform_get_position_m599(L_109, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_108);
		Transform_set_position_m601(L_108, L_110, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Camera_t19 ** L_111 = ___refractionCamera;
		NullCheck((*((Camera_t19 **)L_111)));
		Transform_t2 * L_112 = Component_get_transform_m598((*((Camera_t19 **)L_111)), /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_113 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_113);
		Quaternion_t10  L_114 = Transform_get_rotation_m605(L_113, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		NullCheck(L_112);
		Transform_set_rotation_m607(L_112, L_114, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		Camera_t19 ** L_115 = ___refractionCamera;
		NullCheck((*((Camera_t19 **)L_115)));
		GameObject_t92 * L_116 = Component_get_gameObject_m577((*((Camera_t19 **)L_115)), /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_116);
		GameObject_AddComponent_TisFlareLayer_t211_m906(L_116, /*hidden argument*/GameObject_AddComponent_TisFlareLayer_t211_m906_MethodInfo_var);
		GameObject_t92 * L_117 = V_2;
		NullCheck(L_117);
		Object_set_hideFlags_m837(L_117, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m837_MethodInfo);
		Dictionary_2_t86 * L_118 = (__this->___m_RefractionCameras_9);
		Camera_t19 * L_119 = ___currentCamera;
		Camera_t19 ** L_120 = ___refractionCamera;
		NullCheck(L_118);
		VirtActionInvoker2< Camera_t19 *, Camera_t19 * >::Invoke(Dictionary_2_set_Item_m902_MethodInfo_var, L_118, L_119, (*((Camera_t19 **)L_120)));
	}

IL_02ff:
	{
		return;
	}
}
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::GetWaterMode()
extern "C" int32_t Water_GetWaterMode_m262 (Water_t87 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_HardwareWaterSupport_12);
		int32_t L_1 = (__this->___waterMode_2);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = (__this->___m_HardwareWaterSupport_12);
		return L_2;
	}

IL_0018:
	{
		int32_t L_3 = (__this->___waterMode_2);
		return L_3;
	}
}
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::FindHardwareWaterSupport()
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern "C" int32_t Water_FindHardwareWaterSupport_m263 (Water_t87 * __this, MethodInfo* method)
{
	static bool Water_FindHardwareWaterSupport_m263_init;
	if (!Water_FindHardwareWaterSupport_m263_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		Water_FindHardwareWaterSupport_m263_init = true;
	}
	Material_t75 * V_0 = {0};
	String_t* V_1 = {0};
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m903(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m903_MethodInfo);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Renderer_t156 * L_1 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		bool L_2 = Object_op_Implicit_m582(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (int32_t)(0);
	}

IL_001c:
	{
		Renderer_t156 * L_3 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_3);
		Material_t75 * L_4 = Renderer_get_sharedMaterial_m804(L_3, /*hidden argument*/&Renderer_get_sharedMaterial_m804_MethodInfo);
		V_0 = L_4;
		Material_t75 * L_5 = V_0;
		bool L_6 = Object_op_Implicit_m582(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0035:
	{
		Material_t75 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = Material_GetTag_m904(L_7, (String_t*) &_stringLiteral39, 0, /*hidden argument*/&Material_GetTag_m904_MethodInfo);
		V_1 = L_8;
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_10 = String_op_Equality_m751(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral40, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0054:
	{
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_12 = String_op_Equality_m751(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral41, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0066:
	{
		return (int32_t)(0);
	}
}
// UnityEngine.Vector4 UnityStandardAssets.Water.Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector4_t82  Water_CameraSpacePlane_m264 (Water_t87 * __this, Camera_t19 * ___cam, Vector3_t8  ___pos, Vector3_t8  ___normal, float ___sideSign, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Matrix4x4_t81  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	Vector3_t8  V_4 = {0};
	{
		Vector3_t8  L_0 = ___pos;
		Vector3_t8  L_1 = ___normal;
		float L_2 = (__this->___clipPlaneOffset_5);
		Vector3_t8  L_3 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_4;
		Camera_t19 * L_5 = ___cam;
		NullCheck(L_5);
		Matrix4x4_t81  L_6 = Camera_get_worldToCameraMatrix_m854(L_5, /*hidden argument*/&Camera_get_worldToCameraMatrix_m854_MethodInfo);
		V_1 = L_6;
		Vector3_t8  L_7 = V_0;
		Vector3_t8  L_8 = Matrix4x4_MultiplyPoint_m853((&V_1), L_7, /*hidden argument*/&Matrix4x4_MultiplyPoint_m853_MethodInfo);
		V_2 = L_8;
		Vector3_t8  L_9 = ___normal;
		Vector3_t8  L_10 = Matrix4x4_MultiplyVector_m868((&V_1), L_9, /*hidden argument*/&Matrix4x4_MultiplyVector_m868_MethodInfo);
		V_4 = L_10;
		Vector3_t8  L_11 = Vector3_get_normalized_m592((&V_4), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		float L_12 = ___sideSign;
		Vector3_t8  L_13 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		V_3 = L_13;
		float L_14 = ((&V_3)->___x_1);
		float L_15 = ((&V_3)->___y_2);
		float L_16 = ((&V_3)->___z_3);
		Vector3_t8  L_17 = V_2;
		Vector3_t8  L_18 = V_3;
		float L_19 = Vector3_Dot_m851(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		Vector4_t82  L_20 = {0};
		Vector4__ctor_m808(&L_20, L_14, L_15, L_16, ((-L_19)), /*hidden argument*/&Vector4__ctor_m808_MethodInfo);
		return L_20;
	}
}
// System.Void UnityStandardAssets.Water.Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C" void Water_CalculateReflectionMatrix_m265 (Object_t * __this /* static, unused */, Matrix4x4_t81 * ___reflectionMat, Vector4_t82  ___plane, MethodInfo* method)
{
	{
		Matrix4x4_t81 * L_0 = ___reflectionMat;
		float L_1 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_2 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_0->___m00_0 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_1))*(float)L_2))));
		Matrix4x4_t81 * L_3 = ___reflectionMat;
		float L_4 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_5 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_3->___m01_4 = ((float)((float)((float)((float)(-2.0f)*(float)L_4))*(float)L_5));
		Matrix4x4_t81 * L_6 = ___reflectionMat;
		float L_7 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_8 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_6->___m02_8 = ((float)((float)((float)((float)(-2.0f)*(float)L_7))*(float)L_8));
		Matrix4x4_t81 * L_9 = ___reflectionMat;
		float L_10 = Vector4_get_Item_m867((&___plane), 3, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_11 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_9->___m03_12 = ((float)((float)((float)((float)(-2.0f)*(float)L_10))*(float)L_11));
		Matrix4x4_t81 * L_12 = ___reflectionMat;
		float L_13 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_14 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_12->___m10_1 = ((float)((float)((float)((float)(-2.0f)*(float)L_13))*(float)L_14));
		Matrix4x4_t81 * L_15 = ___reflectionMat;
		float L_16 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_17 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_15->___m11_5 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_16))*(float)L_17))));
		Matrix4x4_t81 * L_18 = ___reflectionMat;
		float L_19 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_20 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_18->___m12_9 = ((float)((float)((float)((float)(-2.0f)*(float)L_19))*(float)L_20));
		Matrix4x4_t81 * L_21 = ___reflectionMat;
		float L_22 = Vector4_get_Item_m867((&___plane), 3, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_23 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_21->___m13_13 = ((float)((float)((float)((float)(-2.0f)*(float)L_22))*(float)L_23));
		Matrix4x4_t81 * L_24 = ___reflectionMat;
		float L_25 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_26 = Vector4_get_Item_m867((&___plane), 0, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_24->___m20_2 = ((float)((float)((float)((float)(-2.0f)*(float)L_25))*(float)L_26));
		Matrix4x4_t81 * L_27 = ___reflectionMat;
		float L_28 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_29 = Vector4_get_Item_m867((&___plane), 1, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_27->___m21_6 = ((float)((float)((float)((float)(-2.0f)*(float)L_28))*(float)L_29));
		Matrix4x4_t81 * L_30 = ___reflectionMat;
		float L_31 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_32 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_30->___m22_10 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(2.0f)*(float)L_31))*(float)L_32))));
		Matrix4x4_t81 * L_33 = ___reflectionMat;
		float L_34 = Vector4_get_Item_m867((&___plane), 3, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		float L_35 = Vector4_get_Item_m867((&___plane), 2, /*hidden argument*/&Vector4_get_Item_m867_MethodInfo);
		L_33->___m23_14 = ((float)((float)((float)((float)(-2.0f)*(float)L_34))*(float)L_35));
		Matrix4x4_t81 * L_36 = ___reflectionMat;
		L_36->___m30_3 = (0.0f);
		Matrix4x4_t81 * L_37 = ___reflectionMat;
		L_37->___m31_7 = (0.0f);
		Matrix4x4_t81 * L_38 = ___reflectionMat;
		L_38->___m32_11 = (0.0f);
		Matrix4x4_t81 * L_39 = ___reflectionMat;
		L_39->___m33_15 = (1.0f);
		return;
	}
}
// UnityStandardAssets.Water.WaterQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaterQuality_t88_il2cpp_TypeInfo;
// UnityStandardAssets.Water.WaterQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_2MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityStandardAssets.Water.WaterBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_3MethodDeclarations.h"

// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
extern MethodInfo Material_get_shader_m911_MethodInfo;
extern MethodInfo Shader_set_maximumLOD_m912_MethodInfo;
extern MethodInfo SystemInfo_SupportsRenderTextureFormat_m913_MethodInfo;
extern MethodInfo Camera_get_depthTextureMode_m914_MethodInfo;
extern MethodInfo WaterBase_UpdateShader_m267_MethodInfo;


// System.Void UnityStandardAssets.Water.WaterBase::.ctor()
extern MethodInfo WaterBase__ctor_m266_MethodInfo;
extern "C" void WaterBase__ctor_m266 (WaterBase_t83 * __this, MethodInfo* method)
{
	{
		__this->___waterQuality_3 = 2;
		__this->___edgeBlend_4 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBase::UpdateShader()
extern "C" void WaterBase_UpdateShader_m267 (WaterBase_t83 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___waterQuality_3);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Material_t75 * L_1 = (__this->___sharedMaterial_2);
		NullCheck(L_1);
		Shader_t95 * L_2 = Material_get_shader_m911(L_1, /*hidden argument*/&Material_get_shader_m911_MethodInfo);
		NullCheck(L_2);
		Shader_set_maximumLOD_m912(L_2, ((int32_t)501), /*hidden argument*/&Shader_set_maximumLOD_m912_MethodInfo);
		goto IL_0061;
	}

IL_0026:
	{
		int32_t L_3 = (__this->___waterQuality_3);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Material_t75 * L_4 = (__this->___sharedMaterial_2);
		NullCheck(L_4);
		Shader_t95 * L_5 = Material_get_shader_m911(L_4, /*hidden argument*/&Material_get_shader_m911_MethodInfo);
		NullCheck(L_5);
		Shader_set_maximumLOD_m912(L_5, ((int32_t)301), /*hidden argument*/&Shader_set_maximumLOD_m912_MethodInfo);
		goto IL_0061;
	}

IL_004c:
	{
		Material_t75 * L_6 = (__this->___sharedMaterial_2);
		NullCheck(L_6);
		Shader_t95 * L_7 = Material_get_shader_m911(L_6, /*hidden argument*/&Material_get_shader_m911_MethodInfo);
		NullCheck(L_7);
		Shader_set_maximumLOD_m912(L_7, ((int32_t)201), /*hidden argument*/&Shader_set_maximumLOD_m912_MethodInfo);
	}

IL_0061:
	{
		bool L_8 = SystemInfo_SupportsRenderTextureFormat_m913(NULL /*static, unused*/, 1, /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m913_MethodInfo);
		if (L_8)
		{
			goto IL_0073;
		}
	}
	{
		__this->___edgeBlend_4 = 0;
	}

IL_0073:
	{
		bool L_9 = (__this->___edgeBlend_4);
		if (!L_9)
		{
			goto IL_00b8;
		}
	}
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral42, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral43, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
		Camera_t19 * L_10 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		bool L_11 = Object_op_Implicit_m582(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		Camera_t19 * L_12 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		Camera_t19 * L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = Camera_get_depthTextureMode_m914(L_13, /*hidden argument*/&Camera_get_depthTextureMode_m914_MethodInfo);
		NullCheck(L_13);
		Camera_set_depthTextureMode_m860(L_13, ((int32_t)((int32_t)L_14|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m860_MethodInfo);
	}

IL_00b3:
	{
		goto IL_00cc;
	}

IL_00b8:
	{
		Shader_EnableKeyword_m812(NULL /*static, unused*/, (String_t*) &_stringLiteral43, /*hidden argument*/&Shader_EnableKeyword_m812_MethodInfo);
		Shader_DisableKeyword_m813(NULL /*static, unused*/, (String_t*) &_stringLiteral42, /*hidden argument*/&Shader_DisableKeyword_m813_MethodInfo);
	}

IL_00cc:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern MethodInfo WaterBase_WaterTileBeingRendered_m268_MethodInfo;
extern "C" void WaterBase_WaterTileBeingRendered_m268 (WaterBase_t83 * __this, Transform_t2 * ___tr, Camera_t19 * ___currentCam, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___currentCam;
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->___edgeBlend_4);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		Camera_t19 * L_3 = ___currentCam;
		Camera_t19 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = Camera_get_depthTextureMode_m914(L_4, /*hidden argument*/&Camera_get_depthTextureMode_m914_MethodInfo);
		NullCheck(L_4);
		Camera_set_depthTextureMode_m860(L_4, ((int32_t)((int32_t)L_5|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m860_MethodInfo);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBase::Update()
extern MethodInfo WaterBase_Update_m269_MethodInfo;
extern "C" void WaterBase_Update_m269 (WaterBase_t83 * __this, MethodInfo* method)
{
	{
		Material_t75 * L_0 = (__this->___sharedMaterial_2);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		WaterBase_UpdateShader_m267(__this, /*hidden argument*/&WaterBase_UpdateShader_m267_MethodInfo);
	}

IL_0016:
	{
		return;
	}
}
// UnityStandardAssets.Water.WaterTile
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaterTile_t89_il2cpp_TypeInfo;
// UnityStandardAssets.Water.WaterTile
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Water_Wate_4MethodDeclarations.h"

extern MethodInfo WaterTile_AcquireComponents_m272_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Water.PlanarReflection>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_11.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Water.PlanarReflection>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Water.PlanarReflection>()
#define Component_GetComponent_TisPlanarReflection_t77_m915(__this, method) (( PlanarReflection_t77 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Water.WaterBase>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_12.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Water.WaterBase>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Water.WaterBase>()
#define Component_GetComponent_TisWaterBase_t83_m916(__this, method) (( WaterBase_t83 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisPlanarReflection_t77_m915_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisWaterBase_t83_m916_GenericMethod;


// System.Void UnityStandardAssets.Water.WaterTile::.ctor()
extern MethodInfo WaterTile__ctor_m270_MethodInfo;
extern "C" void WaterTile__ctor_m270 (WaterTile_t89 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterTile::Start()
extern MethodInfo WaterTile_Start_m271_MethodInfo;
extern "C" void WaterTile_Start_m271 (WaterTile_t89 * __this, MethodInfo* method)
{
	{
		WaterTile_AcquireComponents_m272(__this, /*hidden argument*/&WaterTile_AcquireComponents_m272_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterTile::AcquireComponents()
extern MethodInfo* Component_GetComponent_TisPlanarReflection_t77_m915_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisWaterBase_t83_m916_MethodInfo_var;
extern "C" void WaterTile_AcquireComponents_m272 (WaterTile_t89 * __this, MethodInfo* method)
{
	static bool WaterTile_AcquireComponents_m272_init;
	if (!WaterTile_AcquireComponents_m272_init)
	{
		Component_GetComponent_TisPlanarReflection_t77_m915_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisPlanarReflection_t77_m915_GenericMethod);
		Component_GetComponent_TisWaterBase_t83_m916_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisWaterBase_t83_m916_GenericMethod);
		WaterTile_AcquireComponents_m272_init = true;
	}
	{
		PlanarReflection_t77 * L_0 = (__this->___reflection_2);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Transform_t2 * L_3 = Transform_get_parent_m626(L_2, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		bool L_4 = Object_op_Implicit_m582(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Transform_t2 * L_5 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_5);
		Transform_t2 * L_6 = Transform_get_parent_m626(L_5, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		NullCheck(L_6);
		PlanarReflection_t77 * L_7 = Component_GetComponent_TisPlanarReflection_t77_m915(L_6, /*hidden argument*/Component_GetComponent_TisPlanarReflection_t77_m915_MethodInfo_var);
		__this->___reflection_2 = L_7;
		goto IL_0051;
	}

IL_0040:
	{
		Transform_t2 * L_8 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_8);
		PlanarReflection_t77 * L_9 = Component_GetComponent_TisPlanarReflection_t77_m915(L_8, /*hidden argument*/Component_GetComponent_TisPlanarReflection_t77_m915_MethodInfo_var);
		__this->___reflection_2 = L_9;
	}

IL_0051:
	{
		WaterBase_t83 * L_10 = (__this->___waterBase_3);
		bool L_11 = Object_op_Implicit_m582(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_11)
		{
			goto IL_00a2;
		}
	}
	{
		Transform_t2 * L_12 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_12);
		Transform_t2 * L_13 = Transform_get_parent_m626(L_12, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		bool L_14 = Object_op_Implicit_m582(NULL /*static, unused*/, L_13, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		Transform_t2 * L_15 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_15);
		Transform_t2 * L_16 = Transform_get_parent_m626(L_15, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		NullCheck(L_16);
		WaterBase_t83 * L_17 = Component_GetComponent_TisWaterBase_t83_m916(L_16, /*hidden argument*/Component_GetComponent_TisWaterBase_t83_m916_MethodInfo_var);
		__this->___waterBase_3 = L_17;
		goto IL_00a2;
	}

IL_0091:
	{
		Transform_t2 * L_18 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_18);
		WaterBase_t83 * L_19 = Component_GetComponent_TisWaterBase_t83_m916(L_18, /*hidden argument*/Component_GetComponent_TisWaterBase_t83_m916_MethodInfo_var);
		__this->___waterBase_3 = L_19;
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterTile::OnWillRenderObject()
extern MethodInfo WaterTile_OnWillRenderObject_m273_MethodInfo;
extern "C" void WaterTile_OnWillRenderObject_m273 (WaterTile_t89 * __this, MethodInfo* method)
{
	{
		PlanarReflection_t77 * L_0 = (__this->___reflection_2);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		PlanarReflection_t77 * L_2 = (__this->___reflection_2);
		Transform_t2 * L_3 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_4 = Camera_get_current_m875(NULL /*static, unused*/, /*hidden argument*/&Camera_get_current_m875_MethodInfo);
		NullCheck(L_2);
		PlanarReflection_WaterTileBeingRendered_m244(L_2, L_3, L_4, /*hidden argument*/&PlanarReflection_WaterTileBeingRendered_m244_MethodInfo);
	}

IL_0026:
	{
		WaterBase_t83 * L_5 = (__this->___waterBase_3);
		bool L_6 = Object_op_Implicit_m582(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		WaterBase_t83 * L_7 = (__this->___waterBase_3);
		Transform_t2 * L_8 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Camera_t19 * L_9 = Camera_get_current_m875(NULL /*static, unused*/, /*hidden argument*/&Camera_get_current_m875_MethodInfo);
		NullCheck(L_7);
		WaterBase_WaterTileBeingRendered_m268(L_7, L_8, L_9, /*hidden argument*/&WaterBase_WaterTileBeingRendered_m268_MethodInfo);
	}

IL_004c:
	{
		return;
	}
}
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Mode_t90_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_AcMethodDeclarations.h"



// UnityStandardAssets.Utility.ActivateTrigger
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivateTrigger_t93_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.ActivateTrigger
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac_0MethodDeclarations.h"

// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
extern TypeInfo Behaviour_t212_il2cpp_TypeInfo;
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
extern MethodInfo GameObject_BroadcastMessage_m917_MethodInfo;
extern MethodInfo Object_Instantiate_m918_MethodInfo;
extern MethodInfo Object_DestroyObject_m919_MethodInfo;
extern MethodInfo Animation_Play_m920_MethodInfo;
extern MethodInfo ActivateTrigger_DoActivateTrigger_m275_MethodInfo;
struct GameObject_t92;
// UnityEngine.CastHelper`1<UnityEngine.Animation>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_13.h"
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
#define GameObject_GetComponent_TisAnimation_t213_m921(__this, method) (( Animation_t213 * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisAnimation_t213_m921_GenericMethod;


// System.Void UnityStandardAssets.Utility.ActivateTrigger::.ctor()
extern MethodInfo ActivateTrigger__ctor_m274_MethodInfo;
extern "C" void ActivateTrigger__ctor_m274 (ActivateTrigger_t93 * __this, MethodInfo* method)
{
	{
		__this->___action_2 = 2;
		__this->___triggerCount_5 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::DoActivateTrigger()
extern MethodInfo* GameObject_GetComponent_TisAnimation_t213_m921_MethodInfo_var;
extern "C" void ActivateTrigger_DoActivateTrigger_m275 (ActivateTrigger_t93 * __this, MethodInfo* method)
{
	static bool ActivateTrigger_DoActivateTrigger_m275_init;
	if (!ActivateTrigger_DoActivateTrigger_m275_init)
	{
		GameObject_GetComponent_TisAnimation_t213_m921_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisAnimation_t213_m921_GenericMethod);
		ActivateTrigger_DoActivateTrigger_m275_init = true;
	}
	Object_t91 * V_0 = {0};
	Behaviour_t212 * V_1 = {0};
	GameObject_t92 * V_2 = {0};
	int32_t V_3 = {0};
	Object_t91 * G_B4_0 = {0};
	Object_t91 * G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___triggerCount_5);
		__this->___triggerCount_5 = ((int32_t)((int32_t)L_0-(int32_t)1));
		int32_t L_1 = (__this->___triggerCount_5);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = (__this->___repeatTrigger_6);
		if (!L_2)
		{
			goto IL_014e;
		}
	}

IL_0024:
	{
		Object_t91 * L_3 = (__this->___target_3);
		Object_t91 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		GameObject_t92 * L_5 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		G_B4_0 = ((Object_t91 *)(L_5));
	}

IL_0037:
	{
		V_0 = G_B4_0;
		Object_t91 * L_6 = V_0;
		V_1 = ((Behaviour_t212 *)IsInst(L_6, InitializedTypeInfo(&Behaviour_t212_il2cpp_TypeInfo)));
		Object_t91 * L_7 = V_0;
		V_2 = ((GameObject_t92 *)IsInst(L_7, InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo)));
		Behaviour_t212 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m642(NULL /*static, unused*/, L_8, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Behaviour_t212 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t92 * L_11 = Component_get_gameObject_m577(L_10, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		V_2 = L_11;
	}

IL_0059:
	{
		int32_t L_12 = (__this->___action_2);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_009f;
		}
		if (L_13 == 2)
		{
			goto IL_00e9;
		}
		if (L_13 == 3)
		{
			goto IL_0101;
		}
		if (L_13 == 4)
		{
			goto IL_0119;
		}
		if (L_13 == 5)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_014e;
	}

IL_0083:
	{
		GameObject_t92 * L_14 = V_2;
		bool L_15 = Object_op_Inequality_m642(NULL /*static, unused*/, L_14, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t92 * L_16 = V_2;
		NullCheck(L_16);
		GameObject_BroadcastMessage_m917(L_16, (String_t*) &_stringLiteral44, /*hidden argument*/&GameObject_BroadcastMessage_m917_MethodInfo);
	}

IL_009a:
	{
		goto IL_014e;
	}

IL_009f:
	{
		GameObject_t92 * L_17 = (__this->___source_4);
		bool L_18 = Object_op_Inequality_m642(NULL /*static, unused*/, L_17, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t92 * L_19 = V_2;
		bool L_20 = Object_op_Inequality_m642(NULL /*static, unused*/, L_19, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t92 * L_21 = (__this->___source_4);
		GameObject_t92 * L_22 = V_2;
		NullCheck(L_22);
		Transform_t2 * L_23 = GameObject_get_transform_m583(L_22, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		NullCheck(L_23);
		Vector3_t8  L_24 = Transform_get_position_m599(L_23, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		GameObject_t92 * L_25 = V_2;
		NullCheck(L_25);
		Transform_t2 * L_26 = GameObject_get_transform_m583(L_25, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		NullCheck(L_26);
		Quaternion_t10  L_27 = Transform_get_rotation_m605(L_26, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Object_Instantiate_m918(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/&Object_Instantiate_m918_MethodInfo);
		GameObject_t92 * L_28 = V_2;
		Object_DestroyObject_m919(NULL /*static, unused*/, L_28, /*hidden argument*/&Object_DestroyObject_m919_MethodInfo);
	}

IL_00e4:
	{
		goto IL_014e;
	}

IL_00e9:
	{
		GameObject_t92 * L_29 = V_2;
		bool L_30 = Object_op_Inequality_m642(NULL /*static, unused*/, L_29, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		GameObject_t92 * L_31 = V_2;
		NullCheck(L_31);
		GameObject_SetActive_m770(L_31, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
	}

IL_00fc:
	{
		goto IL_014e;
	}

IL_0101:
	{
		Behaviour_t212 * L_32 = V_1;
		bool L_33 = Object_op_Inequality_m642(NULL /*static, unused*/, L_32, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		Behaviour_t212 * L_34 = V_1;
		NullCheck(L_34);
		Behaviour_set_enabled_m832(L_34, 1, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
	}

IL_0114:
	{
		goto IL_014e;
	}

IL_0119:
	{
		GameObject_t92 * L_35 = V_2;
		bool L_36 = Object_op_Inequality_m642(NULL /*static, unused*/, L_35, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_36)
		{
			goto IL_0131;
		}
	}
	{
		GameObject_t92 * L_37 = V_2;
		NullCheck(L_37);
		Animation_t213 * L_38 = GameObject_GetComponent_TisAnimation_t213_m921(L_37, /*hidden argument*/GameObject_GetComponent_TisAnimation_t213_m921_MethodInfo_var);
		NullCheck(L_38);
		Animation_Play_m920(L_38, /*hidden argument*/&Animation_Play_m920_MethodInfo);
	}

IL_0131:
	{
		goto IL_014e;
	}

IL_0136:
	{
		GameObject_t92 * L_39 = V_2;
		bool L_40 = Object_op_Inequality_m642(NULL /*static, unused*/, L_39, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_40)
		{
			goto IL_0149;
		}
	}
	{
		GameObject_t92 * L_41 = V_2;
		NullCheck(L_41);
		GameObject_SetActive_m770(L_41, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
	}

IL_0149:
	{
		goto IL_014e;
	}

IL_014e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ActivateTrigger::OnTriggerEnter(UnityEngine.Collider)
extern MethodInfo ActivateTrigger_OnTriggerEnter_m276_MethodInfo;
extern "C" void ActivateTrigger_OnTriggerEnter_m276 (ActivateTrigger_t93 * __this, Collider_t94 * ___other, MethodInfo* method)
{
	{
		ActivateTrigger_DoActivateTrigger_m275(__this, /*hidden argument*/&ActivateTrigger_DoActivateTrigger_m275_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReplacementDefinition_t96_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_AuMethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
extern MethodInfo ReplacementDefinition__ctor_m277_MethodInfo;
extern "C" void ReplacementDefinition__ctor_m277 (ReplacementDefinition_t96 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReplacementList_t98_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_0MethodDeclarations.h"

extern TypeInfo ReplacementDefinitionU5BU5D_t97_il2cpp_TypeInfo;
extern Il2CppType ReplacementDefinitionU5BU5D_t97_0_0_0;


// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
extern MethodInfo ReplacementList__ctor_m278_MethodInfo;
extern TypeInfo* ReplacementDefinitionU5BU5D_t97_il2cpp_TypeInfo_var;
extern "C" void ReplacementList__ctor_m278 (ReplacementList_t98 * __this, MethodInfo* method)
{
	static bool ReplacementList__ctor_m278_init;
	if (!ReplacementList__ctor_m278_init)
	{
		ReplacementDefinitionU5BU5D_t97_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ReplacementDefinitionU5BU5D_t97_0_0_0);
		ReplacementList__ctor_m278_init = true;
	}
	{
		__this->___items_0 = ((ReplacementDefinitionU5BU5D_t97*)SZArrayNew(ReplacementDefinitionU5BU5D_t97_il2cpp_TypeInfo_var, 0));
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AutoMobileShaderSwitch_t99_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_1MethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
extern TypeInfo List_1_t214_il2cpp_TypeInfo;
extern TypeInfo Material_t75_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t215_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
extern Il2CppType List_1_t214_0_0_0;
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern MethodInfo Debug_Log_m922_MethodInfo;
extern MethodInfo List_1__ctor_m923_MethodInfo;
extern MethodInfo Renderer_get_sharedMaterials_m924_MethodInfo;
extern MethodInfo Renderer_get_materials_m925_MethodInfo;
extern MethodInfo List_1_Contains_m926_MethodInfo;
extern MethodInfo List_1_Add_m927_MethodInfo;
extern MethodInfo Material_set_shader_m928_MethodInfo;
extern MethodInfo List_1_IndexOf_m929_MethodInfo;
extern MethodInfo List_1_get_Item_m930_MethodInfo;
extern MethodInfo Renderer_set_materials_m931_MethodInfo;
extern MethodInfo String_Concat_m932_MethodInfo;
extern MethodInfo List_1_get_Count_m933_MethodInfo;
struct Object_t91;
// Declaration !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
extern "C" RendererU5BU5D_t195* Object_FindObjectsOfType_TisRenderer_t156_m934 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Object_t91;
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
extern "C" Material_t75 * Object_Instantiate_TisMaterial_t75_m935 (Object_t * __this /* static, unused */, Material_t75 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Object_FindObjectsOfType_TisRenderer_t156_m934_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m923_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m926_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m927_GenericMethod;
extern Il2CppGenericMethod Object_Instantiate_TisMaterial_t75_m935_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m929_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m930_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m933_GenericMethod;


// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::.ctor()
extern MethodInfo AutoMobileShaderSwitch__ctor_m279_MethodInfo;
extern "C" void AutoMobileShaderSwitch__ctor_m279 (AutoMobileShaderSwitch_t99 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch::OnEnable()
extern MethodInfo AutoMobileShaderSwitch_OnEnable_m280_MethodInfo;
extern TypeInfo* List_1_t214_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t194_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t215_il2cpp_TypeInfo_var;
extern MethodInfo* Object_FindObjectsOfType_TisRenderer_t156_m934_MethodInfo_var;
extern MethodInfo* List_1__ctor_m923_MethodInfo_var;
extern MethodInfo* List_1_Contains_m926_MethodInfo_var;
extern MethodInfo* List_1_Add_m927_MethodInfo_var;
extern MethodInfo* Object_Instantiate_TisMaterial_t75_m935_MethodInfo_var;
extern MethodInfo* List_1_IndexOf_m929_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m930_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m933_MethodInfo_var;
extern "C" void AutoMobileShaderSwitch_OnEnable_m280 (AutoMobileShaderSwitch_t99 * __this, MethodInfo* method)
{
	static bool AutoMobileShaderSwitch_OnEnable_m280_init;
	if (!AutoMobileShaderSwitch_OnEnable_m280_init)
	{
		List_1_t214_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t214_0_0_0);
		ObjectU5BU5D_t194_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t194_0_0_0);
		StringU5BU5D_t215_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t215_0_0_0);
		Object_FindObjectsOfType_TisRenderer_t156_m934_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_FindObjectsOfType_TisRenderer_t156_m934_GenericMethod);
		List_1__ctor_m923_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m923_GenericMethod);
		List_1_Contains_m926_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m926_GenericMethod);
		List_1_Add_m927_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m927_GenericMethod);
		Object_Instantiate_TisMaterial_t75_m935_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_Instantiate_TisMaterial_t75_m935_GenericMethod);
		List_1_IndexOf_m929_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_IndexOf_m929_GenericMethod);
		List_1_get_Item_m930_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m930_GenericMethod);
		List_1_get_Count_m933_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m933_GenericMethod);
		AutoMobileShaderSwitch_OnEnable_m280_init = true;
	}
	RendererU5BU5D_t195* V_0 = {0};
	List_1_t214 * V_1 = {0};
	List_1_t214 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReplacementDefinition_t96 * V_5 = {0};
	ReplacementDefinitionU5BU5D_t97* V_6 = {0};
	int32_t V_7 = 0;
	Renderer_t156 * V_8 = {0};
	RendererU5BU5D_t195* V_9 = {0};
	int32_t V_10 = 0;
	MaterialU5BU5D_t216* V_11 = {0};
	int32_t V_12 = 0;
	Material_t75 * V_13 = {0};
	Material_t75 * V_14 = {0};
	int32_t V_15 = 0;
	{
		RendererU5BU5D_t195* L_0 = Object_FindObjectsOfType_TisRenderer_t156_m934(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisRenderer_t156_m934_MethodInfo_var);
		V_0 = L_0;
		RendererU5BU5D_t195* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)(((Array_t *)L_1)->max_length)));
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m897(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral45, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_4, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t214_il2cpp_TypeInfo_var);
		List_1_t214 * L_5 = (List_1_t214 *)il2cpp_codegen_object_new (List_1_t214_il2cpp_TypeInfo_var);
		List_1__ctor_m923(L_5, /*hidden argument*/List_1__ctor_m923_MethodInfo_var);
		V_1 = L_5;
		List_1_t214 * L_6 = (List_1_t214 *)il2cpp_codegen_object_new (List_1_t214_il2cpp_TypeInfo_var);
		List_1__ctor_m923(L_6, /*hidden argument*/List_1__ctor_m923_MethodInfo_var);
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
		ReplacementList_t98 * L_7 = (__this->___m_ReplacementList_2);
		NullCheck(L_7);
		ReplacementDefinitionU5BU5D_t97* L_8 = (L_7->___items_0);
		V_6 = L_8;
		V_7 = 0;
		goto IL_0180;
	}

IL_0043:
	{
		ReplacementDefinitionU5BU5D_t97* L_9 = V_6;
		int32_t L_10 = V_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_5 = (*(ReplacementDefinition_t96 **)(ReplacementDefinition_t96 **)SZArrayLdElema(L_9, L_11));
		RendererU5BU5D_t195* L_12 = V_0;
		V_9 = L_12;
		V_10 = 0;
		goto IL_016f;
	}

IL_0055:
	{
		RendererU5BU5D_t195* L_13 = V_9;
		int32_t L_14 = V_10;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Renderer_t156 **)(Renderer_t156 **)SZArrayLdElema(L_13, L_15));
		V_11 = (MaterialU5BU5D_t216*)NULL;
		V_12 = 0;
		goto IL_0149;
	}

IL_0067:
	{
		Renderer_t156 * L_16 = V_8;
		NullCheck(L_16);
		MaterialU5BU5D_t216* L_17 = Renderer_get_sharedMaterials_m924(L_16, /*hidden argument*/&Renderer_get_sharedMaterials_m924_MethodInfo);
		int32_t L_18 = V_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_13 = (*(Material_t75 **)(Material_t75 **)SZArrayLdElema(L_17, L_19));
		Material_t75 * L_20 = V_13;
		NullCheck(L_20);
		Shader_t95 * L_21 = Material_get_shader_m911(L_20, /*hidden argument*/&Material_get_shader_m911_MethodInfo);
		ReplacementDefinition_t96 * L_22 = V_5;
		NullCheck(L_22);
		Shader_t95 * L_23 = (L_22->___original_0);
		bool L_24 = Object_op_Equality_m576(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		MaterialU5BU5D_t216* L_25 = V_11;
		if (L_25)
		{
			goto IL_009b;
		}
	}
	{
		Renderer_t156 * L_26 = V_8;
		NullCheck(L_26);
		MaterialU5BU5D_t216* L_27 = Renderer_get_materials_m925(L_26, /*hidden argument*/&Renderer_get_materials_m925_MethodInfo);
		V_11 = L_27;
	}

IL_009b:
	{
		List_1_t214 * L_28 = V_1;
		Material_t75 * L_29 = V_13;
		NullCheck(L_28);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Material_t75 * >::Invoke(List_1_Contains_m926_MethodInfo_var, L_28, L_29);
		if (L_30)
		{
			goto IL_00d3;
		}
	}
	{
		List_1_t214 * L_31 = V_1;
		Material_t75 * L_32 = V_13;
		NullCheck(L_31);
		VirtActionInvoker1< Material_t75 * >::Invoke(List_1_Add_m927_MethodInfo_var, L_31, L_32);
		Material_t75 * L_33 = V_13;
		Material_t75 * L_34 = Object_Instantiate_TisMaterial_t75_m935(NULL /*static, unused*/, L_33, /*hidden argument*/Object_Instantiate_TisMaterial_t75_m935_MethodInfo_var);
		V_14 = L_34;
		Material_t75 * L_35 = V_14;
		ReplacementDefinition_t96 * L_36 = V_5;
		NullCheck(L_36);
		Shader_t95 * L_37 = (L_36->___replacement_1);
		NullCheck(L_35);
		Material_set_shader_m928(L_35, L_37, /*hidden argument*/&Material_set_shader_m928_MethodInfo);
		List_1_t214 * L_38 = V_2;
		Material_t75 * L_39 = V_14;
		NullCheck(L_38);
		VirtActionInvoker1< Material_t75 * >::Invoke(List_1_Add_m927_MethodInfo_var, L_38, L_39);
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d3:
	{
		ObjectU5BU5D_t194* L_41 = ((ObjectU5BU5D_t194*)SZArrayNew(ObjectU5BU5D_t194_il2cpp_TypeInfo_var, 6));
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		ArrayElementTypeCheck (L_41, (String_t*) &_stringLiteral46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 0)) = (Object_t *)(String_t*) &_stringLiteral46;
		ObjectU5BU5D_t194* L_42 = L_41;
		Renderer_t156 * L_43 = V_8;
		NullCheck(L_43);
		GameObject_t92 * L_44 = Component_get_gameObject_m577(L_43, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_m820(L_44, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t194* L_46 = L_42;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, (String_t*) &_stringLiteral47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)(String_t*) &_stringLiteral47;
		ObjectU5BU5D_t194* L_47 = L_46;
		int32_t L_48 = V_12;
		int32_t L_49 = L_48;
		Object_t * L_50 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_49);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 3);
		ArrayElementTypeCheck (L_47, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 3)) = (Object_t *)L_50;
		ObjectU5BU5D_t194* L_51 = L_47;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 4);
		ArrayElementTypeCheck (L_51, (String_t*) &_stringLiteral48);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, 4)) = (Object_t *)(String_t*) &_stringLiteral48;
		ObjectU5BU5D_t194* L_52 = L_51;
		List_1_t214 * L_53 = V_2;
		List_1_t214 * L_54 = V_1;
		Material_t75 * L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56 = (int32_t)VirtFuncInvoker1< int32_t, Material_t75 * >::Invoke(List_1_IndexOf_m929_MethodInfo_var, L_54, L_55);
		NullCheck(L_53);
		Material_t75 * L_57 = (Material_t75 *)VirtFuncInvoker1< Material_t75 *, int32_t >::Invoke(List_1_get_Item_m930_MethodInfo_var, L_53, L_56);
		NullCheck(L_57);
		String_t* L_58 = Object_get_name_m820(L_57, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 5);
		ArrayElementTypeCheck (L_52, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 5)) = (Object_t *)L_58;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_59 = String_Concat_m901(NULL /*static, unused*/, L_52, /*hidden argument*/&String_Concat_m901_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_59, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		MaterialU5BU5D_t216* L_60 = V_11;
		int32_t L_61 = V_12;
		List_1_t214 * L_62 = V_2;
		List_1_t214 * L_63 = V_1;
		Material_t75 * L_64 = V_13;
		NullCheck(L_63);
		int32_t L_65 = (int32_t)VirtFuncInvoker1< int32_t, Material_t75 * >::Invoke(List_1_IndexOf_m929_MethodInfo_var, L_63, L_64);
		NullCheck(L_62);
		Material_t75 * L_66 = (Material_t75 *)VirtFuncInvoker1< Material_t75 *, int32_t >::Invoke(List_1_get_Item_m930_MethodInfo_var, L_62, L_65);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		ArrayElementTypeCheck (L_60, L_66);
		*((Material_t75 **)(Material_t75 **)SZArrayLdElema(L_60, L_61)) = (Material_t75 *)L_66;
		int32_t L_67 = V_4;
		V_4 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_0143:
	{
		int32_t L_68 = V_12;
		V_12 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_0149:
	{
		int32_t L_69 = V_12;
		Renderer_t156 * L_70 = V_8;
		NullCheck(L_70);
		MaterialU5BU5D_t216* L_71 = Renderer_get_sharedMaterials_m924(L_70, /*hidden argument*/&Renderer_get_sharedMaterials_m924_MethodInfo);
		NullCheck(L_71);
		if ((((int32_t)L_69) < ((int32_t)(((int32_t)(((Array_t *)L_71)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		MaterialU5BU5D_t216* L_72 = V_11;
		if (!L_72)
		{
			goto IL_0169;
		}
	}
	{
		Renderer_t156 * L_73 = V_8;
		MaterialU5BU5D_t216* L_74 = V_11;
		NullCheck(L_73);
		Renderer_set_materials_m931(L_73, L_74, /*hidden argument*/&Renderer_set_materials_m931_MethodInfo);
	}

IL_0169:
	{
		int32_t L_75 = V_10;
		V_10 = ((int32_t)((int32_t)L_75+(int32_t)1));
	}

IL_016f:
	{
		int32_t L_76 = V_10;
		RendererU5BU5D_t195* L_77 = V_9;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)(((int32_t)(((Array_t *)L_77)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_78 = V_7;
		V_7 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_0180:
	{
		int32_t L_79 = V_7;
		ReplacementDefinitionU5BU5D_t97* L_80 = V_6;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)(((Array_t *)L_80)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_81 = V_4;
		int32_t L_82 = L_81;
		Object_t * L_83 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_82);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_84 = String_Concat_m897(NULL /*static, unused*/, L_83, (String_t*) &_stringLiteral49, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_84, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		int32_t L_85 = V_3;
		int32_t L_86 = L_85;
		Object_t * L_87 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_86);
		String_t* L_88 = String_Concat_m897(NULL /*static, unused*/, L_87, (String_t*) &_stringLiteral50, /*hidden argument*/&String_Concat_m897_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_88, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		V_15 = 0;
		goto IL_023e;
	}

IL_01be:
	{
		StringU5BU5D_t215* L_89 = ((StringU5BU5D_t215*)SZArrayNew(StringU5BU5D_t215_il2cpp_TypeInfo_var, 8));
		List_1_t214 * L_90 = V_1;
		int32_t L_91 = V_15;
		NullCheck(L_90);
		Material_t75 * L_92 = (Material_t75 *)VirtFuncInvoker1< Material_t75 *, int32_t >::Invoke(List_1_get_Item_m930_MethodInfo_var, L_90, L_91);
		NullCheck(L_92);
		String_t* L_93 = Object_get_name_m820(L_92, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 0);
		ArrayElementTypeCheck (L_89, L_93);
		*((String_t**)(String_t**)SZArrayLdElema(L_89, 0)) = (String_t*)L_93;
		StringU5BU5D_t215* L_94 = L_89;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 1);
		ArrayElementTypeCheck (L_94, (String_t*) &_stringLiteral51);
		*((String_t**)(String_t**)SZArrayLdElema(L_94, 1)) = (String_t*)(String_t*) &_stringLiteral51;
		StringU5BU5D_t215* L_95 = L_94;
		List_1_t214 * L_96 = V_1;
		int32_t L_97 = V_15;
		NullCheck(L_96);
		Material_t75 * L_98 = (Material_t75 *)VirtFuncInvoker1< Material_t75 *, int32_t >::Invoke(List_1_get_Item_m930_MethodInfo_var, L_96, L_97);
		NullCheck(L_98);
		Shader_t95 * L_99 = Material_get_shader_m911(L_98, /*hidden argument*/&Material_get_shader_m911_MethodInfo);
		NullCheck(L_99);
		String_t* L_100 = Object_get_name_m820(L_99, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, 2);
		ArrayElementTypeCheck (L_95, L_100);
		*((String_t**)(String_t**)SZArrayLdElema(L_95, 2)) = (String_t*)L_100;
		StringU5BU5D_t215* L_101 = L_95;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, 3);
		ArrayElementTypeCheck (L_101, (String_t*) &_stringLiteral52);
		*((String_t**)(String_t**)SZArrayLdElema(L_101, 3)) = (String_t*)(String_t*) &_stringLiteral52;
		StringU5BU5D_t215* L_102 = L_101;
		List_1_t214 * L_103 = V_2;
		int32_t L_104 = V_15;
		NullCheck(L_103);
		Material_t75 * L_105 = (Material_t75 *)VirtFuncInvoker1< Material_t75 *, int32_t >::Invoke(List_1_get_Item_m930_MethodInfo_var, L_103, L_104);
		NullCheck(L_105);
		String_t* L_106 = Object_get_name_m820(L_105, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 4);
		ArrayElementTypeCheck (L_102, L_106);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 4)) = (String_t*)L_106;
		StringU5BU5D_t215* L_107 = L_102;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 5);
		ArrayElementTypeCheck (L_107, (String_t*) &_stringLiteral51);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 5)) = (String_t*)(String_t*) &_stringLiteral51;
		StringU5BU5D_t215* L_108 = L_107;
		List_1_t214 * L_109 = V_2;
		int32_t L_110 = V_15;
		NullCheck(L_109);
		Material_t75 * L_111 = (Material_t75 *)VirtFuncInvoker1< Material_t75 *, int32_t >::Invoke(List_1_get_Item_m930_MethodInfo_var, L_109, L_110);
		NullCheck(L_111);
		Shader_t95 * L_112 = Material_get_shader_m911(L_111, /*hidden argument*/&Material_get_shader_m911_MethodInfo);
		NullCheck(L_112);
		String_t* L_113 = Object_get_name_m820(L_112, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 6);
		ArrayElementTypeCheck (L_108, L_113);
		*((String_t**)(String_t**)SZArrayLdElema(L_108, 6)) = (String_t*)L_113;
		StringU5BU5D_t215* L_114 = L_108;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, 7);
		ArrayElementTypeCheck (L_114, (String_t*) &_stringLiteral53);
		*((String_t**)(String_t**)SZArrayLdElema(L_114, 7)) = (String_t*)(String_t*) &_stringLiteral53;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_115 = String_Concat_m932(NULL /*static, unused*/, L_114, /*hidden argument*/&String_Concat_m932_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_115, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		int32_t L_116 = V_15;
		V_15 = ((int32_t)((int32_t)L_116+(int32_t)1));
	}

IL_023e:
	{
		int32_t L_117 = V_15;
		List_1_t214 * L_118 = V_1;
		NullCheck(L_118);
		int32_t L_119 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m933_MethodInfo_var, L_118);
		if ((((int32_t)L_117) < ((int32_t)L_119)))
		{
			goto IL_01be;
		}
	}
	{
		return;
	}
}
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Vector3andSpace_t100_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_2MethodDeclarations.h"

// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"


// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
extern MethodInfo Vector3andSpace__ctor_m281_MethodInfo;
extern "C" void Vector3andSpace__ctor_m281 (Vector3andSpace_t100 * __this, MethodInfo* method)
{
	{
		__this->___space_1 = 1;
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.AutoMoveAndRotate
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AutoMoveAndRotate_t101_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.AutoMoveAndRotate
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Au_3MethodDeclarations.h"

extern MethodInfo Time_get_realtimeSinceStartup_m936_MethodInfo;
extern MethodInfo Transform_Translate_m937_MethodInfo;
extern MethodInfo Transform_Rotate_m938_MethodInfo;


// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
extern MethodInfo AutoMoveAndRotate__ctor_m282_MethodInfo;
extern "C" void AutoMoveAndRotate__ctor_m282 (AutoMoveAndRotate_t101 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
extern MethodInfo AutoMoveAndRotate_Start_m283_MethodInfo;
extern "C" void AutoMoveAndRotate_Start_m283 (AutoMoveAndRotate_t101 * __this, MethodInfo* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m936(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m936_MethodInfo);
		__this->___m_LastRealTime_5 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Update()
extern MethodInfo AutoMoveAndRotate_Update_m284_MethodInfo;
extern "C" void AutoMoveAndRotate_Update_m284 (AutoMoveAndRotate_t101 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		V_0 = L_0;
		bool L_1 = (__this->___ignoreTimescale_4);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_m936(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m936_MethodInfo);
		float L_3 = (__this->___m_LastRealTime_5);
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = Time_get_realtimeSinceStartup_m936(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m936_MethodInfo);
		__this->___m_LastRealTime_5 = L_4;
	}

IL_0029:
	{
		Transform_t2 * L_5 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3andSpace_t100 * L_6 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_6);
		Vector3_t8  L_7 = (L_6->___value_0);
		float L_8 = V_0;
		Vector3_t8  L_9 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3andSpace_t100 * L_10 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_10);
		int32_t L_11 = (L_10->___space_1);
		NullCheck(L_5);
		Transform_Translate_m937(L_5, L_9, L_11, /*hidden argument*/&Transform_Translate_m937_MethodInfo);
		Transform_t2 * L_12 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3andSpace_t100 * L_13 = (__this->___rotateDegreesPerSecond_3);
		NullCheck(L_13);
		Vector3_t8  L_14 = (L_13->___value_0);
		float L_15 = V_0;
		Vector3_t8  L_16 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3andSpace_t100 * L_17 = (__this->___moveUnitsPerSecond_2);
		NullCheck(L_17);
		int32_t L_18 = (L_17->___space_1);
		NullCheck(L_12);
		Transform_Rotate_m938(L_12, L_16, L_18, /*hidden argument*/&Transform_Rotate_m938_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.CameraRefocus
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ca.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraRefocus_t102_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.CameraRefocus
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_CaMethodDeclarations.h"

extern MethodInfo Transform_LookAt_m939_MethodInfo;


// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern MethodInfo CameraRefocus__ctor_m285_MethodInfo;
extern "C" void CameraRefocus__ctor_m285 (CameraRefocus_t102 * __this, Camera_t19 * ___camera, Transform_t2 * ___parent, Vector3_t8  ___origCameraPos, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		Vector3_t8  L_0 = ___origCameraPos;
		__this->___m_OrigCameraPos_3 = L_0;
		Camera_t19 * L_1 = ___camera;
		__this->___Camera_0 = L_1;
		Transform_t2 * L_2 = ___parent;
		__this->___Parent_2 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern MethodInfo CameraRefocus_ChangeCamera_m286_MethodInfo;
extern "C" void CameraRefocus_ChangeCamera_m286 (CameraRefocus_t102 * __this, Camera_t19 * ___camera, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___camera;
		__this->___Camera_0 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern MethodInfo CameraRefocus_ChangeParent_m287_MethodInfo;
extern "C" void CameraRefocus_ChangeParent_m287 (CameraRefocus_t102 * __this, Transform_t2 * ___parent, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___parent;
		__this->___Parent_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern MethodInfo CameraRefocus_GetFocusPoint_m288_MethodInfo;
extern "C" void CameraRefocus_GetFocusPoint_m288 (CameraRefocus_t102 * __this, MethodInfo* method)
{
	RaycastHit_t16  V_0 = {0};
	{
		Transform_t2 * L_0 = (__this->___Parent_2);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m598(L_0, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m599(L_1, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_3 = (__this->___m_OrigCameraPos_3);
		Vector3_t8  L_4 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Transform_t2 * L_5 = (__this->___Parent_2);
		NullCheck(L_5);
		Transform_t2 * L_6 = Component_get_transform_m598(L_5, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_6);
		Vector3_t8  L_7 = Transform_get_forward_m587(L_6, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		bool L_8 = Physics_Raycast_m746(NULL /*static, unused*/, L_4, L_7, (&V_0), (100.0f), /*hidden argument*/&Physics_Raycast_m746_MethodInfo);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t8  L_9 = RaycastHit_get_point_m648((&V_0), /*hidden argument*/&RaycastHit_get_point_m648_MethodInfo);
		__this->___Lookatpoint_1 = L_9;
		__this->___m_Refocus_4 = 1;
		return;
	}

IL_0051:
	{
		__this->___m_Refocus_4 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern MethodInfo CameraRefocus_SetFocusPoint_m289_MethodInfo;
extern "C" void CameraRefocus_SetFocusPoint_m289 (CameraRefocus_t102 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Refocus_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t19 * L_1 = (__this->___Camera_0);
		NullCheck(L_1);
		Transform_t2 * L_2 = Component_get_transform_m598(L_1, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_3 = (__this->___Lookatpoint_1);
		NullCheck(L_2);
		Transform_LookAt_m939(L_2, L_3, /*hidden argument*/&Transform_LookAt_m939_MethodInfo);
	}

IL_0021:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo AnimationCurve_get_length_m940_MethodInfo;
extern MethodInfo AnimationCurve_get_Item_m941_MethodInfo;
extern MethodInfo Keyframe_get_time_m942_MethodInfo;


// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern TypeInfo* KeyframeU5BU5D_t196_il2cpp_TypeInfo_var;
extern "C" void CurveControlledBob__ctor_m290 (CurveControlledBob_t23 * __this, MethodInfo* method)
{
	static bool CurveControlledBob__ctor_m290_init;
	if (!CurveControlledBob__ctor_m290_init)
	{
		KeyframeU5BU5D_t196_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&KeyframeU5BU5D_t196_0_0_0);
		CurveControlledBob__ctor_m290_init = true;
	}
	{
		__this->___HorizontalBobRange_0 = (0.33f);
		__this->___VerticalBobRange_1 = (0.33f);
		KeyframeU5BU5D_t196* L_0 = ((KeyframeU5BU5D_t196*)SZArrayNew(KeyframeU5BU5D_t196_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t197  L_1 = {0};
		Keyframe__ctor_m694(&L_1, (0.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_0, 0)) = L_1;
		KeyframeU5BU5D_t196* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t197  L_3 = {0};
		Keyframe__ctor_m694(&L_3, (0.5f), (1.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_2, 1)) = L_3;
		KeyframeU5BU5D_t196* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Keyframe_t197  L_5 = {0};
		Keyframe__ctor_m694(&L_5, (1.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_4, 2)) = L_5;
		KeyframeU5BU5D_t196* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		Keyframe_t197  L_7 = {0};
		Keyframe__ctor_m694(&L_7, (1.5f), (-1.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_6, 3)) = L_7;
		KeyframeU5BU5D_t196* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		Keyframe_t197  L_9 = {0};
		Keyframe__ctor_m694(&L_9, (2.0f), (0.0f), /*hidden argument*/&Keyframe__ctor_m694_MethodInfo);
		*((Keyframe_t197 *)(Keyframe_t197 *)SZArrayLdElema(L_8, 4)) = L_9;
		AnimationCurve_t33 * L_10 = (AnimationCurve_t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnimationCurve_t33_il2cpp_TypeInfo));
		AnimationCurve__ctor_m695(L_10, L_8, /*hidden argument*/&AnimationCurve__ctor_m695_MethodInfo);
		__this->___Bobcurve_2 = L_10;
		__this->___VerticaltoHorizontalRatio_3 = (1.0f);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C" void CurveControlledBob_Setup_m291 (CurveControlledBob_t23 * __this, Camera_t19 * ___camera, float ___bobBaseInterval, MethodInfo* method)
{
	Keyframe_t197  V_0 = {0};
	{
		float L_0 = ___bobBaseInterval;
		__this->___m_BobBaseInterval_6 = L_0;
		Camera_t19 * L_1 = ___camera;
		NullCheck(L_1);
		Transform_t2 * L_2 = Component_get_transform_m598(L_1, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_localPosition_m632(L_2, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_OriginalCameraPosition_7 = L_3;
		AnimationCurve_t33 * L_4 = (__this->___Bobcurve_2);
		AnimationCurve_t33 * L_5 = (__this->___Bobcurve_2);
		NullCheck(L_5);
		int32_t L_6 = AnimationCurve_get_length_m940(L_5, /*hidden argument*/&AnimationCurve_get_length_m940_MethodInfo);
		NullCheck(L_4);
		Keyframe_t197  L_7 = AnimationCurve_get_Item_m941(L_4, ((int32_t)((int32_t)L_6-(int32_t)1)), /*hidden argument*/&AnimationCurve_get_Item_m941_MethodInfo);
		V_0 = L_7;
		float L_8 = Keyframe_get_time_m942((&V_0), /*hidden argument*/&Keyframe_get_time_m942_MethodInfo);
		__this->___m_Time_8 = L_8;
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C" Vector3_t8  CurveControlledBob_DoHeadBob_m292 (CurveControlledBob_t23 * __this, float ___speed, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t8 * L_0 = &(__this->___m_OriginalCameraPosition_7);
		float L_1 = (L_0->___x_1);
		AnimationCurve_t33 * L_2 = (__this->___Bobcurve_2);
		float L_3 = (__this->___m_CyclePositionX_4);
		NullCheck(L_2);
		float L_4 = AnimationCurve_Evaluate_m704(L_2, L_3, /*hidden argument*/&AnimationCurve_Evaluate_m704_MethodInfo);
		float L_5 = (__this->___HorizontalBobRange_0);
		V_0 = ((float)((float)L_1+(float)((float)((float)L_4*(float)L_5))));
		Vector3_t8 * L_6 = &(__this->___m_OriginalCameraPosition_7);
		float L_7 = (L_6->___y_2);
		AnimationCurve_t33 * L_8 = (__this->___Bobcurve_2);
		float L_9 = (__this->___m_CyclePositionY_5);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m704(L_8, L_9, /*hidden argument*/&AnimationCurve_Evaluate_m704_MethodInfo);
		float L_11 = (__this->___VerticalBobRange_1);
		V_1 = ((float)((float)L_7+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m_CyclePositionX_4);
		float L_13 = ___speed;
		float L_14 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		float L_15 = (__this->___m_BobBaseInterval_6);
		__this->___m_CyclePositionX_4 = ((float)((float)L_12+(float)((float)((float)((float)((float)L_13*(float)L_14))/(float)L_15))));
		float L_16 = (__this->___m_CyclePositionY_5);
		float L_17 = ___speed;
		float L_18 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		float L_19 = (__this->___m_BobBaseInterval_6);
		float L_20 = (__this->___VerticaltoHorizontalRatio_3);
		__this->___m_CyclePositionY_5 = ((float)((float)L_16+(float)((float)((float)((float)((float)((float)((float)L_17*(float)L_18))/(float)L_19))*(float)L_20))));
		float L_21 = (__this->___m_CyclePositionX_4);
		float L_22 = (__this->___m_Time_8);
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_23 = (__this->___m_CyclePositionX_4);
		float L_24 = (__this->___m_Time_8);
		__this->___m_CyclePositionX_4 = ((float)((float)L_23-(float)L_24));
	}

IL_00ab:
	{
		float L_25 = (__this->___m_CyclePositionY_5);
		float L_26 = (__this->___m_Time_8);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00cf;
		}
	}
	{
		float L_27 = (__this->___m_CyclePositionY_5);
		float L_28 = (__this->___m_Time_8);
		__this->___m_CyclePositionY_5 = ((float)((float)L_27-(float)L_28));
	}

IL_00cf:
	{
		float L_29 = V_0;
		float L_30 = V_1;
		Vector3_t8  L_31 = {0};
		Vector3__ctor_m700(&L_31, L_29, L_30, (0.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		return L_31;
	}
}
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDragObjectU3Ec__Iterator0_t104_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_DrMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityStandardAssets.Utility.DragRigidbody
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr_0.h"
// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJoint.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo DragRigidbody_t103_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
// UnityEngine.Joint
#include "UnityEngine_UnityEngine_JointMethodDeclarations.h"
// UnityStandardAssets.Utility.DragRigidbody
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dr_0MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo Joint_get_connectedBody_m943_MethodInfo;
extern MethodInfo Rigidbody_get_drag_m944_MethodInfo;
extern MethodInfo Rigidbody_get_angularDrag_m945_MethodInfo;
extern MethodInfo Rigidbody_set_angularDrag_m946_MethodInfo;
extern MethodInfo DragRigidbody_FindCamera_m302_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m947_MethodInfo;
extern MethodInfo Ray_GetPoint_m948_MethodInfo;
extern MethodInfo Input_GetMouseButton_m949_MethodInfo;
extern MethodInfo Joint_set_connectedBody_m950_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;


// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::.ctor()
extern MethodInfo U3CDragObjectU3Ec__Iterator0__ctor_m293_MethodInfo;
extern "C" void U3CDragObjectU3Ec__Iterator0__ctor_m293 (U3CDragObjectU3Ec__Iterator0_t104 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m294_MethodInfo;
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m294 (U3CDragObjectU3Ec__Iterator0_t104 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_6);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m295_MethodInfo;
extern "C" Object_t * U3CDragObjectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m295 (U3CDragObjectU3Ec__Iterator0_t104 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_6);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::MoveNext()
extern MethodInfo U3CDragObjectU3Ec__Iterator0_MoveNext_m296_MethodInfo;
extern "C" bool U3CDragObjectU3Ec__Iterator0_MoveNext_m296 (U3CDragObjectU3Ec__Iterator0_t104 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_5);
		V_0 = L_0;
		__this->___$PC_5 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_0163;
	}

IL_0021:
	{
		DragRigidbody_t103 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		SpringJoint_t105 * L_3 = (L_2->___m_SpringJoint_8);
		NullCheck(L_3);
		Rigidbody_t3 * L_4 = Joint_get_connectedBody_m943(L_3, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		NullCheck(L_4);
		float L_5 = Rigidbody_get_drag_m944(L_4, /*hidden argument*/&Rigidbody_get_drag_m944_MethodInfo);
		__this->___U3ColdDragU3E__0_0 = L_5;
		DragRigidbody_t103 * L_6 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_6);
		SpringJoint_t105 * L_7 = (L_6->___m_SpringJoint_8);
		NullCheck(L_7);
		Rigidbody_t3 * L_8 = Joint_get_connectedBody_m943(L_7, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		NullCheck(L_8);
		float L_9 = Rigidbody_get_angularDrag_m945(L_8, /*hidden argument*/&Rigidbody_get_angularDrag_m945_MethodInfo);
		__this->___U3ColdAngularDragU3E__1_1 = L_9;
		DragRigidbody_t103 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		SpringJoint_t105 * L_11 = (L_10->___m_SpringJoint_8);
		NullCheck(L_11);
		Rigidbody_t3 * L_12 = Joint_get_connectedBody_m943(L_11, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		NullCheck(L_12);
		Rigidbody_set_drag_m699(L_12, (10.0f), /*hidden argument*/&Rigidbody_set_drag_m699_MethodInfo);
		DragRigidbody_t103 * L_13 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_13);
		SpringJoint_t105 * L_14 = (L_13->___m_SpringJoint_8);
		NullCheck(L_14);
		Rigidbody_t3 * L_15 = Joint_get_connectedBody_m943(L_14, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		NullCheck(L_15);
		Rigidbody_set_angularDrag_m946(L_15, (5.0f), /*hidden argument*/&Rigidbody_set_angularDrag_m946_MethodInfo);
		DragRigidbody_t103 * L_16 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_16);
		Camera_t19 * L_17 = DragRigidbody_FindCamera_m302(L_16, /*hidden argument*/&DragRigidbody_FindCamera_m302_MethodInfo);
		__this->___U3CmainCameraU3E__2_2 = L_17;
		goto IL_00f0;
	}

IL_00a1:
	{
		Camera_t19 * L_18 = (__this->___U3CmainCameraU3E__2_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_19 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		NullCheck(L_18);
		Ray_t18  L_20 = Camera_ScreenPointToRay_m947(L_18, L_19, /*hidden argument*/&Camera_ScreenPointToRay_m947_MethodInfo);
		__this->___U3CrayU3E__3_3 = L_20;
		DragRigidbody_t103 * L_21 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_21);
		SpringJoint_t105 * L_22 = (L_21->___m_SpringJoint_8);
		NullCheck(L_22);
		Transform_t2 * L_23 = Component_get_transform_m598(L_22, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Ray_t18 * L_24 = &(__this->___U3CrayU3E__3_3);
		float L_25 = (__this->___distance_4);
		Vector3_t8  L_26 = Ray_GetPoint_m948(L_24, L_25, /*hidden argument*/&Ray_GetPoint_m948_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m601(L_23, L_26, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		__this->___$current_6 = NULL;
		__this->___$PC_5 = 1;
		goto IL_0165;
	}

IL_00f0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_27 = Input_GetMouseButton_m949(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m949_MethodInfo);
		if (L_27)
		{
			goto IL_00a1;
		}
	}
	{
		DragRigidbody_t103 * L_28 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_28);
		SpringJoint_t105 * L_29 = (L_28->___m_SpringJoint_8);
		NullCheck(L_29);
		Rigidbody_t3 * L_30 = Joint_get_connectedBody_m943(L_29, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		bool L_31 = Object_op_Implicit_m582(NULL /*static, unused*/, L_30, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_31)
		{
			goto IL_015c;
		}
	}
	{
		DragRigidbody_t103 * L_32 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_32);
		SpringJoint_t105 * L_33 = (L_32->___m_SpringJoint_8);
		NullCheck(L_33);
		Rigidbody_t3 * L_34 = Joint_get_connectedBody_m943(L_33, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		float L_35 = (__this->___U3ColdDragU3E__0_0);
		NullCheck(L_34);
		Rigidbody_set_drag_m699(L_34, L_35, /*hidden argument*/&Rigidbody_set_drag_m699_MethodInfo);
		DragRigidbody_t103 * L_36 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_36);
		SpringJoint_t105 * L_37 = (L_36->___m_SpringJoint_8);
		NullCheck(L_37);
		Rigidbody_t3 * L_38 = Joint_get_connectedBody_m943(L_37, /*hidden argument*/&Joint_get_connectedBody_m943_MethodInfo);
		float L_39 = (__this->___U3ColdAngularDragU3E__1_1);
		NullCheck(L_38);
		Rigidbody_set_angularDrag_m946(L_38, L_39, /*hidden argument*/&Rigidbody_set_angularDrag_m946_MethodInfo);
		DragRigidbody_t103 * L_40 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_40);
		SpringJoint_t105 * L_41 = (L_40->___m_SpringJoint_8);
		NullCheck(L_41);
		Joint_set_connectedBody_m950(L_41, (Rigidbody_t3 *)NULL, /*hidden argument*/&Joint_set_connectedBody_m950_MethodInfo);
	}

IL_015c:
	{
		__this->___$PC_5 = (-1);
	}

IL_0163:
	{
		return 0;
	}

IL_0165:
	{
		return 1;
	}
	// Dead block : IL_0167: ldloc.1
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Dispose()
extern MethodInfo U3CDragObjectU3Ec__Iterator0_Dispose_m297_MethodInfo;
extern "C" void U3CDragObjectU3Ec__Iterator0_Dispose_m297 (U3CDragObjectU3Ec__Iterator0_t104 * __this, MethodInfo* method)
{
	{
		__this->___$PC_5 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::Reset()
extern MethodInfo U3CDragObjectU3Ec__Iterator0_Reset_m298_MethodInfo;
extern "C" void U3CDragObjectU3Ec__Iterator0_Reset_m298 (U3CDragObjectU3Ec__Iterator0_t104 * __this, MethodInfo* method)
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

// UnityEngine.SpringJoint
#include "UnityEngine_UnityEngine_SpringJointMethodDeclarations.h"
extern MethodInfo Input_GetMouseButtonDown_m952_MethodInfo;
extern MethodInfo Ray_get_direction_m953_MethodInfo;
extern MethodInfo Physics_Raycast_m954_MethodInfo;
extern MethodInfo RaycastHit_get_rigidbody_m955_MethodInfo;
extern MethodInfo GameObject__ctor_m956_MethodInfo;
extern MethodInfo Rigidbody_set_isKinematic_m957_MethodInfo;
extern MethodInfo Joint_set_anchor_m958_MethodInfo;
extern MethodInfo SpringJoint_set_spring_m959_MethodInfo;
extern MethodInfo SpringJoint_set_damper_m960_MethodInfo;
extern MethodInfo SpringJoint_set_maxDistance_m961_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m962_MethodInfo;
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
extern "C" Rigidbody_t3 * GameObject_AddComponent_TisRigidbody_t3_m963 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
extern "C" SpringJoint_t105 * GameObject_AddComponent_TisSpringJoint_t105_m964 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Component_t185;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t19_m965(__this, method) (( Camera_t19 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_AddComponent_TisRigidbody_t3_m963_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisSpringJoint_t105_m964_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCamera_t19_m965_GenericMethod;


// System.Void UnityStandardAssets.Utility.DragRigidbody::.ctor()
extern MethodInfo DragRigidbody__ctor_m299_MethodInfo;
extern "C" void DragRigidbody__ctor_m299 (DragRigidbody_t103 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody::Update()
extern MethodInfo DragRigidbody_Update_m300_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisRigidbody_t3_m963_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisSpringJoint_t105_m964_MethodInfo_var;
extern "C" void DragRigidbody_Update_m300 (DragRigidbody_t103 * __this, MethodInfo* method)
{
	static bool DragRigidbody_Update_m300_init;
	if (!DragRigidbody_Update_m300_init)
	{
		GameObject_AddComponent_TisRigidbody_t3_m963_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisRigidbody_t3_m963_GenericMethod);
		GameObject_AddComponent_TisSpringJoint_t105_m964_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisSpringJoint_t105_m964_GenericMethod);
		DragRigidbody_Update_m300_init = true;
	}
	Camera_t19 * V_0 = {0};
	RaycastHit_t16  V_1 = {0};
	GameObject_t92 * V_2 = {0};
	Rigidbody_t3 * V_3 = {0};
	Ray_t18  V_4 = {0};
	Ray_t18  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m952(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m952_MethodInfo);
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
		Camera_t19 * L_1 = DragRigidbody_FindCamera_m302(__this, /*hidden argument*/&DragRigidbody_FindCamera_m302_MethodInfo);
		V_0 = L_1;
		Initobj (InitializedTypeInfo(&RaycastHit_t16_il2cpp_TypeInfo), (&V_1));
		Camera_t19 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_3 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		NullCheck(L_2);
		Ray_t18  L_4 = Camera_ScreenPointToRay_m947(L_2, L_3, /*hidden argument*/&Camera_ScreenPointToRay_m947_MethodInfo);
		V_4 = L_4;
		Vector3_t8  L_5 = Ray_get_origin_m638((&V_4), /*hidden argument*/&Ray_get_origin_m638_MethodInfo);
		Camera_t19 * L_6 = V_0;
		Vector3_t8  L_7 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		NullCheck(L_6);
		Ray_t18  L_8 = Camera_ScreenPointToRay_m947(L_6, L_7, /*hidden argument*/&Camera_ScreenPointToRay_m947_MethodInfo);
		V_5 = L_8;
		Vector3_t8  L_9 = Ray_get_direction_m953((&V_5), /*hidden argument*/&Ray_get_direction_m953_MethodInfo);
		bool L_10 = Physics_Raycast_m954(NULL /*static, unused*/, L_5, L_9, (&V_1), (100.0f), ((int32_t)-5), /*hidden argument*/&Physics_Raycast_m954_MethodInfo);
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		Rigidbody_t3 * L_11 = RaycastHit_get_rigidbody_m955((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m955_MethodInfo);
		bool L_12 = Object_op_Implicit_m582(NULL /*static, unused*/, L_11, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		Rigidbody_t3 * L_13 = RaycastHit_get_rigidbody_m955((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m955_MethodInfo);
		NullCheck(L_13);
		bool L_14 = Rigidbody_get_isKinematic_m687(L_13, /*hidden argument*/&Rigidbody_get_isKinematic_m687_MethodInfo);
		if (!L_14)
		{
			goto IL_007a;
		}
	}

IL_0079:
	{
		return;
	}

IL_007a:
	{
		SpringJoint_t105 * L_15 = (__this->___m_SpringJoint_8);
		bool L_16 = Object_op_Implicit_m582(NULL /*static, unused*/, L_15, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_16)
		{
			goto IL_00af;
		}
	}
	{
		GameObject_t92 * L_17 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m956(L_17, (String_t*) &_stringLiteral54, /*hidden argument*/&GameObject__ctor_m956_MethodInfo);
		V_2 = L_17;
		GameObject_t92 * L_18 = V_2;
		NullCheck(L_18);
		Rigidbody_t3 * L_19 = GameObject_AddComponent_TisRigidbody_t3_m963(L_18, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t3_m963_MethodInfo_var);
		V_3 = L_19;
		GameObject_t92 * L_20 = V_2;
		NullCheck(L_20);
		SpringJoint_t105 * L_21 = GameObject_AddComponent_TisSpringJoint_t105_m964(L_20, /*hidden argument*/GameObject_AddComponent_TisSpringJoint_t105_m964_MethodInfo_var);
		__this->___m_SpringJoint_8 = L_21;
		Rigidbody_t3 * L_22 = V_3;
		NullCheck(L_22);
		Rigidbody_set_isKinematic_m957(L_22, 1, /*hidden argument*/&Rigidbody_set_isKinematic_m957_MethodInfo);
	}

IL_00af:
	{
		SpringJoint_t105 * L_23 = (__this->___m_SpringJoint_8);
		NullCheck(L_23);
		Transform_t2 * L_24 = Component_get_transform_m598(L_23, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_25 = RaycastHit_get_point_m648((&V_1), /*hidden argument*/&RaycastHit_get_point_m648_MethodInfo);
		NullCheck(L_24);
		Transform_set_position_m601(L_24, L_25, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		SpringJoint_t105 * L_26 = (__this->___m_SpringJoint_8);
		Vector3_t8  L_27 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		NullCheck(L_26);
		Joint_set_anchor_m958(L_26, L_27, /*hidden argument*/&Joint_set_anchor_m958_MethodInfo);
		SpringJoint_t105 * L_28 = (__this->___m_SpringJoint_8);
		NullCheck(L_28);
		SpringJoint_set_spring_m959(L_28, (50.0f), /*hidden argument*/&SpringJoint_set_spring_m959_MethodInfo);
		SpringJoint_t105 * L_29 = (__this->___m_SpringJoint_8);
		NullCheck(L_29);
		SpringJoint_set_damper_m960(L_29, (5.0f), /*hidden argument*/&SpringJoint_set_damper_m960_MethodInfo);
		SpringJoint_t105 * L_30 = (__this->___m_SpringJoint_8);
		NullCheck(L_30);
		SpringJoint_set_maxDistance_m961(L_30, (0.2f), /*hidden argument*/&SpringJoint_set_maxDistance_m961_MethodInfo);
		SpringJoint_t105 * L_31 = (__this->___m_SpringJoint_8);
		Rigidbody_t3 * L_32 = RaycastHit_get_rigidbody_m955((&V_1), /*hidden argument*/&RaycastHit_get_rigidbody_m955_MethodInfo);
		NullCheck(L_31);
		Joint_set_connectedBody_m950(L_31, L_32, /*hidden argument*/&Joint_set_connectedBody_m950_MethodInfo);
		float L_33 = RaycastHit_get_distance_m630((&V_1), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		float L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Single_t184_il2cpp_TypeInfo), &L_34);
		MonoBehaviour_StartCoroutine_m962(__this, (String_t*) &_stringLiteral55, L_35, /*hidden argument*/&MonoBehaviour_StartCoroutine_m962_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.DragRigidbody::DragObject(System.Single)
extern MethodInfo DragRigidbody_DragObject_m301_MethodInfo;
extern "C" Object_t * DragRigidbody_DragObject_m301 (DragRigidbody_t103 * __this, float ___distance, MethodInfo* method)
{
	U3CDragObjectU3Ec__Iterator0_t104 * V_0 = {0};
	{
		U3CDragObjectU3Ec__Iterator0_t104 * L_0 = (U3CDragObjectU3Ec__Iterator0_t104 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDragObjectU3Ec__Iterator0_t104_il2cpp_TypeInfo));
		U3CDragObjectU3Ec__Iterator0__ctor_m293(L_0, /*hidden argument*/&U3CDragObjectU3Ec__Iterator0__ctor_m293_MethodInfo);
		V_0 = L_0;
		U3CDragObjectU3Ec__Iterator0_t104 * L_1 = V_0;
		float L_2 = ___distance;
		NullCheck(L_1);
		L_1->___distance_4 = L_2;
		U3CDragObjectU3Ec__Iterator0_t104 * L_3 = V_0;
		float L_4 = ___distance;
		NullCheck(L_3);
		L_3->___U3C$U3Edistance_7 = L_4;
		U3CDragObjectU3Ec__Iterator0_t104 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_8 = __this;
		U3CDragObjectU3Ec__Iterator0_t104 * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
extern MethodInfo* Component_GetComponent_TisCamera_t19_m965_MethodInfo_var;
extern "C" Camera_t19 * DragRigidbody_FindCamera_m302 (DragRigidbody_t103 * __this, MethodInfo* method)
{
	static bool DragRigidbody_FindCamera_m302_init;
	if (!DragRigidbody_FindCamera_m302_init)
	{
		Component_GetComponent_TisCamera_t19_m965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t19_m965_GenericMethod);
		DragRigidbody_FindCamera_m302_init = true;
	}
	{
		Camera_t19 * L_0 = Component_GetComponent_TisCamera_t19_m965(__this, /*hidden argument*/Component_GetComponent_TisCamera_t19_m965_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Camera_t19 * L_2 = Component_GetComponent_TisCamera_t19_m965(__this, /*hidden argument*/Component_GetComponent_TisCamera_t19_m965_MethodInfo_var);
		return L_2;
	}

IL_0017:
	{
		Camera_t19 * L_3 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		return L_3;
	}
}
// UnityStandardAssets.Utility.DynamicShadowSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Dy.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DynamicShadowSettings_t108_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.DynamicShadowSettings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_DyMethodDeclarations.h"

// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
extern MethodInfo Light_get_shadowStrength_m966_MethodInfo;
extern MethodInfo Physics_Raycast_m967_MethodInfo;
extern MethodInfo QualitySettings_set_shadowDistance_m968_MethodInfo;
extern MethodInfo Light_set_shadowBias_m969_MethodInfo;
extern MethodInfo Light_set_shadowStrength_m970_MethodInfo;


// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::.ctor()
extern MethodInfo DynamicShadowSettings__ctor_m303_MethodInfo;
extern "C" void DynamicShadowSettings__ctor_m303 (DynamicShadowSettings_t108 * __this, MethodInfo* method)
{
	{
		__this->___minHeight_3 = (10.0f);
		__this->___minShadowDistance_4 = (80.0f);
		__this->___minShadowBias_5 = (1.0f);
		__this->___maxHeight_6 = (1000.0f);
		__this->___maxShadowDistance_7 = (10000.0f);
		__this->___maxShadowBias_8 = (0.1f);
		__this->___adaptTime_9 = (1.0f);
		__this->___m_OriginalStrength_12 = (1.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Start()
extern MethodInfo DynamicShadowSettings_Start_m304_MethodInfo;
extern "C" void DynamicShadowSettings_Start_m304 (DynamicShadowSettings_t108 * __this, MethodInfo* method)
{
	{
		Light_t107 * L_0 = (__this->___sunLight_2);
		NullCheck(L_0);
		float L_1 = Light_get_shadowStrength_m966(L_0, /*hidden argument*/&Light_get_shadowStrength_m966_MethodInfo);
		__this->___m_OriginalStrength_12 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DynamicShadowSettings::Update()
extern MethodInfo DynamicShadowSettings_Update_m305_MethodInfo;
extern "C" void DynamicShadowSettings_Update_m305 (DynamicShadowSettings_t108 * __this, MethodInfo* method)
{
	Ray_t18  V_0 = {0};
	RaycastHit_t16  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t8  V_4 = {0};
	{
		Camera_t19 * L_0 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m598(L_0, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m599(L_1, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_3 = Vector3_get_up_m586(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m586_MethodInfo);
		Vector3_t8  L_4 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		Ray__ctor_m734((&V_0), L_2, L_4, /*hidden argument*/&Ray__ctor_m734_MethodInfo);
		Transform_t2 * L_5 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_position_m599(L_5, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_4 = L_6;
		float L_7 = ((&V_4)->___y_2);
		V_2 = L_7;
		Ray_t18  L_8 = V_0;
		bool L_9 = Physics_Raycast_m967(NULL /*static, unused*/, L_8, (&V_1), /*hidden argument*/&Physics_Raycast_m967_MethodInfo);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		float L_10 = RaycastHit_get_distance_m630((&V_1), /*hidden argument*/&RaycastHit_get_distance_m630_MethodInfo);
		V_2 = L_10;
	}

IL_004a:
	{
		float L_11 = V_2;
		float L_12 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_13 = fabsf(((float)((float)L_11-(float)L_12)));
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		float L_14 = (__this->___m_SmoothHeight_10);
		float L_15 = V_2;
		float* L_16 = &(__this->___m_ChangeSpeed_11);
		float L_17 = (__this->___adaptTime_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_18 = Mathf_SmoothDamp_m593(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/&Mathf_SmoothDamp_m593_MethodInfo);
		__this->___m_SmoothHeight_10 = L_18;
	}

IL_007f:
	{
		float L_19 = (__this->___minHeight_3);
		float L_20 = (__this->___maxHeight_6);
		float L_21 = (__this->___m_SmoothHeight_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_22 = Mathf_InverseLerp_m597(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_3 = L_22;
		float L_23 = (__this->___minShadowDistance_4);
		float L_24 = (__this->___maxShadowDistance_7);
		float L_25 = V_3;
		float L_26 = Mathf_Lerp_m615(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		QualitySettings_set_shadowDistance_m968(NULL /*static, unused*/, L_26, /*hidden argument*/&QualitySettings_set_shadowDistance_m968_MethodInfo);
		Light_t107 * L_27 = (__this->___sunLight_2);
		float L_28 = (__this->___minShadowBias_5);
		float L_29 = (__this->___maxShadowBias_8);
		float L_30 = V_3;
		float L_31 = V_3;
		float L_32 = Mathf_Lerp_m615(NULL /*static, unused*/, L_28, L_29, ((float)((float)(1.0f)-(float)((float)((float)((float)((float)(1.0f)-(float)L_30))*(float)((float)((float)(1.0f)-(float)L_31)))))), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_27);
		Light_set_shadowBias_m969(L_27, L_32, /*hidden argument*/&Light_set_shadowBias_m969_MethodInfo);
		Light_t107 * L_33 = (__this->___sunLight_2);
		float L_34 = (__this->___m_OriginalStrength_12);
		float L_35 = V_3;
		float L_36 = Mathf_Lerp_m615(NULL /*static, unused*/, L_34, (0.0f), L_35, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_33);
		Light_set_shadowStrength_m970(L_33, L_36, /*hidden argument*/&Light_set_shadowStrength_m970_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CFOVKickUpU3Ec__Iterator1_t109_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FOMethodDeclarations.h"

// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
extern TypeInfo WaitForEndOfFrame_t218_il2cpp_TypeInfo;
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
extern MethodInfo WaitForEndOfFrame__ctor_m971_MethodInfo;


// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::.ctor()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator1__ctor_m306_MethodInfo;
extern "C" void U3CFOVKickUpU3Ec__Iterator1__ctor_m306 (U3CFOVKickUpU3Ec__Iterator1_t109 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m307_MethodInfo;
extern "C" Object_t * U3CFOVKickUpU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m307 (U3CFOVKickUpU3Ec__Iterator1_t109 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m308_MethodInfo;
extern "C" Object_t * U3CFOVKickUpU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m308 (U3CFOVKickUpU3Ec__Iterator1_t109 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::MoveNext()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator1_MoveNext_m309_MethodInfo;
extern "C" bool U3CFOVKickUpU3Ec__Iterator1_MoveNext_m309 (U3CFOVKickUpU3Ec__Iterator1_t109 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00e9;
	}

IL_0021:
	{
		FOVKick_t22 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Camera_t19 * L_3 = (L_2->___Camera_0);
		NullCheck(L_3);
		float L_4 = Camera_get_fieldOfView_m654(L_3, /*hidden argument*/&Camera_get_fieldOfView_m654_MethodInfo);
		FOVKick_t22 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___originalFov_1);
		FOVKick_t22 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		float L_8 = (L_7->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->___U3CtU3E__0_0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t22 * L_10 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		Camera_t19 * L_11 = (L_10->___Camera_0);
		FOVKick_t22 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___originalFov_1);
		FOVKick_t22 * L_14 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_14);
		AnimationCurve_t33 * L_15 = (L_14->___IncreaseCurve_5);
		float L_16 = (__this->___U3CtU3E__0_0);
		FOVKick_t22 * L_17 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_17);
		float L_18 = (L_17->___TimeToIncrease_3);
		NullCheck(L_15);
		float L_19 = AnimationCurve_Evaluate_m704(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/&AnimationCurve_Evaluate_m704_MethodInfo);
		FOVKick_t22 * L_20 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_20);
		float L_21 = (L_20->___FOVIncrease_2);
		NullCheck(L_11);
		Camera_set_fieldOfView_m655(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), /*hidden argument*/&Camera_set_fieldOfView_m655_MethodInfo);
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22+(float)L_23));
		WaitForEndOfFrame_t218 * L_24 = (WaitForEndOfFrame_t218 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t218_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m971(L_24, /*hidden argument*/&WaitForEndOfFrame__ctor_m971_MethodInfo);
		__this->___$current_2 = L_24;
		__this->___$PC_1 = 1;
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		FOVKick_t22 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		float L_27 = (L_26->___TimeToIncrease_3);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_0059;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_00e9:
	{
		return 0;
	}

IL_00eb:
	{
		return 1;
	}
	// Dead block : IL_00ed: ldloc.1
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::Dispose()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator1_Dispose_m310_MethodInfo;
extern "C" void U3CFOVKickUpU3Ec__Iterator1_Dispose_m310 (U3CFOVKickUpU3Ec__Iterator1_t109 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator1::Reset()
extern MethodInfo U3CFOVKickUpU3Ec__Iterator1_Reset_m311_MethodInfo;
extern "C" void U3CFOVKickUpU3Ec__Iterator1_Reset_m311 (U3CFOVKickUpU3Ec__Iterator1_t109 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CFOVKickDownU3Ec__Iterator2_t110_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FO_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::.ctor()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator2__ctor_m312_MethodInfo;
extern "C" void U3CFOVKickDownU3Ec__Iterator2__ctor_m312 (U3CFOVKickDownU3Ec__Iterator2_t110 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m313_MethodInfo;
extern "C" Object_t * U3CFOVKickDownU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m313 (U3CFOVKickDownU3Ec__Iterator2_t110 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m314_MethodInfo;
extern "C" Object_t * U3CFOVKickDownU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m314 (U3CFOVKickDownU3Ec__Iterator2_t110 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::MoveNext()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator2_MoveNext_m315_MethodInfo;
extern "C" bool U3CFOVKickDownU3Ec__Iterator2_MoveNext_m315 (U3CFOVKickDownU3Ec__Iterator2_t110 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00fe;
	}

IL_0021:
	{
		FOVKick_t22 * L_2 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Camera_t19 * L_3 = (L_2->___Camera_0);
		NullCheck(L_3);
		float L_4 = Camera_get_fieldOfView_m654(L_3, /*hidden argument*/&Camera_get_fieldOfView_m654_MethodInfo);
		FOVKick_t22 * L_5 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_5);
		float L_6 = (L_5->___originalFov_1);
		FOVKick_t22 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		float L_8 = (L_7->___FOVIncrease_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_9 = fabsf(((float)((float)((float)((float)L_4-(float)L_6))/(float)L_8)));
		__this->___U3CtU3E__0_0 = L_9;
		goto IL_00cc;
	}

IL_0059:
	{
		FOVKick_t22 * L_10 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		Camera_t19 * L_11 = (L_10->___Camera_0);
		FOVKick_t22 * L_12 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_12);
		float L_13 = (L_12->___originalFov_1);
		FOVKick_t22 * L_14 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_14);
		AnimationCurve_t33 * L_15 = (L_14->___IncreaseCurve_5);
		float L_16 = (__this->___U3CtU3E__0_0);
		FOVKick_t22 * L_17 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_17);
		float L_18 = (L_17->___TimeToDecrease_4);
		NullCheck(L_15);
		float L_19 = AnimationCurve_Evaluate_m704(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/&AnimationCurve_Evaluate_m704_MethodInfo);
		FOVKick_t22 * L_20 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_20);
		float L_21 = (L_20->___FOVIncrease_2);
		NullCheck(L_11);
		Camera_set_fieldOfView_m655(L_11, ((float)((float)L_13+(float)((float)((float)L_19*(float)L_21)))), /*hidden argument*/&Camera_set_fieldOfView_m655_MethodInfo);
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22-(float)L_23));
		WaitForEndOfFrame_t218 * L_24 = (WaitForEndOfFrame_t218 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t218_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m971(L_24, /*hidden argument*/&WaitForEndOfFrame__ctor_m971_MethodInfo);
		__this->___$current_2 = L_24;
		__this->___$PC_1 = 1;
		goto IL_0100;
	}

IL_00cc:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		FOVKick_t22 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		Camera_t19 * L_27 = (L_26->___Camera_0);
		FOVKick_t22 * L_28 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_28);
		float L_29 = (L_28->___originalFov_1);
		NullCheck(L_27);
		Camera_set_fieldOfView_m655(L_27, L_29, /*hidden argument*/&Camera_set_fieldOfView_m655_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_00fe:
	{
		return 0;
	}

IL_0100:
	{
		return 1;
	}
	// Dead block : IL_0102: ldloc.1
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::Dispose()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator2_Dispose_m316_MethodInfo;
extern "C" void U3CFOVKickDownU3Ec__Iterator2_Dispose_m316 (U3CFOVKickDownU3Ec__Iterator2_t110 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator2::Reset()
extern MethodInfo U3CFOVKickDownU3Ec__Iterator2_Reset_m317_MethodInfo;
extern "C" void U3CFOVKickDownU3Ec__Iterator2_Reset_m317 (U3CFOVKickDownU3Ec__Iterator2_t110 * __this, MethodInfo* method)
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

extern MethodInfo FOVKick_CheckStatus_m320_MethodInfo;


// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
extern "C" void FOVKick__ctor_m318 (FOVKick_t22 * __this, MethodInfo* method)
{
	{
		__this->___FOVIncrease_2 = (3.0f);
		__this->___TimeToIncrease_3 = (1.0f);
		__this->___TimeToDecrease_4 = (1.0f);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
extern "C" void FOVKick_Setup_m319 (FOVKick_t22 * __this, Camera_t19 * ___camera, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___camera;
		FOVKick_CheckStatus_m320(__this, L_0, /*hidden argument*/&FOVKick_CheckStatus_m320_MethodInfo);
		Camera_t19 * L_1 = ___camera;
		__this->___Camera_0 = L_1;
		Camera_t19 * L_2 = ___camera;
		NullCheck(L_2);
		float L_3 = Camera_get_fieldOfView_m654(L_2, /*hidden argument*/&Camera_get_fieldOfView_m654_MethodInfo);
		__this->___originalFov_1 = L_3;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
extern "C" void FOVKick_CheckStatus_m320 (FOVKick_t22 * __this, Camera_t19 * ___camera, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___camera;
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t204 * L_2 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_2, (String_t*) &_stringLiteral56, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		AnimationCurve_t33 * L_3 = (__this->___IncreaseCurve_5);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Exception_t204 * L_4 = (Exception_t204 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t204_il2cpp_TypeInfo));
		Exception__ctor_m782(L_4, (String_t*) &_stringLiteral57, /*hidden argument*/&Exception__ctor_m782_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
extern MethodInfo FOVKick_ChangeCamera_m321_MethodInfo;
extern "C" void FOVKick_ChangeCamera_m321 (FOVKick_t22 * __this, Camera_t19 * ___camera, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___camera;
		__this->___Camera_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
extern "C" Object_t * FOVKick_FOVKickUp_m322 (FOVKick_t22 * __this, MethodInfo* method)
{
	U3CFOVKickUpU3Ec__Iterator1_t109 * V_0 = {0};
	{
		U3CFOVKickUpU3Ec__Iterator1_t109 * L_0 = (U3CFOVKickUpU3Ec__Iterator1_t109 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CFOVKickUpU3Ec__Iterator1_t109_il2cpp_TypeInfo));
		U3CFOVKickUpU3Ec__Iterator1__ctor_m306(L_0, /*hidden argument*/&U3CFOVKickUpU3Ec__Iterator1__ctor_m306_MethodInfo);
		V_0 = L_0;
		U3CFOVKickUpU3Ec__Iterator1_t109 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CFOVKickUpU3Ec__Iterator1_t109 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
extern "C" Object_t * FOVKick_FOVKickDown_m323 (FOVKick_t22 * __this, MethodInfo* method)
{
	U3CFOVKickDownU3Ec__Iterator2_t110 * V_0 = {0};
	{
		U3CFOVKickDownU3Ec__Iterator2_t110 * L_0 = (U3CFOVKickDownU3Ec__Iterator2_t110 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CFOVKickDownU3Ec__Iterator2_t110_il2cpp_TypeInfo));
		U3CFOVKickDownU3Ec__Iterator2__ctor_m312(L_0, /*hidden argument*/&U3CFOVKickDownU3Ec__Iterator2__ctor_m312_MethodInfo);
		V_0 = L_0;
		U3CFOVKickDownU3Ec__Iterator2_t110 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CFOVKickDownU3Ec__Iterator2_t110 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Utility.FPSCounter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FP.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FPSCounter_t112_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.FPSCounter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_FPMethodDeclarations.h"

// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
extern MethodInfo String_Format_m972_MethodInfo;
extern MethodInfo GUIText_set_text_m973_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.GUIText>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_14.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t111_m974(__this, method) (( GUIText_t111 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisGUIText_t111_m974_GenericMethod;


// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
extern MethodInfo FPSCounter__ctor_m324_MethodInfo;
extern "C" void FPSCounter__ctor_m324 (FPSCounter_t112 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
extern MethodInfo FPSCounter_Start_m325_MethodInfo;
extern MethodInfo* Component_GetComponent_TisGUIText_t111_m974_MethodInfo_var;
extern "C" void FPSCounter_Start_m325 (FPSCounter_t112 * __this, MethodInfo* method)
{
	static bool FPSCounter_Start_m325_init;
	if (!FPSCounter_Start_m325_init)
	{
		Component_GetComponent_TisGUIText_t111_m974_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisGUIText_t111_m974_GenericMethod);
		FPSCounter_Start_m325_init = true;
	}
	{
		float L_0 = Time_get_realtimeSinceStartup_m936(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m936_MethodInfo);
		__this->___m_FpsNextPeriod_5 = ((float)((float)L_0+(float)(0.5f)));
		GUIText_t111 * L_1 = Component_GetComponent_TisGUIText_t111_m974(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t111_m974_MethodInfo_var);
		__this->___m_GuiText_7 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
extern MethodInfo FPSCounter_Update_m326_MethodInfo;
extern "C" void FPSCounter_Update_m326 (FPSCounter_t112 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FpsAccumulator_4);
		__this->___m_FpsAccumulator_4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		float L_1 = Time_get_realtimeSinceStartup_m936(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m936_MethodInfo);
		float L_2 = (__this->___m_FpsNextPeriod_5);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (__this->___m_FpsAccumulator_4);
		__this->___m_CurrentFps_6 = (((int32_t)((float)((float)(((float)L_3))/(float)(0.5f)))));
		__this->___m_FpsAccumulator_4 = 0;
		float L_4 = (__this->___m_FpsNextPeriod_5);
		__this->___m_FpsNextPeriod_5 = ((float)((float)L_4+(float)(0.5f)));
		GUIText_t111 * L_5 = (__this->___m_GuiText_7);
		int32_t L_6 = (__this->___m_CurrentFps_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m972(NULL /*static, unused*/, (String_t*) &_stringLiteral58, L_8, /*hidden argument*/&String_Format_m972_MethodInfo);
		NullCheck(L_5);
		GUIText_set_text_m973(L_5, L_9, /*hidden argument*/&GUIText_set_text_m973_MethodInfo);
	}

IL_006b:
	{
		return;
	}
}
// UnityStandardAssets.Utility.FollowTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Fo_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FollowTarget_t113_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.FollowTarget
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Fo_2MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.FollowTarget::.ctor()
extern MethodInfo FollowTarget__ctor_m327_MethodInfo;
extern "C" void FollowTarget__ctor_m327 (FollowTarget_t113 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = {0};
		Vector3__ctor_m700(&L_0, (0.0f), (7.5f), (0.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		__this->___offset_3 = L_0;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FollowTarget::LateUpdate()
extern MethodInfo FollowTarget_LateUpdate_m328_MethodInfo;
extern "C" void FollowTarget_LateUpdate_m328 (FollowTarget_t113 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_1 = (__this->___target_2);
		NullCheck(L_1);
		Vector3_t8  L_2 = Transform_get_position_m599(L_1, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_3 = (__this->___offset_3);
		Vector3_t8  L_4 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		NullCheck(L_0);
		Transform_set_position_m601(L_0, L_4, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		return;
	}
}
// ForcedReset
#include "AssemblyU2DCSharpU2Dfirstpass_ForcedReset.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ForcedReset_t114_il2cpp_TypeInfo;
// ForcedReset
#include "AssemblyU2DCSharpU2Dfirstpass_ForcedResetMethodDeclarations.h"

// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
extern MethodInfo Application_get_loadedLevelName_m975_MethodInfo;
extern MethodInfo Application_LoadLevelAsync_m976_MethodInfo;


// System.Void ForcedReset::.ctor()
extern MethodInfo ForcedReset__ctor_m329_MethodInfo;
extern "C" void ForcedReset__ctor_m329 (ForcedReset_t114 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ForcedReset::Update()
extern MethodInfo ForcedReset_Update_m330_MethodInfo;
extern "C" void ForcedReset_Update_m330 (ForcedReset_t114 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_0 = CrossPlatformInputManager_GetButtonDown_m149(NULL /*static, unused*/, (String_t*) &_stringLiteral59, /*hidden argument*/&CrossPlatformInputManager_GetButtonDown_m149_MethodInfo);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = Application_get_loadedLevelName_m975(NULL /*static, unused*/, /*hidden argument*/&Application_get_loadedLevelName_m975_MethodInfo);
		Application_LoadLevelAsync_m976(NULL /*static, unused*/, L_1, /*hidden argument*/&Application_LoadLevelAsync_m976_MethodInfo);
	}

IL_001a:
	{
		return;
	}
}
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Le.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDoBobCycleU3Ec__Iterator3_t115_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_LeMethodDeclarations.h"

// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
extern TypeInfo WaitForFixedUpdate_t219_il2cpp_TypeInfo;
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"
extern MethodInfo WaitForFixedUpdate__ctor_m977_MethodInfo;


// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::.ctor()
extern MethodInfo U3CDoBobCycleU3Ec__Iterator3__ctor_m331_MethodInfo;
extern "C" void U3CDoBobCycleU3Ec__Iterator3__ctor_m331 (U3CDoBobCycleU3Ec__Iterator3_t115 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDoBobCycleU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m332_MethodInfo;
extern "C" Object_t * U3CDoBobCycleU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m332 (U3CDoBobCycleU3Ec__Iterator3_t115 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDoBobCycleU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m333_MethodInfo;
extern "C" Object_t * U3CDoBobCycleU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m333 (U3CDoBobCycleU3Ec__Iterator3_t115 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::MoveNext()
extern MethodInfo U3CDoBobCycleU3Ec__Iterator3_MoveNext_m334_MethodInfo;
extern "C" bool U3CDoBobCycleU3Ec__Iterator3_MoveNext_m334 (U3CDoBobCycleU3Ec__Iterator3_t115 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0090;
		}
		if (L_1 == 2)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_013e;
	}

IL_0025:
	{
		__this->___U3CtU3E__0_0 = (0.0f);
		goto IL_0090;
	}

IL_0035:
	{
		LerpControlledBob_t24 * L_2 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t24 * L_3 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_3);
		float L_4 = (L_3->___BobAmount_1);
		float L_5 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t24 * L_6 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_6);
		float L_7 = (L_6->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_8 = Mathf_Lerp_m615(NULL /*static, unused*/, (0.0f), L_4, ((float)((float)L_5/(float)L_7)), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_2);
		L_2->___m_Offset_2 = L_8;
		float L_9 = (__this->___U3CtU3E__0_0);
		float L_10 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)((float)L_9+(float)L_10));
		WaitForFixedUpdate_t219 * L_11 = (WaitForFixedUpdate_t219 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForFixedUpdate_t219_il2cpp_TypeInfo));
		WaitForFixedUpdate__ctor_m977(L_11, /*hidden argument*/&WaitForFixedUpdate__ctor_m977_MethodInfo);
		__this->___$current_2 = L_11;
		__this->___$PC_1 = 1;
		goto IL_0140;
	}

IL_0090:
	{
		float L_12 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t24 * L_13 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_13);
		float L_14 = (L_13->___BobDuration_0);
		if ((((float)L_12) < ((float)L_14)))
		{
			goto IL_0035;
		}
	}
	{
		__this->___U3CtU3E__0_0 = (0.0f);
		goto IL_0111;
	}

IL_00b6:
	{
		LerpControlledBob_t24 * L_15 = (__this->___U3CU3Ef__this_3);
		LerpControlledBob_t24 * L_16 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_16);
		float L_17 = (L_16->___BobAmount_1);
		float L_18 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t24 * L_19 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_19);
		float L_20 = (L_19->___BobDuration_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_21 = Mathf_Lerp_m615(NULL /*static, unused*/, L_17, (0.0f), ((float)((float)L_18/(float)L_20)), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_15);
		L_15->___m_Offset_2 = L_21;
		float L_22 = (__this->___U3CtU3E__0_0);
		float L_23 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		__this->___U3CtU3E__0_0 = ((float)((float)L_22+(float)L_23));
		WaitForFixedUpdate_t219 * L_24 = (WaitForFixedUpdate_t219 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForFixedUpdate_t219_il2cpp_TypeInfo));
		WaitForFixedUpdate__ctor_m977(L_24, /*hidden argument*/&WaitForFixedUpdate__ctor_m977_MethodInfo);
		__this->___$current_2 = L_24;
		__this->___$PC_1 = 2;
		goto IL_0140;
	}

IL_0111:
	{
		float L_25 = (__this->___U3CtU3E__0_0);
		LerpControlledBob_t24 * L_26 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_26);
		float L_27 = (L_26->___BobDuration_0);
		if ((((float)L_25) < ((float)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		LerpControlledBob_t24 * L_28 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_28);
		L_28->___m_Offset_2 = (0.0f);
		__this->___$PC_1 = (-1);
	}

IL_013e:
	{
		return 0;
	}

IL_0140:
	{
		return 1;
	}
	// Dead block : IL_0142: ldloc.1
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::Dispose()
extern MethodInfo U3CDoBobCycleU3Ec__Iterator3_Dispose_m335_MethodInfo;
extern "C" void U3CDoBobCycleU3Ec__Iterator3_Dispose_m335 (U3CDoBobCycleU3Ec__Iterator3_t115 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator3::Reset()
extern MethodInfo U3CDoBobCycleU3Ec__Iterator3_Reset_m336_MethodInfo;
extern "C" void U3CDoBobCycleU3Ec__Iterator3_Reset_m336 (U3CDoBobCycleU3Ec__Iterator3_t115 * __this, MethodInfo* method)
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



// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
extern "C" void LerpControlledBob__ctor_m337 (LerpControlledBob_t24 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
extern "C" float LerpControlledBob_Offset_m338 (LerpControlledBob_t24 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Offset_2);
		return L_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
extern "C" Object_t * LerpControlledBob_DoBobCycle_m339 (LerpControlledBob_t24 * __this, MethodInfo* method)
{
	U3CDoBobCycleU3Ec__Iterator3_t115 * V_0 = {0};
	{
		U3CDoBobCycleU3Ec__Iterator3_t115 * L_0 = (U3CDoBobCycleU3Ec__Iterator3_t115 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDoBobCycleU3Ec__Iterator3_t115_il2cpp_TypeInfo));
		U3CDoBobCycleU3Ec__Iterator3__ctor_m331(L_0, /*hidden argument*/&U3CDoBobCycleU3Ec__Iterator3__ctor_m331_MethodInfo);
		V_0 = L_0;
		U3CDoBobCycleU3Ec__Iterator3_t115 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CDoBobCycleU3Ec__Iterator3_t115 * L_2 = V_0;
		return L_2;
	}
}
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CResetCoroutineU3Ec__Iterator4_t118_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_ObMethodDeclarations.h"

// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
extern TypeInfo WaitForSeconds_t220_il2cpp_TypeInfo;
extern TypeInfo ObjectResetter_t117_il2cpp_TypeInfo;
extern TypeInfo List_1_t119_il2cpp_TypeInfo;
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
extern Il2CppType List_1_t119_0_0_0;
extern MethodInfo WaitForSeconds__ctor_m978_MethodInfo;
extern MethodInfo List_1_Contains_m979_MethodInfo;
extern MethodInfo Transform_set_parent_m980_MethodInfo;
extern MethodInfo Rigidbody_set_angularVelocity_m981_MethodInfo;
extern MethodInfo Component_SendMessage_m982_MethodInfo;
struct Component_t185;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
#define Component_GetComponentsInChildren_TisTransform_t2_m983(__this, method) (( TransformU5BU5D_t116* (*) (Component_t185 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m661_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisTransform_t2_m983_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m979_GenericMethod;


// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::.ctor()
extern MethodInfo U3CResetCoroutineU3Ec__Iterator4__ctor_m340_MethodInfo;
extern "C" void U3CResetCoroutineU3Ec__Iterator4__ctor_m340 (U3CResetCoroutineU3Ec__Iterator4_t118 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CResetCoroutineU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m341_MethodInfo;
extern "C" Object_t * U3CResetCoroutineU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m341 (U3CResetCoroutineU3Ec__Iterator4_t118 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CResetCoroutineU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m342_MethodInfo;
extern "C" Object_t * U3CResetCoroutineU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m342 (U3CResetCoroutineU3Ec__Iterator4_t118 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::MoveNext()
extern MethodInfo U3CResetCoroutineU3Ec__Iterator4_MoveNext_m343_MethodInfo;
extern MethodInfo* Component_GetComponentsInChildren_TisTransform_t2_m983_MethodInfo_var;
extern MethodInfo* List_1_Contains_m979_MethodInfo_var;
extern "C" bool U3CResetCoroutineU3Ec__Iterator4_MoveNext_m343 (U3CResetCoroutineU3Ec__Iterator4_t118 * __this, MethodInfo* method)
{
	static bool U3CResetCoroutineU3Ec__Iterator4_MoveNext_m343_init;
	if (!U3CResetCoroutineU3Ec__Iterator4_MoveNext_m343_init)
	{
		Component_GetComponentsInChildren_TisTransform_t2_m983_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisTransform_t2_m983_GenericMethod);
		List_1_Contains_m979_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m979_GenericMethod);
		U3CResetCoroutineU3Ec__Iterator4_MoveNext_m343_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0142;
	}

IL_0021:
	{
		float L_2 = (__this->___delay_0);
		WaitForSeconds_t220 * L_3 = (WaitForSeconds_t220 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t220_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m978(L_3, L_2, /*hidden argument*/&WaitForSeconds__ctor_m978_MethodInfo);
		__this->___$current_5 = L_3;
		__this->___$PC_4 = 1;
		goto IL_0144;
	}

IL_003e:
	{
		ObjectResetter_t117 * L_4 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_4);
		TransformU5BU5D_t116* L_5 = Component_GetComponentsInChildren_TisTransform_t2_m983(L_4, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t2_m983_MethodInfo_var);
		__this->___U3C$s_10U3E__0_1 = L_5;
		__this->___U3C$s_11U3E__1_2 = 0;
		goto IL_00a3;
	}

IL_005b:
	{
		TransformU5BU5D_t116* L_6 = (__this->___U3C$s_10U3E__0_1);
		int32_t L_7 = (__this->___U3C$s_11U3E__1_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		__this->___U3CtU3E__2_3 = (*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_6, L_8));
		ObjectResetter_t117 * L_9 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_9);
		List_1_t119 * L_10 = (L_9->___originalStructure_4);
		Transform_t2 * L_11 = (__this->___U3CtU3E__2_3);
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker1< bool, Transform_t2 * >::Invoke(List_1_Contains_m979_MethodInfo_var, L_10, L_11);
		if (L_12)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t2 * L_13 = (__this->___U3CtU3E__2_3);
		NullCheck(L_13);
		Transform_set_parent_m980(L_13, (Transform_t2 *)NULL, /*hidden argument*/&Transform_set_parent_m980_MethodInfo);
	}

IL_0095:
	{
		int32_t L_14 = (__this->___U3C$s_11U3E__1_2);
		__this->___U3C$s_11U3E__1_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_15 = (__this->___U3C$s_11U3E__1_2);
		TransformU5BU5D_t116* L_16 = (__this->___U3C$s_10U3E__0_1);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_005b;
		}
	}
	{
		ObjectResetter_t117 * L_17 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_17);
		Transform_t2 * L_18 = Component_get_transform_m598(L_17, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		ObjectResetter_t117 * L_19 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_19);
		Vector3_t8  L_20 = (L_19->___originalPosition_2);
		NullCheck(L_18);
		Transform_set_position_m601(L_18, L_20, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		ObjectResetter_t117 * L_21 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_21);
		Transform_t2 * L_22 = Component_get_transform_m598(L_21, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		ObjectResetter_t117 * L_23 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_23);
		Quaternion_t10  L_24 = (L_23->___originalRotation_3);
		NullCheck(L_22);
		Transform_set_rotation_m607(L_22, L_24, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		ObjectResetter_t117 * L_25 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_25);
		Rigidbody_t3 * L_26 = (L_25->___Rigidbody_5);
		bool L_27 = Object_op_Implicit_m582(NULL /*static, unused*/, L_26, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (!L_27)
		{
			goto IL_012b;
		}
	}
	{
		ObjectResetter_t117 * L_28 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_28);
		Rigidbody_t3 * L_29 = (L_28->___Rigidbody_5);
		Vector3_t8  L_30 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		NullCheck(L_29);
		Rigidbody_set_velocity_m701(L_29, L_30, /*hidden argument*/&Rigidbody_set_velocity_m701_MethodInfo);
		ObjectResetter_t117 * L_31 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_31);
		Rigidbody_t3 * L_32 = (L_31->___Rigidbody_5);
		Vector3_t8  L_33 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		NullCheck(L_32);
		Rigidbody_set_angularVelocity_m981(L_32, L_33, /*hidden argument*/&Rigidbody_set_angularVelocity_m981_MethodInfo);
	}

IL_012b:
	{
		ObjectResetter_t117 * L_34 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_34);
		Component_SendMessage_m982(L_34, (String_t*) &_stringLiteral60, /*hidden argument*/&Component_SendMessage_m982_MethodInfo);
		__this->___$PC_4 = (-1);
	}

IL_0142:
	{
		return 0;
	}

IL_0144:
	{
		return 1;
	}
	// Dead block : IL_0146: ldloc.1
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::Dispose()
extern MethodInfo U3CResetCoroutineU3Ec__Iterator4_Dispose_m344_MethodInfo;
extern "C" void U3CResetCoroutineU3Ec__Iterator4_Dispose_m344 (U3CResetCoroutineU3Ec__Iterator4_t118 * __this, MethodInfo* method)
{
	{
		__this->___$PC_4 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator4::Reset()
extern MethodInfo U3CResetCoroutineU3Ec__Iterator4_Reset_m345_MethodInfo;
extern "C" void U3CResetCoroutineU3Ec__Iterator4_Reset_m345 (U3CResetCoroutineU3Ec__Iterator4_t118 * __this, MethodInfo* method)
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
// UnityStandardAssets.Utility.ObjectResetter
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ob_0MethodDeclarations.h"

extern MethodInfo List_1__ctor_m984_MethodInfo;
extern MethodInfo ObjectResetter_ResetCoroutine_m349_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m984_GenericMethod;


// System.Void UnityStandardAssets.Utility.ObjectResetter::.ctor()
extern MethodInfo ObjectResetter__ctor_m346_MethodInfo;
extern "C" void ObjectResetter__ctor_m346 (ObjectResetter_t117 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::Start()
extern MethodInfo ObjectResetter_Start_m347_MethodInfo;
extern TypeInfo* List_1_t119_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisTransform_t2_m983_MethodInfo_var;
extern MethodInfo* List_1__ctor_m984_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern "C" void ObjectResetter_Start_m347 (ObjectResetter_t117 * __this, MethodInfo* method)
{
	static bool ObjectResetter_Start_m347_init;
	if (!ObjectResetter_Start_m347_init)
	{
		List_1_t119_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t119_0_0_0);
		Component_GetComponentsInChildren_TisTransform_t2_m983_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisTransform_t2_m983_GenericMethod);
		List_1__ctor_m984_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m984_GenericMethod);
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		ObjectResetter_Start_m347_init = true;
	}
	{
		TransformU5BU5D_t116* L_0 = Component_GetComponentsInChildren_TisTransform_t2_m983(__this, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_t2_m983_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t119_il2cpp_TypeInfo_var);
		List_1_t119 * L_1 = (List_1_t119 *)il2cpp_codegen_object_new (List_1_t119_il2cpp_TypeInfo_var);
		List_1__ctor_m984(L_1, (Object_t*)(Object_t*)L_0, /*hidden argument*/List_1__ctor_m984_MethodInfo_var);
		__this->___originalStructure_4 = L_1;
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___originalPosition_2 = L_3;
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Quaternion_t10  L_5 = Transform_get_rotation_m605(L_4, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		__this->___originalRotation_3 = L_5;
		Rigidbody_t3 * L_6 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___Rigidbody_5 = L_6;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
extern MethodInfo ObjectResetter_DelayedReset_m348_MethodInfo;
extern "C" void ObjectResetter_DelayedReset_m348 (ObjectResetter_t117 * __this, float ___delay, MethodInfo* method)
{
	{
		float L_0 = ___delay;
		Object_t * L_1 = ObjectResetter_ResetCoroutine_m349(__this, L_0, /*hidden argument*/&ObjectResetter_ResetCoroutine_m349_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_1, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ObjectResetter::ResetCoroutine(System.Single)
extern "C" Object_t * ObjectResetter_ResetCoroutine_m349 (ObjectResetter_t117 * __this, float ___delay, MethodInfo* method)
{
	U3CResetCoroutineU3Ec__Iterator4_t118 * V_0 = {0};
	{
		U3CResetCoroutineU3Ec__Iterator4_t118 * L_0 = (U3CResetCoroutineU3Ec__Iterator4_t118 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CResetCoroutineU3Ec__Iterator4_t118_il2cpp_TypeInfo));
		U3CResetCoroutineU3Ec__Iterator4__ctor_m340(L_0, /*hidden argument*/&U3CResetCoroutineU3Ec__Iterator4__ctor_m340_MethodInfo);
		V_0 = L_0;
		U3CResetCoroutineU3Ec__Iterator4_t118 * L_1 = V_0;
		float L_2 = ___delay;
		NullCheck(L_1);
		L_1->___delay_0 = L_2;
		U3CResetCoroutineU3Ec__Iterator4_t118 * L_3 = V_0;
		float L_4 = ___delay;
		NullCheck(L_3);
		L_3->___U3C$U3Edelay_6 = L_4;
		U3CResetCoroutineU3Ec__Iterator4_t118 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_7 = __this;
		U3CResetCoroutineU3Ec__Iterator4_t118 * L_6 = V_0;
		return L_6;
	}
}
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CStartU3Ec__Iterator5_t123_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PaMethodDeclarations.h"

// UnityStandardAssets.Utility.ParticleSystemDestroyer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa_0.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern TypeInfo ParticleSystemDestroyer_t122_il2cpp_TypeInfo;
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
extern MethodInfo ParticleSystem_get_startLifetime_m985_MethodInfo;
extern MethodInfo Mathf_Max_m986_MethodInfo;
extern MethodInfo Random_Range_m987_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo ParticleSystem_set_enableEmission_m989_MethodInfo;
extern MethodInfo Component_BroadcastMessage_m990_MethodInfo;
extern MethodInfo Object_Destroy_m991_MethodInfo;
struct Component_t185;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentsInChildren_TisParticleSystem_t121_m992(__this, method) (( ParticleSystemU5BU5D_t120* (*) (Component_t185 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m661_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisParticleSystem_t121_m992_GenericMethod;


// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::.ctor()
extern MethodInfo U3CStartU3Ec__Iterator5__ctor_m350_MethodInfo;
extern "C" void U3CStartU3Ec__Iterator5__ctor_m350 (U3CStartU3Ec__Iterator5_t123 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m351_MethodInfo;
extern "C" Object_t * U3CStartU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m351 (U3CStartU3Ec__Iterator5_t123 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_9);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m352_MethodInfo;
extern "C" Object_t * U3CStartU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m352 (U3CStartU3Ec__Iterator5_t123 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_9);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::MoveNext()
extern MethodInfo U3CStartU3Ec__Iterator5_MoveNext_m353_MethodInfo;
extern MethodInfo* Component_GetComponentsInChildren_TisParticleSystem_t121_m992_MethodInfo_var;
extern "C" bool U3CStartU3Ec__Iterator5_MoveNext_m353 (U3CStartU3Ec__Iterator5_t123 * __this, MethodInfo* method)
{
	static bool U3CStartU3Ec__Iterator5_MoveNext_m353_init;
	if (!U3CStartU3Ec__Iterator5_MoveNext_m353_init)
	{
		Component_GetComponentsInChildren_TisParticleSystem_t121_m992_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisParticleSystem_t121_m992_GenericMethod);
		U3CStartU3Ec__Iterator5_MoveNext_m353_init = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_8);
		V_0 = L_0;
		__this->___$PC_8 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_00e7;
		}
		if (L_1 == 2)
		{
			goto IL_01ac;
		}
	}
	{
		goto IL_01c3;
	}

IL_0025:
	{
		ParticleSystemDestroyer_t122 * L_2 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_2);
		ParticleSystemU5BU5D_t120* L_3 = Component_GetComponentsInChildren_TisParticleSystem_t121_m992(L_2, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t121_m992_MethodInfo_var);
		__this->___U3CsystemsU3E__0_0 = L_3;
		ParticleSystemU5BU5D_t120* L_4 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3C$s_12U3E__1_1 = L_4;
		__this->___U3C$s_13U3E__2_2 = 0;
		goto IL_0095;
	}

IL_004e:
	{
		ParticleSystemU5BU5D_t120* L_5 = (__this->___U3C$s_12U3E__1_1);
		int32_t L_6 = (__this->___U3C$s_13U3E__2_2);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U3CsystemU3E__3_3 = (*(ParticleSystem_t121 **)(ParticleSystem_t121 **)SZArrayLdElema(L_5, L_7));
		ParticleSystemDestroyer_t122 * L_8 = (__this->___U3CU3Ef__this_10);
		ParticleSystem_t121 * L_9 = (__this->___U3CsystemU3E__3_3);
		NullCheck(L_9);
		float L_10 = ParticleSystem_get_startLifetime_m985(L_9, /*hidden argument*/&ParticleSystem_get_startLifetime_m985_MethodInfo);
		ParticleSystemDestroyer_t122 * L_11 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_11);
		float L_12 = (L_11->___m_MaxLifetime_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_13 = Mathf_Max_m986(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/&Mathf_Max_m986_MethodInfo);
		NullCheck(L_8);
		L_8->___m_MaxLifetime_4 = L_13;
		int32_t L_14 = (__this->___U3C$s_13U3E__2_2);
		__this->___U3C$s_13U3E__2_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_15 = (__this->___U3C$s_13U3E__2_2);
		ParticleSystemU5BU5D_t120* L_16 = (__this->___U3C$s_12U3E__1_1);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		float L_17 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		ParticleSystemDestroyer_t122 * L_18 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_18);
		float L_19 = (L_18->___minDuration_2);
		ParticleSystemDestroyer_t122 * L_20 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_20);
		float L_21 = (L_20->___maxDuration_3);
		float L_22 = Random_Range_m987(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/&Random_Range_m987_MethodInfo);
		__this->___U3CstopTimeU3E__4_4 = ((float)((float)L_17+(float)L_22));
		goto IL_00e7;
	}

IL_00d4:
	{
		__this->___$current_9 = NULL;
		__this->___$PC_8 = 1;
		goto IL_01c5;
	}

IL_00e7:
	{
		float L_23 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_24 = (__this->___U3CstopTimeU3E__4_4);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t122 * L_25 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_25);
		bool L_26 = (L_25->___m_EarlyStop_5);
		if (L_26)
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystemDestroyer_t122 * L_27 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_27);
		String_t* L_28 = Object_get_name_m820(L_27, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral61, L_28, /*hidden argument*/&String_Concat_m988_MethodInfo);
		Debug_Log_m922(NULL /*static, unused*/, L_29, /*hidden argument*/&Debug_Log_m922_MethodInfo);
		ParticleSystemU5BU5D_t120* L_30 = (__this->___U3CsystemsU3E__0_0);
		__this->___U3C$s_14U3E__5_5 = L_30;
		__this->___U3C$s_15U3E__6_6 = 0;
		goto IL_0166;
	}

IL_0139:
	{
		ParticleSystemU5BU5D_t120* L_31 = (__this->___U3C$s_14U3E__5_5);
		int32_t L_32 = (__this->___U3C$s_15U3E__6_6);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		__this->___U3CsystemU3E__7_7 = (*(ParticleSystem_t121 **)(ParticleSystem_t121 **)SZArrayLdElema(L_31, L_33));
		ParticleSystem_t121 * L_34 = (__this->___U3CsystemU3E__7_7);
		NullCheck(L_34);
		ParticleSystem_set_enableEmission_m989(L_34, 0, /*hidden argument*/&ParticleSystem_set_enableEmission_m989_MethodInfo);
		int32_t L_35 = (__this->___U3C$s_15U3E__6_6);
		__this->___U3C$s_15U3E__6_6 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0166:
	{
		int32_t L_36 = (__this->___U3C$s_15U3E__6_6);
		ParticleSystemU5BU5D_t120* L_37 = (__this->___U3C$s_14U3E__5_5);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_0139;
		}
	}
	{
		ParticleSystemDestroyer_t122 * L_38 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_38);
		Component_BroadcastMessage_m990(L_38, (String_t*) &_stringLiteral62, 1, /*hidden argument*/&Component_BroadcastMessage_m990_MethodInfo);
		ParticleSystemDestroyer_t122 * L_39 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_39);
		float L_40 = (L_39->___m_MaxLifetime_4);
		WaitForSeconds_t220 * L_41 = (WaitForSeconds_t220 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t220_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m978(L_41, L_40, /*hidden argument*/&WaitForSeconds__ctor_m978_MethodInfo);
		__this->___$current_9 = L_41;
		__this->___$PC_8 = 2;
		goto IL_01c5;
	}

IL_01ac:
	{
		ParticleSystemDestroyer_t122 * L_42 = (__this->___U3CU3Ef__this_10);
		NullCheck(L_42);
		GameObject_t92 * L_43 = Component_get_gameObject_m577(L_42, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		Object_Destroy_m991(NULL /*static, unused*/, L_43, /*hidden argument*/&Object_Destroy_m991_MethodInfo);
		__this->___$PC_8 = (-1);
	}

IL_01c3:
	{
		return 0;
	}

IL_01c5:
	{
		return 1;
	}
	// Dead block : IL_01c7: ldloc.1
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::Dispose()
extern MethodInfo U3CStartU3Ec__Iterator5_Dispose_m354_MethodInfo;
extern "C" void U3CStartU3Ec__Iterator5_Dispose_m354 (U3CStartU3Ec__Iterator5_t123 * __this, MethodInfo* method)
{
	{
		__this->___$PC_8 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator5::Reset()
extern MethodInfo U3CStartU3Ec__Iterator5_Reset_m355_MethodInfo;
extern "C" void U3CStartU3Ec__Iterator5_Reset_m355 (U3CStartU3Ec__Iterator5_t123 * __this, MethodInfo* method)
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
// UnityStandardAssets.Utility.ParticleSystemDestroyer
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pa_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::.ctor()
extern MethodInfo ParticleSystemDestroyer__ctor_m356_MethodInfo;
extern "C" void ParticleSystemDestroyer__ctor_m356 (ParticleSystemDestroyer_t122 * __this, MethodInfo* method)
{
	{
		__this->___minDuration_2 = (8.0f);
		__this->___maxDuration_3 = (10.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.ParticleSystemDestroyer::Start()
extern MethodInfo ParticleSystemDestroyer_Start_m357_MethodInfo;
extern "C" Object_t * ParticleSystemDestroyer_Start_m357 (ParticleSystemDestroyer_t122 * __this, MethodInfo* method)
{
	U3CStartU3Ec__Iterator5_t123 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator5_t123 * L_0 = (U3CStartU3Ec__Iterator5_t123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CStartU3Ec__Iterator5_t123_il2cpp_TypeInfo));
		U3CStartU3Ec__Iterator5__ctor_m350(L_0, /*hidden argument*/&U3CStartU3Ec__Iterator5__ctor_m350_MethodInfo);
		V_0 = L_0;
		U3CStartU3Ec__Iterator5_t123 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_10 = __this;
		U3CStartU3Ec__Iterator5_t123 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer::Stop()
extern MethodInfo ParticleSystemDestroyer_Stop_m358_MethodInfo;
extern "C" void ParticleSystemDestroyer_Stop_m358 (ParticleSystemDestroyer_t122 * __this, MethodInfo* method)
{
	{
		__this->___m_EarlyStop_5 = 1;
		return;
	}
}
// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BuildTargetGroup_t124_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_PlMethodDeclarations.h"



// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlatformSpecificContent_t127_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.PlatformSpecificContent
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Pl_0MethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
extern TypeInfo GameObjectU5BU5D_t125_il2cpp_TypeInfo;
extern TypeInfo MonoBehaviourU5BU5D_t126_il2cpp_TypeInfo;
extern TypeInfo MonoBehaviour_t5_il2cpp_TypeInfo;
extern Il2CppType GameObjectU5BU5D_t125_0_0_0;
extern Il2CppType MonoBehaviourU5BU5D_t126_0_0_0;
extern MethodInfo PlatformSpecificContent_CheckEnableContent_m361_MethodInfo;
extern MethodInfo PlatformSpecificContent_EnableContent_m362_MethodInfo;


// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::.ctor()
extern MethodInfo PlatformSpecificContent__ctor_m359_MethodInfo;
extern TypeInfo* GameObjectU5BU5D_t125_il2cpp_TypeInfo_var;
extern TypeInfo* MonoBehaviourU5BU5D_t126_il2cpp_TypeInfo_var;
extern "C" void PlatformSpecificContent__ctor_m359 (PlatformSpecificContent_t127 * __this, MethodInfo* method)
{
	static bool PlatformSpecificContent__ctor_m359_init;
	if (!PlatformSpecificContent__ctor_m359_init)
	{
		GameObjectU5BU5D_t125_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GameObjectU5BU5D_t125_0_0_0);
		MonoBehaviourU5BU5D_t126_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MonoBehaviourU5BU5D_t126_0_0_0);
		PlatformSpecificContent__ctor_m359_init = true;
	}
	{
		__this->___m_Content_3 = ((GameObjectU5BU5D_t125*)SZArrayNew(GameObjectU5BU5D_t125_il2cpp_TypeInfo_var, 0));
		__this->___m_MonoBehaviours_4 = ((MonoBehaviourU5BU5D_t126*)SZArrayNew(MonoBehaviourU5BU5D_t126_il2cpp_TypeInfo_var, 0));
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::OnEnable()
extern MethodInfo PlatformSpecificContent_OnEnable_m360_MethodInfo;
extern "C" void PlatformSpecificContent_OnEnable_m360 (PlatformSpecificContent_t127 * __this, MethodInfo* method)
{
	{
		PlatformSpecificContent_CheckEnableContent_m361(__this, /*hidden argument*/&PlatformSpecificContent_CheckEnableContent_m361_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::CheckEnableContent()
extern "C" void PlatformSpecificContent_CheckEnableContent_m361 (PlatformSpecificContent_t127 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BuildTargetGroup_2);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		PlatformSpecificContent_EnableContent_m362(__this, 1, /*hidden argument*/&PlatformSpecificContent_EnableContent_m362_MethodInfo);
		goto IL_001f;
	}

IL_0018:
	{
		PlatformSpecificContent_EnableContent_m362(__this, 0, /*hidden argument*/&PlatformSpecificContent_EnableContent_m362_MethodInfo);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.PlatformSpecificContent::EnableContent(System.Boolean)
extern "C" void PlatformSpecificContent_EnableContent_m362 (PlatformSpecificContent_t127 * __this, bool ___enabled, MethodInfo* method)
{
	GameObject_t92 * V_0 = {0};
	GameObjectU5BU5D_t125* V_1 = {0};
	int32_t V_2 = 0;
	Transform_t2 * V_3 = {0};
	Object_t * V_4 = {0};
	MonoBehaviour_t5 * V_5 = {0};
	MonoBehaviourU5BU5D_t126* V_6 = {0};
	int32_t V_7 = 0;
	Object_t * V_8 = {0};
	Exception_t204 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t204 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObjectU5BU5D_t125* L_0 = (__this->___m_Content_3);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		GameObjectU5BU5D_t125* L_1 = (__this->___m_Content_3);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		GameObjectU5BU5D_t125* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_2, L_4));
		GameObject_t92 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m642(NULL /*static, unused*/, L_5, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t92 * L_7 = V_0;
		bool L_8 = ___enabled;
		NullCheck(L_7);
		GameObject_SetActive_m770(L_7, L_8, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
	}

IL_0033:
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		GameObjectU5BU5D_t125* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0040:
	{
		bool L_12 = (__this->___m_ChildrenOfThisObject_5);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		Transform_t2 * L_13 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m768_MethodInfo, L_13);
		V_4 = L_14;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005d:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m769_MethodInfo, L_15);
			V_3 = ((Transform_t2 *)Castclass(L_16, InitializedTypeInfo(&Transform_t2_il2cpp_TypeInfo)));
			Transform_t2 * L_17 = V_3;
			NullCheck(L_17);
			GameObject_t92 * L_18 = Component_get_gameObject_m577(L_17, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
			bool L_19 = ___enabled;
			NullCheck(L_18);
			GameObject_SetActive_m770(L_18, L_19, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		}

IL_0076:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m771_MethodInfo, L_20);
			if (L_21)
			{
				goto IL_005d;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t204 *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_4;
			V_8 = ((Object_t *)IsInst(L_22, InitializedTypeInfo(&IDisposable_t203_il2cpp_TypeInfo)));
			Object_t * L_23 = V_8;
			if (L_23)
			{
				goto IL_0095;
			}
		}

IL_0094:
		{
			IL2CPP_END_FINALLY(135)
		}

IL_0095:
		{
			Object_t * L_24 = V_8;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m772_MethodInfo, L_24);
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t204 *)
	}

IL_009d:
	{
		MonoBehaviourU5BU5D_t126* L_25 = (__this->___m_MonoBehaviours_4);
		NullCheck(L_25);
		if ((((int32_t)(((int32_t)(((Array_t *)L_25)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		MonoBehaviourU5BU5D_t126* L_26 = (__this->___m_MonoBehaviours_4);
		V_6 = L_26;
		V_7 = 0;
		goto IL_00d0;
	}

IL_00bb:
	{
		MonoBehaviourU5BU5D_t126* L_27 = V_6;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		V_5 = (*(MonoBehaviour_t5 **)(MonoBehaviour_t5 **)SZArrayLdElema(L_27, L_29));
		MonoBehaviour_t5 * L_30 = V_5;
		bool L_31 = ___enabled;
		NullCheck(L_30);
		Behaviour_set_enabled_m832(L_30, L_31, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00d0:
	{
		int32_t L_33 = V_7;
		MonoBehaviourU5BU5D_t126* L_34 = V_6;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_00bb;
		}
	}

IL_00db:
	{
		return;
	}
}
// UnityStandardAssets.Utility.SimpleActivatorMenu
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleActivatorMenu_t128_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.SimpleActivatorMenu
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_SiMethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::.ctor()
extern MethodInfo SimpleActivatorMenu__ctor_m363_MethodInfo;
extern "C" void SimpleActivatorMenu__ctor_m363 (SimpleActivatorMenu_t128 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::OnEnable()
extern MethodInfo SimpleActivatorMenu_OnEnable_m364_MethodInfo;
extern "C" void SimpleActivatorMenu_OnEnable_m364 (SimpleActivatorMenu_t128 * __this, MethodInfo* method)
{
	{
		__this->___m_CurrentActiveObject_4 = 0;
		GUIText_t111 * L_0 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t125* L_1 = (__this->___objects_3);
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = Object_get_name_m820((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_0);
		GUIText_set_text_m973(L_0, L_4, /*hidden argument*/&GUIText_set_text_m973_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleActivatorMenu::NextCamera()
extern MethodInfo SimpleActivatorMenu_NextCamera_m365_MethodInfo;
extern "C" void SimpleActivatorMenu_NextCamera_m365 (SimpleActivatorMenu_t128 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___m_CurrentActiveObject_4);
		GameObjectU5BU5D_t125* L_1 = (__this->___objects_3);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))) < ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_2 = (__this->___m_CurrentActiveObject_4);
		G_B3_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0023:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		GameObjectU5BU5D_t125* L_3 = (__this->___objects_3);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_3, L_5)));
		GameObject_SetActive_m770((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_3, L_5)), ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		GameObjectU5BU5D_t125* L_10 = (__this->___objects_3);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_11 = V_0;
		__this->___m_CurrentActiveObject_4 = L_11;
		GUIText_t111 * L_12 = (__this->___camSwitchButton_2);
		GameObjectU5BU5D_t125* L_13 = (__this->___objects_3);
		int32_t L_14 = (__this->___m_CurrentActiveObject_4);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_13, L_15)));
		String_t* L_16 = Object_get_name_m820((*(GameObject_t92 **)(GameObject_t92 **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/&Object_get_name_m820_MethodInfo);
		NullCheck(L_12);
		GUIText_set_text_m973(L_12, L_16, /*hidden argument*/&GUIText_set_text_m973_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.SimpleMouseRotator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleMouseRotator_t129_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.SimpleMouseRotator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Si_0MethodDeclarations.h"

extern MethodInfo Vector2_op_Implicit_m993_MethodInfo;
extern MethodInfo Screen_get_height_m994_MethodInfo;


// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::.ctor()
extern MethodInfo SimpleMouseRotator__ctor_m366_MethodInfo;
extern "C" void SimpleMouseRotator__ctor_m366 (SimpleMouseRotator_t129 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = {0};
		Vector3__ctor_m624(&L_0, (70.0f), (70.0f), /*hidden argument*/&Vector3__ctor_m624_MethodInfo);
		Vector2_t13  L_1 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		__this->___rotationRange_2 = L_1;
		__this->___rotationSpeed_3 = (10.0f);
		__this->___dampingTime_4 = (0.2f);
		__this->___autoZeroVerticalOnMobile_5 = 1;
		__this->___relative_7 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Start()
extern MethodInfo SimpleMouseRotator_Start_m367_MethodInfo;
extern "C" void SimpleMouseRotator_Start_m367 (SimpleMouseRotator_t129 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Quaternion_t10  L_1 = Transform_get_localRotation_m611(L_0, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_OriginalRotation_11 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SimpleMouseRotator::Update()
extern MethodInfo SimpleMouseRotator_Update_m368_MethodInfo;
extern "C" void SimpleMouseRotator_Update_m368 (SimpleMouseRotator_t129 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_1 = (__this->___m_OriginalRotation_11);
		NullCheck(L_0);
		Transform_set_localRotation_m618(L_0, L_1, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		bool L_2 = (__this->___relative_7);
		if (!L_2)
		{
			goto IL_0293;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		float L_3 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_0 = L_3;
		float L_4 = CrossPlatformInputManager_GetAxis_m145(NULL /*static, unused*/, (String_t*) &_stringLiteral3, /*hidden argument*/&CrossPlatformInputManager_GetAxis_m145_MethodInfo);
		V_1 = L_4;
		Vector3_t8 * L_5 = &(__this->___m_TargetAngles_8);
		float L_6 = (L_5->___y_2);
		if ((!(((float)L_6) > ((float)(180.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t8 * L_7 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_8 = L_7;
		float L_9 = (L_8->___y_2);
		L_8->___y_2 = ((float)((float)L_9-(float)(360.0f)));
		Vector3_t8 * L_10 = &(__this->___m_FollowAngles_9);
		Vector3_t8 * L_11 = L_10;
		float L_12 = (L_11->___y_2);
		L_11->___y_2 = ((float)((float)L_12-(float)(360.0f)));
	}

IL_0075:
	{
		Vector3_t8 * L_13 = &(__this->___m_TargetAngles_8);
		float L_14 = (L_13->___x_1);
		if ((!(((float)L_14) > ((float)(180.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_t8 * L_15 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_16 = L_15;
		float L_17 = (L_16->___x_1);
		L_16->___x_1 = ((float)((float)L_17-(float)(360.0f)));
		Vector3_t8 * L_18 = &(__this->___m_FollowAngles_9);
		Vector3_t8 * L_19 = L_18;
		float L_20 = (L_19->___x_1);
		L_19->___x_1 = ((float)((float)L_20-(float)(360.0f)));
	}

IL_00b8:
	{
		Vector3_t8 * L_21 = &(__this->___m_TargetAngles_8);
		float L_22 = (L_21->___y_2);
		if ((!(((float)L_22) < ((float)(-180.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		Vector3_t8 * L_23 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_24 = L_23;
		float L_25 = (L_24->___y_2);
		L_24->___y_2 = ((float)((float)L_25+(float)(360.0f)));
		Vector3_t8 * L_26 = &(__this->___m_FollowAngles_9);
		Vector3_t8 * L_27 = L_26;
		float L_28 = (L_27->___y_2);
		L_27->___y_2 = ((float)((float)L_28+(float)(360.0f)));
	}

IL_00fb:
	{
		Vector3_t8 * L_29 = &(__this->___m_TargetAngles_8);
		float L_30 = (L_29->___x_1);
		if ((!(((float)L_30) < ((float)(-180.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector3_t8 * L_31 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_32 = L_31;
		float L_33 = (L_32->___x_1);
		L_32->___x_1 = ((float)((float)L_33+(float)(360.0f)));
		Vector3_t8 * L_34 = &(__this->___m_FollowAngles_9);
		Vector3_t8 * L_35 = L_34;
		float L_36 = (L_35->___x_1);
		L_35->___x_1 = ((float)((float)L_36+(float)(360.0f)));
	}

IL_013e:
	{
		bool L_37 = (__this->___autoZeroHorizontalOnMobile_6);
		if (!L_37)
		{
			goto IL_018e;
		}
	}
	{
		Vector3_t8 * L_38 = &(__this->___m_TargetAngles_8);
		Vector2_t13 * L_39 = &(__this->___rotationRange_2);
		float L_40 = (L_39->___y_2);
		Vector2_t13 * L_41 = &(__this->___rotationRange_2);
		float L_42 = (L_41->___y_2);
		float L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_44 = Mathf_Lerp_m615(NULL /*static, unused*/, ((float)((float)((-L_40))*(float)(0.5f))), ((float)((float)L_42*(float)(0.5f))), ((float)((float)((float)((float)L_43*(float)(0.5f)))+(float)(0.5f))), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		L_38->___y_2 = L_44;
		goto IL_01a8;
	}

IL_018e:
	{
		Vector3_t8 * L_45 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_46 = L_45;
		float L_47 = (L_46->___y_2);
		float L_48 = V_0;
		float L_49 = (__this->___rotationSpeed_3);
		L_46->___y_2 = ((float)((float)L_47+(float)((float)((float)L_48*(float)L_49))));
	}

IL_01a8:
	{
		bool L_50 = (__this->___autoZeroVerticalOnMobile_5);
		if (!L_50)
		{
			goto IL_01f8;
		}
	}
	{
		Vector3_t8 * L_51 = &(__this->___m_TargetAngles_8);
		Vector2_t13 * L_52 = &(__this->___rotationRange_2);
		float L_53 = (L_52->___x_1);
		Vector2_t13 * L_54 = &(__this->___rotationRange_2);
		float L_55 = (L_54->___x_1);
		float L_56 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_57 = Mathf_Lerp_m615(NULL /*static, unused*/, ((float)((float)((-L_53))*(float)(0.5f))), ((float)((float)L_55*(float)(0.5f))), ((float)((float)((float)((float)L_56*(float)(0.5f)))+(float)(0.5f))), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		L_51->___x_1 = L_57;
		goto IL_0212;
	}

IL_01f8:
	{
		Vector3_t8 * L_58 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_59 = L_58;
		float L_60 = (L_59->___x_1);
		float L_61 = V_1;
		float L_62 = (__this->___rotationSpeed_3);
		L_59->___x_1 = ((float)((float)L_60+(float)((float)((float)L_61*(float)L_62))));
	}

IL_0212:
	{
		Vector3_t8 * L_63 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_64 = &(__this->___m_TargetAngles_8);
		float L_65 = (L_64->___y_2);
		Vector2_t13 * L_66 = &(__this->___rotationRange_2);
		float L_67 = (L_66->___y_2);
		Vector2_t13 * L_68 = &(__this->___rotationRange_2);
		float L_69 = (L_68->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_70 = Mathf_Clamp_m616(NULL /*static, unused*/, L_65, ((float)((float)((-L_67))*(float)(0.5f))), ((float)((float)L_69*(float)(0.5f))), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		L_63->___y_2 = L_70;
		Vector3_t8 * L_71 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_72 = &(__this->___m_TargetAngles_8);
		float L_73 = (L_72->___x_1);
		Vector2_t13 * L_74 = &(__this->___rotationRange_2);
		float L_75 = (L_74->___x_1);
		Vector2_t13 * L_76 = &(__this->___rotationRange_2);
		float L_77 = (L_76->___x_1);
		float L_78 = Mathf_Clamp_m616(NULL /*static, unused*/, L_73, ((float)((float)((-L_75))*(float)(0.5f))), ((float)((float)L_77*(float)(0.5f))), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		L_71->___x_1 = L_78;
		goto IL_0325;
	}

IL_0293:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_79 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		V_2 = L_79;
		float L_80 = ((&V_2)->___x_1);
		V_0 = L_80;
		Vector3_t8  L_81 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		V_3 = L_81;
		float L_82 = ((&V_3)->___y_2);
		V_1 = L_82;
		Vector3_t8 * L_83 = &(__this->___m_TargetAngles_8);
		Vector2_t13 * L_84 = &(__this->___rotationRange_2);
		float L_85 = (L_84->___y_2);
		Vector2_t13 * L_86 = &(__this->___rotationRange_2);
		float L_87 = (L_86->___y_2);
		float L_88 = V_0;
		int32_t L_89 = Screen_get_width_m786(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m786_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_90 = Mathf_Lerp_m615(NULL /*static, unused*/, ((float)((float)((-L_85))*(float)(0.5f))), ((float)((float)L_87*(float)(0.5f))), ((float)((float)L_88/(float)(((float)L_89)))), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		L_83->___y_2 = L_90;
		Vector3_t8 * L_91 = &(__this->___m_TargetAngles_8);
		Vector2_t13 * L_92 = &(__this->___rotationRange_2);
		float L_93 = (L_92->___x_1);
		Vector2_t13 * L_94 = &(__this->___rotationRange_2);
		float L_95 = (L_94->___x_1);
		float L_96 = V_1;
		int32_t L_97 = Screen_get_height_m994(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m994_MethodInfo);
		float L_98 = Mathf_Lerp_m615(NULL /*static, unused*/, ((float)((float)((-L_93))*(float)(0.5f))), ((float)((float)L_95*(float)(0.5f))), ((float)((float)L_96/(float)(((float)L_97)))), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		L_91->___x_1 = L_98;
	}

IL_0325:
	{
		Vector3_t8  L_99 = (__this->___m_FollowAngles_9);
		Vector3_t8  L_100 = (__this->___m_TargetAngles_8);
		Vector3_t8 * L_101 = &(__this->___m_FollowVelocity_10);
		float L_102 = (__this->___dampingTime_4);
		Vector3_t8  L_103 = Vector3_SmoothDamp_m625(NULL /*static, unused*/, L_99, L_100, L_101, L_102, /*hidden argument*/&Vector3_SmoothDamp_m625_MethodInfo);
		__this->___m_FollowAngles_9 = L_103;
		Transform_t2 * L_104 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_105 = (__this->___m_OriginalRotation_11);
		Vector3_t8 * L_106 = &(__this->___m_FollowAngles_9);
		float L_107 = (L_106->___x_1);
		Vector3_t8 * L_108 = &(__this->___m_FollowAngles_9);
		float L_109 = (L_108->___y_2);
		Quaternion_t10  L_110 = Quaternion_Euler_m614(NULL /*static, unused*/, ((-L_107)), L_109, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_111 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_105, L_110, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		NullCheck(L_104);
		Transform_set_localRotation_m618(L_104, L_111, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.SmoothFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Sm.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SmoothFollow_t130_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.SmoothFollow
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_SmMethodDeclarations.h"

extern MethodInfo Mathf_LerpAngle_m995_MethodInfo;
extern MethodInfo Transform_LookAt_m996_MethodInfo;


// System.Void UnityStandardAssets.Utility.SmoothFollow::.ctor()
extern MethodInfo SmoothFollow__ctor_m369_MethodInfo;
extern "C" void SmoothFollow__ctor_m369 (SmoothFollow_t130 * __this, MethodInfo* method)
{
	{
		__this->___distance_3 = (10.0f);
		__this->___height_4 = (5.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::Start()
extern MethodInfo SmoothFollow_Start_m370_MethodInfo;
extern "C" void SmoothFollow_Start_m370 (SmoothFollow_t130 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.SmoothFollow::LateUpdate()
extern MethodInfo SmoothFollow_LateUpdate_m371_MethodInfo;
extern "C" void SmoothFollow_LateUpdate_m371 (SmoothFollow_t130 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t10  V_4 = {0};
	Vector3_t8  V_5 = {0};
	Vector3_t8  V_6 = {0};
	Vector3_t8  V_7 = {0};
	Vector3_t8  V_8 = {0};
	Vector3_t8  V_9 = {0};
	Vector3_t8  V_10 = {0};
	{
		Transform_t2 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Implicit_m582(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m582_MethodInfo);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Transform_t2 * L_2 = (__this->___target_2);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_eulerAngles_m707(L_2, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_5 = L_3;
		float L_4 = ((&V_5)->___y_2);
		V_0 = L_4;
		Transform_t2 * L_5 = (__this->___target_2);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_position_m599(L_5, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_6 = L_6;
		float L_7 = ((&V_6)->___y_2);
		float L_8 = (__this->___height_4);
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t2 * L_9 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_eulerAngles_m707(L_9, /*hidden argument*/&Transform_get_eulerAngles_m707_MethodInfo);
		V_7 = L_10;
		float L_11 = ((&V_7)->___y_2);
		V_2 = L_11;
		Transform_t2 * L_12 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_12);
		Vector3_t8  L_13 = Transform_get_position_m599(L_12, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_8 = L_13;
		float L_14 = ((&V_8)->___y_2);
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = (__this->___rotationDamping_5);
		float L_18 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_19 = Mathf_LerpAngle_m995(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/&Mathf_LerpAngle_m995_MethodInfo);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = (__this->___heightDamping_6);
		float L_23 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		float L_24 = Mathf_Lerp_m615(NULL /*static, unused*/, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		V_3 = L_24;
		float L_25 = V_2;
		Quaternion_t10  L_26 = Quaternion_Euler_m614(NULL /*static, unused*/, (0.0f), L_25, (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		V_4 = L_26;
		Transform_t2 * L_27 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_28 = (__this->___target_2);
		NullCheck(L_28);
		Vector3_t8  L_29 = Transform_get_position_m599(L_28, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_27);
		Transform_set_position_m601(L_27, L_29, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_30 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_31 = L_30;
		NullCheck(L_31);
		Vector3_t8  L_32 = Transform_get_position_m599(L_31, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Quaternion_t10  L_33 = V_4;
		Vector3_t8  L_34 = Vector3_get_forward_m651(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m651_MethodInfo);
		Vector3_t8  L_35 = Quaternion_op_Multiply_m709(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/&Quaternion_op_Multiply_m709_MethodInfo);
		float L_36 = (__this->___distance_3);
		Vector3_t8  L_37 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_38 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		NullCheck(L_31);
		Transform_set_position_m601(L_31, L_38, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_39 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_40 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_40);
		Vector3_t8  L_41 = Transform_get_position_m599(L_40, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_9 = L_41;
		float L_42 = ((&V_9)->___x_1);
		float L_43 = V_3;
		Transform_t2 * L_44 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_44);
		Vector3_t8  L_45 = Transform_get_position_m599(L_44, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_10 = L_45;
		float L_46 = ((&V_10)->___z_3);
		Vector3_t8  L_47 = {0};
		Vector3__ctor_m700(&L_47, L_42, L_43, L_46, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_39);
		Transform_set_position_m601(L_39, L_47, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_48 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Transform_t2 * L_49 = (__this->___target_2);
		NullCheck(L_48);
		Transform_LookAt_m996(L_48, L_49, /*hidden argument*/&Transform_LookAt_m996_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_t131_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_TiMethodDeclarations.h"



// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Entry_t132_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
extern MethodInfo Entry__ctor_m372_MethodInfo;
extern "C" void Entry__ctor_m372 (Entry_t132 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Entries_t134_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_1MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
extern MethodInfo Entries__ctor_m373_MethodInfo;
extern "C" void Entries__ctor_m373 (Entries_t134 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CActivateU3Ec__Iterator6_t135_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_2MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::.ctor()
extern MethodInfo U3CActivateU3Ec__Iterator6__ctor_m374_MethodInfo;
extern "C" void U3CActivateU3Ec__Iterator6__ctor_m374 (U3CActivateU3Ec__Iterator6_t135 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CActivateU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m375_MethodInfo;
extern "C" Object_t * U3CActivateU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m375 (U3CActivateU3Ec__Iterator6_t135 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CActivateU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m376_MethodInfo;
extern "C" Object_t * U3CActivateU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m376 (U3CActivateU3Ec__Iterator6_t135 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::MoveNext()
extern MethodInfo U3CActivateU3Ec__Iterator6_MoveNext_m377_MethodInfo;
extern "C" bool U3CActivateU3Ec__Iterator6_MoveNext_m377 (U3CActivateU3Ec__Iterator6_t135 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		Entry_t132 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t220 * L_4 = (WaitForSeconds_t220 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t220_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m978(L_4, L_3, /*hidden argument*/&WaitForSeconds__ctor_m978_MethodInfo);
		__this->___$current_2 = L_4;
		__this->___$PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t132 * L_5 = (__this->___entry_0);
		NullCheck(L_5);
		GameObject_t92 * L_6 = (L_5->___target_0);
		NullCheck(L_6);
		GameObject_SetActive_m770(L_6, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::Dispose()
extern MethodInfo U3CActivateU3Ec__Iterator6_Dispose_m378_MethodInfo;
extern "C" void U3CActivateU3Ec__Iterator6_Dispose_m378 (U3CActivateU3Ec__Iterator6_t135 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator6::Reset()
extern MethodInfo U3CActivateU3Ec__Iterator6_Reset_m379_MethodInfo;
extern "C" void U3CActivateU3Ec__Iterator6_Reset_m379 (U3CActivateU3Ec__Iterator6_t135 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDeactivateU3Ec__Iterator7_t136_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_3MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::.ctor()
extern MethodInfo U3CDeactivateU3Ec__Iterator7__ctor_m380_MethodInfo;
extern "C" void U3CDeactivateU3Ec__Iterator7__ctor_m380 (U3CDeactivateU3Ec__Iterator7_t136 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDeactivateU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m381_MethodInfo;
extern "C" Object_t * U3CDeactivateU3Ec__Iterator7_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m381 (U3CDeactivateU3Ec__Iterator7_t136 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDeactivateU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m382_MethodInfo;
extern "C" Object_t * U3CDeactivateU3Ec__Iterator7_System_Collections_IEnumerator_get_Current_m382 (U3CDeactivateU3Ec__Iterator7_t136 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::MoveNext()
extern MethodInfo U3CDeactivateU3Ec__Iterator7_MoveNext_m383_MethodInfo;
extern "C" bool U3CDeactivateU3Ec__Iterator7_MoveNext_m383 (U3CDeactivateU3Ec__Iterator7_t136 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0021:
	{
		Entry_t132 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t220 * L_4 = (WaitForSeconds_t220 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t220_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m978(L_4, L_3, /*hidden argument*/&WaitForSeconds__ctor_m978_MethodInfo);
		__this->___$current_2 = L_4;
		__this->___$PC_1 = 1;
		goto IL_005d;
	}

IL_0043:
	{
		Entry_t132 * L_5 = (__this->___entry_0);
		NullCheck(L_5);
		GameObject_t92 * L_6 = (L_5->___target_0);
		NullCheck(L_6);
		GameObject_SetActive_m770(L_6, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		return 1;
	}
	// Dead block : IL_005f: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::Dispose()
extern MethodInfo U3CDeactivateU3Ec__Iterator7_Dispose_m384_MethodInfo;
extern "C" void U3CDeactivateU3Ec__Iterator7_Dispose_m384 (U3CDeactivateU3Ec__Iterator7_t136 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator7::Reset()
extern MethodInfo U3CDeactivateU3Ec__Iterator7_Reset_m385_MethodInfo;
extern "C" void U3CDeactivateU3Ec__Iterator7_Reset_m385 (U3CDeactivateU3Ec__Iterator7_t136 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CReloadLevelU3Ec__Iterator8_t137_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_4MethodDeclarations.h"

extern MethodInfo Application_get_loadedLevel_m997_MethodInfo;
extern MethodInfo Application_LoadLevel_m998_MethodInfo;


// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::.ctor()
extern MethodInfo U3CReloadLevelU3Ec__Iterator8__ctor_m386_MethodInfo;
extern "C" void U3CReloadLevelU3Ec__Iterator8__ctor_m386 (U3CReloadLevelU3Ec__Iterator8_t137 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CReloadLevelU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m387_MethodInfo;
extern "C" Object_t * U3CReloadLevelU3Ec__Iterator8_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m387 (U3CReloadLevelU3Ec__Iterator8_t137 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CReloadLevelU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m388_MethodInfo;
extern "C" Object_t * U3CReloadLevelU3Ec__Iterator8_System_Collections_IEnumerator_get_Current_m388 (U3CReloadLevelU3Ec__Iterator8_t137 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::MoveNext()
extern MethodInfo U3CReloadLevelU3Ec__Iterator8_MoveNext_m389_MethodInfo;
extern "C" bool U3CReloadLevelU3Ec__Iterator8_MoveNext_m389 (U3CReloadLevelU3Ec__Iterator8_t137 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		Entry_t132 * L_2 = (__this->___entry_0);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_2);
		WaitForSeconds_t220 * L_4 = (WaitForSeconds_t220 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t220_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m978(L_4, L_3, /*hidden argument*/&WaitForSeconds__ctor_m978_MethodInfo);
		__this->___$current_2 = L_4;
		__this->___$PC_1 = 1;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_5 = Application_get_loadedLevel_m997(NULL /*static, unused*/, /*hidden argument*/&Application_get_loadedLevel_m997_MethodInfo);
		Application_LoadLevel_m998(NULL /*static, unused*/, L_5, /*hidden argument*/&Application_LoadLevel_m998_MethodInfo);
		__this->___$PC_1 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::Dispose()
extern MethodInfo U3CReloadLevelU3Ec__Iterator8_Dispose_m390_MethodInfo;
extern "C" void U3CReloadLevelU3Ec__Iterator8_Dispose_m390 (U3CReloadLevelU3Ec__Iterator8_t137 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator8::Reset()
extern MethodInfo U3CReloadLevelU3Ec__Iterator8_Reset_m391_MethodInfo;
extern "C" void U3CReloadLevelU3Ec__Iterator8_Reset_m391 (U3CReloadLevelU3Ec__Iterator8_t137 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t217 * L_0 = (NotSupportedException_t217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t217_il2cpp_TypeInfo));
		NotSupportedException__ctor_m951(L_0, /*hidden argument*/&NotSupportedException__ctor_m951_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TimedObjectActivator_t138_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectActivator
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_5MethodDeclarations.h"

extern MethodInfo TimedObjectActivator_Activate_m394_MethodInfo;
extern MethodInfo TimedObjectActivator_Deactivate_m395_MethodInfo;
extern MethodInfo Object_Destroy_m999_MethodInfo;
extern MethodInfo TimedObjectActivator_ReloadLevel_m396_MethodInfo;


// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern MethodInfo TimedObjectActivator__ctor_m392_MethodInfo;
extern "C" void TimedObjectActivator__ctor_m392 (TimedObjectActivator_t138 * __this, MethodInfo* method)
{
	{
		Entries_t134 * L_0 = (Entries_t134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Entries_t134_il2cpp_TypeInfo));
		Entries__ctor_m373(L_0, /*hidden argument*/&Entries__ctor_m373_MethodInfo);
		__this->___entries_2 = L_0;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern MethodInfo TimedObjectActivator_Awake_m393_MethodInfo;
extern "C" void TimedObjectActivator_Awake_m393 (TimedObjectActivator_t138 * __this, MethodInfo* method)
{
	Entry_t132 * V_0 = {0};
	EntryU5BU5D_t133* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		Entries_t134 * L_0 = (__this->___entries_2);
		NullCheck(L_0);
		EntryU5BU5D_t133* L_1 = (L_0->___entries_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_008c;
	}

IL_0013:
	{
		EntryU5BU5D_t133* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Entry_t132 **)(Entry_t132 **)SZArrayLdElema(L_2, L_4));
		Entry_t132 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___action_1);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0039;
		}
		if (L_7 == 1)
		{
			goto IL_004c;
		}
		if (L_7 == 2)
		{
			goto IL_005f;
		}
		if (L_7 == 3)
		{
			goto IL_0075;
		}
	}
	{
		goto IL_0088;
	}

IL_0039:
	{
		Entry_t132 * L_8 = V_0;
		Object_t * L_9 = TimedObjectActivator_Activate_m394(__this, L_8, /*hidden argument*/&TimedObjectActivator_Activate_m394_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_9, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		goto IL_0088;
	}

IL_004c:
	{
		Entry_t132 * L_10 = V_0;
		Object_t * L_11 = TimedObjectActivator_Deactivate_m395(__this, L_10, /*hidden argument*/&TimedObjectActivator_Deactivate_m395_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_11, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		goto IL_0088;
	}

IL_005f:
	{
		Entry_t132 * L_12 = V_0;
		NullCheck(L_12);
		GameObject_t92 * L_13 = (L_12->___target_0);
		Entry_t132 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = (L_14->___delay_2);
		Object_Destroy_m999(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Object_Destroy_m999_MethodInfo);
		goto IL_0088;
	}

IL_0075:
	{
		Entry_t132 * L_16 = V_0;
		Object_t * L_17 = TimedObjectActivator_ReloadLevel_m396(__this, L_16, /*hidden argument*/&TimedObjectActivator_ReloadLevel_m396_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_17, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		goto IL_0088;
	}

IL_0088:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_19 = V_2;
		EntryU5BU5D_t133* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Activate_m394 (TimedObjectActivator_t138 * __this, Entry_t132 * ___entry, MethodInfo* method)
{
	U3CActivateU3Ec__Iterator6_t135 * V_0 = {0};
	{
		U3CActivateU3Ec__Iterator6_t135 * L_0 = (U3CActivateU3Ec__Iterator6_t135 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CActivateU3Ec__Iterator6_t135_il2cpp_TypeInfo));
		U3CActivateU3Ec__Iterator6__ctor_m374(L_0, /*hidden argument*/&U3CActivateU3Ec__Iterator6__ctor_m374_MethodInfo);
		V_0 = L_0;
		U3CActivateU3Ec__Iterator6_t135 * L_1 = V_0;
		Entry_t132 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CActivateU3Ec__Iterator6_t135 * L_3 = V_0;
		Entry_t132 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3C$U3Eentry_3 = L_4;
		U3CActivateU3Ec__Iterator6_t135 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Deactivate_m395 (TimedObjectActivator_t138 * __this, Entry_t132 * ___entry, MethodInfo* method)
{
	U3CDeactivateU3Ec__Iterator7_t136 * V_0 = {0};
	{
		U3CDeactivateU3Ec__Iterator7_t136 * L_0 = (U3CDeactivateU3Ec__Iterator7_t136 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDeactivateU3Ec__Iterator7_t136_il2cpp_TypeInfo));
		U3CDeactivateU3Ec__Iterator7__ctor_m380(L_0, /*hidden argument*/&U3CDeactivateU3Ec__Iterator7__ctor_m380_MethodInfo);
		V_0 = L_0;
		U3CDeactivateU3Ec__Iterator7_t136 * L_1 = V_0;
		Entry_t132 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CDeactivateU3Ec__Iterator7_t136 * L_3 = V_0;
		Entry_t132 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3C$U3Eentry_3 = L_4;
		U3CDeactivateU3Ec__Iterator7_t136 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m396 (TimedObjectActivator_t138 * __this, Entry_t132 * ___entry, MethodInfo* method)
{
	U3CReloadLevelU3Ec__Iterator8_t137 * V_0 = {0};
	{
		U3CReloadLevelU3Ec__Iterator8_t137 * L_0 = (U3CReloadLevelU3Ec__Iterator8_t137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CReloadLevelU3Ec__Iterator8_t137_il2cpp_TypeInfo));
		U3CReloadLevelU3Ec__Iterator8__ctor_m386(L_0, /*hidden argument*/&U3CReloadLevelU3Ec__Iterator8__ctor_m386_MethodInfo);
		V_0 = L_0;
		U3CReloadLevelU3Ec__Iterator8_t137 * L_1 = V_0;
		Entry_t132 * L_2 = ___entry;
		NullCheck(L_1);
		L_1->___entry_0 = L_2;
		U3CReloadLevelU3Ec__Iterator8_t137 * L_3 = V_0;
		Entry_t132 * L_4 = ___entry;
		NullCheck(L_3);
		L_3->___U3C$U3Eentry_3 = L_4;
		U3CReloadLevelU3Ec__Iterator8_t137 * L_5 = V_0;
		return L_5;
	}
}
// UnityStandardAssets.Utility.TimedObjectDestructor
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TimedObjectDestructor_t139_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.TimedObjectDestructor
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti_6MethodDeclarations.h"

extern MethodInfo MonoBehaviour_Invoke_m1000_MethodInfo;
extern MethodInfo Transform_DetachChildren_m1001_MethodInfo;


// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::.ctor()
extern MethodInfo TimedObjectDestructor__ctor_m397_MethodInfo;
extern "C" void TimedObjectDestructor__ctor_m397 (TimedObjectDestructor_t139 * __this, MethodInfo* method)
{
	{
		__this->___m_TimeOut_2 = (1.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::Awake()
extern MethodInfo TimedObjectDestructor_Awake_m398_MethodInfo;
extern "C" void TimedObjectDestructor_Awake_m398 (TimedObjectDestructor_t139 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_TimeOut_2);
		MonoBehaviour_Invoke_m1000(__this, (String_t*) &_stringLiteral63, L_0, /*hidden argument*/&MonoBehaviour_Invoke_m1000_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectDestructor::DestroyNow()
extern MethodInfo TimedObjectDestructor_DestroyNow_m399_MethodInfo;
extern "C" void TimedObjectDestructor_DestroyNow_m399 (TimedObjectDestructor_t139 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_DetachChildren_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t2 * L_1 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_1);
		Transform_DetachChildren_m1001(L_1, /*hidden argument*/&Transform_DetachChildren_m1001_MethodInfo);
	}

IL_0016:
	{
		GameObject_t92 * L_2 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		Object_DestroyObject_m919(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyObject_m919_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaypointList_t141_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_WaMethodDeclarations.h"

extern TypeInfo TransformU5BU5D_t116_il2cpp_TypeInfo;
extern Il2CppType TransformU5BU5D_t116_0_0_0;


// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
extern MethodInfo WaypointList__ctor_m400_MethodInfo;
extern TypeInfo* TransformU5BU5D_t116_il2cpp_TypeInfo_var;
extern "C" void WaypointList__ctor_m400 (WaypointList_t141 * __this, MethodInfo* method)
{
	static bool WaypointList__ctor_m400_init;
	if (!WaypointList__ctor_m400_init)
	{
		TransformU5BU5D_t116_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TransformU5BU5D_t116_0_0_0);
		WaypointList__ctor_m400_init = true;
	}
	{
		__this->___items_1 = ((TransformU5BU5D_t116*)SZArrayNew(TransformU5BU5D_t116_il2cpp_TypeInfo_var, 0));
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RoutePoint_t142_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo RoutePoint__ctor_m401_MethodInfo;
extern "C" void RoutePoint__ctor_m401 (RoutePoint_t142 * __this, Vector3_t8  ___position, Vector3_t8  ___direction, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___position;
		__this->___position_0 = L_0;
		Vector3_t8  L_1 = ___direction;
		__this->___direction_1 = L_1;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaypointCircuit_t140_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.WaypointCircuit
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_1MethodDeclarations.h"

extern TypeInfo Vector3U5BU5D_t73_il2cpp_TypeInfo;
extern TypeInfo Color_t79_il2cpp_TypeInfo;
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t73_0_0_0;
extern MethodInfo WaypointCircuit_get_Waypoints_m405_MethodInfo;
extern MethodInfo WaypointCircuit_CachePositionsAndDistances_m410_MethodInfo;
extern MethodInfo WaypointCircuit_GetRoutePosition_m408_MethodInfo;
extern MethodInfo WaypointCircuit_get_Length_m403_MethodInfo;
extern MethodInfo WaypointCircuit_set_Length_m404_MethodInfo;
extern MethodInfo WaypointCircuit_CatmullRom_m409_MethodInfo;
extern MethodInfo WaypointCircuit_DrawGizmos_m413_MethodInfo;
extern MethodInfo Color_get_yellow_m1002_MethodInfo;
extern MethodInfo Color__ctor_m1003_MethodInfo;
extern MethodInfo Gizmos_set_color_m1004_MethodInfo;
extern MethodInfo Gizmos_DrawLine_m1005_MethodInfo;


// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern MethodInfo WaypointCircuit__ctor_m402_MethodInfo;
extern "C" void WaypointCircuit__ctor_m402 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	{
		WaypointList_t141 * L_0 = (WaypointList_t141 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaypointList_t141_il2cpp_TypeInfo));
		WaypointList__ctor_m400(L_0, /*hidden argument*/&WaypointList__ctor_m400_MethodInfo);
		__this->___waypointList_2 = L_0;
		__this->___smoothRoute_3 = 1;
		__this->___editorVisualisationSubsteps_7 = (100.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" float WaypointCircuit_get_Length_m403 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CLengthU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" void WaypointCircuit_set_Length_m404 (WaypointCircuit_t140 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CLengthU3Ek__BackingField_17 = L_0;
		return;
	}
}
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" TransformU5BU5D_t116* WaypointCircuit_get_Waypoints_m405 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	{
		WaypointList_t141 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		TransformU5BU5D_t116* L_1 = (L_0->___items_1);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern MethodInfo WaypointCircuit_Awake_m406_MethodInfo;
extern "C" void WaypointCircuit_Awake_m406 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	{
		TransformU5BU5D_t116* L_0 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		WaypointCircuit_CachePositionsAndDistances_m410(__this, /*hidden argument*/&WaypointCircuit_CachePositionsAndDistances_m410_MethodInfo);
	}

IL_0014:
	{
		TransformU5BU5D_t116* L_1 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_1);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_1)->max_length)));
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern MethodInfo WaypointCircuit_GetRoutePoint_m407_MethodInfo;
extern "C" RoutePoint_t142  WaypointCircuit_GetRoutePoint_m407 (WaypointCircuit_t140 * __this, float ___dist, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	{
		float L_0 = ___dist;
		Vector3_t8  L_1 = WaypointCircuit_GetRoutePosition_m408(__this, L_0, /*hidden argument*/&WaypointCircuit_GetRoutePosition_m408_MethodInfo);
		V_0 = L_1;
		float L_2 = ___dist;
		Vector3_t8  L_3 = WaypointCircuit_GetRoutePosition_m408(__this, ((float)((float)L_2+(float)(0.1f))), /*hidden argument*/&WaypointCircuit_GetRoutePosition_m408_MethodInfo);
		V_1 = L_3;
		Vector3_t8  L_4 = V_1;
		Vector3_t8  L_5 = V_0;
		Vector3_t8  L_6 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_2 = L_6;
		Vector3_t8  L_7 = V_0;
		Vector3_t8  L_8 = Vector3_get_normalized_m592((&V_2), /*hidden argument*/&Vector3_get_normalized_m592_MethodInfo);
		RoutePoint_t142  L_9 = {0};
		RoutePoint__ctor_m401(&L_9, L_7, L_8, /*hidden argument*/&RoutePoint__ctor_m401_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C" Vector3_t8  WaypointCircuit_GetRoutePosition_m408 (WaypointCircuit_t140 * __this, float ___dist, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		float L_0 = WaypointCircuit_get_Length_m403(__this, /*hidden argument*/&WaypointCircuit_get_Length_m403_MethodInfo);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t143* L_1 = (__this->___distances_6);
		SingleU5BU5D_t143* L_2 = (__this->___distances_6);
		NullCheck(L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1));
		WaypointCircuit_set_Length_m404(__this, (*(float*)(float*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&WaypointCircuit_set_Length_m404_MethodInfo);
	}

IL_0029:
	{
		float L_4 = ___dist;
		float L_5 = WaypointCircuit_get_Length_m403(__this, /*hidden argument*/&WaypointCircuit_get_Length_m403_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_6 = Mathf_Repeat_m741(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Mathf_Repeat_m741_MethodInfo);
		___dist = L_6;
		goto IL_0040;
	}

IL_003c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0040:
	{
		SingleU5BU5D_t143* L_8 = (__this->___distances_6);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		float L_11 = ___dist;
		if ((((float)(*(float*)(float*)SZArrayLdElema(L_8, L_10))) < ((float)L_11)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = (__this->___numPoints_4);
		int32_t L_14 = (__this->___numPoints_4);
		__this->___p1n_9 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)1))+(int32_t)L_13))%(int32_t)L_14));
		int32_t L_15 = V_0;
		__this->___p2n_10 = L_15;
		SingleU5BU5D_t143* L_16 = (__this->___distances_6);
		int32_t L_17 = (__this->___p1n_9);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		SingleU5BU5D_t143* L_19 = (__this->___distances_6);
		int32_t L_20 = (__this->___p2n_10);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		float L_22 = ___dist;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_23 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_16, L_18)), (*(float*)(float*)SZArrayLdElema(L_19, L_21)), L_22, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		__this->___i_12 = L_23;
		bool L_24 = (__this->___smoothRoute_3);
		if (!L_24)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_25 = V_0;
		int32_t L_26 = (__this->___numPoints_4);
		int32_t L_27 = (__this->___numPoints_4);
		__this->___p0n_8 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)2))+(int32_t)L_26))%(int32_t)L_27));
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->___numPoints_4);
		__this->___p3n_11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)L_29));
		int32_t L_30 = (__this->___p2n_10);
		int32_t L_31 = (__this->___numPoints_4);
		__this->___p2n_10 = ((int32_t)((int32_t)L_30%(int32_t)L_31));
		Vector3U5BU5D_t73* L_32 = (__this->___points_5);
		int32_t L_33 = (__this->___p0n_8);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		__this->___P0_13 = (*(Vector3_t8 *)((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_32, L_33)));
		Vector3U5BU5D_t73* L_34 = (__this->___points_5);
		int32_t L_35 = (__this->___p1n_9);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		__this->___P1_14 = (*(Vector3_t8 *)((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_34, L_35)));
		Vector3U5BU5D_t73* L_36 = (__this->___points_5);
		int32_t L_37 = (__this->___p2n_10);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		__this->___P2_15 = (*(Vector3_t8 *)((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_36, L_37)));
		Vector3U5BU5D_t73* L_38 = (__this->___points_5);
		int32_t L_39 = (__this->___p3n_11);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		__this->___P3_16 = (*(Vector3_t8 *)((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_38, L_39)));
		Vector3_t8  L_40 = (__this->___P0_13);
		Vector3_t8  L_41 = (__this->___P1_14);
		Vector3_t8  L_42 = (__this->___P2_15);
		Vector3_t8  L_43 = (__this->___P3_16);
		float L_44 = (__this->___i_12);
		Vector3_t8  L_45 = WaypointCircuit_CatmullRom_m409(__this, L_40, L_41, L_42, L_43, L_44, /*hidden argument*/&WaypointCircuit_CatmullRom_m409_MethodInfo);
		return L_45;
	}

IL_016c:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = (__this->___numPoints_4);
		int32_t L_48 = (__this->___numPoints_4);
		__this->___p1n_9 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_46-(int32_t)1))+(int32_t)L_47))%(int32_t)L_48));
		int32_t L_49 = V_0;
		__this->___p2n_10 = L_49;
		Vector3U5BU5D_t73* L_50 = (__this->___points_5);
		int32_t L_51 = (__this->___p1n_9);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		Vector3U5BU5D_t73* L_52 = (__this->___points_5);
		int32_t L_53 = (__this->___p2n_10);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		float L_54 = (__this->___i_12);
		Vector3_t8  L_55 = Vector3_Lerp_m600(NULL /*static, unused*/, (*(Vector3_t8 *)((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_50, L_51))), (*(Vector3_t8 *)((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_52, L_53))), L_54, /*hidden argument*/&Vector3_Lerp_m600_MethodInfo);
		return L_55;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t8  WaypointCircuit_CatmullRom_m409 (WaypointCircuit_t140 * __this, Vector3_t8  ___p0, Vector3_t8  ___p1, Vector3_t8  ___p2, Vector3_t8  ___p3, float ___i, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___p1;
		Vector3_t8  L_1 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (2.0f), L_0, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_2 = ___p0;
		Vector3_t8  L_3 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		Vector3_t8  L_4 = ___p2;
		Vector3_t8  L_5 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		float L_6 = ___i;
		Vector3_t8  L_7 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_8 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_1, L_7, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_9 = ___p0;
		Vector3_t8  L_10 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (2.0f), L_9, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_11 = ___p1;
		Vector3_t8  L_12 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (5.0f), L_11, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_13 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		Vector3_t8  L_14 = ___p2;
		Vector3_t8  L_15 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (4.0f), L_14, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_17 = ___p3;
		Vector3_t8  L_18 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		float L_19 = ___i;
		Vector3_t8  L_20 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_21 = ___i;
		Vector3_t8  L_22 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_23 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_8, L_22, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_24 = ___p0;
		Vector3_t8  L_25 = Vector3_op_UnaryNegation_m636(NULL /*static, unused*/, L_24, /*hidden argument*/&Vector3_op_UnaryNegation_m636_MethodInfo);
		Vector3_t8  L_26 = ___p1;
		Vector3_t8  L_27 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (3.0f), L_26, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_28 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_29 = ___p2;
		Vector3_t8  L_30 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (3.0f), L_29, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		Vector3_t8  L_31 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		Vector3_t8  L_32 = ___p3;
		Vector3_t8  L_33 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		float L_34 = ___i;
		Vector3_t8  L_35 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_36 = ___i;
		Vector3_t8  L_37 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_38 = ___i;
		Vector3_t8  L_39 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_40 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_23, L_39, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Vector3_t8  L_41 = Vector3_op_Multiply_m717(NULL /*static, unused*/, (0.5f), L_40, /*hidden argument*/&Vector3_op_Multiply_m717_MethodInfo);
		return L_41;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern TypeInfo* Vector3U5BU5D_t73_il2cpp_TypeInfo_var;
extern TypeInfo* SingleU5BU5D_t143_il2cpp_TypeInfo_var;
extern "C" void WaypointCircuit_CachePositionsAndDistances_m410 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	static bool WaypointCircuit_CachePositionsAndDistances_m410_init;
	if (!WaypointCircuit_CachePositionsAndDistances_m410_init)
	{
		Vector3U5BU5D_t73_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t73_0_0_0);
		SingleU5BU5D_t143_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t143_0_0_0);
		WaypointCircuit_CachePositionsAndDistances_m410_init = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_t2 * V_2 = {0};
	Transform_t2 * V_3 = {0};
	Vector3_t8  V_4 = {0};
	Vector3_t8  V_5 = {0};
	Vector3_t8  V_6 = {0};
	{
		TransformU5BU5D_t116* L_0 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_0);
		__this->___points_5 = ((Vector3U5BU5D_t73*)SZArrayNew(Vector3U5BU5D_t73_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))+(int32_t)1))));
		TransformU5BU5D_t116* L_1 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_1);
		__this->___distances_6 = ((SingleU5BU5D_t143*)SZArrayNew(SingleU5BU5D_t143_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))+(int32_t)1))));
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00ce;
	}

IL_0037:
	{
		TransformU5BU5D_t116* L_2 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_3 = V_1;
		TransformU5BU5D_t116* L_4 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))));
		int32_t L_5 = ((int32_t)((int32_t)L_3%(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
		V_2 = (*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_2, L_5));
		TransformU5BU5D_t116* L_6 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_7 = V_1;
		TransformU5BU5D_t116* L_8 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_3 = (*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_6, L_9));
		Transform_t2 * L_10 = V_2;
		bool L_11 = Object_op_Inequality_m642(NULL /*static, unused*/, L_10, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_11)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t2 * L_12 = V_3;
		bool L_13 = Object_op_Inequality_m642(NULL /*static, unused*/, L_12, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		Transform_t2 * L_14 = V_2;
		NullCheck(L_14);
		Vector3_t8  L_15 = Transform_get_position_m599(L_14, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_4 = L_15;
		Transform_t2 * L_16 = V_3;
		NullCheck(L_16);
		Vector3_t8  L_17 = Transform_get_position_m599(L_16, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_5 = L_17;
		Vector3U5BU5D_t73* L_18 = (__this->___points_5);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		TransformU5BU5D_t116* L_20 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_21 = V_1;
		TransformU5BU5D_t116* L_22 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))));
		int32_t L_23 = ((int32_t)((int32_t)L_21%(int32_t)(((int32_t)(((Array_t *)L_22)->max_length)))));
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_20, L_23)));
		Vector3_t8  L_24 = Transform_get_position_m599((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_20, L_23)), /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		*((Vector3_t8 *)(Vector3_t8 *)SZArrayLdElema(L_18, L_19)) = L_24;
		SingleU5BU5D_t143* L_25 = (__this->___distances_6);
		int32_t L_26 = V_1;
		float L_27 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		*((float*)(float*)SZArrayLdElema(L_25, L_26)) = (float)L_27;
		float L_28 = V_0;
		Vector3_t8  L_29 = V_4;
		Vector3_t8  L_30 = V_5;
		Vector3_t8  L_31 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_6 = L_31;
		float L_32 = Vector3_get_magnitude_m591((&V_6), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		V_0 = ((float)((float)L_28+(float)L_32));
	}

IL_00ca:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_34 = V_1;
		Vector3U5BU5D_t73* L_35 = (__this->___points_5);
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)(((Array_t *)L_35)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern MethodInfo WaypointCircuit_OnDrawGizmos_m411_MethodInfo;
extern "C" void WaypointCircuit_OnDrawGizmos_m411 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	{
		WaypointCircuit_DrawGizmos_m413(__this, 0, /*hidden argument*/&WaypointCircuit_DrawGizmos_m413_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern MethodInfo WaypointCircuit_OnDrawGizmosSelected_m412_MethodInfo;
extern "C" void WaypointCircuit_OnDrawGizmosSelected_m412 (WaypointCircuit_t140 * __this, MethodInfo* method)
{
	{
		WaypointCircuit_DrawGizmos_m413(__this, 1, /*hidden argument*/&WaypointCircuit_DrawGizmos_m413_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" void WaypointCircuit_DrawGizmos_m413 (WaypointCircuit_t140 * __this, bool ___selected, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	int32_t V_3 = 0;
	Vector3_t8  V_4 = {0};
	Color_t79  G_B4_0 = {0};
	{
		WaypointList_t141 * L_0 = (__this->___waypointList_2);
		NullCheck(L_0);
		L_0->___circuit_0 = __this;
		TransformU5BU5D_t116* L_1 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		TransformU5BU5D_t116* L_2 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_2);
		__this->___numPoints_4 = (((int32_t)(((Array_t *)L_2)->max_length)));
		WaypointCircuit_CachePositionsAndDistances_m410(__this, /*hidden argument*/&WaypointCircuit_CachePositionsAndDistances_m410_MethodInfo);
		SingleU5BU5D_t143* L_3 = (__this->___distances_6);
		SingleU5BU5D_t143* L_4 = (__this->___distances_6);
		NullCheck(L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		WaypointCircuit_set_Length_m404(__this, (*(float*)(float*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&WaypointCircuit_set_Length_m404_MethodInfo);
		bool L_6 = ___selected;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		Color_t79  L_7 = Color_get_yellow_m1002(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m1002_MethodInfo);
		G_B4_0 = L_7;
		goto IL_006e;
	}

IL_0055:
	{
		Color_t79  L_8 = {0};
		Color__ctor_m1003(&L_8, (1.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/&Color__ctor_m1003_MethodInfo);
		G_B4_0 = L_8;
	}

IL_006e:
	{
		Gizmos_set_color_m1004(NULL /*static, unused*/, G_B4_0, /*hidden argument*/&Gizmos_set_color_m1004_MethodInfo);
		TransformU5BU5D_t116* L_9 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_9, L_10)));
		Vector3_t8  L_11 = Transform_get_position_m599((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_9, L_10)), /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_0 = L_11;
		bool L_12 = (__this->___smoothRoute_3);
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00be;
	}

IL_0097:
	{
		float L_13 = V_1;
		Vector3_t8  L_14 = WaypointCircuit_GetRoutePosition_m408(__this, ((float)((float)L_13+(float)(1.0f))), /*hidden argument*/&WaypointCircuit_GetRoutePosition_m408_MethodInfo);
		V_2 = L_14;
		Vector3_t8  L_15 = V_0;
		Vector3_t8  L_16 = V_2;
		Gizmos_DrawLine_m1005(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&Gizmos_DrawLine_m1005_MethodInfo);
		Vector3_t8  L_17 = V_2;
		V_0 = L_17;
		float L_18 = V_1;
		float L_19 = WaypointCircuit_get_Length_m403(__this, /*hidden argument*/&WaypointCircuit_get_Length_m403_MethodInfo);
		float L_20 = (__this->___editorVisualisationSubsteps_7);
		V_1 = ((float)((float)L_18+(float)((float)((float)L_19/(float)L_20))));
	}

IL_00be:
	{
		float L_21 = V_1;
		float L_22 = WaypointCircuit_get_Length_m403(__this, /*hidden argument*/&WaypointCircuit_get_Length_m403_MethodInfo);
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t8  L_23 = V_0;
		TransformU5BU5D_t116* L_24 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_24, L_25)));
		Vector3_t8  L_26 = Transform_get_position_m599((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_24, L_25)), /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Gizmos_DrawLine_m1005(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/&Gizmos_DrawLine_m1005_MethodInfo);
		goto IL_0120;
	}

IL_00e2:
	{
		V_3 = 0;
		goto IL_0112;
	}

IL_00e9:
	{
		TransformU5BU5D_t116* L_27 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_28 = V_3;
		TransformU5BU5D_t116* L_29 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_29);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))));
		int32_t L_30 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_29)->max_length)))));
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_27, L_30)));
		Vector3_t8  L_31 = Transform_get_position_m599((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_27, L_30)), /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_4 = L_31;
		Vector3_t8  L_32 = V_0;
		Vector3_t8  L_33 = V_4;
		Gizmos_DrawLine_m1005(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/&Gizmos_DrawLine_m1005_MethodInfo);
		Vector3_t8  L_34 = V_4;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_0112:
	{
		int32_t L_36 = V_3;
		TransformU5BU5D_t116* L_37 = WaypointCircuit_get_Waypoints_m405(__this, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)(((Array_t *)L_37)->max_length))))))
		{
			goto IL_00e9;
		}
	}

IL_0120:
	{
		return;
	}
}
// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProgressStyle_t144_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_2MethodDeclarations.h"



// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaypointProgressTracker_t145_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.WaypointProgressTracker
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_3MethodDeclarations.h"

extern MethodInfo WaypointProgressTracker_Reset_m422_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m1006_MethodInfo;
extern MethodInfo WaypointProgressTracker_set_progressPoint_m420_MethodInfo;
extern MethodInfo WaypointProgressTracker_get_progressPoint_m419_MethodInfo;
extern MethodInfo Color_get_green_m1007_MethodInfo;
extern MethodInfo Gizmos_DrawWireSphere_m1008_MethodInfo;


// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
extern MethodInfo WaypointProgressTracker__ctor_m414_MethodInfo;
extern "C" void WaypointProgressTracker__ctor_m414 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		__this->___lookAheadForTargetOffset_3 = (5.0f);
		__this->___lookAheadForTargetFactor_4 = (0.1f);
		__this->___lookAheadForSpeedOffset_5 = (10.0f);
		__this->___lookAheadForSpeedFactor_6 = (0.2f);
		__this->___pointToPointThreshold_8 = (4.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
extern MethodInfo WaypointProgressTracker_get_targetPoint_m415_MethodInfo;
extern "C" RoutePoint_t142  WaypointProgressTracker_get_targetPoint_m415 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		RoutePoint_t142  L_0 = (__this->___U3CtargetPointU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern MethodInfo WaypointProgressTracker_set_targetPoint_m416_MethodInfo;
extern "C" void WaypointProgressTracker_set_targetPoint_m416 (WaypointProgressTracker_t145 * __this, RoutePoint_t142  ___value, MethodInfo* method)
{
	{
		RoutePoint_t142  L_0 = ___value;
		__this->___U3CtargetPointU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
extern MethodInfo WaypointProgressTracker_get_speedPoint_m417_MethodInfo;
extern "C" RoutePoint_t142  WaypointProgressTracker_get_speedPoint_m417 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		RoutePoint_t142  L_0 = (__this->___U3CspeedPointU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern MethodInfo WaypointProgressTracker_set_speedPoint_m418_MethodInfo;
extern "C" void WaypointProgressTracker_set_speedPoint_m418 (WaypointProgressTracker_t145 * __this, RoutePoint_t142  ___value, MethodInfo* method)
{
	{
		RoutePoint_t142  L_0 = ___value;
		__this->___U3CspeedPointU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C" RoutePoint_t142  WaypointProgressTracker_get_progressPoint_m419 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		RoutePoint_t142  L_0 = (__this->___U3CprogressPointU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C" void WaypointProgressTracker_set_progressPoint_m420 (WaypointProgressTracker_t145 * __this, RoutePoint_t142  ___value, MethodInfo* method)
{
	{
		RoutePoint_t142  L_0 = ___value;
		__this->___U3CprogressPointU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
extern MethodInfo WaypointProgressTracker_Start_m421_MethodInfo;
extern "C" void WaypointProgressTracker_Start_m421 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___target_9);
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = Object_get_name_m820(__this, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m988(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral64, /*hidden argument*/&String_Concat_m988_MethodInfo);
		GameObject_t92 * L_4 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m956(L_4, L_3, /*hidden argument*/&GameObject__ctor_m956_MethodInfo);
		NullCheck(L_4);
		Transform_t2 * L_5 = GameObject_get_transform_m583(L_4, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		__this->___target_9 = L_5;
	}

IL_0031:
	{
		WaypointProgressTracker_Reset_m422(__this, /*hidden argument*/&WaypointProgressTracker_Reset_m422_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
extern "C" void WaypointProgressTracker_Reset_m422 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		__this->___progressDistance_10 = (0.0f);
		__this->___progressNum_11 = 0;
		int32_t L_0 = (__this->___progressStyle_7);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		Transform_t2 * L_1 = (__this->___target_9);
		WaypointCircuit_t140 * L_2 = (__this->___circuit_2);
		NullCheck(L_2);
		TransformU5BU5D_t116* L_3 = WaypointCircuit_get_Waypoints_m405(L_2, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_4 = (__this->___progressNum_11);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_3, L_5)));
		Vector3_t8  L_6 = Transform_get_position_m599((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_1);
		Transform_set_position_m601(L_1, L_6, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_7 = (__this->___target_9);
		WaypointCircuit_t140 * L_8 = (__this->___circuit_2);
		NullCheck(L_8);
		TransformU5BU5D_t116* L_9 = WaypointCircuit_get_Waypoints_m405(L_8, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_10 = (__this->___progressNum_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_9, L_11)));
		Quaternion_t10  L_12 = Transform_get_rotation_m605((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		NullCheck(L_7);
		Transform_set_rotation_m607(L_7, L_12, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
extern MethodInfo WaypointProgressTracker_Update_m423_MethodInfo;
extern "C" void WaypointProgressTracker_Update_m423 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	RoutePoint_t142  V_4 = {0};
	RoutePoint_t142  V_5 = {0};
	RoutePoint_t142  V_6 = {0};
	RoutePoint_t142  V_7 = {0};
	RoutePoint_t142  V_8 = {0};
	RoutePoint_t142  V_9 = {0};
	{
		int32_t L_0 = (__this->___progressStyle_7);
		if (L_0)
		{
			goto IL_0153;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = (__this->___speed_13);
		Vector3_t8  L_3 = (__this->___lastPosition_12);
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_position_m599(L_4, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_6 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_3 = L_6;
		float L_7 = Vector3_get_magnitude_m591((&V_3), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_8 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		float L_9 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_10 = Mathf_Lerp_m615(NULL /*static, unused*/, L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		__this->___speed_13 = L_10;
	}

IL_0054:
	{
		Transform_t2 * L_11 = (__this->___target_9);
		WaypointCircuit_t140 * L_12 = (__this->___circuit_2);
		float L_13 = (__this->___progressDistance_10);
		float L_14 = (__this->___lookAheadForTargetOffset_3);
		float L_15 = (__this->___lookAheadForTargetFactor_4);
		float L_16 = (__this->___speed_13);
		NullCheck(L_12);
		RoutePoint_t142  L_17 = WaypointCircuit_GetRoutePoint_m407(L_12, ((float)((float)((float)((float)L_13+(float)L_14))+(float)((float)((float)L_15*(float)L_16)))), /*hidden argument*/&WaypointCircuit_GetRoutePoint_m407_MethodInfo);
		V_4 = L_17;
		Vector3_t8  L_18 = ((&V_4)->___position_0);
		NullCheck(L_11);
		Transform_set_position_m601(L_11, L_18, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_19 = (__this->___target_9);
		WaypointCircuit_t140 * L_20 = (__this->___circuit_2);
		float L_21 = (__this->___progressDistance_10);
		float L_22 = (__this->___lookAheadForSpeedOffset_5);
		float L_23 = (__this->___lookAheadForSpeedFactor_6);
		float L_24 = (__this->___speed_13);
		NullCheck(L_20);
		RoutePoint_t142  L_25 = WaypointCircuit_GetRoutePoint_m407(L_20, ((float)((float)((float)((float)L_21+(float)L_22))+(float)((float)((float)L_23*(float)L_24)))), /*hidden argument*/&WaypointCircuit_GetRoutePoint_m407_MethodInfo);
		V_5 = L_25;
		Vector3_t8  L_26 = ((&V_5)->___direction_1);
		Quaternion_t10  L_27 = Quaternion_LookRotation_m1006(NULL /*static, unused*/, L_26, /*hidden argument*/&Quaternion_LookRotation_m1006_MethodInfo);
		NullCheck(L_19);
		Transform_set_rotation_m607(L_19, L_27, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		WaypointCircuit_t140 * L_28 = (__this->___circuit_2);
		float L_29 = (__this->___progressDistance_10);
		NullCheck(L_28);
		RoutePoint_t142  L_30 = WaypointCircuit_GetRoutePoint_m407(L_28, L_29, /*hidden argument*/&WaypointCircuit_GetRoutePoint_m407_MethodInfo);
		WaypointProgressTracker_set_progressPoint_m420(__this, L_30, /*hidden argument*/&WaypointProgressTracker_set_progressPoint_m420_MethodInfo);
		RoutePoint_t142  L_31 = WaypointProgressTracker_get_progressPoint_m419(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m419_MethodInfo);
		V_6 = L_31;
		Vector3_t8  L_32 = ((&V_6)->___position_0);
		Transform_t2 * L_33 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_33);
		Vector3_t8  L_34 = Transform_get_position_m599(L_33, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_35 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_0 = L_35;
		Vector3_t8  L_36 = V_0;
		RoutePoint_t142  L_37 = WaypointProgressTracker_get_progressPoint_m419(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m419_MethodInfo);
		V_7 = L_37;
		Vector3_t8  L_38 = ((&V_7)->___direction_1);
		float L_39 = Vector3_Dot_m851(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_013d;
		}
	}
	{
		float L_40 = (__this->___progressDistance_10);
		float L_41 = Vector3_get_magnitude_m591((&V_0), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		__this->___progressDistance_10 = ((float)((float)L_40+(float)((float)((float)L_41*(float)(0.5f)))));
	}

IL_013d:
	{
		Transform_t2 * L_42 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_42);
		Vector3_t8  L_43 = Transform_get_position_m599(L_42, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___lastPosition_12 = L_43;
		goto IL_025c;
	}

IL_0153:
	{
		Transform_t2 * L_44 = (__this->___target_9);
		NullCheck(L_44);
		Vector3_t8  L_45 = Transform_get_position_m599(L_44, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_46 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_46);
		Vector3_t8  L_47 = Transform_get_position_m599(L_46, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_48 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_1 = L_48;
		float L_49 = Vector3_get_magnitude_m591((&V_1), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		float L_50 = (__this->___pointToPointThreshold_8);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_51 = (__this->___progressNum_11);
		WaypointCircuit_t140 * L_52 = (__this->___circuit_2);
		NullCheck(L_52);
		TransformU5BU5D_t116* L_53 = WaypointCircuit_get_Waypoints_m405(L_52, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		NullCheck(L_53);
		__this->___progressNum_11 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51+(int32_t)1))%(int32_t)(((int32_t)(((Array_t *)L_53)->max_length)))));
	}

IL_019d:
	{
		Transform_t2 * L_54 = (__this->___target_9);
		WaypointCircuit_t140 * L_55 = (__this->___circuit_2);
		NullCheck(L_55);
		TransformU5BU5D_t116* L_56 = WaypointCircuit_get_Waypoints_m405(L_55, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_57 = (__this->___progressNum_11);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		int32_t L_58 = L_57;
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_56, L_58)));
		Vector3_t8  L_59 = Transform_get_position_m599((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_56, L_58)), /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		NullCheck(L_54);
		Transform_set_position_m601(L_54, L_59, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_60 = (__this->___target_9);
		WaypointCircuit_t140 * L_61 = (__this->___circuit_2);
		NullCheck(L_61);
		TransformU5BU5D_t116* L_62 = WaypointCircuit_get_Waypoints_m405(L_61, /*hidden argument*/&WaypointCircuit_get_Waypoints_m405_MethodInfo);
		int32_t L_63 = (__this->___progressNum_11);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		NullCheck((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_62, L_64)));
		Quaternion_t10  L_65 = Transform_get_rotation_m605((*(Transform_t2 **)(Transform_t2 **)SZArrayLdElema(L_62, L_64)), /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		NullCheck(L_60);
		Transform_set_rotation_m607(L_60, L_65, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		WaypointCircuit_t140 * L_66 = (__this->___circuit_2);
		float L_67 = (__this->___progressDistance_10);
		NullCheck(L_66);
		RoutePoint_t142  L_68 = WaypointCircuit_GetRoutePoint_m407(L_66, L_67, /*hidden argument*/&WaypointCircuit_GetRoutePoint_m407_MethodInfo);
		WaypointProgressTracker_set_progressPoint_m420(__this, L_68, /*hidden argument*/&WaypointProgressTracker_set_progressPoint_m420_MethodInfo);
		RoutePoint_t142  L_69 = WaypointProgressTracker_get_progressPoint_m419(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m419_MethodInfo);
		V_8 = L_69;
		Vector3_t8  L_70 = ((&V_8)->___position_0);
		Transform_t2 * L_71 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_71);
		Vector3_t8  L_72 = Transform_get_position_m599(L_71, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_73 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_70, L_72, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_2 = L_73;
		Vector3_t8  L_74 = V_2;
		RoutePoint_t142  L_75 = WaypointProgressTracker_get_progressPoint_m419(__this, /*hidden argument*/&WaypointProgressTracker_get_progressPoint_m419_MethodInfo);
		V_9 = L_75;
		Vector3_t8  L_76 = ((&V_9)->___direction_1);
		float L_77 = Vector3_Dot_m851(NULL /*static, unused*/, L_74, L_76, /*hidden argument*/&Vector3_Dot_m851_MethodInfo);
		if ((!(((float)L_77) < ((float)(0.0f)))))
		{
			goto IL_024b;
		}
	}
	{
		float L_78 = (__this->___progressDistance_10);
		float L_79 = Vector3_get_magnitude_m591((&V_2), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		__this->___progressDistance_10 = ((float)((float)L_78+(float)L_79));
	}

IL_024b:
	{
		Transform_t2 * L_80 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_80);
		Vector3_t8  L_81 = Transform_get_position_m599(L_80, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___lastPosition_12 = L_81;
	}

IL_025c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
extern MethodInfo WaypointProgressTracker_OnDrawGizmos_m424_MethodInfo;
extern "C" void WaypointProgressTracker_OnDrawGizmos_m424 (WaypointProgressTracker_t145 * __this, MethodInfo* method)
{
	{
		bool L_0 = Application_get_isPlaying_m589(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m589_MethodInfo);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Color_t79  L_1 = Color_get_green_m1007(NULL /*static, unused*/, /*hidden argument*/&Color_get_green_m1007_MethodInfo);
		Gizmos_set_color_m1004(NULL /*static, unused*/, L_1, /*hidden argument*/&Gizmos_set_color_m1004_MethodInfo);
		Transform_t2 * L_2 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_4 = (__this->___target_9);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_position_m599(L_4, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Gizmos_DrawLine_m1005(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Gizmos_DrawLine_m1005_MethodInfo);
		WaypointCircuit_t140 * L_6 = (__this->___circuit_2);
		float L_7 = (__this->___progressDistance_10);
		NullCheck(L_6);
		Vector3_t8  L_8 = WaypointCircuit_GetRoutePosition_m408(L_6, L_7, /*hidden argument*/&WaypointCircuit_GetRoutePosition_m408_MethodInfo);
		Gizmos_DrawWireSphere_m1008(NULL /*static, unused*/, L_8, (1.0f), /*hidden argument*/&Gizmos_DrawWireSphere_m1008_MethodInfo);
		Color_t79  L_9 = Color_get_yellow_m1002(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m1002_MethodInfo);
		Gizmos_set_color_m1004(NULL /*static, unused*/, L_9, /*hidden argument*/&Gizmos_set_color_m1004_MethodInfo);
		Transform_t2 * L_10 = (__this->___target_9);
		NullCheck(L_10);
		Vector3_t8  L_11 = Transform_get_position_m599(L_10, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_12 = (__this->___target_9);
		NullCheck(L_12);
		Vector3_t8  L_13 = Transform_get_position_m599(L_12, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_14 = (__this->___target_9);
		NullCheck(L_14);
		Vector3_t8  L_15 = Transform_get_forward_m587(L_14, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		Gizmos_DrawLine_m1005(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/&Gizmos_DrawLine_m1005_MethodInfo);
	}

IL_007f:
	{
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AeroplaneAiControl_t147_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_AMethodDeclarations.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_5.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_5MethodDeclarations.h"
extern MethodInfo AeroplaneController_get_PitchAngle_m453_MethodInfo;
extern MethodInfo AeroplaneController_get_Altitude_m440_MethodInfo;
extern MethodInfo AeroplaneController_get_RollAngle_m451_MethodInfo;
extern MethodInfo AeroplaneController_get_ForwardSpeed_m446_MethodInfo;
extern MethodInfo AeroplaneController_Move_m464_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_15.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController>()
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController>()
#define Component_GetComponent_TisAeroplaneController_t146_m1009(__this, method) (( AeroplaneController_t146 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::.ctor()
extern MethodInfo AeroplaneAiControl__ctor_m425_MethodInfo;
extern "C" void AeroplaneAiControl__ctor_m425 (AeroplaneAiControl_t147 * __this, MethodInfo* method)
{
	{
		__this->___m_RollSensitivity_2 = (0.2f);
		__this->___m_PitchSensitivity_3 = (0.5f);
		__this->___m_LateralWanderDistance_4 = (5.0f);
		__this->___m_LateralWanderSpeed_5 = (0.11f);
		__this->___m_MaxClimbAngle_6 = (45.0f);
		__this->___m_MaxRollAngle_7 = (45.0f);
		__this->___m_SpeedEffect_8 = (0.01f);
		__this->___m_TakeoffHeight_9 = (20.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::Awake()
extern MethodInfo AeroplaneAiControl_Awake_m426_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern "C" void AeroplaneAiControl_Awake_m426 (AeroplaneAiControl_t147 * __this, MethodInfo* method)
{
	static bool AeroplaneAiControl_Awake_m426_init;
	if (!AeroplaneAiControl_Awake_m426_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		AeroplaneAiControl_Awake_m426_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_AeroplaneController_11 = L_0;
		float L_1 = Random_Range_m987(NULL /*static, unused*/, (0.0f), (100.0f), /*hidden argument*/&Random_Range_m987_MethodInfo);
		__this->___m_RandomPerlin_12 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::Reset()
extern MethodInfo AeroplaneAiControl_Reset_m427_MethodInfo;
extern "C" void AeroplaneAiControl_Reset_m427 (AeroplaneAiControl_t147 * __this, MethodInfo* method)
{
	{
		__this->___m_TakenOff_13 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::FixedUpdate()
extern MethodInfo AeroplaneAiControl_FixedUpdate_m428_MethodInfo;
extern "C" void AeroplaneAiControl_FixedUpdate_m428 (AeroplaneAiControl_t147 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		Transform_t2 * L_0 = (__this->___m_Target_10);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0192;
		}
	}
	{
		Transform_t2 * L_2 = (__this->___m_Target_10);
		NullCheck(L_2);
		Vector3_t8  L_3 = Transform_get_position_m599(L_2, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_right_m668(L_4, /*hidden argument*/&Transform_get_right_m668_MethodInfo);
		float L_6 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		float L_7 = (__this->___m_LateralWanderSpeed_5);
		float L_8 = (__this->___m_RandomPerlin_12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_9 = Mathf_PerlinNoise_m620(NULL /*static, unused*/, ((float)((float)L_6*(float)L_7)), L_8, /*hidden argument*/&Mathf_PerlinNoise_m620_MethodInfo);
		Vector3_t8  L_10 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_5, ((float)((float)((float)((float)L_9*(float)(2.0f)))-(float)(1.0f))), /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_11 = (__this->___m_LateralWanderDistance_4);
		Vector3_t8  L_12 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_13 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_3, L_12, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		V_0 = L_13;
		Transform_t2 * L_14 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_15 = V_0;
		NullCheck(L_14);
		Vector3_t8  L_16 = Transform_InverseTransformPoint_m622(L_14, L_15, /*hidden argument*/&Transform_InverseTransformPoint_m622_MethodInfo);
		V_1 = L_16;
		float L_17 = ((&V_1)->___x_1);
		float L_18 = ((&V_1)->___z_3);
		float L_19 = atan2f(L_17, L_18);
		V_2 = L_19;
		float L_20 = ((&V_1)->___y_2);
		float L_21 = ((&V_1)->___z_3);
		float L_22 = atan2f(L_20, L_21);
		V_3 = ((-L_22));
		float L_23 = V_3;
		float L_24 = (__this->___m_MaxClimbAngle_6);
		float L_25 = (__this->___m_MaxClimbAngle_6);
		float L_26 = Mathf_Clamp_m616(NULL /*static, unused*/, L_23, ((float)((float)((-L_24))*(float)(0.0174532924f))), ((float)((float)L_25*(float)(0.0174532924f))), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_3 = L_26;
		float L_27 = V_3;
		AeroplaneController_t146 * L_28 = (__this->___m_AeroplaneController_11);
		NullCheck(L_28);
		float L_29 = AeroplaneController_get_PitchAngle_m453(L_28, /*hidden argument*/&AeroplaneController_get_PitchAngle_m453_MethodInfo);
		V_4 = ((float)((float)L_27-(float)L_29));
		float L_30 = V_4;
		float L_31 = (__this->___m_PitchSensitivity_3);
		V_6 = ((float)((float)L_30*(float)L_31));
		float L_32 = V_2;
		float L_33 = (__this->___m_MaxRollAngle_7);
		float L_34 = (__this->___m_MaxRollAngle_7);
		float L_35 = Mathf_Clamp_m616(NULL /*static, unused*/, L_32, ((float)((float)((-L_33))*(float)(0.0174532924f))), ((float)((float)L_34*(float)(0.0174532924f))), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_7 = L_35;
		V_8 = (0.0f);
		V_9 = (0.0f);
		bool L_36 = (__this->___m_TakenOff_13);
		if (L_36)
		{
			goto IL_012c;
		}
	}
	{
		AeroplaneController_t146 * L_37 = (__this->___m_AeroplaneController_11);
		NullCheck(L_37);
		float L_38 = AeroplaneController_get_Altitude_m440(L_37, /*hidden argument*/&AeroplaneController_get_Altitude_m440_MethodInfo);
		float L_39 = (__this->___m_TakeoffHeight_9);
		if ((!(((float)L_38) > ((float)L_39))))
		{
			goto IL_0127;
		}
	}
	{
		__this->___m_TakenOff_13 = 1;
	}

IL_0127:
	{
		goto IL_0147;
	}

IL_012c:
	{
		float L_40 = V_2;
		V_8 = L_40;
		AeroplaneController_t146 * L_41 = (__this->___m_AeroplaneController_11);
		NullCheck(L_41);
		float L_42 = AeroplaneController_get_RollAngle_m451(L_41, /*hidden argument*/&AeroplaneController_get_RollAngle_m451_MethodInfo);
		float L_43 = V_7;
		float L_44 = (__this->___m_RollSensitivity_2);
		V_9 = ((float)((float)((-((float)((float)L_42-(float)L_43))))*(float)L_44));
	}

IL_0147:
	{
		AeroplaneController_t146 * L_45 = (__this->___m_AeroplaneController_11);
		NullCheck(L_45);
		float L_46 = AeroplaneController_get_ForwardSpeed_m446(L_45, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		float L_47 = (__this->___m_SpeedEffect_8);
		V_10 = ((float)((float)(1.0f)+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = V_9;
		float L_49 = V_10;
		V_9 = ((float)((float)L_48*(float)L_49));
		float L_50 = V_6;
		float L_51 = V_10;
		V_6 = ((float)((float)L_50*(float)L_51));
		float L_52 = V_8;
		float L_53 = V_10;
		V_8 = ((float)((float)L_52*(float)L_53));
		AeroplaneController_t146 * L_54 = (__this->___m_AeroplaneController_11);
		float L_55 = V_9;
		float L_56 = V_6;
		float L_57 = V_8;
		NullCheck(L_54);
		AeroplaneController_Move_m464(L_54, L_55, L_56, L_57, (0.5f), 0, /*hidden argument*/&AeroplaneController_Move_m464_MethodInfo);
		goto IL_01b2;
	}

IL_0192:
	{
		AeroplaneController_t146 * L_58 = (__this->___m_AeroplaneController_11);
		NullCheck(L_58);
		AeroplaneController_Move_m464(L_58, (0.0f), (0.0f), (0.0f), (0.0f), 0, /*hidden argument*/&AeroplaneController_Move_m464_MethodInfo);
	}

IL_01b2:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::SetTarget(UnityEngine.Transform)
extern MethodInfo AeroplaneAiControl_SetTarget_m429_MethodInfo;
extern "C" void AeroplaneAiControl_SetTarget_m429 (AeroplaneAiControl_t147 * __this, Transform_t2 * ___target, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___target;
		__this->___m_Target_10 = L_0;
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AdvancedSetttings_t148_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_0MethodDeclarations.h"



// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings::.ctor()
extern MethodInfo AdvancedSetttings__ctor_m430_MethodInfo;
extern "C" void AdvancedSetttings__ctor_m430 (AdvancedSetttings_t148 * __this, MethodInfo* method)
{
	{
		__this->___engineMinDistance_0 = (50.0f);
		__this->___engineMaxDistance_1 = (1000.0f);
		__this->___engineDopplerLevel_2 = (1.0f);
		__this->___engineMasterVolume_3 = (0.5f);
		__this->___windMinDistance_4 = (10.0f);
		__this->___windMaxDistance_5 = (100.0f);
		__this->___windDopplerLevel_6 = (1.0f);
		__this->___windMasterVolume_7 = (0.5f);
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AeroplaneAudio_t149_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_1MethodDeclarations.h"

extern MethodInfo AudioSource_set_playOnAwake_m1010_MethodInfo;
extern MethodInfo AudioSource_set_minDistance_m1011_MethodInfo;
extern MethodInfo AudioSource_set_maxDistance_m1012_MethodInfo;
extern MethodInfo AudioSource_set_loop_m1013_MethodInfo;
extern MethodInfo AudioSource_set_dopplerLevel_m1014_MethodInfo;
extern MethodInfo AeroplaneAudio_Update_m433_MethodInfo;
extern MethodInfo AeroplaneController_get_MaxEnginePower_m450_MethodInfo;
extern MethodInfo AeroplaneController_get_EnginePower_m448_MethodInfo;
extern MethodInfo AudioSource_set_pitch_m1015_MethodInfo;
extern MethodInfo AudioSource_get_pitch_m1016_MethodInfo;
extern MethodInfo AudioSource_set_volume_m1017_MethodInfo;
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
extern "C" AudioSource_t28 * GameObject_AddComponent_TisAudioSource_t28_m1018 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod GameObject_AddComponent_TisAudioSource_t28_m1018_GenericMethod;


// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::.ctor()
extern MethodInfo AeroplaneAudio__ctor_m431_MethodInfo;
extern "C" void AeroplaneAudio__ctor_m431 (AeroplaneAudio_t149 * __this, MethodInfo* method)
{
	{
		__this->___m_EngineMinThrottlePitch_3 = (0.4f);
		__this->___m_EngineMaxThrottlePitch_4 = (2.0f);
		__this->___m_EngineFwdSpeedMultiplier_5 = (0.002f);
		__this->___m_WindBasePitch_7 = (0.2f);
		__this->___m_WindSpeedPitchFactor_8 = (0.004f);
		__this->___m_WindMaxSpeedVolume_9 = (100.0f);
		AdvancedSetttings_t148 * L_0 = (AdvancedSetttings_t148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AdvancedSetttings_t148_il2cpp_TypeInfo));
		AdvancedSetttings__ctor_m430(L_0, /*hidden argument*/&AdvancedSetttings__ctor_m430_MethodInfo);
		__this->___m_AdvancedSetttings_10 = L_0;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::Awake()
extern MethodInfo AeroplaneAudio_Awake_m432_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var;
extern "C" void AeroplaneAudio_Awake_m432 (AeroplaneAudio_t149 * __this, MethodInfo* method)
{
	static bool AeroplaneAudio_Awake_m432_init;
	if (!AeroplaneAudio_Awake_m432_init)
	{
		Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAeroplaneController_t146_m1009_GenericMethod);
		Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t3_m584_GenericMethod);
		GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisAudioSource_t28_m1018_GenericMethod);
		AeroplaneAudio_Awake_m432_init = true;
	}
	{
		AeroplaneController_t146 * L_0 = Component_GetComponent_TisAeroplaneController_t146_m1009(__this, /*hidden argument*/Component_GetComponent_TisAeroplaneController_t146_m1009_MethodInfo_var);
		__this->___m_Plane_13 = L_0;
		Rigidbody_t3 * L_1 = Component_GetComponent_TisRigidbody_t3_m584(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3_m584_MethodInfo_var);
		__this->___m_Rigidbody_14 = L_1;
		GameObject_t92 * L_2 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_2);
		AudioSource_t28 * L_3 = GameObject_AddComponent_TisAudioSource_t28_m1018(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var);
		__this->___m_EngineSoundSource_11 = L_3;
		AudioSource_t28 * L_4 = (__this->___m_EngineSoundSource_11);
		NullCheck(L_4);
		AudioSource_set_playOnAwake_m1010(L_4, 0, /*hidden argument*/&AudioSource_set_playOnAwake_m1010_MethodInfo);
		GameObject_t92 * L_5 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_5);
		AudioSource_t28 * L_6 = GameObject_AddComponent_TisAudioSource_t28_m1018(L_5, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t28_m1018_MethodInfo_var);
		__this->___m_WindSoundSource_12 = L_6;
		AudioSource_t28 * L_7 = (__this->___m_WindSoundSource_12);
		NullCheck(L_7);
		AudioSource_set_playOnAwake_m1010(L_7, 0, /*hidden argument*/&AudioSource_set_playOnAwake_m1010_MethodInfo);
		AudioSource_t28 * L_8 = (__this->___m_EngineSoundSource_11);
		AudioClip_t26 * L_9 = (__this->___m_EngineSound_2);
		NullCheck(L_8);
		AudioSource_set_clip_m666(L_8, L_9, /*hidden argument*/&AudioSource_set_clip_m666_MethodInfo);
		AudioSource_t28 * L_10 = (__this->___m_WindSoundSource_12);
		AudioClip_t26 * L_11 = (__this->___m_WindSound_6);
		NullCheck(L_10);
		AudioSource_set_clip_m666(L_10, L_11, /*hidden argument*/&AudioSource_set_clip_m666_MethodInfo);
		AudioSource_t28 * L_12 = (__this->___m_EngineSoundSource_11);
		AdvancedSetttings_t148 * L_13 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_13);
		float L_14 = (L_13->___engineMinDistance_0);
		NullCheck(L_12);
		AudioSource_set_minDistance_m1011(L_12, L_14, /*hidden argument*/&AudioSource_set_minDistance_m1011_MethodInfo);
		AudioSource_t28 * L_15 = (__this->___m_EngineSoundSource_11);
		AdvancedSetttings_t148 * L_16 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_16);
		float L_17 = (L_16->___engineMaxDistance_1);
		NullCheck(L_15);
		AudioSource_set_maxDistance_m1012(L_15, L_17, /*hidden argument*/&AudioSource_set_maxDistance_m1012_MethodInfo);
		AudioSource_t28 * L_18 = (__this->___m_EngineSoundSource_11);
		NullCheck(L_18);
		AudioSource_set_loop_m1013(L_18, 1, /*hidden argument*/&AudioSource_set_loop_m1013_MethodInfo);
		AudioSource_t28 * L_19 = (__this->___m_EngineSoundSource_11);
		AdvancedSetttings_t148 * L_20 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_20);
		float L_21 = (L_20->___engineDopplerLevel_2);
		NullCheck(L_19);
		AudioSource_set_dopplerLevel_m1014(L_19, L_21, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AudioSource_t28 * L_22 = (__this->___m_WindSoundSource_12);
		AdvancedSetttings_t148 * L_23 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_23);
		float L_24 = (L_23->___windMinDistance_4);
		NullCheck(L_22);
		AudioSource_set_minDistance_m1011(L_22, L_24, /*hidden argument*/&AudioSource_set_minDistance_m1011_MethodInfo);
		AudioSource_t28 * L_25 = (__this->___m_WindSoundSource_12);
		AdvancedSetttings_t148 * L_26 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_26);
		float L_27 = (L_26->___windMaxDistance_5);
		NullCheck(L_25);
		AudioSource_set_maxDistance_m1012(L_25, L_27, /*hidden argument*/&AudioSource_set_maxDistance_m1012_MethodInfo);
		AudioSource_t28 * L_28 = (__this->___m_WindSoundSource_12);
		NullCheck(L_28);
		AudioSource_set_loop_m1013(L_28, 1, /*hidden argument*/&AudioSource_set_loop_m1013_MethodInfo);
		AudioSource_t28 * L_29 = (__this->___m_WindSoundSource_12);
		AdvancedSetttings_t148 * L_30 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_30);
		float L_31 = (L_30->___windDopplerLevel_6);
		NullCheck(L_29);
		AudioSource_set_dopplerLevel_m1014(L_29, L_31, /*hidden argument*/&AudioSource_set_dopplerLevel_m1014_MethodInfo);
		AeroplaneAudio_Update_m433(__this, /*hidden argument*/&AeroplaneAudio_Update_m433_MethodInfo);
		AudioSource_t28 * L_32 = (__this->___m_EngineSoundSource_11);
		NullCheck(L_32);
		AudioSource_Play_m667(L_32, /*hidden argument*/&AudioSource_Play_m667_MethodInfo);
		AudioSource_t28 * L_33 = (__this->___m_WindSoundSource_12);
		NullCheck(L_33);
		AudioSource_Play_m667(L_33, /*hidden argument*/&AudioSource_Play_m667_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::Update()
extern "C" void AeroplaneAudio_Update_m433 (AeroplaneAudio_t149 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	{
		AeroplaneController_t146 * L_0 = (__this->___m_Plane_13);
		NullCheck(L_0);
		float L_1 = AeroplaneController_get_MaxEnginePower_m450(L_0, /*hidden argument*/&AeroplaneController_get_MaxEnginePower_m450_MethodInfo);
		AeroplaneController_t146 * L_2 = (__this->___m_Plane_13);
		NullCheck(L_2);
		float L_3 = AeroplaneController_get_EnginePower_m448(L_2, /*hidden argument*/&AeroplaneController_get_EnginePower_m448_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_4 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (0.0f), L_1, L_3, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		V_0 = L_4;
		AudioSource_t28 * L_5 = (__this->___m_EngineSoundSource_11);
		float L_6 = (__this->___m_EngineMinThrottlePitch_3);
		float L_7 = (__this->___m_EngineMaxThrottlePitch_4);
		float L_8 = V_0;
		float L_9 = Mathf_Lerp_m615(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/&Mathf_Lerp_m615_MethodInfo);
		NullCheck(L_5);
		AudioSource_set_pitch_m1015(L_5, L_9, /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_10 = (__this->___m_EngineSoundSource_11);
		AudioSource_t28 * L_11 = L_10;
		NullCheck(L_11);
		float L_12 = AudioSource_get_pitch_m1016(L_11, /*hidden argument*/&AudioSource_get_pitch_m1016_MethodInfo);
		AeroplaneController_t146 * L_13 = (__this->___m_Plane_13);
		NullCheck(L_13);
		float L_14 = AeroplaneController_get_ForwardSpeed_m446(L_13, /*hidden argument*/&AeroplaneController_get_ForwardSpeed_m446_MethodInfo);
		float L_15 = (__this->___m_EngineFwdSpeedMultiplier_5);
		NullCheck(L_11);
		AudioSource_set_pitch_m1015(L_11, ((float)((float)L_12+(float)((float)((float)L_14*(float)L_15)))), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_16 = (__this->___m_EngineSoundSource_11);
		AeroplaneController_t146 * L_17 = (__this->___m_Plane_13);
		NullCheck(L_17);
		float L_18 = AeroplaneController_get_MaxEnginePower_m450(L_17, /*hidden argument*/&AeroplaneController_get_MaxEnginePower_m450_MethodInfo);
		AdvancedSetttings_t148 * L_19 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_19);
		float L_20 = (L_19->___engineMasterVolume_3);
		AeroplaneController_t146 * L_21 = (__this->___m_Plane_13);
		NullCheck(L_21);
		float L_22 = AeroplaneController_get_EnginePower_m448(L_21, /*hidden argument*/&AeroplaneController_get_EnginePower_m448_MethodInfo);
		float L_23 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (0.0f), ((float)((float)L_18*(float)L_20)), L_22, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		NullCheck(L_16);
		AudioSource_set_volume_m1017(L_16, L_23, /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		Rigidbody_t3 * L_24 = (__this->___m_Rigidbody_14);
		NullCheck(L_24);
		Vector3_t8  L_25 = Rigidbody_get_velocity_m590(L_24, /*hidden argument*/&Rigidbody_get_velocity_m590_MethodInfo);
		V_2 = L_25;
		float L_26 = Vector3_get_magnitude_m591((&V_2), /*hidden argument*/&Vector3_get_magnitude_m591_MethodInfo);
		V_1 = L_26;
		AudioSource_t28 * L_27 = (__this->___m_WindSoundSource_12);
		float L_28 = (__this->___m_WindBasePitch_7);
		float L_29 = V_1;
		float L_30 = (__this->___m_WindSpeedPitchFactor_8);
		NullCheck(L_27);
		AudioSource_set_pitch_m1015(L_27, ((float)((float)L_28+(float)((float)((float)L_29*(float)L_30)))), /*hidden argument*/&AudioSource_set_pitch_m1015_MethodInfo);
		AudioSource_t28 * L_31 = (__this->___m_WindSoundSource_12);
		float L_32 = (__this->___m_WindMaxSpeedVolume_9);
		float L_33 = V_1;
		float L_34 = Mathf_InverseLerp_m597(NULL /*static, unused*/, (0.0f), L_32, L_33, /*hidden argument*/&Mathf_InverseLerp_m597_MethodInfo);
		AdvancedSetttings_t148 * L_35 = (__this->___m_AdvancedSetttings_10);
		NullCheck(L_35);
		float L_36 = (L_35->___windMasterVolume_7);
		NullCheck(L_31);
		AudioSource_set_volume_m1017(L_31, ((float)((float)L_34*(float)L_36)), /*hidden argument*/&AudioSource_set_volume_m1017_MethodInfo);
		return;
	}
}
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface/Type
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Type_t150_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface/Type
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_2MethodDeclarations.h"



// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ControlSurface_t151_il2cpp_TypeInfo;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_A_3MethodDeclarations.h"



// System.Void UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface::.ctor()
extern MethodInfo ControlSurface__ctor_m434_MethodInfo;
extern "C" void ControlSurface__ctor_m434 (ControlSurface_t151 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
