﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t2046;
// System.Globalization.CultureInfo
struct CultureInfo_t919;
// System.Threading.Thread
struct Thread_t1810;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1530;
// System.IFormatProvider
struct IFormatProvider_t924;
// System.Text.StringBuilder
struct StringBuilder_t515;
// System.Int32[]
struct Int32U5BU5D_t1264;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C" void NumberFormatter__ctor_m11383 (NumberFormatter_t2046 * __this, Thread_t1810 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C" void NumberFormatter__cctor_m11384 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C" void NumberFormatter_GetFormatterTables_m11385 (Object_t * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C" int64_t NumberFormatter_GetTenPowerOf_m11386 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C" void NumberFormatter_InitDecHexDigits_m11387 (NumberFormatter_t2046 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m11388 (NumberFormatter_t2046 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m11389 (NumberFormatter_t2046 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_FastToDecHex_m11390 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_ToDecHex_m11391 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C" int32_t NumberFormatter_FastDecHexLen_m11392 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C" int32_t NumberFormatter_DecHexLen_m11393 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C" int32_t NumberFormatter_DecHexLen_m11394 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C" int32_t NumberFormatter_ScaleOrder_m11395 (Object_t * __this /* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C" int32_t NumberFormatter_InitialFloatingPrecision_m11396 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C" int32_t NumberFormatter_ParsePrecision_m11397 (Object_t * __this /* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C" void NumberFormatter_Init_m11398 (NumberFormatter_t2046 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C" void NumberFormatter_InitHex_m11399 (NumberFormatter_t2046 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C" void NumberFormatter_Init_m11400 (NumberFormatter_t2046 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C" void NumberFormatter_Init_m11401 (NumberFormatter_t2046 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C" void NumberFormatter_Init_m11402 (NumberFormatter_t2046 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C" void NumberFormatter_Init_m11403 (NumberFormatter_t2046 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C" void NumberFormatter_Init_m11404 (NumberFormatter_t2046 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C" void NumberFormatter_Init_m11405 (NumberFormatter_t2046 * __this, String_t* ___format, Decimal_t926  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C" void NumberFormatter_ResetCharBuf_m11406 (NumberFormatter_t2046 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C" void NumberFormatter_Resize_m11407 (NumberFormatter_t2046 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C" void NumberFormatter_Append_m11408 (NumberFormatter_t2046 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C" void NumberFormatter_Append_m11409 (NumberFormatter_t2046 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C" void NumberFormatter_Append_m11410 (NumberFormatter_t2046 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1530 * NumberFormatter_GetNumberFormatInstance_m11411 (NumberFormatter_t2046 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_set_CurrentCulture_m11412 (NumberFormatter_t2046 * __this, CultureInfo_t919 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C" int32_t NumberFormatter_get_IntegerDigits_m11413 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C" int32_t NumberFormatter_get_DecimalDigits_m11414 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C" bool NumberFormatter_get_IsFloatingSource_m11415 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C" bool NumberFormatter_get_IsZero_m11416 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C" bool NumberFormatter_get_IsZeroInteger_m11417 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C" void NumberFormatter_RoundPos_m11418 (NumberFormatter_t2046 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C" bool NumberFormatter_RoundDecimal_m11419 (NumberFormatter_t2046 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C" bool NumberFormatter_RoundBits_m11420 (NumberFormatter_t2046 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C" void NumberFormatter_RemoveTrailingZeros_m11421 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C" void NumberFormatter_AddOneToDecHex_m11422 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C" uint32_t NumberFormatter_AddOneToDecHex_m11423 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C" int32_t NumberFormatter_CountTrailingZeros_m11424 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C" int32_t NumberFormatter_CountTrailingZeros_m11425 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C" NumberFormatter_t2046 * NumberFormatter_GetInstance_m11426 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C" void NumberFormatter_Release_m11427 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_SetThreadCurrentCulture_m11428 (Object_t * __this /* static, unused */, CultureInfo_t919 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11429 (Object_t * __this /* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11430 (Object_t * __this /* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11431 (Object_t * __this /* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11432 (Object_t * __this /* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11433 (Object_t * __this /* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11434 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11435 (Object_t * __this /* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11436 (Object_t * __this /* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11437 (Object_t * __this /* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11438 (Object_t * __this /* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11439 (Object_t * __this /* static, unused */, String_t* ___format, Decimal_t926  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11440 (Object_t * __this /* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11441 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11442 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11443 (Object_t * __this /* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11444 (Object_t * __this /* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m11445 (Object_t * __this /* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_FastIntegerToString_m11446 (NumberFormatter_t2046 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C" String_t* NumberFormatter_IntegerToString_m11447 (NumberFormatter_t2046 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_NumberToString_m11448 (NumberFormatter_t2046 * __this, String_t* ___format, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCurrency_m11449 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatDecimal_m11450 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C" String_t* NumberFormatter_FormatHexadecimal_m11451 (NumberFormatter_t2046 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatFixedPoint_m11452 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m11453 (NumberFormatter_t2046 * __this, double ___origval, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m11454 (NumberFormatter_t2046 * __this, float ___origval, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatGeneral_m11455 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatNumber_m11456 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatPercent_m11457 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatExponential_m11458 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C" String_t* NumberFormatter_FormatExponential_m11459 (NumberFormatter_t2046 * __this, int32_t ___precision, NumberFormatInfo_t1530 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCustom_m11460 (NumberFormatter_t2046 * __this, String_t* ___format, NumberFormatInfo_t1530 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C" void NumberFormatter_ZeroTrimEnd_m11461 (Object_t * __this /* static, unused */, StringBuilder_t515 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C" bool NumberFormatter_IsZeroOnly_m11462 (Object_t * __this /* static, unused */, StringBuilder_t515 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C" void NumberFormatter_AppendNonNegativeNumber_m11463 (Object_t * __this /* static, unused */, StringBuilder_t515 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendIntegerString_m11464 (NumberFormatter_t2046 * __this, int32_t ___minLength, StringBuilder_t515 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C" void NumberFormatter_AppendIntegerString_m11465 (NumberFormatter_t2046 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDecimalString_m11466 (NumberFormatter_t2046 * __this, int32_t ___precision, StringBuilder_t515 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C" void NumberFormatter_AppendDecimalString_m11467 (NumberFormatter_t2046 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C" void NumberFormatter_AppendIntegerStringWithGroupSeparator_m11468 (NumberFormatter_t2046 * __this, Int32U5BU5D_t1264* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendExponent_m11469 (NumberFormatter_t2046 * __this, NumberFormatInfo_t1530 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C" void NumberFormatter_AppendOneDigit_m11470 (NumberFormatter_t2046 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C" void NumberFormatter_FastAppendDigits_m11471 (NumberFormatter_t2046 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendDigits_m11472 (NumberFormatter_t2046 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDigits_m11473 (NumberFormatter_t2046 * __this, int32_t ___start, int32_t ___end, StringBuilder_t515 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C" void NumberFormatter_Multiply10_m11474 (NumberFormatter_t2046 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C" void NumberFormatter_Divide10_m11475 (NumberFormatter_t2046 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C" NumberFormatter_t2046 * NumberFormatter_GetClone_m11476 (NumberFormatter_t2046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
