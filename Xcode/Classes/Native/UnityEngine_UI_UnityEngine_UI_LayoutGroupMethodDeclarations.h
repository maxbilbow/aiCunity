﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t490;
// UnityEngine.RectOffset
struct RectOffset_t494;
// UnityEngine.RectTransform
struct RectTransform_t277;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t495;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern "C" void LayoutGroup__ctor_m2424 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C" RectOffset_t494 * LayoutGroup_get_padding_m2425 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern "C" void LayoutGroup_set_padding_m2426 (LayoutGroup_t490 * __this, RectOffset_t494 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C" int32_t LayoutGroup_get_childAlignment_m2427 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern "C" void LayoutGroup_set_childAlignment_m2428 (LayoutGroup_t490 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern "C" RectTransform_t277 * LayoutGroup_get_rectTransform_m2429 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C" List_1_t495 * LayoutGroup_get_rectChildren_m2430 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C" void LayoutGroup_CalculateLayoutInputHorizontal_m2431 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputVertical()
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C" float LayoutGroup_get_minWidth_m2432 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C" float LayoutGroup_get_preferredWidth_m2433 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C" float LayoutGroup_get_flexibleWidth_m2434 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C" float LayoutGroup_get_minHeight_m2435 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C" float LayoutGroup_get_preferredHeight_m2436 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C" float LayoutGroup_get_flexibleHeight_m2437 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C" int32_t LayoutGroup_get_layoutPriority_m2438 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutHorizontal()
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutVertical()
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C" void LayoutGroup_OnEnable_m2439 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern "C" void LayoutGroup_OnDisable_m2440 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C" void LayoutGroup_OnDidApplyAnimationProperties_m2441 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C" float LayoutGroup_GetTotalMinSize_m2442 (LayoutGroup_t490 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C" float LayoutGroup_GetTotalPreferredSize_m2443 (LayoutGroup_t490 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C" float LayoutGroup_GetTotalFlexibleSize_m2444 (LayoutGroup_t490 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C" float LayoutGroup_GetStartOffset_m2445 (LayoutGroup_t490 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C" void LayoutGroup_SetLayoutInputForAxis_m2446 (LayoutGroup_t490 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C" void LayoutGroup_SetChildAlongAxis_m2447 (LayoutGroup_t490 * __this, RectTransform_t277 * ___rect, int32_t ___axis, float ___pos, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern "C" bool LayoutGroup_get_isRootLayoutGroup_m2448 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C" void LayoutGroup_OnRectTransformDimensionsChange_m2449 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C" void LayoutGroup_OnTransformChildrenChanged_m2450 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C" void LayoutGroup_SetDirty_m2451 (LayoutGroup_t490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
