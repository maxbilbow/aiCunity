#pragma once
#include <stdint.h>
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_t154;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t125;
// UnityStandardAssets.Vehicles.Car.WheelEffects[]
struct WheelEffectsU5BU5D_t172;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t173;
// UnityEngine.Rigidbody
struct Rigidbody_t3;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Vehicles.Car.CarDriveType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityStandardAssets.Vehicles.Car.SpeedType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Vehicles_C_5.h"
// UnityStandardAssets.Vehicles.Car.CarController
struct  CarController_t163  : public MonoBehaviour_t5
{
	// UnityStandardAssets.Vehicles.Car.CarDriveType UnityStandardAssets.Vehicles.Car.CarController::m_CarDriveType
	int32_t ___m_CarDriveType_3;
	// UnityEngine.WheelCollider[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelColliders
	WheelColliderU5BU5D_t154* ___m_WheelColliders_4;
	// UnityEngine.GameObject[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelMeshes
	GameObjectU5BU5D_t125* ___m_WheelMeshes_5;
	// UnityStandardAssets.Vehicles.Car.WheelEffects[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelEffects
	WheelEffectsU5BU5D_t172* ___m_WheelEffects_6;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.CarController::m_CentreOfMassOffset
	Vector3_t8  ___m_CentreOfMassOffset_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_MaximumSteerAngle
	float ___m_MaximumSteerAngle_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_SteerHelper
	float ___m_SteerHelper_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_TractionControl
	float ___m_TractionControl_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_FullTorqueOverAllWheels
	float ___m_FullTorqueOverAllWheels_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_ReverseTorque
	float ___m_ReverseTorque_12;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_MaxHandbrakeTorque
	float ___m_MaxHandbrakeTorque_13;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_Downforce
	float ___m_Downforce_14;
	// UnityStandardAssets.Vehicles.Car.SpeedType UnityStandardAssets.Vehicles.Car.CarController::m_SpeedType
	int32_t ___m_SpeedType_15;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_Topspeed
	float ___m_Topspeed_16;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_RevRangeBoundary
	float ___m_RevRangeBoundary_18;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_SlipLimit
	float ___m_SlipLimit_19;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_BrakeTorque
	float ___m_BrakeTorque_20;
	// UnityEngine.Quaternion[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelMeshLocalRotations
	QuaternionU5BU5D_t173* ___m_WheelMeshLocalRotations_21;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.CarController::m_Prevpos
	Vector3_t8  ___m_Prevpos_22;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.CarController::m_Pos
	Vector3_t8  ___m_Pos_23;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_SteerAngle
	float ___m_SteerAngle_24;
	// System.Int32 UnityStandardAssets.Vehicles.Car.CarController::m_GearNum
	int32_t ___m_GearNum_25;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_GearFactor
	float ___m_GearFactor_26;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_OldRotation
	float ___m_OldRotation_27;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_CurrentTorque
	float ___m_CurrentTorque_28;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Car.CarController::m_Rigidbody
	Rigidbody_t3 * ___m_Rigidbody_29;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::<Skidding>k__BackingField
	bool ___U3CSkiddingU3Ek__BackingField_30;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::<BrakeInput>k__BackingField
	float ___U3CBrakeInputU3Ek__BackingField_31;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::<Revs>k__BackingField
	float ___U3CRevsU3Ek__BackingField_32;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::<AccelInput>k__BackingField
	float ___U3CAccelInputU3Ek__BackingField_33;
};
struct CarController_t163_StaticFields{
	// System.Int32 UnityStandardAssets.Vehicles.Car.CarController::NoOfGears
	int32_t ___NoOfGears_17;
};
