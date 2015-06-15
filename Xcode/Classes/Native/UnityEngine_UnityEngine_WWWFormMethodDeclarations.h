#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t723;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t720;
// System.Byte[]
struct ByteU5BU5D_t722;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t721;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m3762 (WWWForm_t723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m3763 (WWWForm_t723 * __this, String_t* ___fieldName, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m3764 (WWWForm_t723 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t721 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m3765 (WWWForm_t723 * __this, String_t* ___fieldName, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t720 * WWWForm_get_headers_m3766 (WWWForm_t723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t722* WWWForm_get_data_m3767 (WWWForm_t723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
