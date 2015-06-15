﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t928;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t926;
// System.Int32[]
struct Int32U5BU5D_t1266;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1532;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C" void Decimal__ctor_m7692 (Decimal_t928 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C" void Decimal__ctor_m7693 (Decimal_t928 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C" void Decimal__ctor_m7694 (Decimal_t928 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C" void Decimal__ctor_m7695 (Decimal_t928 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C" void Decimal__ctor_m7696 (Decimal_t928 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C" void Decimal__ctor_m7697 (Decimal_t928 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C" void Decimal__ctor_m7698 (Decimal_t928 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C" void Decimal__cctor_m7699 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Decimal_System_IConvertible_ToType_m7700 (Decimal_t928 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Decimal_System_IConvertible_ToBoolean_m7701 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Decimal_System_IConvertible_ToByte_m7702 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToChar_m7703 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t685  Decimal_System_IConvertible_ToDateTime_m7704 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t928  Decimal_System_IConvertible_ToDecimal_m7705 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Decimal_System_IConvertible_ToDouble_m7706 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Decimal_System_IConvertible_ToInt16_m7707 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Decimal_System_IConvertible_ToInt32_m7708 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Decimal_System_IConvertible_ToInt64_m7709 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Decimal_System_IConvertible_ToSByte_m7710 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Decimal_System_IConvertible_ToSingle_m7711 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToUInt16_m7712 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Decimal_System_IConvertible_ToUInt32_m7713 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Decimal_System_IConvertible_ToUInt64_m7714 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C" Int32U5BU5D_t1266* Decimal_GetBits_m7715 (Object_t * __this /* static, unused */, Decimal_t928  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_Add_m7716 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_Subtract_m7717 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C" int32_t Decimal_GetHashCode_m7718 (Decimal_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C" uint64_t Decimal_u64_m7719 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C" int64_t Decimal_s64_m7720 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C" bool Decimal_Equals_m7721 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C" bool Decimal_Equals_m7722 (Decimal_t928 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C" bool Decimal_IsZero_m7723 (Decimal_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C" Decimal_t928  Decimal_Floor_m7724 (Object_t * __this /* static, unused */, Decimal_t928  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_Multiply_m7725 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_Divide_m7726 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C" int32_t Decimal_Compare_m7727 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C" int32_t Decimal_CompareTo_m7728 (Decimal_t928 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C" int32_t Decimal_CompareTo_m7729 (Decimal_t928 * __this, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C" bool Decimal_Equals_m7730 (Decimal_t928 * __this, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C" Decimal_t928  Decimal_Parse_m7731 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C" void Decimal_ThrowAtPos_m7732 (Object_t * __this /* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C" void Decimal_ThrowInvalidExp_m7733 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C" String_t* Decimal_stripStyles_m7734 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1532 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" Decimal_t928  Decimal_Parse_m7735 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C" bool Decimal_PerformParse_m7736 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t928 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m7737 (Decimal_t928 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C" String_t* Decimal_ToString_m7738 (Decimal_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m4702 (Decimal_t928 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C" int32_t Decimal_decimal2UInt64_m7739 (Object_t * __this /* static, unused */, Decimal_t928 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C" int32_t Decimal_decimal2Int64_m7740 (Object_t * __this /* static, unused */, Decimal_t928 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalIncr_m7741 (Object_t * __this /* static, unused */, Decimal_t928 * ___d1, Decimal_t928 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C" int32_t Decimal_string2decimal_m7742 (Object_t * __this /* static, unused */, Decimal_t928 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C" int32_t Decimal_decimalSetExponent_m7743 (Object_t * __this /* static, unused */, Decimal_t928 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C" double Decimal_decimal2double_m7744 (Object_t * __this /* static, unused */, Decimal_t928 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C" void Decimal_decimalFloorAndTrunc_m7745 (Object_t * __this /* static, unused */, Decimal_t928 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalMult_m7746 (Object_t * __this /* static, unused */, Decimal_t928 * ___pd1, Decimal_t928 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalDiv_m7747 (Object_t * __this /* static, unused */, Decimal_t928 * ___pc, Decimal_t928 * ___pa, Decimal_t928 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalCompare_m7748 (Object_t * __this /* static, unused */, Decimal_t928 * ___d1, Decimal_t928 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C" Decimal_t928  Decimal_op_Increment_m7749 (Object_t * __this /* static, unused */, Decimal_t928  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_op_Subtraction_m7750 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_op_Multiply_m7751 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C" Decimal_t928  Decimal_op_Division_m7752 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C" uint8_t Decimal_op_Explicit_m7753 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C" int8_t Decimal_op_Explicit_m7754 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C" int16_t Decimal_op_Explicit_m7755 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint16_t Decimal_op_Explicit_m7756 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C" int32_t Decimal_op_Explicit_m7757 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint32_t Decimal_op_Explicit_m7758 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C" int64_t Decimal_op_Explicit_m7759 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint64_t Decimal_op_Explicit_m7760 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C" Decimal_t928  Decimal_op_Implicit_m7761 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C" Decimal_t928  Decimal_op_Implicit_m7762 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C" Decimal_t928  Decimal_op_Implicit_m7763 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C" Decimal_t928  Decimal_op_Implicit_m7764 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C" Decimal_t928  Decimal_op_Implicit_m7765 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C" Decimal_t928  Decimal_op_Implicit_m7766 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C" Decimal_t928  Decimal_op_Implicit_m7767 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C" Decimal_t928  Decimal_op_Implicit_m7768 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C" Decimal_t928  Decimal_op_Explicit_m7769 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C" Decimal_t928  Decimal_op_Explicit_m7770 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C" float Decimal_op_Explicit_m7771 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" double Decimal_op_Explicit_m7772 (Object_t * __this /* static, unused */, Decimal_t928  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Inequality_m7773 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Equality_m7774 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_GreaterThan_m7775 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_LessThan_m7776 (Object_t * __this /* static, unused */, Decimal_t928  ___d1, Decimal_t928  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
