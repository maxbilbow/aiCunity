#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t155;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t146;
// UnityEngine.Renderer
struct Renderer_t156;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator
struct  AeroplanePropellerAnimator_t157  : public MonoBehaviour_t5
{
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModel
	Transform_t2 * ___m_PropellorModel_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlur
	Transform_t2 * ___m_PropellorBlur_4;
	// UnityEngine.Texture2D[] UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurTextures
	Texture2DU5BU5D_t155* ___m_PropellorBlurTextures_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurStart
	float ___m_ThrottleBlurStart_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurEnd
	float ___m_ThrottleBlurEnd_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_MaxRpm
	float ___m_MaxRpm_8;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_Plane
	AeroplaneController_t146 * ___m_Plane_9;
	// System.Int32 UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurState
	int32_t ___m_PropellorBlurState_10;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModelRenderer
	Renderer_t156 * ___m_PropellorModelRenderer_11;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurRenderer
	Renderer_t156 * ___m_PropellorBlurRenderer_12;
};
