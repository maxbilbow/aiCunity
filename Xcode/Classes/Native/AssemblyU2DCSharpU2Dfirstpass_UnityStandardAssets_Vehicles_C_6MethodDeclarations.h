#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t163;

// System.Void UnityStandardAssets.Vehicles.Car.CarController::.ctor()
extern "C" void CarController__ctor_m509 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::.cctor()
extern "C" void CarController__cctor_m510 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::get_Skidding()
extern "C" bool CarController_get_Skidding_m511 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Skidding(System.Boolean)
extern "C" void CarController_set_Skidding_m512 (CarController_t163 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_BrakeInput()
extern "C" float CarController_get_BrakeInput_m513 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_BrakeInput(System.Single)
extern "C" void CarController_set_BrakeInput_m514 (CarController_t163 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSteerAngle()
extern "C" float CarController_get_CurrentSteerAngle_m515 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSpeed()
extern "C" float CarController_get_CurrentSpeed_m516 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_MaxSpeed()
extern "C" float CarController_get_MaxSpeed_m517 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_Revs()
extern "C" float CarController_get_Revs_m518 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Revs(System.Single)
extern "C" void CarController_set_Revs_m519 (CarController_t163 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_AccelInput()
extern "C" float CarController_get_AccelInput_m520 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_AccelInput(System.Single)
extern "C" void CarController_set_AccelInput_m521 (CarController_t163 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Start()
extern "C" void CarController_Start_m522 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::GearChanging()
extern "C" void CarController_GearChanging_m523 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::CurveFactor(System.Single)
extern "C" float CarController_CurveFactor_m524 (Object_t * __this /* static, unused */, float ___factor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::ULerp(System.Single,System.Single,System.Single)
extern "C" float CarController_ULerp_m525 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateGearFactor()
extern "C" void CarController_CalculateGearFactor_m526 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateRevs()
extern "C" void CarController_CalculateRevs_m527 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Move(System.Single,System.Single,System.Single,System.Single)
extern "C" void CarController_Move_m528 (CarController_t163 * __this, float ___steering, float ___accel, float ___footbrake, float ___handbrake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CapSpeed()
extern "C" void CarController_CapSpeed_m529 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::ApplyDrive(System.Single,System.Single)
extern "C" void CarController_ApplyDrive_m530 (CarController_t163 * __this, float ___accel, float ___footbrake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::SteerHelper()
extern "C" void CarController_SteerHelper_m531 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AddDownForce()
extern "C" void CarController_AddDownForce_m532 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CheckForWheelSpin()
extern "C" void CarController_CheckForWheelSpin_m533 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::TractionControl()
extern "C" void CarController_TractionControl_m534 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AdjustTorque(System.Single)
extern "C" void CarController_AdjustTorque_m535 (CarController_t163 * __this, float ___forwardSlip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::AnySkidSoundPlaying()
extern "C" bool CarController_AnySkidSoundPlaying_m536 (CarController_t163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
