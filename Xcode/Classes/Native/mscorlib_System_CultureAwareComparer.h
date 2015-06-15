#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1523;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t2054  : public StringComparer_t906
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1523 * ____compareInfo_5;
};
