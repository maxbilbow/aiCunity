#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t42;
// UnityEngine.GameObject
struct GameObject_t92;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PanelManager
struct  PanelManager_t282  : public MonoBehaviour_t5
{
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t42 * ___initiallyOpen_4;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_5;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t42 * ___m_Open_6;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t92 * ___m_PreviouslySelected_7;
};
