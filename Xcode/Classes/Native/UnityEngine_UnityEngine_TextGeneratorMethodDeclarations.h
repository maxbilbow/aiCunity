﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TextGenerator
struct TextGenerator_t436;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t553;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t545;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t543;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t390;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t435;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t775;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t776;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t773;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t774;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t400;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"

// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m2834 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern "C" void TextGenerator__ctor_m3001 (TextGenerator_t436 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m4083 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m4084 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m4085 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m4086 (TextGenerator_t436 * __this, String_t* ___str, Font_t390 * ___font, Color_t79  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t13  ___extents, Vector2_t13  ___pivot, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m4087 (TextGenerator_t436 * __this, String_t* ___str, Font_t390 * ___font, Color_t79  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4088 (Object_t * __this /* static, unused */, TextGenerator_t436 * ___self, String_t* ___str, Font_t390 * ___font, Color_t79 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t260  TextGenerator_get_rectExtents_m2885 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m4089 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m4090 (TextGenerator_t436 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t435* TextGenerator_GetVerticesArray_m4091 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m4092 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern "C" int32_t TextGenerator_get_characterCountVisible_m2862 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m4093 (TextGenerator_t436 * __this, Object_t * ___characters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t775* TextGenerator_GetCharactersArray_m4094 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m2861 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m4095 (TextGenerator_t436 * __this, Object_t * ___lines, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t776* TextGenerator_GetLinesArray_m4096 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2902 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
extern "C" void TextGenerator_Finalize_m4097 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t468  TextGenerator_ValidatedSettings_m4098 (TextGenerator_t436 * __this, TextGenerationSettings_t468  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m3010 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m4099 (TextGenerator_t436 * __this, List_1_t773 * ___characters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m4100 (TextGenerator_t436 * __this, List_1_t774 * ___lines, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m4101 (TextGenerator_t436 * __this, List_1_t400 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m3008 (TextGenerator_t436 * __this, String_t* ___str, TextGenerationSettings_t468  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m3009 (TextGenerator_t436 * __this, String_t* ___str, TextGenerationSettings_t468  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2883 (TextGenerator_t436 * __this, String_t* ___str, TextGenerationSettings_t468  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m4102 (TextGenerator_t436 * __this, String_t* ___str, TextGenerationSettings_t468  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m3011 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m2863 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m2859 (TextGenerator_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
