#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t277;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ResizePanel
struct  ResizePanel_t284  : public MonoBehaviour_t5
{
	// UnityEngine.Vector2 ResizePanel::minSize
	Vector2_t13  ___minSize_2;
	// UnityEngine.Vector2 ResizePanel::maxSize
	Vector2_t13  ___maxSize_3;
	// UnityEngine.RectTransform ResizePanel::panelRectTransform
	RectTransform_t277 * ___panelRectTransform_4;
	// UnityEngine.Vector2 ResizePanel::originalLocalPointerPosition
	Vector2_t13  ___originalLocalPointerPosition_5;
	// UnityEngine.Vector2 ResizePanel::originalSizeDelta
	Vector2_t13  ___originalSizeDelta_6;
};
