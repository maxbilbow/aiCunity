#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DragPanel
struct DragPanel_t279;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;

// System.Void DragPanel::.ctor()
extern "C" void DragPanel__ctor_m1236 (DragPanel_t279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::Awake()
extern "C" void DragPanel_Awake_m1237 (DragPanel_t279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragPanel_OnPointerDown_m1238 (DragPanel_t279 * __this, PointerEventData_t46 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragPanel_OnDrag_m1239 (DragPanel_t279 * __this, PointerEventData_t46 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::ClampToWindow()
extern "C" void DragPanel_ClampToWindow_m1240 (DragPanel_t279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
