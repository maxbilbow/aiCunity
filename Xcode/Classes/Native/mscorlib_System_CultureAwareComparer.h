#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1521;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t2052  : public StringComparer_t904
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1521 * ____compareInfo_5;
};
