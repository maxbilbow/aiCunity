#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t757;
struct WebCamDevice_t757_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3984 (WebCamDevice_t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3985 (WebCamDevice_t757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t757_marshal(const WebCamDevice_t757& unmarshaled, WebCamDevice_t757_marshaled& marshaled);
void WebCamDevice_t757_marshal_back(const WebCamDevice_t757_marshaled& marshaled, WebCamDevice_t757& unmarshaled);
void WebCamDevice_t757_marshal_cleanup(WebCamDevice_t757_marshaled& marshaled);
