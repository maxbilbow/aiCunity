#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PanelManager
struct PanelManager_t282;
// UnityEngine.Animator
struct Animator_t42;
// UnityEngine.GameObject
struct GameObject_t92;
// System.Collections.IEnumerator
struct IEnumerator_t106;

// System.Void PanelManager::.ctor()
extern "C" void PanelManager__ctor_m1253 (PanelManager_t282 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OnEnable()
extern "C" void PanelManager_OnEnable_m1254 (PanelManager_t282 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C" void PanelManager_OpenPanel_m1255 (PanelManager_t282 * __this, Animator_t42 * ___anim, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C" GameObject_t92 * PanelManager_FindFirstEnabledSelectable_m1256 (Object_t * __this /* static, unused */, GameObject_t92 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::CloseCurrent()
extern "C" void PanelManager_CloseCurrent_m1257 (PanelManager_t282 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C" Object_t * PanelManager_DisablePanelDeleyed_m1258 (PanelManager_t282 * __this, Animator_t42 * ___anim, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C" void PanelManager_SetSelected_m1259 (PanelManager_t282 * __this, GameObject_t92 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
