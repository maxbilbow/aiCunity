﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1260;
// System.Text.RegularExpressions.Match
struct Match_t1249;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1028;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
extern "C" void MatchCollection__ctor_m5537 (MatchCollection_t1260 * __this, Match_t1249 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern "C" int32_t MatchCollection_get_Count_m5538 (MatchCollection_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern "C" bool MatchCollection_get_IsSynchronized_m5539 (MatchCollection_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern "C" Match_t1249 * MatchCollection_get_Item_m5540 (MatchCollection_t1260 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern "C" Object_t * MatchCollection_get_SyncRoot_m5541 (MatchCollection_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern "C" void MatchCollection_CopyTo_m5542 (MatchCollection_t1260 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern "C" Object_t * MatchCollection_GetEnumerator_m5543 (MatchCollection_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
extern "C" bool MatchCollection_TryToGet_m5544 (MatchCollection_t1260 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
extern "C" Object_t * MatchCollection_get_FullList_m5545 (MatchCollection_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
