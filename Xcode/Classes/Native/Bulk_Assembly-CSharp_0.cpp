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
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t251_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// CameraFollowExample
#include "AssemblyU2DCSharp_CameraFollowExample.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraFollowExample_t253_il2cpp_TypeInfo;
// CameraFollowExample
#include "AssemblyU2DCSharp_CameraFollowExampleMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// CNAbstractController
#include "AssemblyU2DCSharp_CNAbstractController.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern TypeInfo CNAbstractController_t252_il2cpp_TypeInfo;
extern TypeInfo Single_t184_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// CNAbstractController
#include "AssemblyU2DCSharp_CNAbstractControllerMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m575_MethodInfo;
extern MethodInfo Transform_get_parent_m626_MethodInfo;
extern MethodInfo Object_op_Inequality_m642_MethodInfo;
extern MethodInfo CNAbstractController_GetAxis_m1155_MethodInfo;
extern MethodInfo Time_get_deltaTime_m579_MethodInfo;
extern MethodInfo Transform_Rotate_m1273_MethodInfo;
extern MethodInfo Transform_Rotate_m621_MethodInfo;
struct Component_t185;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_20.h"
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
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
#define Component_GetComponent_TisTransform_t2_m1274(__this, method) (( Transform_t2 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisTransform_t2_m1274_GenericMethod;


// System.Void CameraFollowExample::.ctor()
extern MethodInfo CameraFollowExample__ctor_m1108_MethodInfo;
extern "C" void CameraFollowExample__ctor_m1108 (CameraFollowExample_t253 * __this, MethodInfo* method)
{
	{
		__this->___RotationSpeed_3 = (10.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void CameraFollowExample::Start()
extern MethodInfo CameraFollowExample_Start_m1109_MethodInfo;
extern MethodInfo* Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var;
extern "C" void CameraFollowExample_Start_m1109 (CameraFollowExample_t253 * __this, MethodInfo* method)
{
	static bool CameraFollowExample_Start_m1109_init;
	if (!CameraFollowExample_Start_m1109_init)
	{
		Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisTransform_t2_m1274_GenericMethod);
		CameraFollowExample_Start_m1109_init = true;
	}
	{
		Transform_t2 * L_0 = Component_GetComponent_TisTransform_t2_m1274(__this, /*hidden argument*/Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var);
		__this->____transformCache_4 = L_0;
		Transform_t2 * L_1 = (__this->____transformCache_4);
		NullCheck(L_1);
		Transform_t2 * L_2 = Transform_get_parent_m626(L_1, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		__this->____parentTransformCache_5 = L_2;
		return;
	}
}
// System.Void CameraFollowExample::Update()
extern MethodInfo CameraFollowExample_Update_m1110_MethodInfo;
extern "C" void CameraFollowExample_Update_m1110 (CameraFollowExample_t253 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		CNAbstractController_t252 * L_0 = (__this->___RotateJoystick_2);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		CNAbstractController_t252 * L_2 = (__this->___RotateJoystick_2);
		NullCheck(L_2);
		float L_3 = (float)VirtFuncInvoker1< float, String_t* >::Invoke(&CNAbstractController_GetAxis_m1155_MethodInfo, L_2, (String_t*) &_stringLiteral5);
		float L_4 = (__this->___RotationSpeed_3);
		float L_5 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		V_0 = ((float)((float)((float)((float)L_3*(float)L_4))*(float)L_5));
		CNAbstractController_t252 * L_6 = (__this->___RotateJoystick_2);
		NullCheck(L_6);
		float L_7 = (float)VirtFuncInvoker1< float, String_t* >::Invoke(&CNAbstractController_GetAxis_m1155_MethodInfo, L_6, (String_t*) &_stringLiteral6);
		float L_8 = (__this->___RotationSpeed_3);
		float L_9 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		V_1 = ((float)((float)((float)((float)L_7*(float)L_8))*(float)L_9));
		Transform_t2 * L_10 = (__this->____parentTransformCache_5);
		float L_11 = V_0;
		NullCheck(L_10);
		Transform_Rotate_m1273(L_10, (0.0f), L_11, (0.0f), 0, /*hidden argument*/&Transform_Rotate_m1273_MethodInfo);
		Transform_t2 * L_12 = (__this->____parentTransformCache_5);
		float L_13 = V_1;
		NullCheck(L_12);
		Transform_Rotate_m621(L_12, ((-L_13)), (0.0f), (0.0f), /*hidden argument*/&Transform_Rotate_m621_MethodInfo);
	}

IL_007b:
	{
		return;
	}
}
// Controller3DExample/<RotateCoroutine>c__Iterator0
#include "AssemblyU2DCSharp_Controller3DExample_U3CRotateCoroutineU3Ec.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CRotateCoroutineU3Ec__Iterator0_t255_il2cpp_TypeInfo;
// Controller3DExample/<RotateCoroutine>c__Iterator0
#include "AssemblyU2DCSharp_Controller3DExample_U3CRotateCoroutineU3EcMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Controller3DExample
#include "AssemblyU2DCSharp_Controller3DExample.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo Controller3DExample_t254_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t217_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m629_MethodInfo;
extern MethodInfo Vector3_get_zero_m662_MethodInfo;
extern MethodInfo Vector3_op_Equality_m1056_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m1006_MethodInfo;
extern MethodInfo Transform_get_rotation_m605_MethodInfo;
extern MethodInfo Quaternion_Lerp_m606_MethodInfo;
extern MethodInfo Transform_set_rotation_m607_MethodInfo;
extern MethodInfo Transform_get_forward_m587_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m653_MethodInfo;
extern MethodInfo Vector3_get_sqrMagnitude_m602_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m951_MethodInfo;


// System.Void Controller3DExample/<RotateCoroutine>c__Iterator0::.ctor()
extern MethodInfo U3CRotateCoroutineU3Ec__Iterator0__ctor_m1111_MethodInfo;
extern "C" void U3CRotateCoroutineU3Ec__Iterator0__ctor_m1111 (U3CRotateCoroutineU3Ec__Iterator0_t255 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object Controller3DExample/<RotateCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CRotateCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1112_MethodInfo;
extern "C" Object_t * U3CRotateCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1112 (U3CRotateCoroutineU3Ec__Iterator0_t255 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Object Controller3DExample/<RotateCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CRotateCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1113_MethodInfo;
extern "C" Object_t * U3CRotateCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1113 (U3CRotateCoroutineU3Ec__Iterator0_t255 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Boolean Controller3DExample/<RotateCoroutine>c__Iterator0::MoveNext()
extern MethodInfo U3CRotateCoroutineU3Ec__Iterator0_MoveNext_m1114_MethodInfo;
extern "C" bool U3CRotateCoroutineU3Ec__Iterator0_MoveNext_m1114 (U3CRotateCoroutineU3Ec__Iterator0_t255 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	Vector3_t8  V_1 = {0};
	bool V_2 = false;
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00c9;
	}

IL_0021:
	{
		Vector3_t8  L_2 = (__this->___direction_0);
		Vector3_t8  L_3 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		bool L_4 = Vector3_op_Equality_m1056(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Equality_m1056_MethodInfo);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c9;
	}

IL_003b:
	{
		Vector3_t8  L_5 = (__this->___direction_0);
		Quaternion_t10  L_6 = Quaternion_LookRotation_m1006(NULL /*static, unused*/, L_5, /*hidden argument*/&Quaternion_LookRotation_m1006_MethodInfo);
		__this->___U3ClookRotationU3E__0_1 = L_6;
	}

IL_004c:
	{
		Controller3DExample_t254 * L_7 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_7);
		Transform_t2 * L_8 = (L_7->____playerTransform_8);
		Controller3DExample_t254 * L_9 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_9);
		Transform_t2 * L_10 = (L_9->____playerTransform_8);
		NullCheck(L_10);
		Quaternion_t10  L_11 = Transform_get_rotation_m605(L_10, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		Quaternion_t10  L_12 = (__this->___U3ClookRotationU3E__0_1);
		float L_13 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Quaternion_t10  L_14 = Quaternion_Lerp_m606(NULL /*static, unused*/, L_11, L_12, ((float)((float)L_13*(float)(15.0f))), /*hidden argument*/&Quaternion_Lerp_m606_MethodInfo);
		NullCheck(L_8);
		Transform_set_rotation_m607(L_8, L_14, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
		__this->___$current_3 = NULL;
		__this->___$PC_2 = 1;
		goto IL_00cb;
	}

IL_0095:
	{
		Vector3_t8  L_15 = (__this->___direction_0);
		Controller3DExample_t254 * L_16 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_16);
		Transform_t2 * L_17 = (L_16->____playerTransform_8);
		NullCheck(L_17);
		Vector3_t8  L_18 = Transform_get_forward_m587(L_17, /*hidden argument*/&Transform_get_forward_m587_MethodInfo);
		Vector3_t8  L_19 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_1 = L_19;
		float L_20 = Vector3_get_sqrMagnitude_m602((&V_1), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		if ((((float)L_20) > ((float)(0.2f))))
		{
			goto IL_004c;
		}
	}
	{
		__this->___$PC_2 = (-1);
	}

IL_00c9:
	{
		return 0;
	}

IL_00cb:
	{
		return 1;
	}
	// Dead block : IL_00cd: ldloc.2
}
// System.Void Controller3DExample/<RotateCoroutine>c__Iterator0::Dispose()
extern MethodInfo U3CRotateCoroutineU3Ec__Iterator0_Dispose_m1115_MethodInfo;
extern "C" void U3CRotateCoroutineU3Ec__Iterator0_Dispose_m1115 (U3CRotateCoroutineU3Ec__Iterator0_t255 * __this, MethodInfo* method)
{
	{
		__this->___$PC_2 = (-1);
		return;
	}
}
// System.Void Controller3DExample/<RotateCoroutine>c__Iterator0::Reset()
extern MethodInfo U3CRotateCoroutineU3Ec__Iterator0_Reset_m1116_MethodInfo;
extern "C" void U3CRotateCoroutineU3Ec__Iterator0_Reset_m1116 (U3CRotateCoroutineU3Ec__Iterator0_t255 * __this, MethodInfo* method)
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
// Controller3DExample
#include "AssemblyU2DCSharp_Controller3DExampleMethodDeclarations.h"

// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterController.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.CollisionFlags
#include "UnityEngine_UnityEngine_CollisionFlags.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern TypeInfo Vector3_t8_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"
extern MethodInfo Camera_get_main_m663_MethodInfo;
extern MethodInfo Transform_FindChild_m1275_MethodInfo;
extern MethodInfo Vector3__ctor_m700_MethodInfo;
extern MethodInfo Controller3DExample_CommonMovementMethod_m1121_MethodInfo;
extern MethodInfo Transform_TransformDirection_m1276_MethodInfo;
extern MethodInfo Vector3_Normalize_m728_MethodInfo;
extern MethodInfo Controller3DExample_FaceDirection_m1122_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m633_MethodInfo;
extern MethodInfo CharacterController_Move_m677_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_m1277_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m962_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.CharacterController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t27_m690(__this, method) (( CharacterController_t27 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisCharacterController_t27_m690_GenericMethod;


// System.Void Controller3DExample::.ctor()
extern MethodInfo Controller3DExample__ctor_m1117_MethodInfo;
extern "C" void Controller3DExample__ctor_m1117 (Controller3DExample_t254 * __this, MethodInfo* method)
{
	{
		__this->___movementSpeed_3 = (5.0f);
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void Controller3DExample::Start()
extern MethodInfo Controller3DExample_Start_m1118_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCharacterController_t27_m690_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var;
extern "C" void Controller3DExample_Start_m1118 (Controller3DExample_t254 * __this, MethodInfo* method)
{
	static bool Controller3DExample_Start_m1118_init;
	if (!Controller3DExample_Start_m1118_init)
	{
		Component_GetComponent_TisCharacterController_t27_m690_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCharacterController_t27_m690_GenericMethod);
		Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisTransform_t2_m1274_GenericMethod);
		Controller3DExample_Start_m1118_init = true;
	}
	{
		CharacterController_t27 * L_0 = Component_GetComponent_TisCharacterController_t27_m690(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t27_m690_MethodInfo_var);
		__this->____characterController_5 = L_0;
		Camera_t19 * L_1 = Camera_get_main_m663(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m663_MethodInfo);
		NullCheck(L_1);
		Transform_t2 * L_2 = Component_GetComponent_TisTransform_t2_m1274(L_1, /*hidden argument*/Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var);
		__this->____mainCameraTransform_6 = L_2;
		Transform_t2 * L_3 = Component_GetComponent_TisTransform_t2_m1274(__this, /*hidden argument*/Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var);
		__this->____transformCache_7 = L_3;
		Transform_t2 * L_4 = (__this->____transformCache_7);
		NullCheck(L_4);
		Transform_t2 * L_5 = Transform_FindChild_m1275(L_4, (String_t*) &_stringLiteral70, /*hidden argument*/&Transform_FindChild_m1275_MethodInfo);
		__this->____playerTransform_8 = L_5;
		return;
	}
}
// System.Void Controller3DExample::Update()
extern MethodInfo Controller3DExample_Update_m1119_MethodInfo;
extern "C" void Controller3DExample_Update_m1119 (Controller3DExample_t254 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		CNAbstractController_t252 * L_0 = (__this->___MovementJoystick_4);
		NullCheck(L_0);
		float L_1 = (float)VirtFuncInvoker1< float, String_t* >::Invoke(&CNAbstractController_GetAxis_m1155_MethodInfo, L_0, (String_t*) &_stringLiteral5);
		CNAbstractController_t252 * L_2 = (__this->___MovementJoystick_4);
		NullCheck(L_2);
		float L_3 = (float)VirtFuncInvoker1< float, String_t* >::Invoke(&CNAbstractController_GetAxis_m1155_MethodInfo, L_2, (String_t*) &_stringLiteral6);
		Vector3__ctor_m700((&V_0), L_1, (0.0f), L_3, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		Vector3_t8  L_4 = V_0;
		Controller3DExample_CommonMovementMethod_m1121(__this, L_4, /*hidden argument*/&Controller3DExample_CommonMovementMethod_m1121_MethodInfo);
		return;
	}
}
// System.Void Controller3DExample::MoveWithEvent(UnityEngine.Vector3)
extern MethodInfo Controller3DExample_MoveWithEvent_m1120_MethodInfo;
extern "C" void Controller3DExample_MoveWithEvent_m1120 (Controller3DExample_t254 * __this, Vector3_t8  ___inputMovement, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		float L_0 = ((&___inputMovement)->___x_1);
		float L_1 = ((&___inputMovement)->___y_2);
		Vector3__ctor_m700((&V_0), L_0, (0.0f), L_1, /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		Vector3_t8  L_2 = V_0;
		Controller3DExample_CommonMovementMethod_m1121(__this, L_2, /*hidden argument*/&Controller3DExample_CommonMovementMethod_m1121_MethodInfo);
		return;
	}
}
// System.Void Controller3DExample::CommonMovementMethod(UnityEngine.Vector3)
extern "C" void Controller3DExample_CommonMovementMethod_m1121 (Controller3DExample_t254 * __this, Vector3_t8  ___movement, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->____mainCameraTransform_6);
		Vector3_t8  L_1 = ___movement;
		NullCheck(L_0);
		Vector3_t8  L_2 = Transform_TransformDirection_m1276(L_0, L_1, /*hidden argument*/&Transform_TransformDirection_m1276_MethodInfo);
		___movement = L_2;
		(&___movement)->___y_2 = (0.0f);
		Vector3_Normalize_m728((&___movement), /*hidden argument*/&Vector3_Normalize_m728_MethodInfo);
		Vector3_t8  L_3 = ___movement;
		Controller3DExample_FaceDirection_m1122(__this, L_3, /*hidden argument*/&Controller3DExample_FaceDirection_m1122_MethodInfo);
		CharacterController_t27 * L_4 = (__this->____characterController_5);
		Vector3_t8  L_5 = ___movement;
		float L_6 = (__this->___movementSpeed_3);
		Vector3_t8  L_7 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		float L_8 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Vector3_t8  L_9 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		NullCheck(L_4);
		CharacterController_Move_m677(L_4, L_9, /*hidden argument*/&CharacterController_Move_m677_MethodInfo);
		return;
	}
}
// System.Void Controller3DExample::FaceDirection(UnityEngine.Vector3)
extern "C" void Controller3DExample_FaceDirection_m1122 (Controller3DExample_t254 * __this, Vector3_t8  ___direction, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutine_m1277(__this, (String_t*) &_stringLiteral71, /*hidden argument*/&MonoBehaviour_StopCoroutine_m1277_MethodInfo);
		Vector3_t8  L_0 = ___direction;
		Vector3_t8  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_1);
		MonoBehaviour_StartCoroutine_m962(__this, (String_t*) &_stringLiteral71, L_2, /*hidden argument*/&MonoBehaviour_StartCoroutine_m962_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator Controller3DExample::RotateCoroutine(UnityEngine.Vector3)
extern MethodInfo Controller3DExample_RotateCoroutine_m1123_MethodInfo;
extern "C" Object_t * Controller3DExample_RotateCoroutine_m1123 (Controller3DExample_t254 * __this, Vector3_t8  ___direction, MethodInfo* method)
{
	U3CRotateCoroutineU3Ec__Iterator0_t255 * V_0 = {0};
	{
		U3CRotateCoroutineU3Ec__Iterator0_t255 * L_0 = (U3CRotateCoroutineU3Ec__Iterator0_t255 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CRotateCoroutineU3Ec__Iterator0_t255_il2cpp_TypeInfo));
		U3CRotateCoroutineU3Ec__Iterator0__ctor_m1111(L_0, /*hidden argument*/&U3CRotateCoroutineU3Ec__Iterator0__ctor_m1111_MethodInfo);
		V_0 = L_0;
		U3CRotateCoroutineU3Ec__Iterator0_t255 * L_1 = V_0;
		Vector3_t8  L_2 = ___direction;
		NullCheck(L_1);
		L_1->___direction_0 = L_2;
		U3CRotateCoroutineU3Ec__Iterator0_t255 * L_3 = V_0;
		Vector3_t8  L_4 = ___direction;
		NullCheck(L_3);
		L_3->___U3C$U3Edirection_4 = L_4;
		U3CRotateCoroutineU3Ec__Iterator0_t255 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_5 = __this;
		U3CRotateCoroutineU3Ec__Iterator0_t255 * L_6 = V_0;
		return L_6;
	}
}
// CNAbstractController/AnchorsBase
#include "AssemblyU2DCSharp_CNAbstractController_AnchorsBase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnchorsBase_t256_il2cpp_TypeInfo;
// CNAbstractController/AnchorsBase
#include "AssemblyU2DCSharp_CNAbstractController_AnchorsBaseMethodDeclarations.h"



// CNAbstractController/Anchors
#include "AssemblyU2DCSharp_CNAbstractController_Anchors.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Anchors_t257_il2cpp_TypeInfo;
// CNAbstractController/Anchors
#include "AssemblyU2DCSharp_CNAbstractController_AnchorsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Nullable`1<UnityEngine.Vector3>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Action`2<UnityEngine.Vector3,CNAbstractController>
#include "System_Core_System_Action_2_gen.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Action`1<CNAbstractController>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Nullable`1<UnityEngine.Touch>
#include "mscorlib_System_Nullable_1_gen_0.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
extern TypeInfo Vector2_t13_il2cpp_TypeInfo;
extern TypeInfo Action_2_t258_il2cpp_TypeInfo;
extern TypeInfo Action_1_t259_il2cpp_TypeInfo;
extern TypeInfo UnityException_t288_il2cpp_TypeInfo;
extern TypeInfo Input_t187_il2cpp_TypeInfo;
extern TypeInfo Nullable_1_t262_il2cpp_TypeInfo;
extern TypeInfo Void_t183_il2cpp_TypeInfo;
extern TypeInfo Rect_t260_il2cpp_TypeInfo;
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
extern TypeInfo Touch_t206_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// System.Nullable`1<UnityEngine.Touch>
#include "mscorlib_System_Nullable_1_gen_0MethodDeclarations.h"
// System.Action`2<UnityEngine.Vector3,CNAbstractController>
#include "System_Core_System_Action_2_genMethodDeclarations.h"
// System.Action`1<CNAbstractController>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Nullable`1<UnityEngine.Vector3>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern Il2CppType Action_2_t258_0_0_0;
extern Il2CppType Action_1_t259_0_0_0;
extern Il2CppType Nullable_1_t262_0_0_0;
extern MethodInfo Vector2__ctor_m682_MethodInfo;
extern MethodInfo Delegate_Combine_m1278_MethodInfo;
extern MethodInfo Delegate_Remove_m1279_MethodInfo;
extern MethodInfo CNAbstractController_get_AxisNameX_m1133_MethodInfo;
extern MethodInfo CNAbstractController_get_AxisNameY_m1135_MethodInfo;
extern MethodInfo String_op_Equality_m751_MethodInfo;
extern MethodInfo String_Concat_m797_MethodInfo;
extern MethodInfo UnityException__ctor_m1280_MethodInfo;
extern MethodInfo CNAbstractController_get_CurrentAxisValues_m1147_MethodInfo;
extern MethodInfo Vector2_get_zero_m696_MethodInfo;
extern MethodInfo CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo;
extern MethodInfo Component_get_gameObject_m577_MethodInfo;
extern MethodInfo GameObject_SetActive_m770_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m832_MethodInfo;
extern MethodInfo CNAbstractController_set_TransformCache_m1142_MethodInfo;
extern MethodInfo CNAbstractController_get_TransformCache_m1141_MethodInfo;
extern MethodInfo CNAbstractController_set_ParentCamera_m1144_MethodInfo;
extern MethodInfo CNAbstractController_InitializePosition_m1163_MethodInfo;
extern MethodInfo Transform_set_localPosition_m652_MethodInfo;
extern MethodInfo Input_get_touchCount_m789_MethodInfo;
extern MethodInfo Input_GetTouch_m1281_MethodInfo;
extern MethodInfo Touch_get_fingerId_m1282_MethodInfo;
extern MethodInfo Nullable_1__ctor_m1283_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m788_MethodInfo;
extern MethodInfo Action_2_Invoke_m1284_MethodInfo;
extern MethodInfo Action_1_Invoke_m1285_MethodInfo;
extern MethodInfo CNAbstractController_get_CalculatedPosition_m1151_MethodInfo;
extern MethodInfo CNAbstractController_get_ParentCamera_m1143_MethodInfo;
extern MethodInfo Camera_get_orthographicSize_m894_MethodInfo;
extern MethodInfo Camera_get_aspect_m892_MethodInfo;
extern MethodInfo CNAbstractController_get_Anchor_m1131_MethodInfo;
extern MethodInfo CNAbstractController_get_Margins_m1137_MethodInfo;
extern MethodInfo Transform_get_position_m599_MethodInfo;
extern MethodInfo CNAbstractController_get_TouchZoneSize_m1139_MethodInfo;
extern MethodInfo Rect__ctor_m1286_MethodInfo;
extern MethodInfo CNAbstractController_set_CalculatedTouchZone_m1146_MethodInfo;
extern MethodInfo CNAbstractController_set_IsCurrentlyTweaking_m1154_MethodInfo;
extern MethodInfo CNAbstractController_OnFingerLifted_m1162_MethodInfo;
extern MethodInfo CNAbstractController_get_IsCurrentlyTweaking_m1153_MethodInfo;
extern MethodInfo CNAbstractController_get_CurrentFingerId_m1149_MethodInfo;
extern MethodInfo CNAbstractController_GetTouchByFingerId_m1159_MethodInfo;
extern MethodInfo Touch_get_phase_m1287_MethodInfo;
extern MethodInfo CNAbstractController_ResetControlState_m1164_MethodInfo;
extern MethodInfo Touch_get_position_m791_MethodInfo;
extern MethodInfo CNAbstractController_TweakControl_m1288_MethodInfo;
extern MethodInfo CNAbstractController_IsTouchInZone_m1167_MethodInfo;
extern MethodInfo CNAbstractController_set_CurrentFingerId_m1150_MethodInfo;
extern MethodInfo CNAbstractController_OnFingerTouched_m1161_MethodInfo;
extern MethodInfo CNAbstractController_get_CalculatedTouchZone_m1145_MethodInfo;
extern MethodInfo Camera_ScreenToWorldPoint_m1289_MethodInfo;
extern MethodInfo Rect_Contains_m1290_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_9.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t19_m965(__this, method) (( Camera_t19 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisCamera_t19_m965_GenericMethod;
extern Il2CppGenericMethod Nullable_1__ctor_m1283_GenericMethod;
extern Il2CppGenericMethod Action_2_Invoke_m1284_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m1285_GenericMethod;
extern Il2CppGenericMethod Nullable_1_get_HasValue_m1291_GenericMethod;
extern Il2CppGenericMethod Nullable_1_get_Value_m1292_GenericMethod;
extern Il2CppGenericMethod Nullable_1_get_HasValue_m1293_GenericMethod;
extern Il2CppGenericMethod Nullable_1_get_Value_m1294_GenericMethod;


// System.Void CNAbstractController::.ctor()
extern MethodInfo CNAbstractController__ctor_m1124_MethodInfo;
extern "C" void CNAbstractController__ctor_m1124 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		__this->____anchor_4 = ((int32_t)9);
		__this->____axisNameX_5 = (String_t*) &_stringLiteral5;
		__this->____axisNameY_6 = (String_t*) &_stringLiteral6;
		Vector2_t13  L_0 = {0};
		Vector2__ctor_m682(&L_0, (6.0f), (6.0f), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		__this->____touchZoneSize_7 = L_0;
		Vector2_t13  L_1 = {0};
		Vector2__ctor_m682(&L_1, (3.0f), (3.0f), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		__this->____margins_8 = L_1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void CNAbstractController::add_ControllerMovedEvent(System.Action`2<UnityEngine.Vector3,CNAbstractController>)
extern MethodInfo CNAbstractController_add_ControllerMovedEvent_m1125_MethodInfo;
extern TypeInfo* Action_2_t258_il2cpp_TypeInfo_var;
extern "C" void CNAbstractController_add_ControllerMovedEvent_m1125 (CNAbstractController_t252 * __this, Action_2_t258 * ___value, MethodInfo* method)
{
	static bool CNAbstractController_add_ControllerMovedEvent_m1125_init;
	if (!CNAbstractController_add_ControllerMovedEvent_m1125_init)
	{
		Action_2_t258_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_2_t258_0_0_0);
		CNAbstractController_add_ControllerMovedEvent_m1125_init = true;
	}
	{
		Action_2_t258 * L_0 = (__this->___ControllerMovedEvent_9);
		Action_2_t258 * L_1 = ___value;
		Delegate_t289 * L_2 = Delegate_Combine_m1278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___ControllerMovedEvent_9 = ((Action_2_t258 *)Castclass(L_2, Action_2_t258_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void CNAbstractController::remove_ControllerMovedEvent(System.Action`2<UnityEngine.Vector3,CNAbstractController>)
extern MethodInfo CNAbstractController_remove_ControllerMovedEvent_m1126_MethodInfo;
extern TypeInfo* Action_2_t258_il2cpp_TypeInfo_var;
extern "C" void CNAbstractController_remove_ControllerMovedEvent_m1126 (CNAbstractController_t252 * __this, Action_2_t258 * ___value, MethodInfo* method)
{
	static bool CNAbstractController_remove_ControllerMovedEvent_m1126_init;
	if (!CNAbstractController_remove_ControllerMovedEvent_m1126_init)
	{
		Action_2_t258_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_2_t258_0_0_0);
		CNAbstractController_remove_ControllerMovedEvent_m1126_init = true;
	}
	{
		Action_2_t258 * L_0 = (__this->___ControllerMovedEvent_9);
		Action_2_t258 * L_1 = ___value;
		Delegate_t289 * L_2 = Delegate_Remove_m1279(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1279_MethodInfo);
		__this->___ControllerMovedEvent_9 = ((Action_2_t258 *)Castclass(L_2, Action_2_t258_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void CNAbstractController::add_FingerTouchedEvent(System.Action`1<CNAbstractController>)
extern MethodInfo CNAbstractController_add_FingerTouchedEvent_m1127_MethodInfo;
extern TypeInfo* Action_1_t259_il2cpp_TypeInfo_var;
extern "C" void CNAbstractController_add_FingerTouchedEvent_m1127 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method)
{
	static bool CNAbstractController_add_FingerTouchedEvent_m1127_init;
	if (!CNAbstractController_add_FingerTouchedEvent_m1127_init)
	{
		Action_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t259_0_0_0);
		CNAbstractController_add_FingerTouchedEvent_m1127_init = true;
	}
	{
		Action_1_t259 * L_0 = (__this->___FingerTouchedEvent_10);
		Action_1_t259 * L_1 = ___value;
		Delegate_t289 * L_2 = Delegate_Combine_m1278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___FingerTouchedEvent_10 = ((Action_1_t259 *)Castclass(L_2, Action_1_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void CNAbstractController::remove_FingerTouchedEvent(System.Action`1<CNAbstractController>)
extern MethodInfo CNAbstractController_remove_FingerTouchedEvent_m1128_MethodInfo;
extern TypeInfo* Action_1_t259_il2cpp_TypeInfo_var;
extern "C" void CNAbstractController_remove_FingerTouchedEvent_m1128 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method)
{
	static bool CNAbstractController_remove_FingerTouchedEvent_m1128_init;
	if (!CNAbstractController_remove_FingerTouchedEvent_m1128_init)
	{
		Action_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t259_0_0_0);
		CNAbstractController_remove_FingerTouchedEvent_m1128_init = true;
	}
	{
		Action_1_t259 * L_0 = (__this->___FingerTouchedEvent_10);
		Action_1_t259 * L_1 = ___value;
		Delegate_t289 * L_2 = Delegate_Remove_m1279(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1279_MethodInfo);
		__this->___FingerTouchedEvent_10 = ((Action_1_t259 *)Castclass(L_2, Action_1_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void CNAbstractController::add_FingerLiftedEvent(System.Action`1<CNAbstractController>)
extern MethodInfo CNAbstractController_add_FingerLiftedEvent_m1129_MethodInfo;
extern TypeInfo* Action_1_t259_il2cpp_TypeInfo_var;
extern "C" void CNAbstractController_add_FingerLiftedEvent_m1129 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method)
{
	static bool CNAbstractController_add_FingerLiftedEvent_m1129_init;
	if (!CNAbstractController_add_FingerLiftedEvent_m1129_init)
	{
		Action_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t259_0_0_0);
		CNAbstractController_add_FingerLiftedEvent_m1129_init = true;
	}
	{
		Action_1_t259 * L_0 = (__this->___FingerLiftedEvent_11);
		Action_1_t259 * L_1 = ___value;
		Delegate_t289 * L_2 = Delegate_Combine_m1278(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1278_MethodInfo);
		__this->___FingerLiftedEvent_11 = ((Action_1_t259 *)Castclass(L_2, Action_1_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void CNAbstractController::remove_FingerLiftedEvent(System.Action`1<CNAbstractController>)
extern MethodInfo CNAbstractController_remove_FingerLiftedEvent_m1130_MethodInfo;
extern TypeInfo* Action_1_t259_il2cpp_TypeInfo_var;
extern "C" void CNAbstractController_remove_FingerLiftedEvent_m1130 (CNAbstractController_t252 * __this, Action_1_t259 * ___value, MethodInfo* method)
{
	static bool CNAbstractController_remove_FingerLiftedEvent_m1130_init;
	if (!CNAbstractController_remove_FingerLiftedEvent_m1130_init)
	{
		Action_1_t259_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t259_0_0_0);
		CNAbstractController_remove_FingerLiftedEvent_m1130_init = true;
	}
	{
		Action_1_t259 * L_0 = (__this->___FingerLiftedEvent_11);
		Action_1_t259 * L_1 = ___value;
		Delegate_t289 * L_2 = Delegate_Remove_m1279(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m1279_MethodInfo);
		__this->___FingerLiftedEvent_11 = ((Action_1_t259 *)Castclass(L_2, Action_1_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// CNAbstractController/Anchors CNAbstractController::get_Anchor()
extern "C" int32_t CNAbstractController_get_Anchor_m1131 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____anchor_4);
		return L_0;
	}
}
// System.Void CNAbstractController::set_Anchor(CNAbstractController/Anchors)
extern MethodInfo CNAbstractController_set_Anchor_m1132_MethodInfo;
extern "C" void CNAbstractController_set_Anchor_m1132 (CNAbstractController_t252 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->____anchor_4 = L_0;
		return;
	}
}
// System.String CNAbstractController::get_AxisNameX()
extern "C" String_t* CNAbstractController_get_AxisNameX_m1133 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____axisNameX_5);
		return L_0;
	}
}
// System.Void CNAbstractController::set_AxisNameX(System.String)
extern MethodInfo CNAbstractController_set_AxisNameX_m1134_MethodInfo;
extern "C" void CNAbstractController_set_AxisNameX_m1134 (CNAbstractController_t252 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____axisNameX_5 = L_0;
		return;
	}
}
// System.String CNAbstractController::get_AxisNameY()
extern "C" String_t* CNAbstractController_get_AxisNameY_m1135 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____axisNameY_6);
		return L_0;
	}
}
// System.Void CNAbstractController::set_AxisNameY(System.String)
extern MethodInfo CNAbstractController_set_AxisNameY_m1136_MethodInfo;
extern "C" void CNAbstractController_set_AxisNameY_m1136 (CNAbstractController_t252 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____axisNameY_6 = L_0;
		return;
	}
}
// UnityEngine.Vector2 CNAbstractController::get_Margins()
extern "C" Vector2_t13  CNAbstractController_get_Margins_m1137 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->____margins_8);
		return L_0;
	}
}
// System.Void CNAbstractController::set_Margins(UnityEngine.Vector2)
extern MethodInfo CNAbstractController_set_Margins_m1138_MethodInfo;
extern "C" void CNAbstractController_set_Margins_m1138 (CNAbstractController_t252 * __this, Vector2_t13  ___value, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = ___value;
		__this->____margins_8 = L_0;
		return;
	}
}
// UnityEngine.Vector2 CNAbstractController::get_TouchZoneSize()
extern "C" Vector2_t13  CNAbstractController_get_TouchZoneSize_m1139 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->____touchZoneSize_7);
		return L_0;
	}
}
// System.Void CNAbstractController::set_TouchZoneSize(UnityEngine.Vector2)
extern MethodInfo CNAbstractController_set_TouchZoneSize_m1140_MethodInfo;
extern "C" void CNAbstractController_set_TouchZoneSize_m1140 (CNAbstractController_t252 * __this, Vector2_t13  ___value, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = ___value;
		__this->____touchZoneSize_7 = L_0;
		return;
	}
}
// UnityEngine.Transform CNAbstractController::get_TransformCache()
extern "C" Transform_t2 * CNAbstractController_get_TransformCache_m1141 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___U3CTransformCacheU3Ek__BackingField_12);
		return L_0;
	}
}
// System.Void CNAbstractController::set_TransformCache(UnityEngine.Transform)
extern "C" void CNAbstractController_set_TransformCache_m1142 (CNAbstractController_t252 * __this, Transform_t2 * ___value, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___value;
		__this->___U3CTransformCacheU3Ek__BackingField_12 = L_0;
		return;
	}
}
// UnityEngine.Camera CNAbstractController::get_ParentCamera()
extern "C" Camera_t19 * CNAbstractController_get_ParentCamera_m1143 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = (__this->___U3CParentCameraU3Ek__BackingField_13);
		return L_0;
	}
}
// System.Void CNAbstractController::set_ParentCamera(UnityEngine.Camera)
extern "C" void CNAbstractController_set_ParentCamera_m1144 (CNAbstractController_t252 * __this, Camera_t19 * ___value, MethodInfo* method)
{
	{
		Camera_t19 * L_0 = ___value;
		__this->___U3CParentCameraU3Ek__BackingField_13 = L_0;
		return;
	}
}
// UnityEngine.Rect CNAbstractController::get_CalculatedTouchZone()
extern "C" Rect_t260  CNAbstractController_get_CalculatedTouchZone_m1145 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Rect_t260  L_0 = (__this->___U3CCalculatedTouchZoneU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void CNAbstractController::set_CalculatedTouchZone(UnityEngine.Rect)
extern "C" void CNAbstractController_set_CalculatedTouchZone_m1146 (CNAbstractController_t252 * __this, Rect_t260  ___value, MethodInfo* method)
{
	{
		Rect_t260  L_0 = ___value;
		__this->___U3CCalculatedTouchZoneU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityEngine.Vector2 CNAbstractController::get_CurrentAxisValues()
extern "C" Vector2_t13  CNAbstractController_get_CurrentAxisValues_m1147 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = (__this->___U3CCurrentAxisValuesU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void CNAbstractController::set_CurrentAxisValues(UnityEngine.Vector2)
extern "C" void CNAbstractController_set_CurrentAxisValues_m1148 (CNAbstractController_t252 * __this, Vector2_t13  ___value, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = ___value;
		__this->___U3CCurrentAxisValuesU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Int32 CNAbstractController::get_CurrentFingerId()
extern "C" int32_t CNAbstractController_get_CurrentFingerId_m1149 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CCurrentFingerIdU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void CNAbstractController::set_CurrentFingerId(System.Int32)
extern "C" void CNAbstractController_set_CurrentFingerId_m1150 (CNAbstractController_t252 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CCurrentFingerIdU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Nullable`1<UnityEngine.Vector3> CNAbstractController::get_CalculatedPosition()
extern "C" Nullable_1_t261  CNAbstractController_get_CalculatedPosition_m1151 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Nullable_1_t261  L_0 = (__this->___U3CCalculatedPositionU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void CNAbstractController::set_CalculatedPosition(System.Nullable`1<UnityEngine.Vector3>)
extern MethodInfo CNAbstractController_set_CalculatedPosition_m1152_MethodInfo;
extern "C" void CNAbstractController_set_CalculatedPosition_m1152 (CNAbstractController_t252 * __this, Nullable_1_t261  ___value, MethodInfo* method)
{
	{
		Nullable_1_t261  L_0 = ___value;
		__this->___U3CCalculatedPositionU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Boolean CNAbstractController::get_IsCurrentlyTweaking()
extern "C" bool CNAbstractController_get_IsCurrentlyTweaking_m1153 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsCurrentlyTweakingU3Ek__BackingField_18);
		return L_0;
	}
}
// System.Void CNAbstractController::set_IsCurrentlyTweaking(System.Boolean)
extern "C" void CNAbstractController_set_IsCurrentlyTweaking_m1154 (CNAbstractController_t252 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsCurrentlyTweakingU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Single CNAbstractController::GetAxis(System.String)
extern "C" float CNAbstractController_GetAxis_m1155 (CNAbstractController_t252 * __this, String_t* ___axisName, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	Vector2_t13  V_1 = {0};
	{
		String_t* L_0 = CNAbstractController_get_AxisNameX_m1133(__this, /*hidden argument*/&CNAbstractController_get_AxisNameX_m1133_MethodInfo);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_1 = CNAbstractController_get_AxisNameY_m1135(__this, /*hidden argument*/&CNAbstractController_get_AxisNameY_m1135_MethodInfo);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_2 = CNAbstractController_get_AxisNameX_m1133(__this, /*hidden argument*/&CNAbstractController_get_AxisNameX_m1133_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_4 = String_op_Equality_m751(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_5 = CNAbstractController_get_AxisNameY_m1135(__this, /*hidden argument*/&CNAbstractController_get_AxisNameY_m1135_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_7 = String_op_Equality_m751(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_7)
		{
			goto IL_0056;
		}
	}

IL_0040:
	{
		String_t* L_8 = ___axisName;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m797(NULL /*static, unused*/, (String_t*) &_stringLiteral72, L_8, (String_t*) &_stringLiteral73, /*hidden argument*/&String_Concat_m797_MethodInfo);
		UnityException_t288 * L_10 = (UnityException_t288 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnityException_t288_il2cpp_TypeInfo));
		UnityException__ctor_m1280(L_10, L_9, /*hidden argument*/&UnityException__ctor_m1280_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0056:
	{
		String_t* L_11 = ___axisName;
		String_t* L_12 = CNAbstractController_get_AxisNameX_m1133(__this, /*hidden argument*/&CNAbstractController_get_AxisNameX_m1133_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m751(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		Vector2_t13  L_14 = CNAbstractController_get_CurrentAxisValues_m1147(__this, /*hidden argument*/&CNAbstractController_get_CurrentAxisValues_m1147_MethodInfo);
		V_0 = L_14;
		float L_15 = ((&V_0)->___x_1);
		return L_15;
	}

IL_0076:
	{
		String_t* L_16 = ___axisName;
		String_t* L_17 = CNAbstractController_get_AxisNameY_m1135(__this, /*hidden argument*/&CNAbstractController_get_AxisNameY_m1135_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_18 = String_op_Equality_m751(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/&String_op_Equality_m751_MethodInfo);
		if (!L_18)
		{
			goto IL_0096;
		}
	}
	{
		Vector2_t13  L_19 = CNAbstractController_get_CurrentAxisValues_m1147(__this, /*hidden argument*/&CNAbstractController_get_CurrentAxisValues_m1147_MethodInfo);
		V_1 = L_19;
		float L_20 = ((&V_1)->___y_2);
		return L_20;
	}

IL_0096:
	{
		String_t* L_21 = ___axisName;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m797(NULL /*static, unused*/, (String_t*) &_stringLiteral72, L_21, (String_t*) &_stringLiteral73, /*hidden argument*/&String_Concat_m797_MethodInfo);
		UnityException_t288 * L_23 = (UnityException_t288 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnityException_t288_il2cpp_TypeInfo));
		UnityException__ctor_m1280(L_23, L_22, /*hidden argument*/&UnityException__ctor_m1280_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}
}
// System.Void CNAbstractController::Disable()
extern MethodInfo CNAbstractController_Disable_m1156_MethodInfo;
extern "C" void CNAbstractController_Disable_m1156 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		CNAbstractController_set_CurrentAxisValues_m1148(__this, L_0, /*hidden argument*/&CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo);
		GameObject_t92 * L_1 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_1);
		GameObject_SetActive_m770(L_1, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		Behaviour_set_enabled_m832(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		return;
	}
}
// System.Void CNAbstractController::Enable()
extern MethodInfo CNAbstractController_Enable_m1157_MethodInfo;
extern "C" void CNAbstractController_Enable_m1157 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_0);
		GameObject_SetActive_m770(L_0, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		Behaviour_set_enabled_m832(__this, 1, /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		return;
	}
}
// System.Void CNAbstractController::OnEnable()
extern MethodInfo CNAbstractController_OnEnable_m1158_MethodInfo;
extern MethodInfo* Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisCamera_t19_m965_MethodInfo_var;
extern "C" void CNAbstractController_OnEnable_m1158 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	static bool CNAbstractController_OnEnable_m1158_init;
	if (!CNAbstractController_OnEnable_m1158_init)
	{
		Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisTransform_t2_m1274_GenericMethod);
		Component_GetComponent_TisCamera_t19_m965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t19_m965_GenericMethod);
		CNAbstractController_OnEnable_m1158_init = true;
	}
	{
		Transform_t2 * L_0 = Component_GetComponent_TisTransform_t2_m1274(__this, /*hidden argument*/Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var);
		CNAbstractController_set_TransformCache_m1142(__this, L_0, /*hidden argument*/&CNAbstractController_set_TransformCache_m1142_MethodInfo);
		Transform_t2 * L_1 = CNAbstractController_get_TransformCache_m1141(__this, /*hidden argument*/&CNAbstractController_get_TransformCache_m1141_MethodInfo);
		NullCheck(L_1);
		Transform_t2 * L_2 = Transform_get_parent_m626(L_1, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		NullCheck(L_2);
		Camera_t19 * L_3 = Component_GetComponent_TisCamera_t19_m965(L_2, /*hidden argument*/Component_GetComponent_TisCamera_t19_m965_MethodInfo_var);
		CNAbstractController_set_ParentCamera_m1144(__this, L_3, /*hidden argument*/&CNAbstractController_set_ParentCamera_m1144_MethodInfo);
		Transform_t2 * L_4 = CNAbstractController_get_TransformCache_m1141(__this, /*hidden argument*/&CNAbstractController_get_TransformCache_m1141_MethodInfo);
		Vector3_t8  L_5 = CNAbstractController_InitializePosition_m1163(__this, /*hidden argument*/&CNAbstractController_InitializePosition_m1163_MethodInfo);
		NullCheck(L_4);
		Transform_set_localPosition_m652(L_4, L_5, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		return;
	}
}
// System.Nullable`1<UnityEngine.Touch> CNAbstractController::GetTouchByFingerId(System.Int32)
extern TypeInfo* Nullable_1_t262_il2cpp_TypeInfo_var;
extern MethodInfo* Nullable_1__ctor_m1283_MethodInfo_var;
extern "C" Nullable_1_t262  CNAbstractController_GetTouchByFingerId_m1159 (CNAbstractController_t252 * __this, int32_t ___fingerId, MethodInfo* method)
{
	static bool CNAbstractController_GetTouchByFingerId_m1159_init;
	if (!CNAbstractController_GetTouchByFingerId_m1159_init)
	{
		Nullable_1_t262_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Nullable_1_t262_0_0_0);
		Nullable_1__ctor_m1283_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Nullable_1__ctor_m1283_GenericMethod);
		CNAbstractController_GetTouchByFingerId_m1159_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t206  V_2 = {0};
	Nullable_1_t262  V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		int32_t L_0 = Input_get_touchCount_m789(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m789_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Touch_t206  L_2 = Input_GetTouch_m1281(NULL /*static, unused*/, L_1, /*hidden argument*/&Input_GetTouch_m1281_MethodInfo);
		V_2 = L_2;
		int32_t L_3 = Touch_get_fingerId_m1282((&V_2), /*hidden argument*/&Touch_get_fingerId_m1282_MethodInfo);
		int32_t L_4 = ___fingerId;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0028;
		}
	}
	{
		Touch_t206  L_5 = V_2;
		Nullable_1_t262  L_6 = {0};
		Nullable_1__ctor_m1283(&L_6, L_5, /*hidden argument*/Nullable_1__ctor_m1283_MethodInfo_var);
		return L_6;
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}
	{
		Initobj (Nullable_1_t262_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t262  L_10 = V_3;
		return L_10;
	}
}
// System.Void CNAbstractController::OnControllerMoved(UnityEngine.Vector2)
extern MethodInfo CNAbstractController_OnControllerMoved_m1160_MethodInfo;
extern MethodInfo* Action_2_Invoke_m1284_MethodInfo_var;
extern "C" void CNAbstractController_OnControllerMoved_m1160 (CNAbstractController_t252 * __this, Vector2_t13  ___input, MethodInfo* method)
{
	static bool CNAbstractController_OnControllerMoved_m1160_init;
	if (!CNAbstractController_OnControllerMoved_m1160_init)
	{
		Action_2_Invoke_m1284_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_2_Invoke_m1284_GenericMethod);
		CNAbstractController_OnControllerMoved_m1160_init = true;
	}
	{
		Action_2_t258 * L_0 = (__this->___ControllerMovedEvent_9);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Action_2_t258 * L_1 = (__this->___ControllerMovedEvent_9);
		Vector2_t13  L_2 = ___input;
		Vector3_t8  L_3 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_1);
		VirtActionInvoker2< Vector3_t8 , CNAbstractController_t252 * >::Invoke(Action_2_Invoke_m1284_MethodInfo_var, L_1, L_3, __this);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CNAbstractController::OnFingerTouched()
extern MethodInfo* Action_1_Invoke_m1285_MethodInfo_var;
extern "C" void CNAbstractController_OnFingerTouched_m1161 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	static bool CNAbstractController_OnFingerTouched_m1161_init;
	if (!CNAbstractController_OnFingerTouched_m1161_init)
	{
		Action_1_Invoke_m1285_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m1285_GenericMethod);
		CNAbstractController_OnFingerTouched_m1161_init = true;
	}
	{
		Action_1_t259 * L_0 = (__this->___FingerTouchedEvent_10);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t259 * L_1 = (__this->___FingerTouchedEvent_10);
		NullCheck(L_1);
		VirtActionInvoker1< CNAbstractController_t252 * >::Invoke(Action_1_Invoke_m1285_MethodInfo_var, L_1, __this);
	}

IL_0017:
	{
		return;
	}
}
// System.Void CNAbstractController::OnFingerLifted()
extern MethodInfo* Action_1_Invoke_m1285_MethodInfo_var;
extern "C" void CNAbstractController_OnFingerLifted_m1162 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	static bool CNAbstractController_OnFingerLifted_m1162_init;
	if (!CNAbstractController_OnFingerLifted_m1162_init)
	{
		Action_1_Invoke_m1285_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m1285_GenericMethod);
		CNAbstractController_OnFingerLifted_m1162_init = true;
	}
	{
		Action_1_t259 * L_0 = (__this->___FingerLiftedEvent_11);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t259 * L_1 = (__this->___FingerLiftedEvent_11);
		NullCheck(L_1);
		VirtActionInvoker1< CNAbstractController_t252 * >::Invoke(Action_1_Invoke_m1285_MethodInfo_var, L_1, __this);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.Vector3 CNAbstractController::InitializePosition()
extern MethodInfo* Nullable_1_get_HasValue_m1291_MethodInfo_var;
extern MethodInfo* Nullable_1_get_Value_m1292_MethodInfo_var;
extern "C" Vector3_t8  CNAbstractController_InitializePosition_m1163 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	static bool CNAbstractController_InitializePosition_m1163_init;
	if (!CNAbstractController_InitializePosition_m1163_init)
	{
		Nullable_1_get_HasValue_m1291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Nullable_1_get_HasValue_m1291_GenericMethod);
		Nullable_1_get_Value_m1292_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Nullable_1_get_Value_m1292_GenericMethod);
		CNAbstractController_InitializePosition_m1163_init = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	Nullable_1_t261  V_3 = {0};
	Nullable_1_t261  V_4 = {0};
	Vector2_t13  V_5 = {0};
	Vector2_t13  V_6 = {0};
	Vector2_t13  V_7 = {0};
	Vector2_t13  V_8 = {0};
	Vector3_t8  V_9 = {0};
	Vector2_t13  V_10 = {0};
	Vector3_t8  V_11 = {0};
	Vector2_t13  V_12 = {0};
	Vector2_t13  V_13 = {0};
	Vector2_t13  V_14 = {0};
	{
		Nullable_1_t261  L_0 = CNAbstractController_get_CalculatedPosition_m1151(__this, /*hidden argument*/&CNAbstractController_get_CalculatedPosition_m1151_MethodInfo);
		V_3 = L_0;
		bool L_1 = Nullable_1_get_HasValue_m1291((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m1291_MethodInfo_var);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Nullable_1_t261  L_2 = CNAbstractController_get_CalculatedPosition_m1151(__this, /*hidden argument*/&CNAbstractController_get_CalculatedPosition_m1151_MethodInfo);
		V_4 = L_2;
		Vector3_t8  L_3 = Nullable_1_get_Value_m1292((&V_4), /*hidden argument*/Nullable_1_get_Value_m1292_MethodInfo_var);
		return L_3;
	}

IL_0023:
	{
		Camera_t19 * L_4 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		NullCheck(L_4);
		float L_5 = Camera_get_orthographicSize_m894(L_4, /*hidden argument*/&Camera_get_orthographicSize_m894_MethodInfo);
		V_0 = L_5;
		float L_6 = V_0;
		Camera_t19 * L_7 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		NullCheck(L_7);
		float L_8 = Camera_get_aspect_m892(L_7, /*hidden argument*/&Camera_get_aspect_m892_MethodInfo);
		V_1 = ((float)((float)L_6*(float)L_8));
		Vector3__ctor_m700((&V_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		int32_t L_9 = CNAbstractController_get_Anchor_m1131(__this, /*hidden argument*/&CNAbstractController_get_Anchor_m1131_MethodInfo);
		if (!((int32_t)((int32_t)L_9&(int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		float L_10 = V_1;
		Vector2_t13  L_11 = CNAbstractController_get_Margins_m1137(__this, /*hidden argument*/&CNAbstractController_get_Margins_m1137_MethodInfo);
		V_5 = L_11;
		float L_12 = ((&V_5)->___x_1);
		(&V_2)->___x_1 = ((float)((float)((-L_10))+(float)L_12));
		goto IL_0096;
	}

IL_007e:
	{
		float L_13 = V_1;
		Vector2_t13  L_14 = CNAbstractController_get_Margins_m1137(__this, /*hidden argument*/&CNAbstractController_get_Margins_m1137_MethodInfo);
		V_6 = L_14;
		float L_15 = ((&V_6)->___x_1);
		(&V_2)->___x_1 = ((float)((float)L_13-(float)L_15));
	}

IL_0096:
	{
		int32_t L_16 = CNAbstractController_get_Anchor_m1131(__this, /*hidden argument*/&CNAbstractController_get_Anchor_m1131_MethodInfo);
		if (!((int32_t)((int32_t)L_16&(int32_t)4)))
		{
			goto IL_00c0;
		}
	}
	{
		float L_17 = V_0;
		Vector2_t13  L_18 = CNAbstractController_get_Margins_m1137(__this, /*hidden argument*/&CNAbstractController_get_Margins_m1137_MethodInfo);
		V_7 = L_18;
		float L_19 = ((&V_7)->___y_2);
		(&V_2)->___y_2 = ((float)((float)L_17-(float)L_19));
		goto IL_00d9;
	}

IL_00c0:
	{
		float L_20 = V_0;
		Vector2_t13  L_21 = CNAbstractController_get_Margins_m1137(__this, /*hidden argument*/&CNAbstractController_get_Margins_m1137_MethodInfo);
		V_8 = L_21;
		float L_22 = ((&V_8)->___y_2);
		(&V_2)->___y_2 = ((float)((float)((-L_20))+(float)L_22));
	}

IL_00d9:
	{
		Transform_t2 * L_23 = CNAbstractController_get_TransformCache_m1141(__this, /*hidden argument*/&CNAbstractController_get_TransformCache_m1141_MethodInfo);
		NullCheck(L_23);
		Vector3_t8  L_24 = Transform_get_position_m599(L_23, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_9 = L_24;
		float L_25 = ((&V_9)->___x_1);
		Vector2_t13  L_26 = CNAbstractController_get_TouchZoneSize_m1139(__this, /*hidden argument*/&CNAbstractController_get_TouchZoneSize_m1139_MethodInfo);
		V_10 = L_26;
		float L_27 = ((&V_10)->___x_1);
		Transform_t2 * L_28 = CNAbstractController_get_TransformCache_m1141(__this, /*hidden argument*/&CNAbstractController_get_TransformCache_m1141_MethodInfo);
		NullCheck(L_28);
		Vector3_t8  L_29 = Transform_get_position_m599(L_28, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		V_11 = L_29;
		float L_30 = ((&V_11)->___y_2);
		Vector2_t13  L_31 = CNAbstractController_get_TouchZoneSize_m1139(__this, /*hidden argument*/&CNAbstractController_get_TouchZoneSize_m1139_MethodInfo);
		V_12 = L_31;
		float L_32 = ((&V_12)->___y_2);
		Vector2_t13  L_33 = CNAbstractController_get_TouchZoneSize_m1139(__this, /*hidden argument*/&CNAbstractController_get_TouchZoneSize_m1139_MethodInfo);
		V_13 = L_33;
		float L_34 = ((&V_13)->___x_1);
		Vector2_t13  L_35 = CNAbstractController_get_TouchZoneSize_m1139(__this, /*hidden argument*/&CNAbstractController_get_TouchZoneSize_m1139_MethodInfo);
		V_14 = L_35;
		float L_36 = ((&V_14)->___y_2);
		Rect_t260  L_37 = {0};
		Rect__ctor_m1286(&L_37, ((float)((float)L_25-(float)((float)((float)L_27/(float)(2.0f))))), ((float)((float)L_30-(float)((float)((float)L_32/(float)(2.0f))))), L_34, L_36, /*hidden argument*/&Rect__ctor_m1286_MethodInfo);
		CNAbstractController_set_CalculatedTouchZone_m1146(__this, L_37, /*hidden argument*/&CNAbstractController_set_CalculatedTouchZone_m1146_MethodInfo);
		Vector3_t8  L_38 = V_2;
		return L_38;
	}
}
// System.Void CNAbstractController::ResetControlState()
extern "C" void CNAbstractController_ResetControlState_m1164 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	{
		CNAbstractController_set_IsCurrentlyTweaking_m1154(__this, 0, /*hidden argument*/&CNAbstractController_set_IsCurrentlyTweaking_m1154_MethodInfo);
		Vector2_t13  L_0 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		CNAbstractController_set_CurrentAxisValues_m1148(__this, L_0, /*hidden argument*/&CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo);
		VirtActionInvoker0::Invoke(&CNAbstractController_OnFingerLifted_m1162_MethodInfo, __this);
		return;
	}
}
// System.Boolean CNAbstractController::TweakIfNeeded()
extern MethodInfo CNAbstractController_TweakIfNeeded_m1165_MethodInfo;
extern MethodInfo* Nullable_1_get_HasValue_m1293_MethodInfo_var;
extern MethodInfo* Nullable_1_get_Value_m1294_MethodInfo_var;
extern "C" bool CNAbstractController_TweakIfNeeded_m1165 (CNAbstractController_t252 * __this, MethodInfo* method)
{
	static bool CNAbstractController_TweakIfNeeded_m1165_init;
	if (!CNAbstractController_TweakIfNeeded_m1165_init)
	{
		Nullable_1_get_HasValue_m1293_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Nullable_1_get_HasValue_m1293_GenericMethod);
		Nullable_1_get_Value_m1294_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Nullable_1_get_Value_m1294_GenericMethod);
		CNAbstractController_TweakIfNeeded_m1165_init = true;
	}
	Nullable_1_t262  V_0 = {0};
	Touch_t206  V_1 = {0};
	Touch_t206  V_2 = {0};
	{
		bool L_0 = CNAbstractController_get_IsCurrentlyTweaking_m1153(__this, /*hidden argument*/&CNAbstractController_get_IsCurrentlyTweaking_m1153_MethodInfo);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_1 = CNAbstractController_get_CurrentFingerId_m1149(__this, /*hidden argument*/&CNAbstractController_get_CurrentFingerId_m1149_MethodInfo);
		Nullable_1_t262  L_2 = (Nullable_1_t262 )VirtFuncInvoker1< Nullable_1_t262 , int32_t >::Invoke(&CNAbstractController_GetTouchByFingerId_m1159_MethodInfo, __this, L_1);
		V_0 = L_2;
		bool L_3 = Nullable_1_get_HasValue_m1293((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1293_MethodInfo_var);
		if (((((int32_t)L_3) == ((int32_t)0))? 1 : 0))
		{
			goto IL_003c;
		}
	}
	{
		Touch_t206  L_4 = Nullable_1_get_Value_m1294((&V_0), /*hidden argument*/Nullable_1_get_Value_m1294_MethodInfo_var);
		V_1 = L_4;
		int32_t L_5 = Touch_get_phase_m1287((&V_1), /*hidden argument*/&Touch_get_phase_m1287_MethodInfo);
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0044;
		}
	}

IL_003c:
	{
		VirtActionInvoker0::Invoke(&CNAbstractController_ResetControlState_m1164_MethodInfo, __this);
		return 0;
	}

IL_0044:
	{
		Touch_t206  L_6 = Nullable_1_get_Value_m1294((&V_0), /*hidden argument*/Nullable_1_get_Value_m1294_MethodInfo_var);
		V_2 = L_6;
		Vector2_t13  L_7 = Touch_get_position_m791((&V_2), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		VirtActionInvoker1< Vector2_t13  >::Invoke(&CNAbstractController_TweakControl_m1288_MethodInfo, __this, L_7);
		return 1;
	}

IL_005b:
	{
		return 0;
	}
}
// System.Boolean CNAbstractController::IsTouchCaptured(UnityEngine.Touch&)
extern MethodInfo CNAbstractController_IsTouchCaptured_m1166_MethodInfo;
extern "C" bool CNAbstractController_IsTouchCaptured_m1166 (CNAbstractController_t252 * __this, Touch_t206 * ___capturedTouch, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t206  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		int32_t L_0 = Input_get_touchCount_m789(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m789_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0059;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Touch_t206  L_2 = Input_GetTouch_m1281(NULL /*static, unused*/, L_1, /*hidden argument*/&Input_GetTouch_m1281_MethodInfo);
		V_2 = L_2;
		int32_t L_3 = Touch_get_phase_m1287((&V_2), /*hidden argument*/&Touch_get_phase_m1287_MethodInfo);
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		Vector2_t13  L_4 = Touch_get_position_m791((&V_2), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		bool L_5 = CNAbstractController_IsTouchInZone_m1167(__this, L_4, /*hidden argument*/&CNAbstractController_IsTouchInZone_m1167_MethodInfo);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		CNAbstractController_set_IsCurrentlyTweaking_m1154(__this, 1, /*hidden argument*/&CNAbstractController_set_IsCurrentlyTweaking_m1154_MethodInfo);
		int32_t L_6 = Touch_get_fingerId_m1282((&V_2), /*hidden argument*/&Touch_get_fingerId_m1282_MethodInfo);
		CNAbstractController_set_CurrentFingerId_m1150(__this, L_6, /*hidden argument*/&CNAbstractController_set_CurrentFingerId_m1150_MethodInfo);
		VirtActionInvoker0::Invoke(&CNAbstractController_OnFingerTouched_m1161_MethodInfo, __this);
		Touch_t206 * L_7 = ___capturedTouch;
		Touch_t206  L_8 = V_2;
		*L_7 = L_8;
		return 1;
	}

IL_0055:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0059:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		Touch_t206 * L_12 = ___capturedTouch;
		Initobj (InitializedTypeInfo(&Touch_t206_il2cpp_TypeInfo), L_12);
		return 0;
	}
}
// System.Boolean CNAbstractController::IsTouchInZone(UnityEngine.Vector2)
extern "C" bool CNAbstractController_IsTouchInZone_m1167 (CNAbstractController_t252 * __this, Vector2_t13  ___touchPosition, MethodInfo* method)
{
	Rect_t260  V_0 = {0};
	{
		Rect_t260  L_0 = CNAbstractController_get_CalculatedTouchZone_m1145(__this, /*hidden argument*/&CNAbstractController_get_CalculatedTouchZone_m1145_MethodInfo);
		V_0 = L_0;
		Camera_t19 * L_1 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		Vector2_t13  L_2 = ___touchPosition;
		Vector3_t8  L_3 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_1);
		Vector3_t8  L_4 = Camera_ScreenToWorldPoint_m1289(L_1, L_3, /*hidden argument*/&Camera_ScreenToWorldPoint_m1289_MethodInfo);
		bool L_5 = Rect_Contains_m1290((&V_0), L_4, 0, /*hidden argument*/&Rect_Contains_m1290_MethodInfo);
		return L_5;
	}
}
// System.Void CNAbstractController::TweakControl(UnityEngine.Vector2)
// CNJoystick
#include "AssemblyU2DCSharp_CNJoystick.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CNJoystick_t263_il2cpp_TypeInfo;
// CNJoystick
#include "AssemblyU2DCSharp_CNJoystickMethodDeclarations.h"

extern TypeInfo Boolean_t202_il2cpp_TypeInfo;
extern MethodInfo CNJoystick_get_IsHiddenIfNotTweaking_m1173_MethodInfo;
extern MethodInfo GameObject_get_gameObject_m1295_MethodInfo;
extern MethodInfo CNJoystick_PlaceJoystickBaseUnderTheFinger_m1181_MethodInfo;
extern MethodInfo CNJoystick_get_DragRadius_m1169_MethodInfo;
extern MethodInfo Vector3_op_Addition_m634_MethodInfo;
extern MethodInfo Transform_set_position_m601_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m993_MethodInfo;


// System.Void CNJoystick::.ctor()
extern MethodInfo CNJoystick__ctor_m1168_MethodInfo;
extern "C" void CNJoystick__ctor_m1168 (CNJoystick_t263 * __this, MethodInfo* method)
{
	{
		__this->____dragRadius_19 = (1.5f);
		__this->____snapsToFinger_20 = 1;
		CNAbstractController__ctor_m1124(__this, /*hidden argument*/&CNAbstractController__ctor_m1124_MethodInfo);
		return;
	}
}
// System.Single CNJoystick::get_DragRadius()
extern "C" float CNJoystick_get_DragRadius_m1169 (CNJoystick_t263 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->____dragRadius_19);
		return L_0;
	}
}
// System.Void CNJoystick::set_DragRadius(System.Single)
extern MethodInfo CNJoystick_set_DragRadius_m1170_MethodInfo;
extern "C" void CNJoystick_set_DragRadius_m1170 (CNJoystick_t263 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->____dragRadius_19 = L_0;
		return;
	}
}
// System.Boolean CNJoystick::get_SnapsToFinger()
extern MethodInfo CNJoystick_get_SnapsToFinger_m1171_MethodInfo;
extern "C" bool CNJoystick_get_SnapsToFinger_m1171 (CNJoystick_t263 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->____snapsToFinger_20);
		return L_0;
	}
}
// System.Void CNJoystick::set_SnapsToFinger(System.Boolean)
extern MethodInfo CNJoystick_set_SnapsToFinger_m1172_MethodInfo;
extern "C" void CNJoystick_set_SnapsToFinger_m1172 (CNJoystick_t263 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____snapsToFinger_20 = L_0;
		return;
	}
}
// System.Boolean CNJoystick::get_IsHiddenIfNotTweaking()
extern "C" bool CNJoystick_get_IsHiddenIfNotTweaking_m1173 (CNJoystick_t263 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->____isHiddenIfNotTweaking_21);
		return L_0;
	}
}
// System.Void CNJoystick::set_IsHiddenIfNotTweaking(System.Boolean)
extern MethodInfo CNJoystick_set_IsHiddenIfNotTweaking_m1174_MethodInfo;
extern "C" void CNJoystick_set_IsHiddenIfNotTweaking_m1174 (CNJoystick_t263 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isHiddenIfNotTweaking_21 = L_0;
		return;
	}
}
// System.Void CNJoystick::OnEnable()
extern MethodInfo CNJoystick_OnEnable_m1175_MethodInfo;
extern MethodInfo* Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var;
extern "C" void CNJoystick_OnEnable_m1175 (CNJoystick_t263 * __this, MethodInfo* method)
{
	static bool CNJoystick_OnEnable_m1175_init;
	if (!CNJoystick_OnEnable_m1175_init)
	{
		Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisTransform_t2_m1274_GenericMethod);
		CNJoystick_OnEnable_m1175_init = true;
	}
	{
		CNAbstractController_OnEnable_m1158(__this, /*hidden argument*/&CNAbstractController_OnEnable_m1158_MethodInfo);
		Transform_t2 * L_0 = CNAbstractController_get_TransformCache_m1141(__this, /*hidden argument*/&CNAbstractController_get_TransformCache_m1141_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Transform_FindChild_m1275(L_0, (String_t*) &_stringLiteral74, /*hidden argument*/&Transform_FindChild_m1275_MethodInfo);
		NullCheck(L_1);
		Transform_t2 * L_2 = Component_GetComponent_TisTransform_t2_m1274(L_1, /*hidden argument*/Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var);
		__this->____stickTransform_22 = L_2;
		Transform_t2 * L_3 = CNAbstractController_get_TransformCache_m1141(__this, /*hidden argument*/&CNAbstractController_get_TransformCache_m1141_MethodInfo);
		NullCheck(L_3);
		Transform_t2 * L_4 = Transform_FindChild_m1275(L_3, (String_t*) &_stringLiteral75, /*hidden argument*/&Transform_FindChild_m1275_MethodInfo);
		NullCheck(L_4);
		Transform_t2 * L_5 = Component_GetComponent_TisTransform_t2_m1274(L_4, /*hidden argument*/Component_GetComponent_TisTransform_t2_m1274_MethodInfo_var);
		__this->____baseTransform_23 = L_5;
		Transform_t2 * L_6 = (__this->____stickTransform_22);
		NullCheck(L_6);
		GameObject_t92 * L_7 = Component_get_gameObject_m577(L_6, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		__this->____stickGameObject_24 = L_7;
		Transform_t2 * L_8 = (__this->____baseTransform_23);
		NullCheck(L_8);
		GameObject_t92 * L_9 = Component_get_gameObject_m577(L_8, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		__this->____baseGameObject_25 = L_9;
		bool L_10 = CNJoystick_get_IsHiddenIfNotTweaking_m1173(__this, /*hidden argument*/&CNJoystick_get_IsHiddenIfNotTweaking_m1173_MethodInfo);
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		GameObject_t92 * L_11 = (__this->____baseGameObject_25);
		NullCheck(L_11);
		GameObject_t92 * L_12 = GameObject_get_gameObject_m1295(L_11, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_12);
		GameObject_SetActive_m770(L_12, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		GameObject_t92 * L_13 = (__this->____stickGameObject_24);
		NullCheck(L_13);
		GameObject_t92 * L_14 = GameObject_get_gameObject_m1295(L_13, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_14);
		GameObject_SetActive_m770(L_14, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		goto IL_00b2;
	}

IL_0090:
	{
		GameObject_t92 * L_15 = (__this->____baseGameObject_25);
		NullCheck(L_15);
		GameObject_t92 * L_16 = GameObject_get_gameObject_m1295(L_15, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_16);
		GameObject_SetActive_m770(L_16, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		GameObject_t92 * L_17 = (__this->____stickGameObject_24);
		NullCheck(L_17);
		GameObject_t92 * L_18 = GameObject_get_gameObject_m1295(L_17, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_18);
		GameObject_SetActive_m770(L_18, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void CNJoystick::ResetControlState()
extern MethodInfo CNJoystick_ResetControlState_m1176_MethodInfo;
extern "C" void CNJoystick_ResetControlState_m1176 (CNJoystick_t263 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		CNAbstractController_ResetControlState_m1164(__this, /*hidden argument*/&CNAbstractController_ResetControlState_m1164_MethodInfo);
		Transform_t2 * L_0 = (__this->____stickTransform_22);
		Vector3_t8  L_1 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		V_0 = L_1;
		Transform_t2 * L_2 = (__this->____baseTransform_23);
		Vector3_t8  L_3 = V_0;
		NullCheck(L_2);
		Transform_set_localPosition_m652(L_2, L_3, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		Vector3_t8  L_4 = V_0;
		NullCheck(L_0);
		Transform_set_localPosition_m652(L_0, L_4, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		return;
	}
}
// System.Void CNJoystick::OnFingerLifted()
extern MethodInfo CNJoystick_OnFingerLifted_m1177_MethodInfo;
extern "C" void CNJoystick_OnFingerLifted_m1177 (CNJoystick_t263 * __this, MethodInfo* method)
{
	{
		CNAbstractController_OnFingerLifted_m1162(__this, /*hidden argument*/&CNAbstractController_OnFingerLifted_m1162_MethodInfo);
		bool L_0 = CNJoystick_get_IsHiddenIfNotTweaking_m1173(__this, /*hidden argument*/&CNJoystick_get_IsHiddenIfNotTweaking_m1173_MethodInfo);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		GameObject_t92 * L_1 = (__this->____baseGameObject_25);
		NullCheck(L_1);
		GameObject_t92 * L_2 = GameObject_get_gameObject_m1295(L_1, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_2);
		GameObject_SetActive_m770(L_2, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		GameObject_t92 * L_3 = (__this->____stickGameObject_24);
		NullCheck(L_3);
		GameObject_t92 * L_4 = GameObject_get_gameObject_m1295(L_3, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_4);
		GameObject_SetActive_m770(L_4, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		return;
	}
}
// System.Void CNJoystick::OnFingerTouched()
extern MethodInfo CNJoystick_OnFingerTouched_m1178_MethodInfo;
extern "C" void CNJoystick_OnFingerTouched_m1178 (CNJoystick_t263 * __this, MethodInfo* method)
{
	{
		CNAbstractController_OnFingerTouched_m1161(__this, /*hidden argument*/&CNAbstractController_OnFingerTouched_m1161_MethodInfo);
		bool L_0 = CNJoystick_get_IsHiddenIfNotTweaking_m1173(__this, /*hidden argument*/&CNJoystick_get_IsHiddenIfNotTweaking_m1173_MethodInfo);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		GameObject_t92 * L_1 = (__this->____baseGameObject_25);
		NullCheck(L_1);
		GameObject_t92 * L_2 = GameObject_get_gameObject_m1295(L_1, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_2);
		GameObject_SetActive_m770(L_2, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		GameObject_t92 * L_3 = (__this->____stickGameObject_24);
		NullCheck(L_3);
		GameObject_t92 * L_4 = GameObject_get_gameObject_m1295(L_3, /*hidden argument*/&GameObject_get_gameObject_m1295_MethodInfo);
		NullCheck(L_4);
		GameObject_SetActive_m770(L_4, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		return;
	}
}
// System.Void CNJoystick::Update()
extern MethodInfo CNJoystick_Update_m1179_MethodInfo;
extern "C" void CNJoystick_Update_m1179 (CNJoystick_t263 * __this, MethodInfo* method)
{
	Touch_t206  V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&CNAbstractController_TweakIfNeeded_m1165_MethodInfo, __this);
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
		bool L_1 = (bool)VirtFuncInvoker1< bool, Touch_t206 * >::Invoke(&CNAbstractController_IsTouchCaptured_m1166_MethodInfo, __this, (&V_0));
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Touch_t206  L_2 = V_0;
		VirtActionInvoker1< Touch_t206  >::Invoke(&CNJoystick_PlaceJoystickBaseUnderTheFinger_m1181_MethodInfo, __this, L_2);
	}

IL_0020:
	{
		return;
	}
}
// System.Void CNJoystick::TweakControl(UnityEngine.Vector2)
extern MethodInfo CNJoystick_TweakControl_m1180_MethodInfo;
extern "C" void CNJoystick_TweakControl_m1180 (CNJoystick_t263 * __this, Vector2_t13  ___touchPosition, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		Camera_t19 * L_0 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		Vector2_t13  L_1 = ___touchPosition;
		Vector3_t8  L_2 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_3 = Camera_ScreenToWorldPoint_m1289(L_0, L_2, /*hidden argument*/&Camera_ScreenToWorldPoint_m1289_MethodInfo);
		V_0 = L_3;
		Vector3_t8  L_4 = V_0;
		Transform_t2 * L_5 = (__this->____baseTransform_23);
		NullCheck(L_5);
		Vector3_t8  L_6 = Transform_get_position_m599(L_5, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_7 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_1 = L_7;
		float L_8 = Vector3_get_sqrMagnitude_m602((&V_1), /*hidden argument*/&Vector3_get_sqrMagnitude_m602_MethodInfo);
		float L_9 = CNJoystick_get_DragRadius_m1169(__this, /*hidden argument*/&CNJoystick_get_DragRadius_m1169_MethodInfo);
		float L_10 = CNJoystick_get_DragRadius_m1169(__this, /*hidden argument*/&CNJoystick_get_DragRadius_m1169_MethodInfo);
		if ((!(((float)L_8) > ((float)((float)((float)L_9*(float)L_10))))))
		{
			goto IL_0070;
		}
	}
	{
		Vector3_Normalize_m728((&V_1), /*hidden argument*/&Vector3_Normalize_m728_MethodInfo);
		Transform_t2 * L_11 = (__this->____stickTransform_22);
		Transform_t2 * L_12 = (__this->____baseTransform_23);
		NullCheck(L_12);
		Vector3_t8  L_13 = Transform_get_position_m599(L_12, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_14 = V_1;
		float L_15 = CNJoystick_get_DragRadius_m1169(__this, /*hidden argument*/&CNJoystick_get_DragRadius_m1169_MethodInfo);
		Vector3_t8  L_16 = Vector3_op_Multiply_m633(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Multiply_m633_MethodInfo);
		Vector3_t8  L_17 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		NullCheck(L_11);
		Transform_set_position_m601(L_11, L_17, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		goto IL_007c;
	}

IL_0070:
	{
		Transform_t2 * L_18 = (__this->____stickTransform_22);
		Vector3_t8  L_19 = V_0;
		NullCheck(L_18);
		Transform_set_position_m601(L_18, L_19, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
	}

IL_007c:
	{
		Vector3_t8  L_20 = V_1;
		Vector2_t13  L_21 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_20, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		CNAbstractController_set_CurrentAxisValues_m1148(__this, L_21, /*hidden argument*/&CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo);
		Vector3_t8  L_22 = V_1;
		Vector2_t13  L_23 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_22, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		VirtActionInvoker1< Vector2_t13  >::Invoke(&CNAbstractController_OnControllerMoved_m1160_MethodInfo, __this, L_23);
		return;
	}
}
// System.Void CNJoystick::PlaceJoystickBaseUnderTheFinger(UnityEngine.Touch)
extern "C" void CNJoystick_PlaceJoystickBaseUnderTheFinger_m1181 (CNJoystick_t263 * __this, Touch_t206  ___touch, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		bool L_0 = (__this->____snapsToFinger_20);
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
		Transform_t2 * L_1 = (__this->____stickTransform_22);
		Camera_t19 * L_2 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		Vector2_t13  L_3 = Touch_get_position_m791((&___touch), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		Vector3_t8  L_4 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_5 = Camera_ScreenToWorldPoint_m1289(L_2, L_4, /*hidden argument*/&Camera_ScreenToWorldPoint_m1289_MethodInfo);
		V_0 = L_5;
		Transform_t2 * L_6 = (__this->____baseTransform_23);
		Vector3_t8  L_7 = V_0;
		NullCheck(L_6);
		Transform_set_position_m601(L_6, L_7, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Vector3_t8  L_8 = V_0;
		NullCheck(L_1);
		Transform_set_position_m601(L_1, L_8, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		return;
	}
}
// CNThrowableTouchpad
#include "AssemblyU2DCSharp_CNThrowableTouchpad.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CNThrowableTouchpad_t264_il2cpp_TypeInfo;
// CNThrowableTouchpad
#include "AssemblyU2DCSharp_CNThrowableTouchpadMethodDeclarations.h"

// CNTouchpad
#include "AssemblyU2DCSharp_CNTouchpad.h"
extern TypeInfo CNTouchpad_t265_il2cpp_TypeInfo;
// CNTouchpad
#include "AssemblyU2DCSharp_CNTouchpadMethodDeclarations.h"
extern MethodInfo CNTouchpad__ctor_m1187_MethodInfo;
extern MethodInfo CNTouchpad_Update_m1192_MethodInfo;
extern MethodInfo Vector2_get_sqrMagnitude_m683_MethodInfo;
extern MethodInfo CNThrowableTouchpad_get_SpeedDecay_m1183_MethodInfo;
extern MethodInfo Vector2_op_Multiply_m1296_MethodInfo;


// System.Void CNThrowableTouchpad::.ctor()
extern MethodInfo CNThrowableTouchpad__ctor_m1182_MethodInfo;
extern "C" void CNThrowableTouchpad__ctor_m1182 (CNThrowableTouchpad_t264 * __this, MethodInfo* method)
{
	{
		__this->____speedDecay_21 = (0.9f);
		CNTouchpad__ctor_m1187(__this, /*hidden argument*/&CNTouchpad__ctor_m1187_MethodInfo);
		return;
	}
}
// System.Single CNThrowableTouchpad::get_SpeedDecay()
extern "C" float CNThrowableTouchpad_get_SpeedDecay_m1183 (CNThrowableTouchpad_t264 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->____speedDecay_21);
		return L_0;
	}
}
// System.Void CNThrowableTouchpad::set_SpeedDecay(System.Single)
extern MethodInfo CNThrowableTouchpad_set_SpeedDecay_m1184_MethodInfo;
extern "C" void CNThrowableTouchpad_set_SpeedDecay_m1184 (CNThrowableTouchpad_t264 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->____speedDecay_21 = L_0;
		return;
	}
}
// System.Void CNThrowableTouchpad::ResetControlState()
extern MethodInfo CNThrowableTouchpad_ResetControlState_m1185_MethodInfo;
extern "C" void CNThrowableTouchpad_ResetControlState_m1185 (CNThrowableTouchpad_t264 * __this, MethodInfo* method)
{
	{
		CNAbstractController_set_IsCurrentlyTweaking_m1154(__this, 0, /*hidden argument*/&CNAbstractController_set_IsCurrentlyTweaking_m1154_MethodInfo);
		VirtActionInvoker0::Invoke(&CNAbstractController_OnFingerLifted_m1162_MethodInfo, __this);
		return;
	}
}
// System.Void CNThrowableTouchpad::Update()
extern MethodInfo CNThrowableTouchpad_Update_m1186_MethodInfo;
extern "C" void CNThrowableTouchpad_Update_m1186 (CNThrowableTouchpad_t264 * __this, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	{
		CNTouchpad_Update_m1192(__this, /*hidden argument*/&CNTouchpad_Update_m1192_MethodInfo);
		Vector2_t13  L_0 = CNAbstractController_get_CurrentAxisValues_m1147(__this, /*hidden argument*/&CNAbstractController_get_CurrentAxisValues_m1147_MethodInfo);
		V_0 = L_0;
		float L_1 = Vector2_get_sqrMagnitude_m683((&V_0), /*hidden argument*/&Vector2_get_sqrMagnitude_m683_MethodInfo);
		if ((!(((float)L_1) <= ((float)(0.001f)))))
		{
			goto IL_002a;
		}
	}
	{
		Vector2_t13  L_2 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		CNAbstractController_set_CurrentAxisValues_m1148(__this, L_2, /*hidden argument*/&CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo);
		return;
	}

IL_002a:
	{
		Vector2_t13  L_3 = CNAbstractController_get_CurrentAxisValues_m1147(__this, /*hidden argument*/&CNAbstractController_get_CurrentAxisValues_m1147_MethodInfo);
		float L_4 = CNThrowableTouchpad_get_SpeedDecay_m1183(__this, /*hidden argument*/&CNThrowableTouchpad_get_SpeedDecay_m1183_MethodInfo);
		Vector2_t13  L_5 = Vector2_op_Multiply_m1296(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector2_op_Multiply_m1296_MethodInfo);
		CNAbstractController_set_CurrentAxisValues_m1148(__this, L_5, /*hidden argument*/&CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo);
		Vector2_t13  L_6 = CNAbstractController_get_CurrentAxisValues_m1147(__this, /*hidden argument*/&CNAbstractController_get_CurrentAxisValues_m1147_MethodInfo);
		VirtActionInvoker1< Vector2_t13  >::Invoke(&CNAbstractController_OnControllerMoved_m1160_MethodInfo, __this, L_6);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo CNTouchpad_set_PreviousPosition_m1191_MethodInfo;
extern MethodInfo CNTouchpad_get_PreviousPosition_m1190_MethodInfo;
extern MethodInfo CNTouchpad_get_IsAlwaysNormalized_m1188_MethodInfo;


// System.Void CNTouchpad::.ctor()
extern "C" void CNTouchpad__ctor_m1187 (CNTouchpad_t265 * __this, MethodInfo* method)
{
	{
		__this->____isAlwaysNormalized_19 = 1;
		CNAbstractController__ctor_m1124(__this, /*hidden argument*/&CNAbstractController__ctor_m1124_MethodInfo);
		return;
	}
}
// System.Boolean CNTouchpad::get_IsAlwaysNormalized()
extern "C" bool CNTouchpad_get_IsAlwaysNormalized_m1188 (CNTouchpad_t265 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->____isAlwaysNormalized_19);
		return L_0;
	}
}
// System.Void CNTouchpad::set_IsAlwaysNormalized(System.Boolean)
extern MethodInfo CNTouchpad_set_IsAlwaysNormalized_m1189_MethodInfo;
extern "C" void CNTouchpad_set_IsAlwaysNormalized_m1189 (CNTouchpad_t265 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isAlwaysNormalized_19 = L_0;
		return;
	}
}
// UnityEngine.Vector3 CNTouchpad::get_PreviousPosition()
extern "C" Vector3_t8  CNTouchpad_get_PreviousPosition_m1190 (CNTouchpad_t265 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = (__this->___U3CPreviousPositionU3Ek__BackingField_20);
		return L_0;
	}
}
// System.Void CNTouchpad::set_PreviousPosition(UnityEngine.Vector3)
extern "C" void CNTouchpad_set_PreviousPosition_m1191 (CNTouchpad_t265 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = ___value;
		__this->___U3CPreviousPositionU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Void CNTouchpad::Update()
extern "C" void CNTouchpad_Update_m1192 (CNTouchpad_t265 * __this, MethodInfo* method)
{
	Touch_t206  V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&CNAbstractController_TweakIfNeeded_m1165_MethodInfo, __this);
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
		bool L_1 = (bool)VirtFuncInvoker1< bool, Touch_t206 * >::Invoke(&CNAbstractController_IsTouchCaptured_m1166_MethodInfo, __this, (&V_0));
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Camera_t19 * L_2 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		Vector2_t13  L_3 = Touch_get_position_m791((&V_0), /*hidden argument*/&Touch_get_position_m791_MethodInfo);
		Vector3_t8  L_4 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_2);
		Vector3_t8  L_5 = Camera_ScreenToWorldPoint_m1289(L_2, L_4, /*hidden argument*/&Camera_ScreenToWorldPoint_m1289_MethodInfo);
		CNTouchpad_set_PreviousPosition_m1191(__this, L_5, /*hidden argument*/&CNTouchpad_set_PreviousPosition_m1191_MethodInfo);
		return;
	}
}
// System.Void CNTouchpad::TweakControl(UnityEngine.Vector2)
extern MethodInfo CNTouchpad_TweakControl_m1193_MethodInfo;
extern "C" void CNTouchpad_TweakControl_m1193 (CNTouchpad_t265 * __this, Vector2_t13  ___touchPosition, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		Camera_t19 * L_0 = CNAbstractController_get_ParentCamera_m1143(__this, /*hidden argument*/&CNAbstractController_get_ParentCamera_m1143_MethodInfo);
		Vector2_t13  L_1 = ___touchPosition;
		Vector3_t8  L_2 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_3 = Camera_ScreenToWorldPoint_m1289(L_0, L_2, /*hidden argument*/&Camera_ScreenToWorldPoint_m1289_MethodInfo);
		V_0 = L_3;
		Vector3_t8  L_4 = V_0;
		Vector3_t8  L_5 = CNTouchpad_get_PreviousPosition_m1190(__this, /*hidden argument*/&CNTouchpad_get_PreviousPosition_m1190_MethodInfo);
		Vector3_t8  L_6 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_1 = L_6;
		bool L_7 = CNTouchpad_get_IsAlwaysNormalized_m1188(__this, /*hidden argument*/&CNTouchpad_get_IsAlwaysNormalized_m1188_MethodInfo);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		Vector3_Normalize_m728((&V_1), /*hidden argument*/&Vector3_Normalize_m728_MethodInfo);
	}

IL_0031:
	{
		Vector3_t8  L_8 = V_1;
		Vector2_t13  L_9 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_8, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		CNAbstractController_set_CurrentAxisValues_m1148(__this, L_9, /*hidden argument*/&CNAbstractController_set_CurrentAxisValues_m1148_MethodInfo);
		Vector3_t8  L_10 = V_1;
		Vector2_t13  L_11 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_10, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		VirtActionInvoker1< Vector2_t13  >::Invoke(&CNAbstractController_OnControllerMoved_m1160_MethodInfo, __this, L_11);
		Vector3_t8  L_12 = V_0;
		CNTouchpad_set_PreviousPosition_m1191(__this, L_12, /*hidden argument*/&CNTouchpad_set_PreviousPosition_m1191_MethodInfo);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.RMXJoystick/AxisOption
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisOption_t266_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.RMXJoystick/AxisOption
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMXMethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.RMXJoystick
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RMXJoystick_t267_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.RMXJoystick
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_0MethodDeclarations.h"

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
extern TypeInfo VirtualAxis_t45_il2cpp_TypeInfo;
extern TypeInfo CrossPlatformInputManager_t51_il2cpp_TypeInfo;
extern TypeInfo Mathf_t186_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_2MethodDeclarations.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_4MethodDeclarations.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern MethodInfo Component_get_transform_m598_MethodInfo;
extern MethodInfo Transform_get_localPosition_m632_MethodInfo;
extern MethodInfo MonoBehaviour_print_m1297_MethodInfo;
extern MethodInfo RMXJoystick_CreateVirtualAxes_m1197_MethodInfo;
extern MethodInfo Vector3_op_Division_m731_MethodInfo;
extern MethodInfo VirtualAxis_Update_m121_MethodInfo;
extern MethodInfo VirtualAxis__ctor_m114_MethodInfo;
extern MethodInfo CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo;
extern MethodInfo PointerEventData_get_position_m766_MethodInfo;
extern MethodInfo Mathf_Clamp_m767_MethodInfo;
extern MethodInfo RMXJoystick_UpdateVirtualAxes_m1196_MethodInfo;
extern MethodInfo VirtualAxis_Remove_m120_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::.ctor()
extern MethodInfo RMXJoystick__ctor_m1194_MethodInfo;
extern "C" void RMXJoystick__ctor_m1194 (RMXJoystick_t267 * __this, MethodInfo* method)
{
	{
		__this->___MovementRange_2 = ((int32_t)100);
		__this->___horizontalAxisName_4 = (String_t*) &_stringLiteral5;
		__this->___verticalAxisName_5 = (String_t*) &_stringLiteral6;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::OnEnable()
extern MethodInfo RMXJoystick_OnEnable_m1195_MethodInfo;
extern "C" void RMXJoystick_OnEnable_m1195 (RMXJoystick_t267 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_localPosition_m632(L_0, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		Vector3_t8  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_2);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_3, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_position_m599(L_4, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_6);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_7, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Transform_t2 * L_8 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_8, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Transform_t2 * L_9 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_localPosition_m632(L_9, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_StartPos_7 = L_10;
		Transform_t2 * L_11 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_11);
		Vector3_t8  L_12 = Transform_get_localPosition_m632(L_11, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___origin_6 = L_12;
		RMXJoystick_CreateVirtualAxes_m1197(__this, /*hidden argument*/&RMXJoystick_CreateVirtualAxes_m1197_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void RMXJoystick_UpdateVirtualAxes_m1196 (RMXJoystick_t267 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector3_t8  L_0 = (__this->___m_StartPos_7);
		Vector3_t8  L_1 = ___value;
		Vector3_t8  L_2 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_0 = L_2;
		float L_3 = ((&V_0)->___y_2);
		(&V_0)->___y_2 = ((-L_3));
		Vector3_t8  L_4 = V_0;
		int32_t L_5 = (__this->___MovementRange_2);
		Vector3_t8  L_6 = Vector3_op_Division_m731(NULL /*static, unused*/, L_4, (((float)L_5)), /*hidden argument*/&Vector3_op_Division_m731_MethodInfo);
		V_0 = L_6;
		bool L_7 = (__this->___m_UseX_8);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t45 * L_8 = (__this->___m_HorizontalVirtualAxis_10);
		float L_9 = ((&V_0)->___x_1);
		NullCheck(L_8);
		VirtualAxis_Update_m121(L_8, ((-L_9)), /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0048:
	{
		bool L_10 = (__this->___m_UseY_9);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_11);
		float L_12 = ((&V_0)->___y_2);
		NullCheck(L_11);
		VirtualAxis_Update_m121(L_11, L_12, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::CreateVirtualAxes()
extern "C" void RMXJoystick_CreateVirtualAxes_m1197 (RMXJoystick_t267 * __this, MethodInfo* method)
{
	RMXJoystick_t267 * G_B2_0 = {0};
	RMXJoystick_t267 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	RMXJoystick_t267 * G_B3_1 = {0};
	RMXJoystick_t267 * G_B5_0 = {0};
	RMXJoystick_t267 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	RMXJoystick_t267 * G_B6_1 = {0};
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
		G_B3_1->___m_UseX_8 = G_B3_0;
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
		G_B6_1->___m_UseY_9 = G_B6_0;
		bool L_4 = (__this->___m_UseX_8);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = (__this->___horizontalAxisName_4);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_6, L_5, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_HorizontalVirtualAxis_10 = L_6;
		VirtualAxis_t45 * L_7 = (__this->___m_HorizontalVirtualAxis_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_7, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0061:
	{
		bool L_8 = (__this->___m_UseY_9);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = (__this->___verticalAxisName_5);
		VirtualAxis_t45 * L_10 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_10, L_9, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_VerticalVirtualAxis_11 = L_10;
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_11, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo RMXJoystick_OnDrag_m1198_MethodInfo;
extern "C" void RMXJoystick_OnDrag_m1198 (RMXJoystick_t267 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t13  V_3 = {0};
	Vector2_t13  V_4 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		V_0 = L_0;
		bool L_1 = (__this->___m_UseX_8);
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
		Vector3_t8 * L_5 = &(__this->___m_StartPos_7);
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
		bool L_12 = (__this->___m_UseY_9);
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
		Vector3_t8 * L_16 = &(__this->___m_StartPos_7);
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
		Vector3_t8 * L_24 = &(__this->___m_StartPos_7);
		float L_25 = (L_24->___x_1);
		float L_26 = ((&V_0)->___x_1);
		Vector3_t8 * L_27 = &(__this->___m_StartPos_7);
		float L_28 = (L_27->___y_2);
		float L_29 = ((&V_0)->___y_2);
		Vector3_t8 * L_30 = &(__this->___m_StartPos_7);
		float L_31 = (L_30->___z_3);
		float L_32 = ((&V_0)->___z_3);
		Vector3_t8  L_33 = {0};
		Vector3__ctor_m700(&L_33, ((float)((float)L_25+(float)L_26)), ((float)((float)L_28+(float)L_29)), ((float)((float)L_31+(float)L_32)), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m601(L_23, L_33, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_34 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_34);
		Vector3_t8  L_35 = Transform_get_position_m599(L_34, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		RMXJoystick_UpdateVirtualAxes_m1196(__this, L_35, /*hidden argument*/&RMXJoystick_UpdateVirtualAxes_m1196_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo RMXJoystick_OnPointerUp_m1199_MethodInfo;
extern "C" void RMXJoystick_OnPointerUp_m1199 (RMXJoystick_t267 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_1 = (__this->___origin_6);
		NullCheck(L_0);
		Transform_set_localPosition_m652(L_0, L_1, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		Vector3_t8  L_2 = (__this->___m_StartPos_7);
		RMXJoystick_UpdateVirtualAxes_m1196(__this, L_2, /*hidden argument*/&RMXJoystick_UpdateVirtualAxes_m1196_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo RMXJoystick_OnPointerDown_m1200_MethodInfo;
extern "C" void RMXJoystick_OnPointerDown_m1200 (RMXJoystick_t267 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___m_StartPos_7 = L_1;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXJoystick::OnDisable()
extern MethodInfo RMXJoystick_OnDisable_m1201_MethodInfo;
extern "C" void RMXJoystick_OnDisable_m1201 (RMXJoystick_t267 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseX_8);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t45 * L_1 = (__this->___m_HorizontalVirtualAxis_10);
		NullCheck(L_1);
		VirtualAxis_Remove_m120(L_1, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
	}

IL_0016:
	{
		bool L_2 = (__this->___m_UseY_9);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t45 * L_3 = (__this->___m_VerticalVirtualAxis_11);
		NullCheck(L_3);
		VirtualAxis_Remove_m120(L_3, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
	}

IL_002c:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.RMXLookAround/AxisOption
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AxisOption_t268_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.RMXLookAround/AxisOption
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_1MethodDeclarations.h"



// UnityStandardAssets.CrossPlatformInput.RMXLookAround
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RMXLookAround_t269_il2cpp_TypeInfo;
// UnityStandardAssets.CrossPlatformInput.RMXLookAround
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_RMX_2MethodDeclarations.h"

extern MethodInfo RMXLookAround_CreateVirtualAxes_m1207_MethodInfo;
extern MethodInfo CrossPlatformInputManager_get_mousePosition_m157_MethodInfo;
extern MethodInfo RMXLookAround_UpdateVirtualAxes_m1206_MethodInfo;


// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::.ctor()
extern MethodInfo RMXLookAround__ctor_m1202_MethodInfo;
extern "C" void RMXLookAround__ctor_m1202 (RMXLookAround_t269 * __this, MethodInfo* method)
{
	{
		__this->___speed_2 = (1.0f);
		__this->___MovementRange_3 = ((int32_t)100);
		__this->___horizontalAxisName_5 = (String_t*) &_stringLiteral5;
		__this->___verticalAxisName_6 = (String_t*) &_stringLiteral6;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::OnEnable()
extern MethodInfo RMXLookAround_OnEnable_m1203_MethodInfo;
extern "C" void RMXLookAround_OnEnable_m1203 (RMXLookAround_t269 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_localPosition_m632(L_0, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		Vector3_t8  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_2);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_3, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Transform_t2 * L_4 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_4);
		Vector3_t8  L_5 = Transform_get_position_m599(L_4, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		Vector3_t8  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_6);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_7, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Transform_t2 * L_8 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_8, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Transform_t2 * L_9 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_9);
		Vector3_t8  L_10 = Transform_get_localPosition_m632(L_9, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___m_StartPos_7 = L_10;
		RMXLookAround_CreateVirtualAxes_m1207(__this, /*hidden argument*/&RMXLookAround_CreateVirtualAxes_m1207_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::Update()
extern MethodInfo RMXLookAround_Update_m1204_MethodInfo;
extern "C" void RMXLookAround_Update_m1204 (RMXLookAround_t269 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		int32_t L_0 = Input_get_touchCount_m789(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m789_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		Vector3_t8  L_1 = CrossPlatformInputManager_get_mousePosition_m157(NULL /*static, unused*/, /*hidden argument*/&CrossPlatformInputManager_get_mousePosition_m157_MethodInfo);
		Vector3_t8  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_2);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_3, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::HandleInput(System.Single)
extern MethodInfo RMXLookAround_HandleInput_m1205_MethodInfo;
extern "C" void RMXLookAround_HandleInput_m1205 (RMXLookAround_t269 * __this, float ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" void RMXLookAround_UpdateVirtualAxes_m1206 (RMXLookAround_t269 * __this, Vector3_t8  ___value, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	{
		Vector3_t8  L_0 = (__this->___m_StartPos_7);
		Vector3_t8  L_1 = ___value;
		Vector3_t8  L_2 = Vector3_op_Subtraction_m653(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m653_MethodInfo);
		V_0 = L_2;
		float L_3 = ((&V_0)->___y_2);
		(&V_0)->___y_2 = ((-L_3));
		Vector3_t8  L_4 = V_0;
		int32_t L_5 = (__this->___MovementRange_3);
		Vector3_t8  L_6 = Vector3_op_Division_m731(NULL /*static, unused*/, L_4, (((float)L_5)), /*hidden argument*/&Vector3_op_Division_m731_MethodInfo);
		V_0 = L_6;
		bool L_7 = (__this->___m_UseX_8);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t45 * L_8 = (__this->___m_HorizontalVirtualAxis_10);
		float L_9 = ((&V_0)->___x_1);
		NullCheck(L_8);
		VirtualAxis_Update_m121(L_8, ((-L_9)), /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0048:
	{
		bool L_10 = (__this->___m_UseY_9);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_11);
		float L_12 = ((&V_0)->___y_2);
		NullCheck(L_11);
		VirtualAxis_Update_m121(L_11, L_12, /*hidden argument*/&VirtualAxis_Update_m121_MethodInfo);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::CreateVirtualAxes()
extern "C" void RMXLookAround_CreateVirtualAxes_m1207 (RMXLookAround_t269 * __this, MethodInfo* method)
{
	RMXLookAround_t269 * G_B2_0 = {0};
	RMXLookAround_t269 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	RMXLookAround_t269 * G_B3_1 = {0};
	RMXLookAround_t269 * G_B5_0 = {0};
	RMXLookAround_t269 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	RMXLookAround_t269 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___axesToUse_4);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->___axesToUse_4);
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
		G_B3_1->___m_UseX_8 = G_B3_0;
		int32_t L_2 = (__this->___axesToUse_4);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___axesToUse_4);
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
		G_B6_1->___m_UseY_9 = G_B6_0;
		bool L_4 = (__this->___m_UseX_8);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = (__this->___horizontalAxisName_5);
		VirtualAxis_t45 * L_6 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_6, L_5, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_HorizontalVirtualAxis_10 = L_6;
		VirtualAxis_t45 * L_7 = (__this->___m_HorizontalVirtualAxis_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_7, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0061:
	{
		bool L_8 = (__this->___m_UseY_9);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = (__this->___verticalAxisName_6);
		VirtualAxis_t45 * L_10 = (VirtualAxis_t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VirtualAxis_t45_il2cpp_TypeInfo));
		VirtualAxis__ctor_m114(L_10, L_9, /*hidden argument*/&VirtualAxis__ctor_m114_MethodInfo);
		__this->___m_VerticalVirtualAxis_11 = L_10;
		VirtualAxis_t45 * L_11 = (__this->___m_VerticalVirtualAxis_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		CrossPlatformInputManager_RegisterVirtualAxis_m140(NULL /*static, unused*/, L_11, /*hidden argument*/&CrossPlatformInputManager_RegisterVirtualAxis_m140_MethodInfo);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo RMXLookAround_OnDrag_m1208_MethodInfo;
extern "C" void RMXLookAround_OnDrag_m1208 (RMXLookAround_t269 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t13  V_3 = {0};
	Vector2_t13  V_4 = {0};
	{
		Vector3_t8  L_0 = Vector3_get_zero_m662(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m662_MethodInfo);
		V_0 = L_0;
		bool L_1 = (__this->___m_UseX_8);
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
		Vector3_t8 * L_5 = &(__this->___m_StartPos_7);
		float L_6 = (L_5->___x_1);
		V_1 = (((int32_t)((float)((float)L_4-(float)L_6))));
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___MovementRange_3);
		int32_t L_9 = (__this->___MovementRange_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_10 = Mathf_Clamp_m767(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/&Mathf_Clamp_m767_MethodInfo);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->___x_1 = (((float)L_11));
	}

IL_004a:
	{
		bool L_12 = (__this->___m_UseY_9);
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
		Vector3_t8 * L_16 = &(__this->___m_StartPos_7);
		float L_17 = (L_16->___y_2);
		V_2 = (((int32_t)((float)((float)L_15-(float)L_17))));
		int32_t L_18 = V_2;
		int32_t L_19 = (__this->___MovementRange_3);
		int32_t L_20 = (__this->___MovementRange_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_21 = Mathf_Clamp_m767(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/&Mathf_Clamp_m767_MethodInfo);
		V_2 = L_21;
		int32_t L_22 = V_2;
		(&V_0)->___y_2 = (((float)L_22));
	}

IL_008f:
	{
		Transform_t2 * L_23 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8 * L_24 = &(__this->___m_StartPos_7);
		float L_25 = (L_24->___x_1);
		float L_26 = ((&V_0)->___x_1);
		Vector3_t8 * L_27 = &(__this->___m_StartPos_7);
		float L_28 = (L_27->___y_2);
		float L_29 = ((&V_0)->___y_2);
		Vector3_t8 * L_30 = &(__this->___m_StartPos_7);
		float L_31 = (L_30->___z_3);
		float L_32 = ((&V_0)->___z_3);
		Vector3_t8  L_33 = {0};
		Vector3__ctor_m700(&L_33, ((float)((float)L_25+(float)L_26)), ((float)((float)L_28+(float)L_29)), ((float)((float)L_31+(float)L_32)), /*hidden argument*/&Vector3__ctor_m700_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m601(L_23, L_33, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		Transform_t2 * L_34 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_34);
		Vector3_t8  L_35 = Transform_get_position_m599(L_34, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		RMXLookAround_UpdateVirtualAxes_m1206(__this, L_35, /*hidden argument*/&RMXLookAround_UpdateVirtualAxes_m1206_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo RMXLookAround_OnPointerUp_m1209_MethodInfo;
extern "C" void RMXLookAround_OnPointerUp_m1209 (RMXLookAround_t269 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		PointerEventData_t46 * L_0 = ___data;
		NullCheck(L_0);
		Vector2_t13  L_1 = PointerEventData_get_position_m766(L_0, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		Vector2_t13  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector2_t13_il2cpp_TypeInfo), &L_2);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_3, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		Vector3_t8  L_4 = (__this->___m_StartPos_7);
		RMXLookAround_UpdateVirtualAxes_m1206(__this, L_4, /*hidden argument*/&RMXLookAround_UpdateVirtualAxes_m1206_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo RMXLookAround_OnPointerDown_m1210_MethodInfo;
extern "C" void RMXLookAround_OnPointerDown_m1210 (RMXLookAround_t269 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_position_m599(L_0, /*hidden argument*/&Transform_get_position_m599_MethodInfo);
		__this->___m_StartPos_7 = L_1;
		Vector3_t8  L_2 = (__this->___m_StartPos_7);
		Vector3_t8  L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Vector3_t8_il2cpp_TypeInfo), &L_3);
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_4, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.RMXLookAround::OnDisable()
extern MethodInfo RMXLookAround_OnDisable_m1211_MethodInfo;
extern "C" void RMXLookAround_OnDisable_m1211 (RMXLookAround_t269 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseX_8);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t45 * L_1 = (__this->___m_HorizontalVirtualAxis_10);
		NullCheck(L_1);
		VirtualAxis_Remove_m120(L_1, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
	}

IL_0016:
	{
		bool L_2 = (__this->___m_UseY_9);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t45 * L_3 = (__this->___m_VerticalVirtualAxis_11);
		NullCheck(L_3);
		VirtualAxis_Remove_m120(L_3, /*hidden argument*/&VirtualAxis_Remove_m120_MethodInfo);
	}

IL_002c:
	{
		return;
	}
}
// UnityStandardAssets.Utility.RMXSimpleMouse
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_RMXSimpleMouse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RMXSimpleMouse_t270_il2cpp_TypeInfo;
// UnityStandardAssets.Utility.RMXSimpleMouse
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_RMXSimpleMouseMethodDeclarations.h"

extern MethodInfo Vector3__ctor_m624_MethodInfo;
extern MethodInfo Transform_get_localRotation_m611_MethodInfo;
extern MethodInfo Input_get_mousePosition_m783_MethodInfo;
extern MethodInfo Transform_set_localRotation_m618_MethodInfo;
extern MethodInfo Vector3_SmoothDamp_m625_MethodInfo;
extern MethodInfo Transform_Rotate_m1298_MethodInfo;


// System.Void UnityStandardAssets.Utility.RMXSimpleMouse::.ctor()
extern MethodInfo RMXSimpleMouse__ctor_m1212_MethodInfo;
extern "C" void RMXSimpleMouse__ctor_m1212 (RMXSimpleMouse_t270 * __this, MethodInfo* method)
{
	{
		Vector3_t8  L_0 = {0};
		Vector3__ctor_m624(&L_0, (70.0f), (360.0f), /*hidden argument*/&Vector3__ctor_m624_MethodInfo);
		Vector2_t13  L_1 = Vector2_op_Implicit_m993(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector2_op_Implicit_m993_MethodInfo);
		__this->___rotationRange_2 = L_1;
		__this->___rotationSpeed_3 = (0.2f);
		__this->___dampingTime_4 = (0.2f);
		__this->___autoZeroVerticalOnMobile_5 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.RMXSimpleMouse::Start()
extern MethodInfo RMXSimpleMouse_Start_m1213_MethodInfo;
extern "C" void RMXSimpleMouse_Start_m1213 (RMXSimpleMouse_t270 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Quaternion_t10  L_1 = Transform_get_localRotation_m611(L_0, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___m_OriginalRotation_11 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_2 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		__this->___origin_7 = L_2;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.RMXSimpleMouse::Update()
extern MethodInfo RMXSimpleMouse_Update_m1214_MethodInfo;
extern "C" void RMXSimpleMouse_Update_m1214 (RMXSimpleMouse_t270 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t8  V_2 = {0};
	Vector3_t8  V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_0 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		V_2 = L_0;
		float L_1 = ((&V_2)->___x_1);
		Vector3_t8 * L_2 = &(__this->___origin_7);
		float L_3 = (L_2->___x_1);
		V_0 = ((float)((float)L_1-(float)L_3));
		Vector3_t8  L_4 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		V_3 = L_4;
		float L_5 = ((&V_3)->___y_2);
		Vector3_t8 * L_6 = &(__this->___origin_7);
		float L_7 = (L_6->___y_2);
		V_1 = ((float)((float)L_5-(float)L_7));
		Transform_t2 * L_8 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Quaternion_t10  L_9 = (__this->___m_OriginalRotation_11);
		NullCheck(L_8);
		Transform_set_localRotation_m618(L_8, L_9, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		Vector3_t8 * L_10 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_11 = L_10;
		float L_12 = (L_11->___y_2);
		float L_13 = V_0;
		float L_14 = (__this->___rotationSpeed_3);
		L_11->___y_2 = ((float)((float)L_12+(float)((float)((float)L_13*(float)L_14))));
		Vector3_t8 * L_15 = &(__this->___m_TargetAngles_8);
		Vector3_t8 * L_16 = L_15;
		float L_17 = (L_16->___x_1);
		float L_18 = V_1;
		float L_19 = (__this->___rotationSpeed_3);
		L_16->___x_1 = ((float)((float)L_17-(float)((float)((float)L_18*(float)L_19))));
		Vector3_t8  L_20 = (__this->___m_FollowAngles_9);
		Vector3_t8  L_21 = (__this->___m_TargetAngles_8);
		Vector3_t8 * L_22 = &(__this->___m_FollowVelocity_10);
		float L_23 = (__this->___dampingTime_4);
		Vector3_t8  L_24 = Vector3_SmoothDamp_m625(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/&Vector3_SmoothDamp_m625_MethodInfo);
		__this->___m_FollowAngles_9 = L_24;
		Transform_t2 * L_25 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		Vector3_t8  L_26 = (__this->___m_FollowAngles_9);
		NullCheck(L_25);
		Transform_Rotate_m1298(L_25, L_26, /*hidden argument*/&Transform_Rotate_m1298_MethodInfo);
		Vector3_t8  L_27 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		__this->___origin_7 = L_27;
		return;
	}
}
// NewBehaviourScript
#include "AssemblyU2DCSharp_NewBehaviourScript.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NewBehaviourScript_t273_il2cpp_TypeInfo;
// NewBehaviourScript
#include "AssemblyU2DCSharp_NewBehaviourScriptMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
extern TypeInfo CameraU5BU5D_t271_il2cpp_TypeInfo;
extern TypeInfo Camera_t19_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t272_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
extern Il2CppType CameraU5BU5D_t271_0_0_0;
extern Il2CppType Dictionary_2_t272_0_0_0;
extern MethodInfo Camera_get_allCamerasCount_m1299_MethodInfo;
extern MethodInfo Camera_GetAllCameras_m1300_MethodInfo;
extern MethodInfo NewBehaviourScript_nextCamera_m1218_MethodInfo;
extern MethodInfo CrossPlatformInputManager_GetButtonUp_m150_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m1301_MethodInfo;
extern MethodInfo Dictionary_2_Add_m1302_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m1303_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m1304_MethodInfo;
extern MethodInfo Object_Equals_m1305_MethodInfo;
extern MethodInfo Event_KeyboardEvent_m1306_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m1301_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m1302_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m1303_GenericMethod;


// System.Void NewBehaviourScript::.ctor()
extern MethodInfo NewBehaviourScript__ctor_m1215_MethodInfo;
extern "C" void NewBehaviourScript__ctor_m1215 (NewBehaviourScript_t273 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void NewBehaviourScript::Start()
extern MethodInfo NewBehaviourScript_Start_m1216_MethodInfo;
extern TypeInfo* CameraU5BU5D_t271_il2cpp_TypeInfo_var;
extern "C" void NewBehaviourScript_Start_m1216 (NewBehaviourScript_t273 * __this, MethodInfo* method)
{
	static bool NewBehaviourScript_Start_m1216_init;
	if (!NewBehaviourScript_Start_m1216_init)
	{
		CameraU5BU5D_t271_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CameraU5BU5D_t271_0_0_0);
		NewBehaviourScript_Start_m1216_init = true;
	}
	{
		int32_t L_0 = Camera_get_allCamerasCount_m1299(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m1299_MethodInfo);
		__this->___cameras_2 = ((CameraU5BU5D_t271*)SZArrayNew(CameraU5BU5D_t271_il2cpp_TypeInfo_var, L_0));
		CameraU5BU5D_t271* L_1 = (__this->___cameras_2);
		Camera_GetAllCameras_m1300(NULL /*static, unused*/, L_1, /*hidden argument*/&Camera_GetAllCameras_m1300_MethodInfo);
		NewBehaviourScript_nextCamera_m1218(__this, /*hidden argument*/&NewBehaviourScript_nextCamera_m1218_MethodInfo);
		return;
	}
}
// System.Void NewBehaviourScript::Update()
extern MethodInfo NewBehaviourScript_Update_m1217_MethodInfo;
extern "C" void NewBehaviourScript_Update_m1217 (NewBehaviourScript_t273 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossPlatformInputManager_t51_il2cpp_TypeInfo));
		bool L_0 = CrossPlatformInputManager_GetButtonUp_m150(NULL /*static, unused*/, (String_t*) &_stringLiteral76, /*hidden argument*/&CrossPlatformInputManager_GetButtonUp_m150_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		NewBehaviourScript_nextCamera_m1218(__this, /*hidden argument*/&NewBehaviourScript_nextCamera_m1218_MethodInfo);
	}

IL_0015:
	{
		return;
	}
}
// System.Void NewBehaviourScript::nextCamera()
extern "C" void NewBehaviourScript_nextCamera_m1218 (NewBehaviourScript_t273 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___current_3);
		int32_t L_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_1 = L_1;
		__this->___current_3 = L_1;
		int32_t L_2 = V_1;
		CameraU5BU5D_t271* L_3 = (__this->___cameras_2);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		__this->___current_3 = 0;
	}

IL_0025:
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_002c:
	{
		CameraU5BU5D_t271* L_4 = (__this->___cameras_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->___current_3);
		NullCheck((*(Camera_t19 **)(Camera_t19 **)SZArrayLdElema(L_4, L_6)));
		Behaviour_set_enabled_m832((*(Camera_t19 **)(Camera_t19 **)SZArrayLdElema(L_4, L_6)), ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), /*hidden argument*/&Behaviour_set_enabled_m832_MethodInfo);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_10 = V_0;
		CameraU5BU5D_t271* L_11 = (__this->___cameras_2);
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Void NewBehaviourScript::move(System.String)
extern MethodInfo NewBehaviourScript_move_m1219_MethodInfo;
extern TypeInfo* Dictionary_2_t272_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m1301_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m1302_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m1303_MethodInfo_var;
extern "C" void NewBehaviourScript_move_m1219 (NewBehaviourScript_t273 * __this, String_t* ___direction, MethodInfo* method)
{
	static bool NewBehaviourScript_move_m1219_init;
	if (!NewBehaviourScript_move_m1219_init)
	{
		Dictionary_2_t272_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t272_0_0_0);
		Dictionary_2__ctor_m1301_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m1301_GenericMethod);
		Dictionary_2_Add_m1302_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m1302_GenericMethod);
		Dictionary_2_TryGetValue_m1303_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m1303_GenericMethod);
		NewBehaviourScript_move_m1219_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	Dictionary_2_t272 * V_4 = {0};
	int32_t V_5 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___direction;
		V_3 = L_0;
		String_t* L_1 = V_3;
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		Dictionary_2_t272 * L_2 = ((NewBehaviourScript_t273_StaticFields*)InitializedTypeInfo(&NewBehaviourScript_t273_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map0_4;
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		Dictionary_2_t272 * L_3 = (Dictionary_2_t272 *)il2cpp_codegen_object_new (Dictionary_2_t272_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1301(L_3, 4, /*hidden argument*/Dictionary_2__ctor_m1301_MethodInfo_var);
		V_4 = L_3;
		Dictionary_2_t272 * L_4 = V_4;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m1302_MethodInfo_var, L_4, (String_t*) &_stringLiteral77, 0);
		Dictionary_2_t272 * L_5 = V_4;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m1302_MethodInfo_var, L_5, (String_t*) &_stringLiteral78, 1);
		Dictionary_2_t272 * L_6 = V_4;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m1302_MethodInfo_var, L_6, (String_t*) &_stringLiteral79, 2);
		Dictionary_2_t272 * L_7 = V_4;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m1302_MethodInfo_var, L_7, (String_t*) &_stringLiteral80, 3);
		Dictionary_2_t272 * L_8 = V_4;
		((NewBehaviourScript_t273_StaticFields*)InitializedTypeInfo(&NewBehaviourScript_t273_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map0_4 = L_8;
	}

IL_0059:
	{
		Dictionary_2_t272 * L_9 = ((NewBehaviourScript_t273_StaticFields*)InitializedTypeInfo(&NewBehaviourScript_t273_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map0_4;
		String_t* L_10 = V_3;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m1303_MethodInfo_var, L_9, L_10, (&V_5));
		if (!L_11)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = V_5;
		if (L_12 == 0)
		{
			goto IL_0087;
		}
		if (L_12 == 1)
		{
			goto IL_008e;
		}
		if (L_12 == 2)
		{
			goto IL_0095;
		}
		if (L_12 == 3)
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00a3;
	}

IL_0087:
	{
		V_1 = 1;
		goto IL_00a3;
	}

IL_008e:
	{
		V_1 = (-1);
		goto IL_00a3;
	}

IL_0095:
	{
		V_0 = (-1);
		goto IL_00a3;
	}

IL_009c:
	{
		V_0 = 1;
		goto IL_00a3;
	}

IL_00a3:
	{
		V_2 = ((int32_t)10);
		int32_t L_13 = V_0;
		int32_t L_14 = V_2;
		int32_t L_15 = ((int32_t)((int32_t)L_13*(int32_t)L_14));
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_15);
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((int32_t)((int32_t)L_17*(int32_t)L_18));
		Object_t * L_20 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_19);
		Object_ReferenceEquals_m1304(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/&Object_ReferenceEquals_m1304_MethodInfo);
		int32_t L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = ((int32_t)((int32_t)L_21*(int32_t)L_22));
		Object_t * L_24 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_23);
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)((int32_t)L_25*(int32_t)L_26));
		Object_t * L_28 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_27);
		Object_Equals_m1305(NULL /*static, unused*/, L_24, L_28, /*hidden argument*/&Object_Equals_m1305_MethodInfo);
		String_t* L_29 = ___direction;
		Event_KeyboardEvent_m1306(NULL /*static, unused*/, L_29, /*hidden argument*/&Event_KeyboardEvent_m1306_MethodInfo);
		String_t* L_30 = ___direction;
		MonoBehaviour_print_m1297(NULL /*static, unused*/, L_30, /*hidden argument*/&MonoBehaviour_print_m1297_MethodInfo);
		return;
	}
}
// ActiveStateToggler
#include "AssemblyU2DCSharp_ActiveStateToggler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActiveStateToggler_t274_il2cpp_TypeInfo;
// ActiveStateToggler
#include "AssemblyU2DCSharp_ActiveStateTogglerMethodDeclarations.h"

extern MethodInfo GameObject_get_activeSelf_m578_MethodInfo;


// System.Void ActiveStateToggler::.ctor()
extern MethodInfo ActiveStateToggler__ctor_m1220_MethodInfo;
extern "C" void ActiveStateToggler__ctor_m1220 (ActiveStateToggler_t274 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ActiveStateToggler::ToggleActive()
extern MethodInfo ActiveStateToggler_ToggleActive_m1221_MethodInfo;
extern "C" void ActiveStateToggler_ToggleActive_m1221 (ActiveStateToggler_t274 * __this, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		GameObject_t92 * L_1 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeSelf_m578(L_1, /*hidden argument*/&GameObject_get_activeSelf_m578_MethodInfo);
		NullCheck(L_0);
		GameObject_SetActive_m770(L_0, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		return;
	}
}
// ApplicationManager
#include "AssemblyU2DCSharp_ApplicationManager.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ApplicationManager_t275_il2cpp_TypeInfo;
// ApplicationManager
#include "AssemblyU2DCSharp_ApplicationManagerMethodDeclarations.h"

// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern MethodInfo Application_Quit_m1307_MethodInfo;


// System.Void ApplicationManager::.ctor()
extern MethodInfo ApplicationManager__ctor_m1222_MethodInfo;
extern "C" void ApplicationManager__ctor_m1222 (ApplicationManager_t275 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ApplicationManager::Quit()
extern MethodInfo ApplicationManager_Quit_m1223_MethodInfo;
extern "C" void ApplicationManager_Quit_m1223 (ApplicationManager_t275 * __this, MethodInfo* method)
{
	{
		Application_Quit_m1307(NULL /*static, unused*/, /*hidden argument*/&Application_Quit_m1307_MethodInfo);
		return;
	}
}
// ChangeColor
#include "AssemblyU2DCSharp_ChangeColor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ChangeColor_t276_il2cpp_TypeInfo;
// ChangeColor
#include "AssemblyU2DCSharp_ChangeColorMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
extern TypeInfo Color_t79_il2cpp_TypeInfo;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern MethodInfo ChangeColor_OnValueChanged_m1229_MethodInfo;
extern MethodInfo Color_get_white_m1308_MethodInfo;
extern MethodInfo Renderer_get_material_m1029_MethodInfo;
extern MethodInfo Material_get_color_m1309_MethodInfo;
extern MethodInfo Light_get_color_m1310_MethodInfo;
extern MethodInfo Color_set_Item_m1311_MethodInfo;
extern MethodInfo Material_set_color_m1312_MethodInfo;
extern MethodInfo Light_set_color_m1313_MethodInfo;
extern MethodInfo Random_get_value_m1039_MethodInfo;
extern MethodInfo Color__ctor_m1003_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_8.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t156_m810(__this, method) (( Renderer_t156 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.Light>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_21.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t107_m1314(__this, method) (( Light_t107 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRenderer_t156_m810_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisLight_t107_m1314_GenericMethod;


// System.Void ChangeColor::.ctor()
extern MethodInfo ChangeColor__ctor_m1224_MethodInfo;
extern "C" void ChangeColor__ctor_m1224 (ChangeColor_t276 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ChangeColor::OnEnable()
extern MethodInfo ChangeColor_OnEnable_m1225_MethodInfo;
extern "C" void ChangeColor_OnEnable_m1225 (ChangeColor_t276 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ChangeColor::SetRed(System.Single)
extern MethodInfo ChangeColor_SetRed_m1226_MethodInfo;
extern "C" void ChangeColor_SetRed_m1226 (ChangeColor_t276 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		ChangeColor_OnValueChanged_m1229(__this, L_0, 0, /*hidden argument*/&ChangeColor_OnValueChanged_m1229_MethodInfo);
		return;
	}
}
// System.Void ChangeColor::SetGreen(System.Single)
extern MethodInfo ChangeColor_SetGreen_m1227_MethodInfo;
extern "C" void ChangeColor_SetGreen_m1227 (ChangeColor_t276 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		ChangeColor_OnValueChanged_m1229(__this, L_0, 1, /*hidden argument*/&ChangeColor_OnValueChanged_m1229_MethodInfo);
		return;
	}
}
// System.Void ChangeColor::SetBlue(System.Single)
extern MethodInfo ChangeColor_SetBlue_m1228_MethodInfo;
extern "C" void ChangeColor_SetBlue_m1228 (ChangeColor_t276 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		ChangeColor_OnValueChanged_m1229(__this, L_0, 2, /*hidden argument*/&ChangeColor_OnValueChanged_m1229_MethodInfo);
		return;
	}
}
// System.Void ChangeColor::OnValueChanged(System.Single,System.Int32)
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisLight_t107_m1314_MethodInfo_var;
extern "C" void ChangeColor_OnValueChanged_m1229 (ChangeColor_t276 * __this, float ___value, int32_t ___channel, MethodInfo* method)
{
	static bool ChangeColor_OnValueChanged_m1229_init;
	if (!ChangeColor_OnValueChanged_m1229_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		Component_GetComponent_TisLight_t107_m1314_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisLight_t107_m1314_GenericMethod);
		ChangeColor_OnValueChanged_m1229_init = true;
	}
	Color_t79  V_0 = {0};
	{
		Color_t79  L_0 = Color_get_white_m1308(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m1308_MethodInfo);
		V_0 = L_0;
		Renderer_t156 * L_1 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		bool L_2 = Object_op_Inequality_m642(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Renderer_t156 * L_3 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_3);
		Material_t75 * L_4 = Renderer_get_material_m1029(L_3, /*hidden argument*/&Renderer_get_material_m1029_MethodInfo);
		NullCheck(L_4);
		Color_t79  L_5 = Material_get_color_m1309(L_4, /*hidden argument*/&Material_get_color_m1309_MethodInfo);
		V_0 = L_5;
		goto IL_004a;
	}

IL_002d:
	{
		Light_t107 * L_6 = Component_GetComponent_TisLight_t107_m1314(__this, /*hidden argument*/Component_GetComponent_TisLight_t107_m1314_MethodInfo_var);
		bool L_7 = Object_op_Inequality_m642(NULL /*static, unused*/, L_6, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		Light_t107 * L_8 = Component_GetComponent_TisLight_t107_m1314(__this, /*hidden argument*/Component_GetComponent_TisLight_t107_m1314_MethodInfo_var);
		NullCheck(L_8);
		Color_t79  L_9 = Light_get_color_m1310(L_8, /*hidden argument*/&Light_get_color_m1310_MethodInfo);
		V_0 = L_9;
	}

IL_004a:
	{
		int32_t L_10 = ___channel;
		float L_11 = ___value;
		Color_set_Item_m1311((&V_0), L_10, L_11, /*hidden argument*/&Color_set_Item_m1311_MethodInfo);
		Renderer_t156 * L_12 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		bool L_13 = Object_op_Inequality_m642(NULL /*static, unused*/, L_12, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Renderer_t156 * L_14 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_14);
		Material_t75 * L_15 = Renderer_get_material_m1029(L_14, /*hidden argument*/&Renderer_get_material_m1029_MethodInfo);
		Color_t79  L_16 = V_0;
		NullCheck(L_15);
		Material_set_color_m1312(L_15, L_16, /*hidden argument*/&Material_set_color_m1312_MethodInfo);
		goto IL_0097;
	}

IL_007a:
	{
		Light_t107 * L_17 = Component_GetComponent_TisLight_t107_m1314(__this, /*hidden argument*/Component_GetComponent_TisLight_t107_m1314_MethodInfo_var);
		bool L_18 = Object_op_Inequality_m642(NULL /*static, unused*/, L_17, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		Light_t107 * L_19 = Component_GetComponent_TisLight_t107_m1314(__this, /*hidden argument*/Component_GetComponent_TisLight_t107_m1314_MethodInfo_var);
		Color_t79  L_20 = V_0;
		NullCheck(L_19);
		Light_set_color_m1313(L_19, L_20, /*hidden argument*/&Light_set_color_m1313_MethodInfo);
	}

IL_0097:
	{
		return;
	}
}
// System.Void ChangeColor::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo ChangeColor_OnPointerClick_m1230_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisLight_t107_m1314_MethodInfo_var;
extern "C" void ChangeColor_OnPointerClick_m1230 (ChangeColor_t276 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	static bool ChangeColor_OnPointerClick_m1230_init;
	if (!ChangeColor_OnPointerClick_m1230_init)
	{
		Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t156_m810_GenericMethod);
		Component_GetComponent_TisLight_t107_m1314_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisLight_t107_m1314_GenericMethod);
		ChangeColor_OnPointerClick_m1230_init = true;
	}
	{
		Renderer_t156 * L_0 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		Renderer_t156 * L_2 = Component_GetComponent_TisRenderer_t156_m810(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t156_m810_MethodInfo_var);
		NullCheck(L_2);
		Material_t75 * L_3 = Renderer_get_material_m1029(L_2, /*hidden argument*/&Renderer_get_material_m1029_MethodInfo);
		float L_4 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		float L_5 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		float L_6 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		Color_t79  L_7 = {0};
		Color__ctor_m1003(&L_7, L_4, L_5, L_6, (1.0f), /*hidden argument*/&Color__ctor_m1003_MethodInfo);
		NullCheck(L_3);
		Material_set_color_m1312(L_3, L_7, /*hidden argument*/&Material_set_color_m1312_MethodInfo);
		goto IL_0074;
	}

IL_003f:
	{
		Light_t107 * L_8 = Component_GetComponent_TisLight_t107_m1314(__this, /*hidden argument*/Component_GetComponent_TisLight_t107_m1314_MethodInfo_var);
		bool L_9 = Object_op_Inequality_m642(NULL /*static, unused*/, L_8, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		Light_t107 * L_10 = Component_GetComponent_TisLight_t107_m1314(__this, /*hidden argument*/Component_GetComponent_TisLight_t107_m1314_MethodInfo_var);
		float L_11 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		float L_12 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		float L_13 = Random_get_value_m1039(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m1039_MethodInfo);
		Color_t79  L_14 = {0};
		Color__ctor_m1003(&L_14, L_11, L_12, L_13, (1.0f), /*hidden argument*/&Color__ctor_m1003_MethodInfo);
		NullCheck(L_10);
		Light_set_color_m1313(L_10, L_14, /*hidden argument*/&Light_set_color_m1313_MethodInfo);
	}

IL_0074:
	{
		return;
	}
}
// DragMe
#include "AssemblyU2DCSharp_DragMe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DragMe_t278_il2cpp_TypeInfo;
// DragMe
#include "AssemblyU2DCSharp_DragMeMethodDeclarations.h"

// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern TypeInfo GameObject_t92_il2cpp_TypeInfo;
extern TypeInfo Image_t64_il2cpp_TypeInfo;
extern TypeInfo RectTransform_t277_il2cpp_TypeInfo;
extern TypeInfo RectTransformUtility_t290_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
extern MethodInfo Object_op_Equality_m576_MethodInfo;
extern MethodInfo GameObject__ctor_m956_MethodInfo;
extern MethodInfo GameObject_get_transform_m583_MethodInfo;
extern MethodInfo Transform_SetParent_m1315_MethodInfo;
extern MethodInfo Transform_SetAsLastSibling_m1316_MethodInfo;
extern MethodInfo CanvasGroup_set_blocksRaycasts_m1317_MethodInfo;
extern MethodInfo Image_get_sprite_m1318_MethodInfo;
extern MethodInfo Image_set_sprite_m1319_MethodInfo;
extern MethodInfo Image_SetNativeSize_m1320_MethodInfo;
extern MethodInfo DragMe_SetDraggedPosition_m1234_MethodInfo;
extern MethodInfo PointerEventData_get_pointerEnter_m1321_MethodInfo;
extern MethodInfo PointerEventData_get_pressEventCamera_m1322_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m1323_MethodInfo;
extern MethodInfo Object_Destroy_m991_MethodInfo;
struct DragMe_t278;
// Declaration !!0 DragMe::FindInParents<UnityEngine.Canvas>(UnityEngine.GameObject)
// !!0 DragMe::FindInParents<UnityEngine.Canvas>(UnityEngine.GameObject)
extern "C" Canvas_t291 * DragMe_FindInParents_TisCanvas_t291_m1324 (Object_t * __this /* static, unused */, GameObject_t92 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
extern "C" Image_t64 * GameObject_AddComponent_TisImage_t64_m1325 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
extern "C" CanvasGroup_t292 * GameObject_AddComponent_TisCanvasGroup_t292_m1326 (GameObject_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.UI.Image>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_7.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t64_m793(__this, method) (( Image_t64 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
struct GameObject_t92;
// UnityEngine.CastHelper`1<UnityEngine.RectTransform>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_22.h"
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m870_gshared (GameObject_t92 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m870(__this, method) (( Object_t * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t277_m1327(__this, method) (( RectTransform_t277 * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
extern Il2CppGenericMethod DragMe_FindInParents_TisCanvas_t291_m1324_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisImage_t64_m1325_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCanvasGroup_t292_m1326_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisImage_t64_m793_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisRectTransform_t277_m1327_GenericMethod;


// System.Void DragMe::.ctor()
extern MethodInfo DragMe__ctor_m1231_MethodInfo;
extern "C" void DragMe__ctor_m1231 (DragMe_t278 * __this, MethodInfo* method)
{
	{
		__this->___dragOnSurfaces_2 = 1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void DragMe::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DragMe_OnBeginDrag_m1232_MethodInfo;
extern MethodInfo* DragMe_FindInParents_TisCanvas_t291_m1324_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisImage_t64_m1325_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCanvasGroup_t292_m1326_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisImage_t64_m793_MethodInfo_var;
extern "C" void DragMe_OnBeginDrag_m1232 (DragMe_t278 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method)
{
	static bool DragMe_OnBeginDrag_m1232_init;
	if (!DragMe_OnBeginDrag_m1232_init)
	{
		DragMe_FindInParents_TisCanvas_t291_m1324_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&DragMe_FindInParents_TisCanvas_t291_m1324_GenericMethod);
		GameObject_AddComponent_TisImage_t64_m1325_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisImage_t64_m1325_GenericMethod);
		GameObject_AddComponent_TisCanvasGroup_t292_m1326_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCanvasGroup_t292_m1326_GenericMethod);
		Component_GetComponent_TisImage_t64_m793_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisImage_t64_m793_GenericMethod);
		DragMe_OnBeginDrag_m1232_init = true;
	}
	Canvas_t291 * V_0 = {0};
	Image_t64 * V_1 = {0};
	CanvasGroup_t292 * V_2 = {0};
	{
		GameObject_t92 * L_0 = Component_get_gameObject_m577(__this, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		Canvas_t291 * L_1 = DragMe_FindInParents_TisCanvas_t291_m1324(NULL /*static, unused*/, L_0, /*hidden argument*/DragMe_FindInParents_TisCanvas_t291_m1324_MethodInfo_var);
		V_0 = L_1;
		Canvas_t291 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m576(NULL /*static, unused*/, L_2, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GameObject_t92 * L_4 = (GameObject_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t92_il2cpp_TypeInfo));
		GameObject__ctor_m956(L_4, (String_t*) &_stringLiteral81, /*hidden argument*/&GameObject__ctor_m956_MethodInfo);
		__this->___m_DraggingIcon_3 = L_4;
		GameObject_t92 * L_5 = (__this->___m_DraggingIcon_3);
		NullCheck(L_5);
		Transform_t2 * L_6 = GameObject_get_transform_m583(L_5, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		Canvas_t291 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t2 * L_8 = Component_get_transform_m598(L_7, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_6);
		Transform_SetParent_m1315(L_6, L_8, 0, /*hidden argument*/&Transform_SetParent_m1315_MethodInfo);
		GameObject_t92 * L_9 = (__this->___m_DraggingIcon_3);
		NullCheck(L_9);
		Transform_t2 * L_10 = GameObject_get_transform_m583(L_9, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		NullCheck(L_10);
		Transform_SetAsLastSibling_m1316(L_10, /*hidden argument*/&Transform_SetAsLastSibling_m1316_MethodInfo);
		GameObject_t92 * L_11 = (__this->___m_DraggingIcon_3);
		NullCheck(L_11);
		Image_t64 * L_12 = GameObject_AddComponent_TisImage_t64_m1325(L_11, /*hidden argument*/GameObject_AddComponent_TisImage_t64_m1325_MethodInfo_var);
		V_1 = L_12;
		GameObject_t92 * L_13 = (__this->___m_DraggingIcon_3);
		NullCheck(L_13);
		CanvasGroup_t292 * L_14 = GameObject_AddComponent_TisCanvasGroup_t292_m1326(L_13, /*hidden argument*/GameObject_AddComponent_TisCanvasGroup_t292_m1326_MethodInfo_var);
		V_2 = L_14;
		CanvasGroup_t292 * L_15 = V_2;
		NullCheck(L_15);
		CanvasGroup_set_blocksRaycasts_m1317(L_15, 0, /*hidden argument*/&CanvasGroup_set_blocksRaycasts_m1317_MethodInfo);
		Image_t64 * L_16 = V_1;
		Image_t64 * L_17 = Component_GetComponent_TisImage_t64_m793(__this, /*hidden argument*/Component_GetComponent_TisImage_t64_m793_MethodInfo_var);
		NullCheck(L_17);
		Sprite_t281 * L_18 = Image_get_sprite_m1318(L_17, /*hidden argument*/&Image_get_sprite_m1318_MethodInfo);
		NullCheck(L_16);
		Image_set_sprite_m1319(L_16, L_18, /*hidden argument*/&Image_set_sprite_m1319_MethodInfo);
		Image_t64 * L_19 = V_1;
		NullCheck(L_19);
		VirtActionInvoker0::Invoke(&Image_SetNativeSize_m1320_MethodInfo, L_19);
		bool L_20 = (__this->___dragOnSurfaces_2);
		if (!L_20)
		{
			goto IL_00a7;
		}
	}
	{
		Transform_t2 * L_21 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___m_DraggingPlane_4 = ((RectTransform_t277 *)IsInst(L_21, InitializedTypeInfo(&RectTransform_t277_il2cpp_TypeInfo)));
		goto IL_00b8;
	}

IL_00a7:
	{
		Canvas_t291 * L_22 = V_0;
		NullCheck(L_22);
		Transform_t2 * L_23 = Component_get_transform_m598(L_22, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___m_DraggingPlane_4 = ((RectTransform_t277 *)IsInst(L_23, InitializedTypeInfo(&RectTransform_t277_il2cpp_TypeInfo)));
	}

IL_00b8:
	{
		PointerEventData_t46 * L_24 = ___eventData;
		DragMe_SetDraggedPosition_m1234(__this, L_24, /*hidden argument*/&DragMe_SetDraggedPosition_m1234_MethodInfo);
		return;
	}
}
// System.Void DragMe::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DragMe_OnDrag_m1233_MethodInfo;
extern "C" void DragMe_OnDrag_m1233 (DragMe_t278 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = (__this->___m_DraggingIcon_3);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		PointerEventData_t46 * L_2 = ___data;
		DragMe_SetDraggedPosition_m1234(__this, L_2, /*hidden argument*/&DragMe_SetDraggedPosition_m1234_MethodInfo);
	}

IL_0018:
	{
		return;
	}
}
// System.Void DragMe::SetDraggedPosition(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo* GameObject_GetComponent_TisRectTransform_t277_m1327_MethodInfo_var;
extern "C" void DragMe_SetDraggedPosition_m1234 (DragMe_t278 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	static bool DragMe_SetDraggedPosition_m1234_init;
	if (!DragMe_SetDraggedPosition_m1234_init)
	{
		GameObject_GetComponent_TisRectTransform_t277_m1327_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisRectTransform_t277_m1327_GenericMethod);
		DragMe_SetDraggedPosition_m1234_init = true;
	}
	RectTransform_t277 * V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		bool L_0 = (__this->___dragOnSurfaces_2);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		PointerEventData_t46 * L_1 = ___data;
		NullCheck(L_1);
		GameObject_t92 * L_2 = PointerEventData_get_pointerEnter_m1321(L_1, /*hidden argument*/&PointerEventData_get_pointerEnter_m1321_MethodInfo);
		bool L_3 = Object_op_Inequality_m642(NULL /*static, unused*/, L_2, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		PointerEventData_t46 * L_4 = ___data;
		NullCheck(L_4);
		GameObject_t92 * L_5 = PointerEventData_get_pointerEnter_m1321(L_4, /*hidden argument*/&PointerEventData_get_pointerEnter_m1321_MethodInfo);
		NullCheck(L_5);
		Transform_t2 * L_6 = GameObject_get_transform_m583(L_5, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		bool L_7 = Object_op_Inequality_m642(NULL /*static, unused*/, ((RectTransform_t277 *)IsInst(L_6, InitializedTypeInfo(&RectTransform_t277_il2cpp_TypeInfo))), (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		PointerEventData_t46 * L_8 = ___data;
		NullCheck(L_8);
		GameObject_t92 * L_9 = PointerEventData_get_pointerEnter_m1321(L_8, /*hidden argument*/&PointerEventData_get_pointerEnter_m1321_MethodInfo);
		NullCheck(L_9);
		Transform_t2 * L_10 = GameObject_get_transform_m583(L_9, /*hidden argument*/&GameObject_get_transform_m583_MethodInfo);
		__this->___m_DraggingPlane_4 = ((RectTransform_t277 *)IsInst(L_10, InitializedTypeInfo(&RectTransform_t277_il2cpp_TypeInfo)));
	}

IL_004d:
	{
		GameObject_t92 * L_11 = (__this->___m_DraggingIcon_3);
		NullCheck(L_11);
		RectTransform_t277 * L_12 = GameObject_GetComponent_TisRectTransform_t277_m1327(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t277_m1327_MethodInfo_var);
		V_0 = L_12;
		RectTransform_t277 * L_13 = (__this->___m_DraggingPlane_4);
		PointerEventData_t46 * L_14 = ___data;
		NullCheck(L_14);
		Vector2_t13  L_15 = PointerEventData_get_position_m766(L_14, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		PointerEventData_t46 * L_16 = ___data;
		NullCheck(L_16);
		Camera_t19 * L_17 = PointerEventData_get_pressEventCamera_m1322(L_16, /*hidden argument*/&PointerEventData_get_pressEventCamera_m1322_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t290_il2cpp_TypeInfo));
		bool L_18 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m1323(NULL /*static, unused*/, L_13, L_15, L_17, (&V_1), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m1323_MethodInfo);
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		RectTransform_t277 * L_19 = V_0;
		Vector3_t8  L_20 = V_1;
		NullCheck(L_19);
		Transform_set_position_m601(L_19, L_20, /*hidden argument*/&Transform_set_position_m601_MethodInfo);
		RectTransform_t277 * L_21 = V_0;
		RectTransform_t277 * L_22 = (__this->___m_DraggingPlane_4);
		NullCheck(L_22);
		Quaternion_t10  L_23 = Transform_get_rotation_m605(L_22, /*hidden argument*/&Transform_get_rotation_m605_MethodInfo);
		NullCheck(L_21);
		Transform_set_rotation_m607(L_21, L_23, /*hidden argument*/&Transform_set_rotation_m607_MethodInfo);
	}

IL_008f:
	{
		return;
	}
}
// System.Void DragMe::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DragMe_OnEndDrag_m1235_MethodInfo;
extern "C" void DragMe_OnEndDrag_m1235 (DragMe_t278 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method)
{
	{
		GameObject_t92 * L_0 = (__this->___m_DraggingIcon_3);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t92 * L_2 = (__this->___m_DraggingIcon_3);
		Object_Destroy_m991(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_Destroy_m991_MethodInfo);
	}

IL_001c:
	{
		return;
	}
}
// DragPanel
#include "AssemblyU2DCSharp_DragPanel.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DragPanel_t279_il2cpp_TypeInfo;
// DragPanel
#include "AssemblyU2DCSharp_DragPanelMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328_MethodInfo;
extern MethodInfo Vector2_op_Subtraction_m1329_MethodInfo;
extern MethodInfo DragPanel_ClampToWindow_m1240_MethodInfo;
extern MethodInfo RectTransform_get_rect_m1330_MethodInfo;
extern MethodInfo Rect_get_min_m1331_MethodInfo;
extern MethodInfo Rect_get_max_m1332_MethodInfo;
extern MethodInfo Mathf_Clamp_m616_MethodInfo;


// System.Void DragPanel::.ctor()
extern MethodInfo DragPanel__ctor_m1236_MethodInfo;
extern "C" void DragPanel__ctor_m1236 (DragPanel_t279 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void DragPanel::Awake()
extern MethodInfo DragPanel_Awake_m1237_MethodInfo;
extern "C" void DragPanel_Awake_m1237 (DragPanel_t279 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Transform_get_parent_m626(L_0, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		__this->___panelRectTransform_4 = ((RectTransform_t277 *)IsInst(L_1, InitializedTypeInfo(&RectTransform_t277_il2cpp_TypeInfo)));
		RectTransform_t277 * L_2 = (__this->___panelRectTransform_4);
		NullCheck(L_2);
		Transform_t2 * L_3 = Transform_get_parent_m626(L_2, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		__this->___parentRectTransform_5 = ((RectTransform_t277 *)IsInst(L_3, InitializedTypeInfo(&RectTransform_t277_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void DragPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DragPanel_OnPointerDown_m1238_MethodInfo;
extern "C" void DragPanel_OnPointerDown_m1238 (DragPanel_t279 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		RectTransform_t277 * L_0 = (__this->___panelRectTransform_4);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_localPosition_m632(L_0, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		__this->___originalPanelLocalPosition_3 = L_1;
		RectTransform_t277 * L_2 = (__this->___parentRectTransform_5);
		PointerEventData_t46 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t13  L_4 = PointerEventData_get_position_m766(L_3, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		PointerEventData_t46 * L_5 = ___data;
		NullCheck(L_5);
		Camera_t19 * L_6 = PointerEventData_get_pressEventCamera_m1322(L_5, /*hidden argument*/&PointerEventData_get_pressEventCamera_m1322_MethodInfo);
		Vector2_t13 * L_7 = &(__this->___originalLocalPointerPosition_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t290_il2cpp_TypeInfo));
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328(NULL /*static, unused*/, L_2, L_4, L_6, L_7, /*hidden argument*/&RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328_MethodInfo);
		return;
	}
}
// System.Void DragPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DragPanel_OnDrag_m1239_MethodInfo;
extern "C" void DragPanel_OnDrag_m1239 (DragPanel_t279 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	Vector3_t8  V_1 = {0};
	{
		RectTransform_t277 * L_0 = (__this->___panelRectTransform_4);
		bool L_1 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		RectTransform_t277 * L_2 = (__this->___parentRectTransform_5);
		bool L_3 = Object_op_Equality_m576(NULL /*static, unused*/, L_2, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		RectTransform_t277 * L_4 = (__this->___parentRectTransform_5);
		PointerEventData_t46 * L_5 = ___data;
		NullCheck(L_5);
		Vector2_t13  L_6 = PointerEventData_get_position_m766(L_5, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		PointerEventData_t46 * L_7 = ___data;
		NullCheck(L_7);
		Camera_t19 * L_8 = PointerEventData_get_pressEventCamera_m1322(L_7, /*hidden argument*/&PointerEventData_get_pressEventCamera_m1322_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t290_il2cpp_TypeInfo));
		bool L_9 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328(NULL /*static, unused*/, L_4, L_6, L_8, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328_MethodInfo);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Vector2_t13  L_10 = V_0;
		Vector2_t13  L_11 = (__this->___originalLocalPointerPosition_2);
		Vector2_t13  L_12 = Vector2_op_Subtraction_m1329(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector2_op_Subtraction_m1329_MethodInfo);
		Vector3_t8  L_13 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_12, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		V_1 = L_13;
		RectTransform_t277 * L_14 = (__this->___panelRectTransform_4);
		Vector3_t8  L_15 = (__this->___originalPanelLocalPosition_3);
		Vector3_t8  L_16 = V_1;
		Vector3_t8  L_17 = Vector3_op_Addition_m634(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&Vector3_op_Addition_m634_MethodInfo);
		NullCheck(L_14);
		Transform_set_localPosition_m652(L_14, L_17, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
	}

IL_006a:
	{
		DragPanel_ClampToWindow_m1240(__this, /*hidden argument*/&DragPanel_ClampToWindow_m1240_MethodInfo);
		return;
	}
}
// System.Void DragPanel::ClampToWindow()
extern "C" void DragPanel_ClampToWindow_m1240 (DragPanel_t279 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector3_t8  V_2 = {0};
	Rect_t260  V_3 = {0};
	Rect_t260  V_4 = {0};
	Rect_t260  V_5 = {0};
	Rect_t260  V_6 = {0};
	Vector3_t8  V_7 = {0};
	Vector3_t8  V_8 = {0};
	{
		RectTransform_t277 * L_0 = (__this->___panelRectTransform_4);
		NullCheck(L_0);
		Vector3_t8  L_1 = Transform_get_localPosition_m632(L_0, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_0 = L_1;
		RectTransform_t277 * L_2 = (__this->___parentRectTransform_5);
		NullCheck(L_2);
		Rect_t260  L_3 = RectTransform_get_rect_m1330(L_2, /*hidden argument*/&RectTransform_get_rect_m1330_MethodInfo);
		V_3 = L_3;
		Vector2_t13  L_4 = Rect_get_min_m1331((&V_3), /*hidden argument*/&Rect_get_min_m1331_MethodInfo);
		RectTransform_t277 * L_5 = (__this->___panelRectTransform_4);
		NullCheck(L_5);
		Rect_t260  L_6 = RectTransform_get_rect_m1330(L_5, /*hidden argument*/&RectTransform_get_rect_m1330_MethodInfo);
		V_4 = L_6;
		Vector2_t13  L_7 = Rect_get_min_m1331((&V_4), /*hidden argument*/&Rect_get_min_m1331_MethodInfo);
		Vector2_t13  L_8 = Vector2_op_Subtraction_m1329(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/&Vector2_op_Subtraction_m1329_MethodInfo);
		Vector3_t8  L_9 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_8, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		V_1 = L_9;
		RectTransform_t277 * L_10 = (__this->___parentRectTransform_5);
		NullCheck(L_10);
		Rect_t260  L_11 = RectTransform_get_rect_m1330(L_10, /*hidden argument*/&RectTransform_get_rect_m1330_MethodInfo);
		V_5 = L_11;
		Vector2_t13  L_12 = Rect_get_max_m1332((&V_5), /*hidden argument*/&Rect_get_max_m1332_MethodInfo);
		RectTransform_t277 * L_13 = (__this->___panelRectTransform_4);
		NullCheck(L_13);
		Rect_t260  L_14 = RectTransform_get_rect_m1330(L_13, /*hidden argument*/&RectTransform_get_rect_m1330_MethodInfo);
		V_6 = L_14;
		Vector2_t13  L_15 = Rect_get_max_m1332((&V_6), /*hidden argument*/&Rect_get_max_m1332_MethodInfo);
		Vector2_t13  L_16 = Vector2_op_Subtraction_m1329(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/&Vector2_op_Subtraction_m1329_MethodInfo);
		Vector3_t8  L_17 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_16, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		V_2 = L_17;
		RectTransform_t277 * L_18 = (__this->___panelRectTransform_4);
		NullCheck(L_18);
		Vector3_t8  L_19 = Transform_get_localPosition_m632(L_18, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_7 = L_19;
		float L_20 = ((&V_7)->___x_1);
		float L_21 = ((&V_1)->___x_1);
		float L_22 = ((&V_2)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_23 = Mathf_Clamp_m616(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		(&V_0)->___x_1 = L_23;
		RectTransform_t277 * L_24 = (__this->___panelRectTransform_4);
		NullCheck(L_24);
		Vector3_t8  L_25 = Transform_get_localPosition_m632(L_24, /*hidden argument*/&Transform_get_localPosition_m632_MethodInfo);
		V_8 = L_25;
		float L_26 = ((&V_8)->___y_2);
		float L_27 = ((&V_1)->___y_2);
		float L_28 = ((&V_2)->___y_2);
		float L_29 = Mathf_Clamp_m616(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		(&V_0)->___y_2 = L_29;
		RectTransform_t277 * L_30 = (__this->___panelRectTransform_4);
		Vector3_t8  L_31 = V_0;
		NullCheck(L_30);
		Transform_set_localPosition_m652(L_30, L_31, /*hidden argument*/&Transform_set_localPosition_m652_MethodInfo);
		return;
	}
}
// DropMe
#include "AssemblyU2DCSharp_DropMe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DropMe_t280_il2cpp_TypeInfo;
// DropMe
#include "AssemblyU2DCSharp_DropMeMethodDeclarations.h"

// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
extern MethodInfo Color_get_yellow_m1002_MethodInfo;
extern MethodInfo Graphic_get_color_m1333_MethodInfo;
extern MethodInfo Graphic_set_color_m1334_MethodInfo;
extern MethodInfo DropMe_GetDropSprite_m1246_MethodInfo;
extern MethodInfo Image_set_overrideSprite_m1335_MethodInfo;
extern MethodInfo PointerEventData_get_pointerDrag_m1336_MethodInfo;
struct GameObject_t92;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t64_m1337(__this, method) (( Image_t64 * (*) (GameObject_t92 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m870_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisImage_t64_m1337_GenericMethod;


// System.Void DropMe::.ctor()
extern MethodInfo DropMe__ctor_m1241_MethodInfo;
extern "C" void DropMe__ctor_m1241 (DropMe_t280 * __this, MethodInfo* method)
{
	{
		Color_t79  L_0 = Color_get_yellow_m1002(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m1002_MethodInfo);
		__this->___highlightColor_5 = L_0;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void DropMe::OnEnable()
extern MethodInfo DropMe_OnEnable_m1242_MethodInfo;
extern "C" void DropMe_OnEnable_m1242 (DropMe_t280 * __this, MethodInfo* method)
{
	{
		Image_t64 * L_0 = (__this->___containerImage_2);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Image_t64 * L_2 = (__this->___containerImage_2);
		NullCheck(L_2);
		Color_t79  L_3 = Graphic_get_color_m1333(L_2, /*hidden argument*/&Graphic_get_color_m1333_MethodInfo);
		__this->___normalColor_4 = L_3;
	}

IL_0022:
	{
		return;
	}
}
// System.Void DropMe::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DropMe_OnDrop_m1243_MethodInfo;
extern "C" void DropMe_OnDrop_m1243 (DropMe_t280 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Sprite_t281 * V_0 = {0};
	{
		Image_t64 * L_0 = (__this->___containerImage_2);
		Color_t79  L_1 = (__this->___normalColor_4);
		NullCheck(L_0);
		Graphic_set_color_m1334(L_0, L_1, /*hidden argument*/&Graphic_set_color_m1334_MethodInfo);
		Image_t64 * L_2 = (__this->___receivingImage_3);
		bool L_3 = Object_op_Equality_m576(NULL /*static, unused*/, L_2, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		PointerEventData_t46 * L_4 = ___data;
		Sprite_t281 * L_5 = DropMe_GetDropSprite_m1246(__this, L_4, /*hidden argument*/&DropMe_GetDropSprite_m1246_MethodInfo);
		V_0 = L_5;
		Sprite_t281 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m642(NULL /*static, unused*/, L_6, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Image_t64 * L_8 = (__this->___receivingImage_3);
		Sprite_t281 * L_9 = V_0;
		NullCheck(L_8);
		Image_set_overrideSprite_m1335(L_8, L_9, /*hidden argument*/&Image_set_overrideSprite_m1335_MethodInfo);
	}

IL_0043:
	{
		return;
	}
}
// System.Void DropMe::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DropMe_OnPointerEnter_m1244_MethodInfo;
extern "C" void DropMe_OnPointerEnter_m1244 (DropMe_t280 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Sprite_t281 * V_0 = {0};
	{
		Image_t64 * L_0 = (__this->___containerImage_2);
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
		PointerEventData_t46 * L_2 = ___data;
		Sprite_t281 * L_3 = DropMe_GetDropSprite_m1246(__this, L_2, /*hidden argument*/&DropMe_GetDropSprite_m1246_MethodInfo);
		V_0 = L_3;
		Sprite_t281 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m642(NULL /*static, unused*/, L_4, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		Image_t64 * L_6 = (__this->___containerImage_2);
		Color_t79  L_7 = (__this->___highlightColor_5);
		NullCheck(L_6);
		Graphic_set_color_m1334(L_6, L_7, /*hidden argument*/&Graphic_set_color_m1334_MethodInfo);
	}

IL_0037:
	{
		return;
	}
}
// System.Void DropMe::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo DropMe_OnPointerExit_m1245_MethodInfo;
extern "C" void DropMe_OnPointerExit_m1245 (DropMe_t280 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		Image_t64 * L_0 = (__this->___containerImage_2);
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
		Image_t64 * L_2 = (__this->___containerImage_2);
		Color_t79  L_3 = (__this->___normalColor_4);
		NullCheck(L_2);
		Graphic_set_color_m1334(L_2, L_3, /*hidden argument*/&Graphic_set_color_m1334_MethodInfo);
		return;
	}
}
// UnityEngine.Sprite DropMe::GetDropSprite(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo* GameObject_GetComponent_TisImage_t64_m1337_MethodInfo_var;
extern "C" Sprite_t281 * DropMe_GetDropSprite_m1246 (DropMe_t280 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	static bool DropMe_GetDropSprite_m1246_init;
	if (!DropMe_GetDropSprite_m1246_init)
	{
		GameObject_GetComponent_TisImage_t64_m1337_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisImage_t64_m1337_GenericMethod);
		DropMe_GetDropSprite_m1246_init = true;
	}
	GameObject_t92 * V_0 = {0};
	Image_t64 * V_1 = {0};
	{
		PointerEventData_t46 * L_0 = ___data;
		NullCheck(L_0);
		GameObject_t92 * L_1 = PointerEventData_get_pointerDrag_m1336(L_0, /*hidden argument*/&PointerEventData_get_pointerDrag_m1336_MethodInfo);
		V_0 = L_1;
		GameObject_t92 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m576(NULL /*static, unused*/, L_2, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (Sprite_t281 *)NULL;
	}

IL_0015:
	{
		GameObject_t92 * L_4 = V_0;
		NullCheck(L_4);
		Image_t64 * L_5 = GameObject_GetComponent_TisImage_t64_m1337(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t64_m1337_MethodInfo_var);
		V_1 = L_5;
		Image_t64 * L_6 = V_1;
		bool L_7 = Object_op_Equality_m576(NULL /*static, unused*/, L_6, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		return (Sprite_t281 *)NULL;
	}

IL_002a:
	{
		Image_t64 * L_8 = V_1;
		NullCheck(L_8);
		Sprite_t281 * L_9 = Image_get_sprite_m1318(L_8, /*hidden argument*/&Image_get_sprite_m1318_MethodInfo);
		return L_9;
	}
}
// PanelManager/<DisablePanelDeleyed>c__Iterator1
#include "AssemblyU2DCSharp_PanelManager_U3CDisablePanelDeleyedU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CDisablePanelDeleyedU3Ec__Iterator1_t283_il2cpp_TypeInfo;
// PanelManager/<DisablePanelDeleyed>c__Iterator1
#include "AssemblyU2DCSharp_PanelManager_U3CDisablePanelDeleyedU3Ec__IMethodDeclarations.h"

// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// PanelManager
#include "AssemblyU2DCSharp_PanelManager.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
extern TypeInfo PanelManager_t282_il2cpp_TypeInfo;
extern TypeInfo WaitForEndOfFrame_t218_il2cpp_TypeInfo;
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
extern MethodInfo Animator_IsInTransition_m1338_MethodInfo;
extern MethodInfo Animator_GetCurrentAnimatorStateInfo_m739_MethodInfo;
extern MethodInfo AnimatorStateInfo_IsName_m743_MethodInfo;
extern MethodInfo Animator_GetBool_m1339_MethodInfo;
extern MethodInfo WaitForEndOfFrame__ctor_m971_MethodInfo;


// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator1::.ctor()
extern MethodInfo U3CDisablePanelDeleyedU3Ec__Iterator1__ctor_m1247_MethodInfo;
extern "C" void U3CDisablePanelDeleyedU3Ec__Iterator1__ctor_m1247 (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * __this, MethodInfo* method)
{
	{
		Object__ctor_m629(__this, /*hidden argument*/&Object__ctor_m629_MethodInfo);
		return;
	}
}
// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CDisablePanelDeleyedU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1248_MethodInfo;
extern "C" Object_t * U3CDisablePanelDeleyedU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1248 (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_4);
		return L_0;
	}
}
// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CDisablePanelDeleyedU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1249_MethodInfo;
extern "C" Object_t * U3CDisablePanelDeleyedU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1249 (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_4);
		return L_0;
	}
}
// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator1::MoveNext()
extern MethodInfo U3CDisablePanelDeleyedU3Ec__Iterator1_MoveNext_m1250_MethodInfo;
extern "C" bool U3CDisablePanelDeleyedU3Ec__Iterator1_MoveNext_m1250 (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	AnimatorStateInfo_t198  V_1 = {0};
	bool V_2 = false;
	{
		int32_t L_0 = (__this->___$PC_3);
		V_0 = L_0;
		__this->___$PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00d3;
	}

IL_0021:
	{
		__this->___U3CclosedStateReachedU3E__0_0 = 0;
		__this->___U3CwantToCloseU3E__1_1 = 1;
		goto IL_009a;
	}

IL_0034:
	{
		Animator_t42 * L_2 = (__this->___anim_2);
		NullCheck(L_2);
		bool L_3 = Animator_IsInTransition_m1338(L_2, 0, /*hidden argument*/&Animator_IsInTransition_m1338_MethodInfo);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		Animator_t42 * L_4 = (__this->___anim_2);
		NullCheck(L_4);
		AnimatorStateInfo_t198  L_5 = Animator_GetCurrentAnimatorStateInfo_m739(L_4, 0, /*hidden argument*/&Animator_GetCurrentAnimatorStateInfo_m739_MethodInfo);
		V_1 = L_5;
		bool L_6 = AnimatorStateInfo_IsName_m743((&V_1), (String_t*) &_stringLiteral83, /*hidden argument*/&AnimatorStateInfo_IsName_m743_MethodInfo);
		__this->___U3CclosedStateReachedU3E__0_0 = L_6;
	}

IL_0064:
	{
		Animator_t42 * L_7 = (__this->___anim_2);
		PanelManager_t282 * L_8 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_8);
		int32_t L_9 = (L_8->___m_OpenParameterId_5);
		NullCheck(L_7);
		bool L_10 = Animator_GetBool_m1339(L_7, L_9, /*hidden argument*/&Animator_GetBool_m1339_MethodInfo);
		__this->___U3CwantToCloseU3E__1_1 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		WaitForEndOfFrame_t218 * L_11 = (WaitForEndOfFrame_t218 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t218_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m971(L_11, /*hidden argument*/&WaitForEndOfFrame__ctor_m971_MethodInfo);
		__this->___$current_4 = L_11;
		__this->___$PC_3 = 1;
		goto IL_00d5;
	}

IL_009a:
	{
		bool L_12 = (__this->___U3CclosedStateReachedU3E__0_0);
		if (L_12)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_13 = (__this->___U3CwantToCloseU3E__1_1);
		if (L_13)
		{
			goto IL_0034;
		}
	}

IL_00b0:
	{
		bool L_14 = (__this->___U3CwantToCloseU3E__1_1);
		if (!L_14)
		{
			goto IL_00cc;
		}
	}
	{
		Animator_t42 * L_15 = (__this->___anim_2);
		NullCheck(L_15);
		GameObject_t92 * L_16 = Component_get_gameObject_m577(L_15, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_16);
		GameObject_SetActive_m770(L_16, 0, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
	}

IL_00cc:
	{
		__this->___$PC_3 = (-1);
	}

IL_00d3:
	{
		return 0;
	}

IL_00d5:
	{
		return 1;
	}
	// Dead block : IL_00d7: ldloc.2
}
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator1::Dispose()
extern MethodInfo U3CDisablePanelDeleyedU3Ec__Iterator1_Dispose_m1251_MethodInfo;
extern "C" void U3CDisablePanelDeleyedU3Ec__Iterator1_Dispose_m1251 (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * __this, MethodInfo* method)
{
	{
		__this->___$PC_3 = (-1);
		return;
	}
}
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator1::Reset()
extern MethodInfo U3CDisablePanelDeleyedU3Ec__Iterator1_Reset_m1252_MethodInfo;
extern "C" void U3CDisablePanelDeleyedU3Ec__Iterator1_Reset_m1252 (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * __this, MethodInfo* method)
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
// PanelManager
#include "AssemblyU2DCSharp_PanelManagerMethodDeclarations.h"

// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
#include "UnityEngine.UI_ArrayTypes.h"
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.StandaloneInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul_0.h"
extern TypeInfo EventSystem_t293_il2cpp_TypeInfo;
extern TypeInfo UIBehaviour_t294_il2cpp_TypeInfo;
extern TypeInfo Selectable_t295_il2cpp_TypeInfo;
extern TypeInfo StandaloneInputModule_t296_il2cpp_TypeInfo;
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystemMethodDeclarations.h"
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviourMethodDeclarations.h"
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_SelectableMethodDeclarations.h"
// UnityEngine.EventSystems.StandaloneInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModulMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m1340_MethodInfo;
extern MethodInfo PanelManager_OpenPanel_m1255_MethodInfo;
extern MethodInfo EventSystem_get_current_m1341_MethodInfo;
extern MethodInfo EventSystem_get_currentSelectedGameObject_m1342_MethodInfo;
extern MethodInfo PanelManager_CloseCurrent_m1257_MethodInfo;
extern MethodInfo Animator_SetBool_m1343_MethodInfo;
extern MethodInfo PanelManager_FindFirstEnabledSelectable_m1256_MethodInfo;
extern MethodInfo PanelManager_SetSelected_m1259_MethodInfo;
extern MethodInfo UIBehaviour_IsActive_m1344_MethodInfo;
extern MethodInfo Selectable_IsInteractable_m1345_MethodInfo;
extern MethodInfo PanelManager_DisablePanelDeleyed_m1258_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m665_MethodInfo;
extern MethodInfo EventSystem_SetSelectedGameObject_m1346_MethodInfo;
extern MethodInfo EventSystem_get_currentInputModule_m1347_MethodInfo;
extern MethodInfo StandaloneInputModule_get_inputMode_m1348_MethodInfo;
struct GameObject_t92;
struct GameObject_t92;
#include "mscorlib_ArrayTypes.h"
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" ObjectU5BU5D_t194* GameObject_GetComponentsInChildren_TisObject_t_m1350_gshared (GameObject_t92 * __this, bool p0, MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisObject_t_m1350(__this, p0, method) (( ObjectU5BU5D_t194* (*) (GameObject_t92 *, bool, MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1350_gshared)(__this, p0, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Selectable>(System.Boolean)
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Selectable>(System.Boolean)
#define GameObject_GetComponentsInChildren_TisSelectable_t295_m1349(__this, p0, method) (( SelectableU5BU5D_t297* (*) (GameObject_t92 *, bool, MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1350_gshared)(__this, p0, method)
extern Il2CppGenericMethod GameObject_GetComponentsInChildren_TisSelectable_t295_m1349_GenericMethod;


// System.Void PanelManager::.ctor()
extern MethodInfo PanelManager__ctor_m1253_MethodInfo;
extern "C" void PanelManager__ctor_m1253 (PanelManager_t282 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void PanelManager::OnEnable()
extern MethodInfo PanelManager_OnEnable_m1254_MethodInfo;
extern "C" void PanelManager_OnEnable_m1254 (PanelManager_t282 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Animator_StringToHash_m1340(NULL /*static, unused*/, (String_t*) &_stringLiteral82, /*hidden argument*/&Animator_StringToHash_m1340_MethodInfo);
		__this->___m_OpenParameterId_5 = L_0;
		Animator_t42 * L_1 = (__this->___initiallyOpen_4);
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		Animator_t42 * L_3 = (__this->___initiallyOpen_4);
		PanelManager_OpenPanel_m1255(__this, L_3, /*hidden argument*/&PanelManager_OpenPanel_m1255_MethodInfo);
		return;
	}
}
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C" void PanelManager_OpenPanel_m1255 (PanelManager_t282 * __this, Animator_t42 * ___anim, MethodInfo* method)
{
	GameObject_t92 * V_0 = {0};
	GameObject_t92 * V_1 = {0};
	{
		Animator_t42 * L_0 = (__this->___m_Open_6);
		Animator_t42 * L_1 = ___anim;
		bool L_2 = Object_op_Equality_m576(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m576_MethodInfo);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Animator_t42 * L_3 = ___anim;
		NullCheck(L_3);
		GameObject_t92 * L_4 = Component_get_gameObject_m577(L_3, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		NullCheck(L_4);
		GameObject_SetActive_m770(L_4, 1, /*hidden argument*/&GameObject_SetActive_m770_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EventSystem_t293_il2cpp_TypeInfo));
		EventSystem_t293 * L_5 = EventSystem_get_current_m1341(NULL /*static, unused*/, /*hidden argument*/&EventSystem_get_current_m1341_MethodInfo);
		NullCheck(L_5);
		GameObject_t92 * L_6 = EventSystem_get_currentSelectedGameObject_m1342(L_5, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m1342_MethodInfo);
		V_0 = L_6;
		Animator_t42 * L_7 = ___anim;
		NullCheck(L_7);
		Transform_t2 * L_8 = Component_get_transform_m598(L_7, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_8);
		Transform_SetAsLastSibling_m1316(L_8, /*hidden argument*/&Transform_SetAsLastSibling_m1316_MethodInfo);
		PanelManager_CloseCurrent_m1257(__this, /*hidden argument*/&PanelManager_CloseCurrent_m1257_MethodInfo);
		GameObject_t92 * L_9 = V_0;
		__this->___m_PreviouslySelected_7 = L_9;
		Animator_t42 * L_10 = ___anim;
		__this->___m_Open_6 = L_10;
		Animator_t42 * L_11 = (__this->___m_Open_6);
		int32_t L_12 = (__this->___m_OpenParameterId_5);
		NullCheck(L_11);
		Animator_SetBool_m1343(L_11, L_12, 1, /*hidden argument*/&Animator_SetBool_m1343_MethodInfo);
		Animator_t42 * L_13 = ___anim;
		NullCheck(L_13);
		GameObject_t92 * L_14 = Component_get_gameObject_m577(L_13, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		GameObject_t92 * L_15 = PanelManager_FindFirstEnabledSelectable_m1256(NULL /*static, unused*/, L_14, /*hidden argument*/&PanelManager_FindFirstEnabledSelectable_m1256_MethodInfo);
		V_1 = L_15;
		GameObject_t92 * L_16 = V_1;
		PanelManager_SetSelected_m1259(__this, L_16, /*hidden argument*/&PanelManager_SetSelected_m1259_MethodInfo);
		return;
	}
}
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern MethodInfo* GameObject_GetComponentsInChildren_TisSelectable_t295_m1349_MethodInfo_var;
extern "C" GameObject_t92 * PanelManager_FindFirstEnabledSelectable_m1256 (Object_t * __this /* static, unused */, GameObject_t92 * ___gameObject, MethodInfo* method)
{
	static bool PanelManager_FindFirstEnabledSelectable_m1256_init;
	if (!PanelManager_FindFirstEnabledSelectable_m1256_init)
	{
		GameObject_GetComponentsInChildren_TisSelectable_t295_m1349_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponentsInChildren_TisSelectable_t295_m1349_GenericMethod);
		PanelManager_FindFirstEnabledSelectable_m1256_init = true;
	}
	GameObject_t92 * V_0 = {0};
	SelectableU5BU5D_t297* V_1 = {0};
	Selectable_t295 * V_2 = {0};
	SelectableU5BU5D_t297* V_3 = {0};
	int32_t V_4 = 0;
	{
		V_0 = (GameObject_t92 *)NULL;
		GameObject_t92 * L_0 = ___gameObject;
		NullCheck(L_0);
		SelectableU5BU5D_t297* L_1 = GameObject_GetComponentsInChildren_TisSelectable_t295_m1349(L_0, 1, /*hidden argument*/GameObject_GetComponentsInChildren_TisSelectable_t295_m1349_MethodInfo_var);
		V_1 = L_1;
		SelectableU5BU5D_t297* L_2 = V_1;
		V_3 = L_2;
		V_4 = 0;
		goto IL_0041;
	}

IL_0014:
	{
		SelectableU5BU5D_t297* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(Selectable_t295 **)(Selectable_t295 **)SZArrayLdElema(L_3, L_5));
		Selectable_t295 * L_6 = V_2;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UIBehaviour_IsActive_m1344_MethodInfo, L_6);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Selectable_t295 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Selectable_IsInteractable_m1345_MethodInfo, L_8);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		Selectable_t295 * L_10 = V_2;
		NullCheck(L_10);
		GameObject_t92 * L_11 = Component_get_gameObject_m577(L_10, /*hidden argument*/&Component_get_gameObject_m577_MethodInfo);
		V_0 = L_11;
		goto IL_004b;
	}

IL_003b:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_4;
		SelectableU5BU5D_t297* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0014;
		}
	}

IL_004b:
	{
		GameObject_t92 * L_15 = V_0;
		return L_15;
	}
}
// System.Void PanelManager::CloseCurrent()
extern "C" void PanelManager_CloseCurrent_m1257 (PanelManager_t282 * __this, MethodInfo* method)
{
	{
		Animator_t42 * L_0 = (__this->___m_Open_6);
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
		Animator_t42 * L_2 = (__this->___m_Open_6);
		int32_t L_3 = (__this->___m_OpenParameterId_5);
		NullCheck(L_2);
		Animator_SetBool_m1343(L_2, L_3, 0, /*hidden argument*/&Animator_SetBool_m1343_MethodInfo);
		GameObject_t92 * L_4 = (__this->___m_PreviouslySelected_7);
		PanelManager_SetSelected_m1259(__this, L_4, /*hidden argument*/&PanelManager_SetSelected_m1259_MethodInfo);
		Animator_t42 * L_5 = (__this->___m_Open_6);
		Object_t * L_6 = PanelManager_DisablePanelDeleyed_m1258(__this, L_5, /*hidden argument*/&PanelManager_DisablePanelDeleyed_m1258_MethodInfo);
		MonoBehaviour_StartCoroutine_m665(__this, L_6, /*hidden argument*/&MonoBehaviour_StartCoroutine_m665_MethodInfo);
		__this->___m_Open_6 = (Animator_t42 *)NULL;
		return;
	}
}
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C" Object_t * PanelManager_DisablePanelDeleyed_m1258 (PanelManager_t282 * __this, Animator_t42 * ___anim, MethodInfo* method)
{
	U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * V_0 = {0};
	{
		U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * L_0 = (U3CDisablePanelDeleyedU3Ec__Iterator1_t283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CDisablePanelDeleyedU3Ec__Iterator1_t283_il2cpp_TypeInfo));
		U3CDisablePanelDeleyedU3Ec__Iterator1__ctor_m1247(L_0, /*hidden argument*/&U3CDisablePanelDeleyedU3Ec__Iterator1__ctor_m1247_MethodInfo);
		V_0 = L_0;
		U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * L_1 = V_0;
		Animator_t42 * L_2 = ___anim;
		NullCheck(L_1);
		L_1->___anim_2 = L_2;
		U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * L_3 = V_0;
		Animator_t42 * L_4 = ___anim;
		NullCheck(L_3);
		L_3->___U3C$U3Eanim_5 = L_4;
		U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_6 = __this;
		U3CDisablePanelDeleyedU3Ec__Iterator1_t283 * L_6 = V_0;
		return L_6;
	}
}
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C" void PanelManager_SetSelected_m1259 (PanelManager_t282 * __this, GameObject_t92 * ___go, MethodInfo* method)
{
	StandaloneInputModule_t296 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EventSystem_t293_il2cpp_TypeInfo));
		EventSystem_t293 * L_0 = EventSystem_get_current_m1341(NULL /*static, unused*/, /*hidden argument*/&EventSystem_get_current_m1341_MethodInfo);
		GameObject_t92 * L_1 = ___go;
		NullCheck(L_0);
		EventSystem_SetSelectedGameObject_m1346(L_0, L_1, /*hidden argument*/&EventSystem_SetSelectedGameObject_m1346_MethodInfo);
		EventSystem_t293 * L_2 = EventSystem_get_current_m1341(NULL /*static, unused*/, /*hidden argument*/&EventSystem_get_current_m1341_MethodInfo);
		NullCheck(L_2);
		BaseInputModule_t298 * L_3 = EventSystem_get_currentInputModule_m1347(L_2, /*hidden argument*/&EventSystem_get_currentInputModule_m1347_MethodInfo);
		V_0 = ((StandaloneInputModule_t296 *)IsInst(L_3, InitializedTypeInfo(&StandaloneInputModule_t296_il2cpp_TypeInfo)));
		StandaloneInputModule_t296 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m642(NULL /*static, unused*/, L_4, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		StandaloneInputModule_t296 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = StandaloneInputModule_get_inputMode_m1348(L_6, /*hidden argument*/&StandaloneInputModule_get_inputMode_m1348_MethodInfo);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EventSystem_t293_il2cpp_TypeInfo));
		EventSystem_t293 * L_8 = EventSystem_get_current_m1341(NULL /*static, unused*/, /*hidden argument*/&EventSystem_get_current_m1341_MethodInfo);
		NullCheck(L_8);
		EventSystem_SetSelectedGameObject_m1346(L_8, (GameObject_t92 *)NULL, /*hidden argument*/&EventSystem_SetSelectedGameObject_m1346_MethodInfo);
		return;
	}
}
// ResizePanel
#include "AssemblyU2DCSharp_ResizePanel.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResizePanel_t284_il2cpp_TypeInfo;
// ResizePanel
#include "AssemblyU2DCSharp_ResizePanelMethodDeclarations.h"

extern MethodInfo RectTransform_get_sizeDelta_m1351_MethodInfo;
extern MethodInfo Vector2_op_Addition_m1352_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m1353_MethodInfo;
struct Component_t185;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t277_m1354(__this, method) (( RectTransform_t277 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRectTransform_t277_m1354_GenericMethod;


// System.Void ResizePanel::.ctor()
extern MethodInfo ResizePanel__ctor_m1260_MethodInfo;
extern "C" void ResizePanel__ctor_m1260 (ResizePanel_t284 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = {0};
		Vector2__ctor_m682(&L_0, (100.0f), (100.0f), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		__this->___minSize_2 = L_0;
		Vector2_t13  L_1 = {0};
		Vector2__ctor_m682(&L_1, (400.0f), (400.0f), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		__this->___maxSize_3 = L_1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ResizePanel::Awake()
extern MethodInfo ResizePanel_Awake_m1261_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRectTransform_t277_m1354_MethodInfo_var;
extern "C" void ResizePanel_Awake_m1261 (ResizePanel_t284 * __this, MethodInfo* method)
{
	static bool ResizePanel_Awake_m1261_init;
	if (!ResizePanel_Awake_m1261_init)
	{
		Component_GetComponent_TisRectTransform_t277_m1354_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRectTransform_t277_m1354_GenericMethod);
		ResizePanel_Awake_m1261_init = true;
	}
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Transform_get_parent_m626(L_0, /*hidden argument*/&Transform_get_parent_m626_MethodInfo);
		NullCheck(L_1);
		RectTransform_t277 * L_2 = Component_GetComponent_TisRectTransform_t277_m1354(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t277_m1354_MethodInfo_var);
		__this->___panelRectTransform_4 = L_2;
		return;
	}
}
// System.Void ResizePanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo ResizePanel_OnPointerDown_m1262_MethodInfo;
extern "C" void ResizePanel_OnPointerDown_m1262 (ResizePanel_t284 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	{
		RectTransform_t277 * L_0 = (__this->___panelRectTransform_4);
		NullCheck(L_0);
		Vector2_t13  L_1 = RectTransform_get_sizeDelta_m1351(L_0, /*hidden argument*/&RectTransform_get_sizeDelta_m1351_MethodInfo);
		__this->___originalSizeDelta_6 = L_1;
		RectTransform_t277 * L_2 = (__this->___panelRectTransform_4);
		PointerEventData_t46 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t13  L_4 = PointerEventData_get_position_m766(L_3, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		PointerEventData_t46 * L_5 = ___data;
		NullCheck(L_5);
		Camera_t19 * L_6 = PointerEventData_get_pressEventCamera_m1322(L_5, /*hidden argument*/&PointerEventData_get_pressEventCamera_m1322_MethodInfo);
		Vector2_t13 * L_7 = &(__this->___originalLocalPointerPosition_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t290_il2cpp_TypeInfo));
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328(NULL /*static, unused*/, L_2, L_4, L_6, L_7, /*hidden argument*/&RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328_MethodInfo);
		return;
	}
}
// System.Void ResizePanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern MethodInfo ResizePanel_OnDrag_m1263_MethodInfo;
extern "C" void ResizePanel_OnDrag_m1263 (ResizePanel_t284 * __this, PointerEventData_t46 * ___data, MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	Vector3_t8  V_1 = {0};
	Vector2_t13  V_2 = {0};
	{
		RectTransform_t277 * L_0 = (__this->___panelRectTransform_4);
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
		RectTransform_t277 * L_2 = (__this->___panelRectTransform_4);
		PointerEventData_t46 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t13  L_4 = PointerEventData_get_position_m766(L_3, /*hidden argument*/&PointerEventData_get_position_m766_MethodInfo);
		PointerEventData_t46 * L_5 = ___data;
		NullCheck(L_5);
		Camera_t19 * L_6 = PointerEventData_get_pressEventCamera_m1322(L_5, /*hidden argument*/&PointerEventData_get_pressEventCamera_m1322_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t290_il2cpp_TypeInfo));
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328(NULL /*static, unused*/, L_2, L_4, L_6, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToLocalPointInRectangle_m1328_MethodInfo);
		Vector2_t13  L_7 = V_0;
		Vector2_t13  L_8 = (__this->___originalLocalPointerPosition_5);
		Vector2_t13  L_9 = Vector2_op_Subtraction_m1329(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector2_op_Subtraction_m1329_MethodInfo);
		Vector3_t8  L_10 = Vector2_op_Implicit_m788(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m788_MethodInfo);
		V_1 = L_10;
		Vector2_t13  L_11 = (__this->___originalSizeDelta_6);
		float L_12 = ((&V_1)->___x_1);
		float L_13 = ((&V_1)->___y_2);
		Vector2_t13  L_14 = {0};
		Vector2__ctor_m682(&L_14, L_12, ((-L_13)), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		Vector2_t13  L_15 = Vector2_op_Addition_m1352(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/&Vector2_op_Addition_m1352_MethodInfo);
		V_2 = L_15;
		float L_16 = ((&V_2)->___x_1);
		Vector2_t13 * L_17 = &(__this->___minSize_2);
		float L_18 = (L_17->___x_1);
		Vector2_t13 * L_19 = &(__this->___maxSize_3);
		float L_20 = (L_19->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_21 = Mathf_Clamp_m616(NULL /*static, unused*/, L_16, L_18, L_20, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		float L_22 = ((&V_2)->___y_2);
		Vector2_t13 * L_23 = &(__this->___minSize_2);
		float L_24 = (L_23->___y_2);
		Vector2_t13 * L_25 = &(__this->___maxSize_3);
		float L_26 = (L_25->___y_2);
		float L_27 = Mathf_Clamp_m616(NULL /*static, unused*/, L_22, L_24, L_26, /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		Vector2__ctor_m682((&V_2), L_21, L_27, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		RectTransform_t277 * L_28 = (__this->___panelRectTransform_4);
		Vector2_t13  L_29 = V_2;
		NullCheck(L_28);
		RectTransform_set_sizeDelta_m1353(L_28, L_29, /*hidden argument*/&RectTransform_set_sizeDelta_m1353_MethodInfo);
		return;
	}
}
// ScrollDetailTexture
#include "AssemblyU2DCSharp_ScrollDetailTexture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScrollDetailTexture_t285_il2cpp_TypeInfo;
// ScrollDetailTexture
#include "AssemblyU2DCSharp_ScrollDetailTextureMethodDeclarations.h"

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
extern TypeInfo MaskableGraphic_t299_il2cpp_TypeInfo;
extern TypeInfo Material_t75_il2cpp_TypeInfo;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphicMethodDeclarations.h"
extern MethodInfo MaskableGraphic_get_material_m1355_MethodInfo;
extern MethodInfo Material__ctor_m1356_MethodInfo;
extern MethodInfo Object_get_name_m820_MethodInfo;
extern MethodInfo String_Concat_m988_MethodInfo;
extern MethodInfo Object_set_name_m898_MethodInfo;
extern MethodInfo Object_set_hideFlags_m837_MethodInfo;
extern MethodInfo MaskableGraphic_set_material_m1357_MethodInfo;
extern MethodInfo Application_get_isEditor_m1358_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m880_MethodInfo;
extern MethodInfo Material_GetTexture_m1359_MethodInfo;
extern MethodInfo Time_get_time_m619_MethodInfo;
extern MethodInfo Material_SetTextureOffset_m1360_MethodInfo;


// System.Void ScrollDetailTexture::.ctor()
extern MethodInfo ScrollDetailTexture__ctor_m1264_MethodInfo;
extern "C" void ScrollDetailTexture__ctor_m1264 (ScrollDetailTexture_t285 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		__this->___scrollPerSecond_3 = L_0;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ScrollDetailTexture::OnEnable()
extern MethodInfo ScrollDetailTexture_OnEnable_m1265_MethodInfo;
extern MethodInfo* Component_GetComponent_TisImage_t64_m793_MethodInfo_var;
extern "C" void ScrollDetailTexture_OnEnable_m1265 (ScrollDetailTexture_t285 * __this, MethodInfo* method)
{
	static bool ScrollDetailTexture_OnEnable_m1265_init;
	if (!ScrollDetailTexture_OnEnable_m1265_init)
	{
		Component_GetComponent_TisImage_t64_m793_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisImage_t64_m793_GenericMethod);
		ScrollDetailTexture_OnEnable_m1265_init = true;
	}
	{
		Image_t64 * L_0 = Component_GetComponent_TisImage_t64_m793(__this, /*hidden argument*/Component_GetComponent_TisImage_t64_m793_MethodInfo_var);
		__this->___mSprite_7 = L_0;
		Image_t64 * L_1 = (__this->___mSprite_7);
		NullCheck(L_1);
		Material_t75 * L_2 = (Material_t75 *)VirtFuncInvoker0< Material_t75 * >::Invoke(&MaskableGraphic_get_material_m1355_MethodInfo, L_1);
		__this->___mOriginal_6 = L_2;
		bool L_3 = (__this->___uniqueMaterial_2);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		Image_t64 * L_4 = (__this->___mSprite_7);
		NullCheck(L_4);
		Material_t75 * L_5 = (Material_t75 *)VirtFuncInvoker0< Material_t75 * >::Invoke(&MaskableGraphic_get_material_m1355_MethodInfo, L_4);
		bool L_6 = Object_op_Inequality_m642(NULL /*static, unused*/, L_5, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_6)
		{
			goto IL_008d;
		}
	}
	{
		Material_t75 * L_7 = (__this->___mOriginal_6);
		Material_t75 * L_8 = (Material_t75 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t75_il2cpp_TypeInfo));
		Material__ctor_m1356(L_8, L_7, /*hidden argument*/&Material__ctor_m1356_MethodInfo);
		__this->___mCopy_5 = L_8;
		Material_t75 * L_9 = (__this->___mCopy_5);
		Material_t75 * L_10 = (__this->___mOriginal_6);
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m820(L_10, /*hidden argument*/&Object_get_name_m820_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m988(NULL /*static, unused*/, (String_t*) &_stringLiteral84, L_11, /*hidden argument*/&String_Concat_m988_MethodInfo);
		NullCheck(L_9);
		Object_set_name_m898(L_9, L_12, /*hidden argument*/&Object_set_name_m898_MethodInfo);
		Material_t75 * L_13 = (__this->___mCopy_5);
		NullCheck(L_13);
		Object_set_hideFlags_m837(L_13, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m837_MethodInfo);
		Image_t64 * L_14 = (__this->___mSprite_7);
		Material_t75 * L_15 = (__this->___mCopy_5);
		NullCheck(L_14);
		VirtActionInvoker1< Material_t75 * >::Invoke(&MaskableGraphic_set_material_m1357_MethodInfo, L_14, L_15);
	}

IL_008d:
	{
		return;
	}
}
// System.Void ScrollDetailTexture::OnDisable()
extern MethodInfo ScrollDetailTexture_OnDisable_m1266_MethodInfo;
extern "C" void ScrollDetailTexture_OnDisable_m1266 (ScrollDetailTexture_t285 * __this, MethodInfo* method)
{
	{
		Material_t75 * L_0 = (__this->___mCopy_5);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		Image_t64 * L_2 = (__this->___mSprite_7);
		Material_t75 * L_3 = (__this->___mOriginal_6);
		NullCheck(L_2);
		VirtActionInvoker1< Material_t75 * >::Invoke(&MaskableGraphic_set_material_m1357_MethodInfo, L_2, L_3);
		bool L_4 = Application_get_isEditor_m1358(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m1358_MethodInfo);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		Material_t75 * L_5 = (__this->___mCopy_5);
		Object_DestroyImmediate_m880(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_DestroyImmediate_m880_MethodInfo);
		goto IL_0047;
	}

IL_003c:
	{
		Material_t75 * L_6 = (__this->___mCopy_5);
		Object_Destroy_m991(NULL /*static, unused*/, L_6, /*hidden argument*/&Object_Destroy_m991_MethodInfo);
	}

IL_0047:
	{
		__this->___mCopy_5 = (Material_t75 *)NULL;
	}

IL_004e:
	{
		__this->___mOriginal_6 = (Material_t75 *)NULL;
		return;
	}
}
// System.Void ScrollDetailTexture::Update()
extern MethodInfo ScrollDetailTexture_Update_m1267_MethodInfo;
extern "C" void ScrollDetailTexture_Update_m1267 (ScrollDetailTexture_t285 * __this, MethodInfo* method)
{
	Material_t75 * V_0 = {0};
	Texture_t300 * V_1 = {0};
	Material_t75 * G_B3_0 = {0};
	{
		Material_t75 * L_0 = (__this->___mCopy_5);
		bool L_1 = Object_op_Inequality_m642(NULL /*static, unused*/, L_0, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Material_t75 * L_2 = (__this->___mCopy_5);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		Material_t75 * L_3 = (__this->___mOriginal_6);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		Material_t75 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m642(NULL /*static, unused*/, L_4, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		Material_t75 * L_6 = V_0;
		NullCheck(L_6);
		Texture_t300 * L_7 = Material_GetTexture_m1359(L_6, (String_t*) &_stringLiteral85, /*hidden argument*/&Material_GetTexture_m1359_MethodInfo);
		V_1 = L_7;
		Texture_t300 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m642(NULL /*static, unused*/, L_8, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		Material_t75 * L_10 = V_0;
		Vector2_t13  L_11 = (__this->___scrollPerSecond_3);
		float L_12 = Time_get_time_m619(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m619_MethodInfo);
		Vector2_t13  L_13 = Vector2_op_Multiply_m1296(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&Vector2_op_Multiply_m1296_MethodInfo);
		NullCheck(L_10);
		Material_SetTextureOffset_m1360(L_10, (String_t*) &_stringLiteral85, L_13, /*hidden argument*/&Material_SetTextureOffset_m1360_MethodInfo);
	}

IL_0062:
	{
		return;
	}
}
// ShowSliderValue
#include "AssemblyU2DCSharp_ShowSliderValue.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShowSliderValue_t286_il2cpp_TypeInfo;
// ShowSliderValue
#include "AssemblyU2DCSharp_ShowSliderValueMethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
extern TypeInfo Text_t301_il2cpp_TypeInfo;
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
extern MethodInfo Mathf_RoundToInt_m1361_MethodInfo;
extern MethodInfo String_Concat_m897_MethodInfo;
extern MethodInfo Text_set_text_m1362_MethodInfo;
struct Component_t185;
// UnityEngine.CastHelper`1<UnityEngine.UI.Text>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_23.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t301_m1363(__this, method) (( Text_t301 * (*) (Component_t185 *, MethodInfo*))Component_GetComponent_TisObject_t_m585_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisText_t301_m1363_GenericMethod;


// System.Void ShowSliderValue::.ctor()
extern MethodInfo ShowSliderValue__ctor_m1268_MethodInfo;
extern "C" void ShowSliderValue__ctor_m1268 (ShowSliderValue_t286 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void ShowSliderValue::UpdateLabel(System.Single)
extern MethodInfo ShowSliderValue_UpdateLabel_m1269_MethodInfo;
extern MethodInfo* Component_GetComponent_TisText_t301_m1363_MethodInfo_var;
extern "C" void ShowSliderValue_UpdateLabel_m1269 (ShowSliderValue_t286 * __this, float ___value, MethodInfo* method)
{
	static bool ShowSliderValue_UpdateLabel_m1269_init;
	if (!ShowSliderValue_UpdateLabel_m1269_init)
	{
		Component_GetComponent_TisText_t301_m1363_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisText_t301_m1363_GenericMethod);
		ShowSliderValue_UpdateLabel_m1269_init = true;
	}
	Text_t301 * V_0 = {0};
	{
		Text_t301 * L_0 = Component_GetComponent_TisText_t301_m1363(__this, /*hidden argument*/Component_GetComponent_TisText_t301_m1363_MethodInfo_var);
		V_0 = L_0;
		Text_t301 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m642(NULL /*static, unused*/, L_1, (Object_t91 *)NULL, /*hidden argument*/&Object_op_Inequality_m642_MethodInfo);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Text_t301 * L_3 = V_0;
		float L_4 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_RoundToInt_m1361(NULL /*static, unused*/, ((float)((float)L_4*(float)(100.0f))), /*hidden argument*/&Mathf_RoundToInt_m1361_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t188_il2cpp_TypeInfo), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m897(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral86, /*hidden argument*/&String_Concat_m897_MethodInfo);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m1362_MethodInfo, L_3, L_8);
	}

IL_0034:
	{
		return;
	}
}
// TiltWindow
#include "AssemblyU2DCSharp_TiltWindow.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TiltWindow_t287_il2cpp_TypeInfo;
// TiltWindow
#include "AssemblyU2DCSharp_TiltWindowMethodDeclarations.h"

// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern MethodInfo Screen_get_width_m786_MethodInfo;
extern MethodInfo Screen_get_height_m994_MethodInfo;
extern MethodInfo Vector2_Lerp_m1364_MethodInfo;
extern MethodInfo Quaternion_Euler_m614_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m623_MethodInfo;


// System.Void TiltWindow::.ctor()
extern MethodInfo TiltWindow__ctor_m1270_MethodInfo;
extern "C" void TiltWindow__ctor_m1270 (TiltWindow_t287 * __this, MethodInfo* method)
{
	{
		Vector2_t13  L_0 = {0};
		Vector2__ctor_m682(&L_0, (5.0f), (3.0f), /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		__this->___range_2 = L_0;
		Vector2_t13  L_1 = Vector2_get_zero_m696(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m696_MethodInfo);
		__this->___mRot_5 = L_1;
		MonoBehaviour__ctor_m575(__this, /*hidden argument*/&MonoBehaviour__ctor_m575_MethodInfo);
		return;
	}
}
// System.Void TiltWindow::Start()
extern MethodInfo TiltWindow_Start_m1271_MethodInfo;
extern "C" void TiltWindow_Start_m1271 (TiltWindow_t287 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m598(__this, /*hidden argument*/&Component_get_transform_m598_MethodInfo);
		__this->___mTrans_3 = L_0;
		Transform_t2 * L_1 = (__this->___mTrans_3);
		NullCheck(L_1);
		Quaternion_t10  L_2 = Transform_get_localRotation_m611(L_1, /*hidden argument*/&Transform_get_localRotation_m611_MethodInfo);
		__this->___mStart_4 = L_2;
		return;
	}
}
// System.Void TiltWindow::Update()
extern MethodInfo TiltWindow_Update_m1272_MethodInfo;
extern "C" void TiltWindow_Update_m1272 (TiltWindow_t287 * __this, MethodInfo* method)
{
	Vector3_t8  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t187_il2cpp_TypeInfo));
		Vector3_t8  L_0 = Input_get_mousePosition_m783(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m783_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Screen_get_width_m786(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m786_MethodInfo);
		V_1 = ((float)((float)(((float)L_1))*(float)(0.5f)));
		int32_t L_2 = Screen_get_height_m994(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m994_MethodInfo);
		V_2 = ((float)((float)(((float)L_2))*(float)(0.5f)));
		float L_3 = ((&V_0)->___x_1);
		float L_4 = V_1;
		float L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t186_il2cpp_TypeInfo));
		float L_6 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)((float)((float)L_3-(float)L_4))/(float)L_5)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_3 = L_6;
		float L_7 = ((&V_0)->___y_2);
		float L_8 = V_2;
		float L_9 = V_2;
		float L_10 = Mathf_Clamp_m616(NULL /*static, unused*/, ((float)((float)((float)((float)L_7-(float)L_8))/(float)L_9)), (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m616_MethodInfo);
		V_4 = L_10;
		Vector2_t13  L_11 = (__this->___mRot_5);
		float L_12 = V_3;
		float L_13 = V_4;
		Vector2_t13  L_14 = {0};
		Vector2__ctor_m682(&L_14, L_12, L_13, /*hidden argument*/&Vector2__ctor_m682_MethodInfo);
		float L_15 = Time_get_deltaTime_m579(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m579_MethodInfo);
		Vector2_t13  L_16 = Vector2_Lerp_m1364(NULL /*static, unused*/, L_11, L_14, ((float)((float)L_15*(float)(5.0f))), /*hidden argument*/&Vector2_Lerp_m1364_MethodInfo);
		__this->___mRot_5 = L_16;
		Transform_t2 * L_17 = (__this->___mTrans_3);
		Quaternion_t10  L_18 = (__this->___mStart_4);
		Vector2_t13 * L_19 = &(__this->___mRot_5);
		float L_20 = (L_19->___y_2);
		Vector2_t13 * L_21 = &(__this->___range_2);
		float L_22 = (L_21->___y_2);
		Vector2_t13 * L_23 = &(__this->___mRot_5);
		float L_24 = (L_23->___x_1);
		Vector2_t13 * L_25 = &(__this->___range_2);
		float L_26 = (L_25->___x_1);
		Quaternion_t10  L_27 = Quaternion_Euler_m614(NULL /*static, unused*/, ((float)((float)((-L_20))*(float)L_22)), ((float)((float)L_24*(float)L_26)), (0.0f), /*hidden argument*/&Quaternion_Euler_m614_MethodInfo);
		Quaternion_t10  L_28 = Quaternion_op_Multiply_m623(NULL /*static, unused*/, L_18, L_27, /*hidden argument*/&Quaternion_op_Multiply_m623_MethodInfo);
		NullCheck(L_17);
		Transform_set_localRotation_m618(L_17, L_28, /*hidden argument*/&Transform_set_localRotation_m618_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
