﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1264;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2426;
// System.String[]
struct StringU5BU5D_t215;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2570;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t871;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t3272;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t718  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.String>::table
	Int32U5BU5D_t1264* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.String>::linkSlots
	LinkU5BU5D_t2426* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.String>::keySlots
	StringU5BU5D_t215* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.String>::valueSlots
	StringU5BU5D_t215* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.String>::serialization_info
	SerializationInfo_t871 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t718_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.String>::<>f__am$cacheB
	Transform_1_t3272 * ___U3CU3Ef__am$cacheB_15;
};
