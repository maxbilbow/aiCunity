#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2060;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1539;
// System.String[]
struct StringU5BU5D_t215;
// System.Globalization.DaylightTime
struct DaylightTime_t1673;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m11574 (CurrentSystemTimeZone_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m11575 (CurrentSystemTimeZone_t2060 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11576 (CurrentSystemTimeZone_t2060 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m11577 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1539** ___data, StringU5BU5D_t215** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1673 * CurrentSystemTimeZone_GetDaylightChanges_m11578 (CurrentSystemTimeZone_t2060 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t1234  CurrentSystemTimeZone_GetUtcOffset_m11579 (CurrentSystemTimeZone_t2060 * __this, DateTime_t685  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m11580 (CurrentSystemTimeZone_t2060 * __this, DaylightTime_t1673 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1673 * CurrentSystemTimeZone_GetDaylightTimeFromData_m11581 (CurrentSystemTimeZone_t2060 * __this, Int64U5BU5D_t1539* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
