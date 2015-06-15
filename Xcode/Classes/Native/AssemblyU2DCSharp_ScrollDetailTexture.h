#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t75;
// UnityEngine.UI.Image
struct Image_t64;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// ScrollDetailTexture
struct  ScrollDetailTexture_t285  : public MonoBehaviour_t5
{
	// System.Boolean ScrollDetailTexture::uniqueMaterial
	bool ___uniqueMaterial_2;
	// UnityEngine.Vector2 ScrollDetailTexture::scrollPerSecond
	Vector2_t13  ___scrollPerSecond_3;
	// UnityEngine.Matrix4x4 ScrollDetailTexture::m_Matrix
	Matrix4x4_t81  ___m_Matrix_4;
	// UnityEngine.Material ScrollDetailTexture::mCopy
	Material_t75 * ___mCopy_5;
	// UnityEngine.Material ScrollDetailTexture::mOriginal
	Material_t75 * ___mOriginal_6;
	// UnityEngine.UI.Image ScrollDetailTexture::mSprite
	Image_t64 * ___mSprite_7;
	// UnityEngine.Material ScrollDetailTexture::m_Mat
	Material_t75 * ___m_Mat_8;
};
