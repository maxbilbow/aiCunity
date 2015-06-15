#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1627;
// System.Collections.Stack
struct Stack_t896;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1628  : public SmallXmlParser_t1629
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1627 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1627 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t896 * ___stack_15;
};
