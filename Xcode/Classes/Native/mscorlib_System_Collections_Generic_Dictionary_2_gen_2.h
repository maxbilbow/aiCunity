#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1266;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2428;
// UnityEngine.Camera[]
struct CameraU5BU5D_t271;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t2714;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t873;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,UnityEngine.Camera,System.Collections.DictionaryEntry>
struct Transform_1_t2757;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct  Dictionary_2_t86  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::table
	Int32U5BU5D_t1266* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::linkSlots
	LinkU5BU5D_t2428* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::keySlots
	CameraU5BU5D_t271* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::valueSlots
	CameraU5BU5D_t271* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::serialization_info
	SerializationInfo_t873 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t86_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::<>f__am$cacheB
	Transform_1_t2757 * ___U3CU3Ef__am$cacheB_15;
};
