#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t759;
struct WebCamDevice_t759_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3995 (WebCamDevice_t759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3996 (WebCamDevice_t759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t759_marshal(const WebCamDevice_t759& unmarshaled, WebCamDevice_t759_marshaled& marshaled);
void WebCamDevice_t759_marshal_back(const WebCamDevice_t759_marshaled& marshaled, WebCamDevice_t759& unmarshaled);
void WebCamDevice_t759_marshal_cleanup(WebCamDevice_t759_marshaled& marshaled);
