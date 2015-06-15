#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t275;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// DragPanel
struct  DragPanel_t277  : public MonoBehaviour_t5
{
	// UnityEngine.Vector2 DragPanel::originalLocalPointerPosition
	Vector2_t13  ___originalLocalPointerPosition_2;
	// UnityEngine.Vector3 DragPanel::originalPanelLocalPosition
	Vector3_t8  ___originalPanelLocalPosition_3;
	// UnityEngine.RectTransform DragPanel::panelRectTransform
	RectTransform_t275 * ___panelRectTransform_4;
	// UnityEngine.RectTransform DragPanel::parentRectTransform
	RectTransform_t275 * ___parentRectTransform_5;
};
