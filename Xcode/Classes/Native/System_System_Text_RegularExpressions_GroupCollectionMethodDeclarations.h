﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1258;
// System.Text.RegularExpressions.Group
struct Group_t1256;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;

// System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Int32,System.Int32)
extern "C" void GroupCollection__ctor_m5518 (GroupCollection_t1258 * __this, int32_t ___n, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern "C" int32_t GroupCollection_get_Count_m5519 (GroupCollection_t1258 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
extern "C" bool GroupCollection_get_IsSynchronized_m5520 (GroupCollection_t1258 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern "C" Group_t1256 * GroupCollection_get_Item_m5521 (GroupCollection_t1258 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::SetValue(System.Text.RegularExpressions.Group,System.Int32)
extern "C" void GroupCollection_SetValue_m5522 (GroupCollection_t1258 * __this, Group_t1256 * ___g, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern "C" Object_t * GroupCollection_get_SyncRoot_m5523 (GroupCollection_t1258 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern "C" void GroupCollection_CopyTo_m5524 (GroupCollection_t1258 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern "C" Object_t * GroupCollection_GetEnumerator_m5525 (GroupCollection_t1258 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
