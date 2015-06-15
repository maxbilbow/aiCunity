﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Matrix4x4
struct Matrix4x4_t81;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m3627 (Matrix4x4_t81 * __this, int32_t ___row, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m3628 (Matrix4x4_t81 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m865 (Matrix4x4_t81 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m866 (Matrix4x4_t81 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C" int32_t Matrix4x4_GetHashCode_m3629 (Matrix4x4_t81 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C" bool Matrix4x4_Equals_m3630 (Matrix4x4_t81 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t81  Matrix4x4_Inverse_m3631 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t81  Matrix4x4_INTERNAL_CALL_Inverse_m3632 (Object_t * __this /* static, unused */, Matrix4x4_t81 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t81  Matrix4x4_Transpose_m3633 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t81  Matrix4x4_INTERNAL_CALL_Transpose_m3634 (Object_t * __this /* static, unused */, Matrix4x4_t81 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m3635 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___inMatrix, Matrix4x4_t81 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m3636 (Object_t * __this /* static, unused */, Matrix4x4_t81 * ___inMatrix, Matrix4x4_t81 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t81  Matrix4x4_get_inverse_m862 (Matrix4x4_t81 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t81  Matrix4x4_get_transpose_m3637 (Matrix4x4_t81 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m3638 (Matrix4x4_t81 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t82  Matrix4x4_GetColumn_m3639 (Matrix4x4_t81 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t82  Matrix4x4_GetRow_m3640 (Matrix4x4_t81 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetColumn_m3641 (Matrix4x4_t81 * __this, int32_t ___i, Vector4_t82  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m3642 (Matrix4x4_t81 * __this, int32_t ___i, Vector4_t82  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C" Vector3_t8  Matrix4x4_MultiplyPoint_m853 (Matrix4x4_t81 * __this, Vector3_t8  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t8  Matrix4x4_MultiplyPoint3x4_m2962 (Matrix4x4_t81 * __this, Vector3_t8  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t8  Matrix4x4_MultiplyVector_m868 (Matrix4x4_t81 * __this, Vector3_t8  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern "C" Matrix4x4_t81  Matrix4x4_Scale_m3643 (Object_t * __this /* static, unused */, Vector3_t8  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C" Matrix4x4_t81  Matrix4x4_get_zero_m852 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C" Matrix4x4_t81  Matrix4x4_get_identity_m3644 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Matrix4x4_SetTRS_m3645 (Matrix4x4_t81 * __this, Vector3_t8  ___pos, Quaternion_t10  ___q, Vector3_t8  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t81  Matrix4x4_TRS_m3646 (Object_t * __this /* static, unused */, Vector3_t8  ___pos, Quaternion_t10  ___q, Vector3_t8  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t81  Matrix4x4_INTERNAL_CALL_TRS_m3647 (Object_t * __this /* static, unused */, Vector3_t8 * ___pos, Quaternion_t10 * ___q, Vector3_t8 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C" String_t* Matrix4x4_ToString_m3648 (Matrix4x4_t81 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern "C" String_t* Matrix4x4_ToString_m3649 (Matrix4x4_t81 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t81  Matrix4x4_Ortho_m3650 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t81  Matrix4x4_Perspective_m3651 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t81  Matrix4x4_op_Multiply_m855 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___lhs, Matrix4x4_t81  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t82  Matrix4x4_op_Multiply_m863 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___lhs, Vector4_t82  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m3652 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___lhs, Matrix4x4_t81  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m3653 (Object_t * __this /* static, unused */, Matrix4x4_t81  ___lhs, Matrix4x4_t81  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
